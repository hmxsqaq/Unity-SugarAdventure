using System.Collections;
using UnityEngine;

namespace Hmxs.Scripts.Mechanism
{
	public class LaserGun : MonoBehaviour
	{
		[SerializeField] private Laser laser;

		[SerializeField] private float activationTime;
		[SerializeField] private float deactivationTime;

		private void Start()
		{
			StartCoroutine(LaserEnableCoroutine());
		}

		private IEnumerator LaserEnableCoroutine()
		{
			ActivateLaser();
			var counter = 0f;
			while (counter < activationTime)
			{
				counter += Time.deltaTime;
				yield return null;
			}
			StartCoroutine(LaserDisableCoroutine());
		}

		private IEnumerator LaserDisableCoroutine()
		{
			DeactivateLaser();
			var counter = 0f;
			while (counter < deactivationTime)
			{
				counter += Time.deltaTime;
				yield return null;
			}
			StartCoroutine(LaserEnableCoroutine());
		}

		private void ActivateLaser() => laser.Activate();
		private void DeactivateLaser() => laser.Deactivate();
	}
}
