using System;
using DG.Tweening;
using Hmxs.Scripts.Protagonist;
using Hmxs.Toolkit;
using MoreMountains.Feedbacks;
using Sirenix.OdinInspector;
using UnityEngine;

namespace Hmxs.Scripts.Mechanism
{
	public class LedgeTrigger : Clickable2D
	{
		[SerializeField] private Transform target;
		[SerializeField] private AnimationCurve curve;
		[SerializeField] private float currentAngle;
		[SerializeField] private float rotateAngle;
		[SerializeField] private float duration;
		[SerializeField] private float force;
		[SerializeField] private Vector2 forceDirection;
		[SerializeField] [ReadOnly] private bool isTriggered;
		[SerializeField] [ReadOnly] private float targetAngle;
		[SerializeField] [ReadOnly] private Protagonist.Protagonist protagonist;

		private void Start()
		{
			isTriggered = false;
			forceDirection.Normalize();
		}

		private void OnEnable() => Events.AddListener(EventNames.Restart, Restart);
		private void OnDisable() => Events.RemoveListener(EventNames.Restart, Restart);

		private void Restart()
		{
			if (!isTriggered) return;
			Interact();
		}

		public override void Interact()
		{
			targetAngle = isTriggered ? currentAngle - rotateAngle : currentAngle + rotateAngle;
			isTriggered = !isTriggered;

			if (isTriggered)
				sound1.PlayFeedbacks();
			else
				sound2.PlayFeedbacks();

			Interactable = false;
			if (protagonist) protagonist.AddForce(forceDirection * force, ForceMode2D.Impulse);
			target.DORotate(new Vector3(target.eulerAngles.x, target.eulerAngles.y, targetAngle), duration, RotateMode.FastBeyond360)
				.SetEase(curve)
				.OnComplete(() =>
				{
					Interactable = true;
					currentAngle = transform.eulerAngles.z;
				});
		}

		private void OnCollisionStay2D(Collision2D other)
		{
			if (other.gameObject.CompareTag("Protagonist"))
				protagonist = ProtagonistManager.Instance.CurrentProtagonist;
		}

		private void OnCollisionExit2D(Collision2D other)
		{
			if (other.gameObject.CompareTag("Protagonist"))
				protagonist = null;
		}

		[Button]
		private void OnValidate()
		{
			target.eulerAngles = new Vector3(target.eulerAngles.x, target.eulerAngles.y, currentAngle);
			targetAngle = currentAngle + rotateAngle;
		}

		private void OnDrawGizmosSelected()
		{
			if (target)
			{
				Gizmos.color = new Color(0, 100, 0);
				Gizmos.DrawRay(target.position,
					Quaternion.Euler(target.eulerAngles.x, target.eulerAngles.y, currentAngle) * Vector2.right * 2f);
				Gizmos.DrawRay(target.position,
					Quaternion.Euler(target.eulerAngles.x, target.eulerAngles.y, targetAngle) * Vector2.right * 2f);
			}
			Gizmos.color = new Color(100, 0, 0);
			Gizmos.DrawRay(transform.position, forceDirection.normalized * force / 5);
		}
	}
}
