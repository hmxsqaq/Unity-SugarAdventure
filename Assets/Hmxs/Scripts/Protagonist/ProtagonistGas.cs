using System;
using System.Collections;
using Hmxs.Toolkit;
using UnityEngine;

namespace Hmxs.Scripts.Protagonist
{
	[RequireComponent(typeof(JellySprite))]
	public class ProtagonistGas : Protagonist
	{
		private UnityJellySprite _jellySprite;

		private void Awake()
		{
			_jellySprite = GetComponent<UnityJellySprite>();
			if (!_jellySprite)
				Debug.LogError("Gas should have a JellySprite component");
		}

		public override void Enter(Vector2 position)
		{
			SetPosition(position);
		}

		public override Vector2 Exit()
		{
			return GetPosition();
		}

		public override Vector2 GetPosition() => _jellySprite.CentralPoint.transform.position;

		public override void SetPosition(Vector2 position)
		{
			Vector2 offset = position - (Vector2)_jellySprite.CentralPoint.transform.position;
			_jellySprite.m_ReferencePointParent.transform.position += (Vector3)offset;
		}


		public override void AddForce(Vector2 force, ForceMode2D mode) =>
			_jellySprite.CentralPoint.Body2D.AddForce(force, mode);

		public override void Hit(GameObject hitter)
		{
			Debug.Log("Hit by " + hitter.name);
		}

		public override void SetParent(Transform parent)
		{
			Vector3 originalPosition = _jellySprite.m_ReferencePointParent.transform.position;
			Quaternion originalRotation = _jellySprite.m_ReferencePointParent.transform.rotation;
			parent = parent ? parent : transform.parent;
			_jellySprite.m_ReferencePointParent.transform.SetParent(parent, false);
			_jellySprite.m_ReferencePointParent.transform.position = originalPosition;
			_jellySprite.m_ReferencePointParent.transform.rotation = originalRotation;
		}
	}
}
