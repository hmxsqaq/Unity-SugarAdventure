using Hmxs.Scripts.Protagonist;
using MoreMountains.Feedbacks;
using UnityEngine;

namespace Hmxs.Scripts.Mechanism
{
	public class Saw : Clickable2D
	{
		[SerializeField] private MMF_Player rotateFeedback;

		private void OnTriggerEnter2D(Collider2D other)
		{
			if (other.CompareTag("Protagonist")) ProtagonistManager.Instance.CurrentProtagonist.Hit(gameObject);
		}

		public override void Interact()
		{
			rotateFeedback?.PlayFeedbacks();
		}
	}
}
