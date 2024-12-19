using System;
using Hmxs.Scripts.Protagonist;
using Hmxs.Toolkit;
using Sirenix.OdinInspector;
using UnityEngine;

namespace Hmxs.Scripts
{
	public class GameManager : SingletonMono<GameManager>
	{
		public Transform startPosition;

		private void OnEnable()
		{
			Events.AddListener(EventNames.Win, ResetProtagonist);
		}

		private void OnDisable()
		{
			Events.RemoveListener(EventNames.Win, ResetProtagonist);
		}

		[Button]
		public void ResetProtagonist()
		{
			ProtagonistManager.Instance.Setup();
		}
	}
}
