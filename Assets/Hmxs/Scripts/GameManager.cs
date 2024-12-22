using System;
using System.Collections.Generic;
using Hmxs.Scripts.Protagonist;
using Hmxs.Scripts.UI;
using Hmxs.Toolkit;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Hmxs.Scripts
{
	public class GameManager : SingletonMono<GameManager>
	{
		public Transform startPosition;

		[SerializeField] private List<string> levels = new();
		[SerializeField] private int currentLevelIndex;

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

		[Button]
		public void LoadLevel(int index)
		{
			if (index < 0 || index >= levels.Count) return;
			SceneManager.LoadScene(levels[index]);
		}

		[Button]
		public void LoadNextLevel()
		{
			LevelTransition.Instance.PlayTransition(() => LoadLevel(currentLevelIndex + 1 < levels.Count ? currentLevelIndex + 1 : 0));
		}
	}
}
