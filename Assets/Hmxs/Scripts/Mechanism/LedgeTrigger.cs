using DG.Tweening;
using Hmxs.Scripts.Protagonist;
using Sirenix.OdinInspector;
using UnityEngine;

namespace Hmxs.Scripts.Mechanism
{
	public class LedgeTrigger : Clickable2D
	{
		[SerializeField] private Transform target;
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
			originAngle = target.eulerAngles.z;
			isTriggered = false;
		}

		public override void Interact()
		{
			var destAngle = isTriggered ? originAngle : targetAngle;
			isTriggered = !isTriggered;
			Interactable = false;
			if (protagonist) protagonist.AddForce(forceDirection * force, ForceMode2D.Impulse);
			target.DORotate(new Vector3(target.eulerAngles.x, target.eulerAngles.y, destAngle), duration)
				.SetEase(curve)
				.OnComplete(() =>
				{
					Interactable = true;
				});
		}

		private void OnCollisionStay2D(Collision2D other)
		{
			if (other.gameObject.CompareTag("Protagonist"))
			{
				protagonist = ProtagonistManager.Instance.CurrentProtagonist;
				// ProtagonistManager.Instance.SetParent(target);
				var contact = other.GetContact(0);
				forceDirection = -contact.normal.normalized;
			}
		}

		private void OnCollisionExit2D(Collision2D other)
		{
			if (other.gameObject.CompareTag("Protagonist"))
			{
				// ProtagonistManager.Instance.SetParent();
				protagonist = null;
			}
		}

		[Button]
		private void OnValidate()
		{
			originAngle = target.eulerAngles.z;
		}

		private void OnDrawGizmos()
		{
			if (!target) return;
			Gizmos.color = Color.green;
			Gizmos.DrawRay(target.position, Quaternion.Euler(target.eulerAngles.x, target.eulerAngles.y, originAngle) * Vector2.right * 3f);
			Gizmos.DrawRay(target.position, Quaternion.Euler(target.eulerAngles.x, target.eulerAngles.y, targetAngle) * Vector2.right * 3f);
		}
	}
}
