using System;
using Hmxs.Toolkit;
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

		private bool _initialState;

		private void OnEnable() => Events.AddListener(EventNames.Restart, Restart);

		private void OnDisable() => Events.RemoveListener(EventNames.Restart, Restart);

		private void Start()
		{
			if (isWindEnabled) sound.PlayFeedbacks();
			windZone.SetWindEnabled(isWindEnabled);
			_initialState = isWindEnabled;
		}

		private void Restart()
		{
			windZone.SetWindEnabled(_initialState);
		}

		public override void Interact()
		{
			isWindEnabled = !isWindEnabled;
			if (isWindEnabled) sound1.PlayFeedbacks();
			else sound2.StopFeedbacks();
			if (isWindEnabled) sound.PlayFeedbacks();
			else sound.StopFeedbacks();
			windZone.SetWindEnabled(isWindEnabled);
		}
	}
}
