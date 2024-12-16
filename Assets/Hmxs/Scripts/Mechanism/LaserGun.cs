using System.Collections;
using MoreMountains.Feedbacks;
using UnityEngine;

namespace Hmxs.Scripts.Mechanism
{
	public class LaserGun : MonoBehaviour
	{
		[SerializeField] private Laser laser;
		[SerializeField] private float startDelay;
		[SerializeField] private float activationTime;
		[SerializeField] private float deactivationTime;
		[SerializeField] private MMF_Player gunChargingFeedback;

		private IEnumerator Start()
		{
			yield return new WaitForSeconds(startDelay);
			gunChargingFeedback.PlayFeedbacks();
			var counter = 0f;
			while (counter < deactivationTime)
			{
				counter += Time.deltaTime;
				yield return null;
			}
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
			gunChargingFeedback.PlayFeedbacks();
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
