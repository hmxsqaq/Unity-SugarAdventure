using Hmxs.Scripts.Protagonist;
using Hmxs.Toolkit;
using MoreMountains.Feedbacks;
using UnityEngine;

namespace Hmxs.Scripts.Mechanism
{
	public class Saw : Clickable2D
	{
		[SerializeField] private MMF_Player rotateFeedback;
		private bool _isTriggered;

		private void OnCollisionEnter2D(Collision2D other)
		{
			if (other.gameObject.CompareTag("Protagonist")) ProtagonistManager.Instance.CurrentProtagonist.Hit(gameObject);
		}

		private void OnEnable() => Events.AddListener(EventNames.Restart, Restart);
		private void OnDisable() => Events.RemoveListener(EventNames.Restart, Restart);

		private void Restart()
		{
			if (!_isTriggered) return;
			rotateFeedback?.PlayFeedbacks();
			_isTriggered = false;
		}

		public override void Interact()
		{
			_isTriggered = !_isTriggered;
			rotateFeedback?.PlayFeedbacks();
			sound1.PlayFeedbacks();
		}
	}
}
