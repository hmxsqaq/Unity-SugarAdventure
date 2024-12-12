using MoreMountains.Feedbacks;
using UnityEngine;

namespace Hmxs.Scripts.Mechanism
{
	public class LedgeTrigger : Clickable2D
	{
		[SerializeField] private MMF_Player rotationFeedback;

		private void Start()
		{
			if (!rotationFeedback)
			{
				rotationFeedback = GetComponent<MMF_Player>();
				if (!rotationFeedback)
					Debug.LogError("RotationFeedback not found on " + name);
			}

			rotationFeedback.Events.OnPlay.AddListener(() => Interactable = false);
			rotationFeedback.Events.OnComplete.AddListener(() => Interactable = true);
		}

		public override void Interact()
		{
			rotationFeedback.PlayFeedbacks();
		}
	}
}