using System;
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

		private void Start()
		{
			 _animator = GetComponent<Animator>();
			 _surfaceEffector2D = GetComponent<SurfaceEffector2D>();
			 if (_surfaceEffector2D == null)
			 {
				 Debug.LogError("SurfaceEffector2D not found on " + name);
			 }
			 SetRunningState(isRunning);
		}

		private void OnEnable()
		{
			SetRunningState(isRunning);
		}

		public override void Interact()
		{
			isRunning = !isRunning;
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
