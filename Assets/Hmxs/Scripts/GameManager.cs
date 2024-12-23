using System.Collections;
using DG.Tweening;
using Hmxs.Scripts.Protagonist;
using Hmxs.Toolkit;
using Sirenix.OdinInspector;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Hmxs.Scripts
{
	public class GameManager : SingletonMono<GameManager>
	{
		[Title("Settings")]
		public Transform startPosition;
		[SerializeField] public float fadeDuration = 1f;

		[Title("UI")]
		[SerializeField] private CanvasGroup levelTransitionCanvasGroup;
		[SerializeField] private CanvasGroup failCanvasGroup;
		[SerializeField] private CanvasGroup winCanvasGroup;
		[SerializeField] private TMP_InputField controlBar;

		[Title("VFX")]
		[SerializeField] private ParticleSystem hitVFX;
		[SerializeField] private ParticleSystem winVFX;
		[SerializeField] private ParticleSystem bornVFX;

		[Title("Audio")]
		[SerializeField] private AudioClip winAudio;
		[SerializeField] private AudioClip failAudio;
		[SerializeField] private AudioClip bornAudio;

		private bool _isControlBarOpen;

		private void OnEnable()
		{
			Events.AddListener<Protagonist.Protagonist>(EventNames.Win, Win);
			Events.AddListener<Protagonist.Protagonist>(EventNames.Fail, Fail);
		}

		private void OnDisable()
		{
			Events.RemoveListener<Protagonist.Protagonist>(EventNames.Win, Win);
			Events.RemoveListener<Protagonist.Protagonist>(EventNames.Fail, Fail);
		}

		private void Start()
		{
			_isControlBarOpen = false;
			controlBar.gameObject.SetActive(false);
			levelTransitionCanvasGroup.alpha = 1;
			levelTransitionCanvasGroup
				.DOFade(0, fadeDuration)
				.SetDelay(1f)
				.OnComplete(SetUpProtagonist);
		}

		private void Update()
		{
			if (Input.GetKeyDown(KeyCode.Space))
			{
				if (_isControlBarOpen)
				{
					_isControlBarOpen = false;
					ExecuteCommand(controlBar.text);
					controlBar.gameObject.SetActive(false);
				}
				else
				{
					_isControlBarOpen = true;
					controlBar.gameObject.SetActive(true);
					controlBar.text = "";
				}
			}
		}

		private void Fail(Protagonist.Protagonist protagonist)
		{
			AudioSource.PlayClipAtPoint(failAudio, protagonist.GetPosition());
			GenerateVFX(hitVFX, protagonist.GetPosition());
			ProtagonistManager.Instance.Hide();
			failCanvasGroup
				.DOFade(1, fadeDuration)
				.OnComplete(() =>
				{
					failCanvasGroup
						.DOFade(0, fadeDuration)
						.SetDelay(1f)
						.OnComplete(() =>
						{
							SetUpProtagonist();
							Events.Trigger(EventNames.Restart);
						});
				});
		}

		private void Win(Protagonist.Protagonist protagonist)
		{
			AudioSource.PlayClipAtPoint(winAudio, protagonist.GetPosition());
			GenerateVFX(winVFX, protagonist.GetPosition());
			ProtagonistManager.Instance.Hide();
			winCanvasGroup
				.DOFade(1, fadeDuration)
				.OnComplete(() =>
				{
					levelTransitionCanvasGroup
						.DOFade(1, fadeDuration)
						.SetDelay(1f)
						.OnComplete(LoadNextLevel);
				});
		}

		[Button]
		private void SetUpProtagonist()
		{
			AudioSource.PlayClipAtPoint(bornAudio, startPosition.position);
			var protagonist = ProtagonistManager.Instance.Setup();
			GenerateVFX(bornVFX, protagonist.GetPosition());
		}

		[Button]
		public void LoadNextLevel()
		{
			int sceneCount = SceneManager.sceneCountInBuildSettings;
			int currentScene = SceneManager.GetActiveScene().buildIndex;
			int nextScene = currentScene + 1 >= sceneCount ? 0 : currentScene + 1;
			SceneManager.LoadScene(nextScene);
		}

		private static void GenerateVFX(ParticleSystem vfx, Vector2 position) => Instantiate(vfx, position, Quaternion.identity).Play();

		private void ExecuteCommand(string commandString)
		{
			commandString = commandString.ToLower();
			if (commandString.Length < 4) return;
			var command = commandString[..4];
			var content = commandString[4..];

			switch (command)
			{
				case "next":
					LoadNextLevel();
					return;
				case "load":
				{
					int sceneCount = SceneManager.sceneCountInBuildSettings;
					if (int.TryParse(content, out int sceneIndex))
					{
						if (sceneIndex >= sceneCount)
						{
							Debug.LogError("Scene index out of range");
							return;
						}
						SceneManager.LoadScene(sceneIndex);
					}
					else
						Debug.LogWarning("Invalid scene index");
					return;
				}
				case "relo":
					SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
					return;
				default:
					Debug.LogWarning("Invalid command");
					return;
			}
		}
	}
}
