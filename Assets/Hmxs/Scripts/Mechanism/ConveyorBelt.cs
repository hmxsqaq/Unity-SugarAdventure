using System;
using Hmxs.Toolkit;
using UnityEngine;

namespace Hmxs.Scripts.Mechanism
{
	[RequireComponent(typeof(SurfaceEffector2D))]
	public class ConveyorBelt : Clickable2D
	{
		[SerializeField] private bool isRunning;
		[SerializeField] private float runningSpeed;
		private SurfaceEffector2D _surfaceEffector2D;
		private Animator _animator;
		private bool _initialState;

		private void Start()
		{
			 _animator = GetComponent<Animator>();
			 _surfaceEffector2D = GetComponent<SurfaceEffector2D>();
			 if (_surfaceEffector2D == null)
			 {
				 Debug.LogError("SurfaceEffector2D not found on " + name);
			 }
			 _initialState = isRunning;
			 SetRunningState(isRunning);
		}

		private void OnEnable() => Events.AddListener(EventNames.Restart, Restart);
		private void OnDisable() => Events.RemoveListener(EventNames.Restart, Restart);

		private void Restart()
		{
			isRunning = _initialState;
			SetRunningState(_initialState);
		}

		public override void Interact()
		{
			isRunning = !isRunning;
			if (isRunning) sound1.PlayFeedbacks();
			else sound2.PlayFeedbacks();
			SetRunningState(isRunning);
		}

		private void SetRunningState(bool running)
		{
			if (!_surfaceEffector2D) return;
			if (running)
			{
				_surfaceEffector2D.speed = runningSpeed;
				_animator.Play($"run");
			}
			else
			{
				_surfaceEffector2D.speed = 0;
				_animator.Play($"idle");
			}
		}

		private void OnValidate()
		{
			GetComponent<SurfaceEffector2D>().speed = runningSpeed;
		}
	}
}
