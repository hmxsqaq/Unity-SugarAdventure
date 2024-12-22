using System;
using System.Collections.Generic;
using UnityEngine;

namespace Hmxs.Scripts.Mechanism
{
	public class MovingArrowParent : MonoBehaviour
	{
		[SerializeField] private List<Transform> movingArrows = new();
		[SerializeField] private float moveSpeed;

		private Vector2 _startMinMaxY;

		private void Awake() => _startMinMaxY = GetMinMaxY();

		private void Update()
		{
			float deltaY = moveSpeed * Time.deltaTime;
			Transform firstArrow = movingArrows[0];
			Transform lastArrow = movingArrows[^1];
			foreach (var arrow in movingArrows)
			{
				arrow.localPosition += Vector3.up * deltaY;
				if (arrow.localPosition.y > firstArrow.localPosition.y) firstArrow = arrow;
				if (arrow.localPosition.y < lastArrow.localPosition.y) lastArrow = arrow;
			}

			if (firstArrow.localPosition.y >= _startMinMaxY.y)
				firstArrow.localPosition = lastArrow.localPosition - Vector3.up * 3;
		}

		private Vector2 GetMinMaxY()
		{
			float minY = float.MaxValue;
			float maxY = float.MinValue;
			foreach (var arrow in movingArrows)
			{
				minY = Mathf.Min(minY, arrow.localPosition.y);
				maxY = Mathf.Max(maxY, arrow.localPosition.y);
			}
			return new Vector2(minY, maxY);
		}
	}
}
