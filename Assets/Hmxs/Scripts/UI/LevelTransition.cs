using System;
using System.Collections;
using Hmxs.Toolkit;
using UnityEngine;

namespace Hmxs.Scripts.UI
{
	public class LevelTransition : SingletonMono<LevelTransition>
	{
		private static readonly int Play = Animator.StringToHash("Play");

		[SerializeField] private Animator transitionAnimator;
		[SerializeField] private float transitionTime = 1f;

		public void PlayTransition(Action onTransitionEnd)
		{
			StartCoroutine(PlayTransitionCoroutine(onTransitionEnd));
		}

		private IEnumerator PlayTransitionCoroutine(Action onTransitionEnd)
		{
			transitionAnimator.SetTrigger(Play);
			yield return new WaitForSeconds(transitionTime);
			onTransitionEnd?.Invoke();
		}
	}
}
