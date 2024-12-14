using System;
using DG.Tweening;
using Hmxs.Scripts.Protagonist;
using Sirenix.OdinInspector;
using UnityEngine;

namespace Hmxs.Scripts.Mechanism
{
	public class LedgeTrigger : Clickable2D
	{
		[SerializeField] private AnimationCurve curve;
		[SerializeField] [ReadOnly] private float originAngle;
		[SerializeField] private float targetAngle;
		[SerializeField] private float duration;
		[SerializeField] private float force;
		[SerializeField] [ReadOnly] private bool isTriggered;

		[SerializeField] [ReadOnly] private Protagonist.Protagonist protagonist;
		[SerializeField] [ReadOnly] private Vector2 forceDirection;

		private void Start()
		{
			originAngle = transform.eulerAngles.z;
			isTriggered = false;
		}

		public override void Interact()
		{
			var destAngle = isTriggered ? originAngle : targetAngle;
			isTriggered = !isTriggered;
			Interactable = false;
			transform.DORotate(new Vector3(transform.eulerAngles.x, transform.eulerAngles.y, destAngle), duration)
				.SetEase(curve)
				.OnComplete(() =>
				{
					Interactable = true;
					if (protagonist) protagonist.AddForce(forceDirection * force, ForceMode2D.Impulse);
				});
		}

		private void OnCollisionStay2D(Collision2D other)
		{
			if (other.gameObject.CompareTag("Protagonist"))
			{
				protagonist = ProtagonistManager.Instance.CurrentProtagonist;
				ProtagonistManager.Instance.SetParent(transform);
				var contact = other.GetContact(0);
				forceDirection = -contact.normal.normalized;
			}
		}

		private void OnCollisionExit2D(Collision2D other)
		{
			if (other.gameObject.CompareTag("Protagonist"))
			{
				ProtagonistManager.Instance.SetParent();
				protagonist = null;
			}
		}

		private void OnValidate()
		{
			originAngle = transform.eulerAngles.z;
		}

		private void OnDrawGizmos()
		{
			Gizmos.color = Color.green;
			Gizmos.DrawRay(transform.position, Quaternion.Euler(transform.eulerAngles.x, transform.eulerAngles.y, originAngle) * Vector2.right * 3f);
			Gizmos.DrawRay(transform.position, Quaternion.Euler(transform.eulerAngles.x, transform.eulerAngles.y, targetAngle) * Vector2.right * 3f);
		}
	}
}
