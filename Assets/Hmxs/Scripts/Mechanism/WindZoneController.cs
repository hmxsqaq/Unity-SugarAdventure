using System;
using MoreMountains.Feedbacks;
using Sirenix.OdinInspector;
using UnityEngine;

namespace Hmxs.Scripts.Mechanism
{
	public class WindZoneController : Clickable2D
	{
		[SerializeField] private WindZone windZone;
		[SerializeField] private bool isWindEnabled = true;

		[Title("Audio")]
		[SerializeField] private MMF_Player sound;

		private void Start()
		{
			windZone.SetWindEnabled(isWindEnabled);
		}

		public override void Interact()
		{
			isWindEnabled = !isWindEnabled;
			if (isWindEnabled) sound.PlayFeedbacks();
			else sound.StopFeedbacks();
			windZone.SetWindEnabled(isWindEnabled);
		}
	}
}
