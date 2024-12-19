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

		[Button]
		public void ResetProtagonist()
		{
			ProtagonistManager.Instance.Setup();
		}
	}
}
