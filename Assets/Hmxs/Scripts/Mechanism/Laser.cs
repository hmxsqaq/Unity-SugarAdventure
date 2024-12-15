using System.Collections;
using Hmxs.Scripts.Protagonist;
using Sirenix.OdinInspector;
using UnityEngine;

namespace Hmxs.Scripts.Mechanism
{
	public class Laser : MonoBehaviour
	{
		[SerializeField] private LineRenderer laserRenderer;
		[SerializeField] private ParticleSystem laserEffect;
		[SerializeField] private Transform startPoint;
		[SerializeField] private Vector2 direction;
		[SerializeField] private float maxDistance;
		[SerializeField] private LayerMask layerMask;
		[SerializeField] private float emissionSpeed;

		private bool _isActive;

		private void FixedUpdate()
		{
			if (!_isActive)
			{
				SetLaserEffect(false, Vector2.zero);
				return;
			}
			bool hit = DoRayCheck(maxDistance, out Vector2 endPoint);
			SetLaserEffect(hit && _isActive, endPoint);
			SetLaserPosition(startPoint.localPosition, endPoint);
		}

		[Button]
		public void Activate()
		{
			StopAllCoroutines();
			StartCoroutine(ActivateCoroutine());
		}

		[Button]
		public void Deactivate()
		{
			StopAllCoroutines();
			StartCoroutine(DeactivateCoroutine());
		}

		private IEnumerator ActivateCoroutine()
		{
			float distance = 0;
			Vector2 endPoint;
			while (!DoRayCheck(distance, out endPoint) && distance < maxDistance)
			{
				SetLaserPosition(startPoint.localPosition, endPoint);
				distance += emissionSpeed * Time.deltaTime;
				yield return null;
			}
			SetLaserPosition(startPoint.localPosition, endPoint);
			_isActive = true;
		}

		private IEnumerator DeactivateCoroutine()
		{
			_isActive = false;
			DoRayCheck(maxDistance, out Vector2 endPoint);
			float distance = Vector2.Distance(startPoint.localPosition, endPoint);
			yield return null;
			while (distance > 0)
			{
				DoRayCheck(distance, out _);
				endPoint = (Vector2)startPoint.localPosition + direction * distance;
				SetLaserPosition(startPoint.localPosition, endPoint);
				distance -= emissionSpeed * Time.deltaTime;
				yield return null;
			}
			SetLaserPosition(startPoint.localPosition, startPoint.localPosition);
		}

		private bool DoRayCheck(float distance, out Vector2 endPoint)
		{
			RaycastHit2D hit = Physics2D.Raycast(startPoint.position, direction, distance, layerMask);
			if (!hit.collider)
			{
				endPoint = (Vector2)startPoint.localPosition + direction * distance;
				return false;
			}
			if (hit.collider.CompareTag("Protagonist"))
				ProtagonistManager.Instance.CurrentProtagonist.Hit(hit.collider.gameObject);
			endPoint = (Vector2)startPoint.localPosition + (hit.point - (Vector2)startPoint.position);
			return true;
		}

		private void SetLaserPosition(Vector2 start, Vector2 end)
		{
			laserRenderer.SetPosition(0, start);
			laserRenderer.SetPosition(1, end);
		}

		private void SetLaserEffect(bool enable, Vector2 localPosition)
		{
			laserEffect.transform.localPosition = localPosition;
			if (enable && !laserEffect.isPlaying)
				laserEffect.Play();
			else if (!enable && laserEffect.isPlaying)
				laserEffect.Stop();
		}
	}
}
