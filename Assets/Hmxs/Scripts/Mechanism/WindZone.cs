using System;
using Hmxs.Toolkit;
using UnityEngine;

namespace Hmxs.Scripts.Mechanism
{
	[RequireComponent(typeof(AreaEffector2D), typeof(Collider2D))]
	public class WindZone : MonoBehaviour
	{
		[SerializeField] private Transform arrowParent;
		[SerializeField] private float moveSpeed;
		private AreaEffector2D _wind;
		private float _windZoneLength;

		private void Awake()
		{
			_wind = GetComponent<AreaEffector2D>();
		}

		public void SetWindEnabled(bool isEnabled)
		{
			_wind.enabled = isEnabled;
			arrowParent.gameObject.SetActive(isEnabled);
		}

		public void SetWindDirection(float angle) => _wind.forceAngle = angle;
		public void SetWindDirection(Vector2 direction) => _wind.forceAngle = Vector2.SignedAngle(Vector2.right, direction);
		public void SetWindMagnitude(float magnitude) => _wind.forceMagnitude = magnitude;

		private void OnDrawGizmos()
		{
			Gizmos.color = Color.green;
			var windComponent = GetComponent<AreaEffector2D>();
			var forceAngle = windComponent.forceAngle;
			var forceDirection = new Vector2(
				Mathf.Cos(forceAngle * Mathf.Deg2Rad),
				Mathf.Sin(forceAngle * Mathf.Deg2Rad)
				).normalized;
			var startPoint = transform.position;
			var leftPoint = startPoint - (Vector3)forceDirection;
			var rightPoint = startPoint + (Vector3)forceDirection;
			Gizmos.DrawLine(leftPoint, rightPoint);
			var arrowAngle = 20;
			var arrowLength = 0.25f;
			var arrowDirection1 = new Vector2(
				Mathf.Cos((forceAngle + 180 - arrowAngle) * Mathf.Deg2Rad),
				Mathf.Sin((forceAngle + 180 - arrowAngle) * Mathf.Deg2Rad)
				).normalized;
			var arrowDirection2 = new Vector2(
				Mathf.Cos((forceAngle - 180 + arrowAngle) * Mathf.Deg2Rad),
				Mathf.Sin((forceAngle - 180 + arrowAngle) * Mathf.Deg2Rad)
			).normalized;
			Gizmos.DrawRay(rightPoint, (Vector3)arrowDirection1 * arrowLength);
			Gizmos.DrawRay(rightPoint, (Vector3)arrowDirection2 * arrowLength);
		}
	}
}
