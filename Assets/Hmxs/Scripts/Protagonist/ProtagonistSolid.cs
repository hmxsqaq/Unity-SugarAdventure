using System;
using UnityEngine;

namespace Hmxs.Scripts.Protagonist
{
	[RequireComponent(typeof(Rigidbody2D))]
	public class ProtagonistSolid : Protagonist
	{
		private Rigidbody2D _rb;

		protected void Start()
		{
			_rb = GetComponent<Rigidbody2D>();
			if (!_rb)
				Debug.LogError("Solid should have a Rigidbody2D component");
		}

		public override void Enter(Vector2 position)
		{
			SetPosition(position);
		}

		public override Vector2 Exit()
		{
			return GetPosition();
		}

		public override Vector2 GetPosition() => transform.position;

		public override void SetPosition(Vector2 position) => transform.position = position;

		public override void AddForce(Vector2 force, ForceMode2D mode) => _rb.AddForce(force, mode);

		public override void Hit(GameObject hitter)
		{
			Debug.Log("Hit by " + hitter.name);
		}

		public override void SetParent(Transform parent)
		{
			Vector3 originalScale = transform.lossyScale;
			Debug.Log(originalScale);
			parent = parent ? parent : transform.parent;
			transform.SetParent(parent, true);

			Vector3 parentScale = parent.localScale;
			transform.localScale = new Vector3(originalScale.x / parentScale.x, originalScale.y / parentScale.y, 1);
			Debug.Log(transform.lossyScale);
		}
	}
}
