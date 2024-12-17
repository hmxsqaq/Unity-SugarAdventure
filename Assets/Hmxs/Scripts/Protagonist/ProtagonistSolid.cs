using System;
using UnityEngine;

namespace Hmxs.Scripts.Protagonist
{
	[RequireComponent(typeof(Rigidbody2D))]
	public class ProtagonistSolid : Protagonist
	{
		private Rigidbody2D _rb;
		private SpriteRenderer _spriteRenderer;

		protected void Start()
		{
			_rb = GetComponent<Rigidbody2D>();
			if (!_rb)
				Debug.LogError("Solid should have a Rigidbody2D component");
			_spriteRenderer = GetComponent<SpriteRenderer>();
			if (!_spriteRenderer)
				Debug.LogError("Solid should have a SpriteRenderer component");
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

		public override void ChangeEmoji(Sprite emoji) => _spriteRenderer.sprite = emoji;

		private void OnCollisionEnter2D(Collision2D _)
		{
			EmojiCounter = emojiDuration;
		}
	}
}
