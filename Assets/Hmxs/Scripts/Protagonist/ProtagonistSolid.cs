using System;
using UnityEngine;

namespace Hmxs.Scripts.Protagonist
{
	[RequireComponent(typeof(Rigidbody2D))]
	public class ProtagonistSolid : Protagonist
	{
		private Rigidbody2D _rb;
		private SpriteRenderer _spriteRenderer;

		private void Awake()
		{
			Setup();
		}

		private void Setup()
		{
			if (!_rb)
			{
				_rb = GetComponent<Rigidbody2D>();
				if (!_rb)
					Debug.LogError("Solid should have a Rigidbody2D component");
			}
			if (!_spriteRenderer)
			{
				_spriteRenderer = GetComponent<SpriteRenderer>();
				if (!_spriteRenderer)
					Debug.LogError("Solid should have a SpriteRenderer component");
			}
		}

		public override void Enter(Vector2 position)
		{
			Setup();
			SetPosition(position, false);
			ChangeEmoji(normal);
			SetColor(Color.white);
		}

		public override Vector2 Exit()
		{
			return GetPosition();
		}

		public override Vector2 GetPosition() => transform.position;

		public override void SetPosition(Vector2 position, bool resetVelocity)
		{
			transform.position = position;
			if (resetVelocity)
			{
				_rb.velocity = Vector2.zero;
				_rb.angularVelocity = 0;
			}
		}

		public override void AddForce(Vector2 force, ForceMode2D mode) => _rb.AddForce(force, mode);

		public override void ChangeEmoji(Sprite emoji) => _spriteRenderer.sprite = emoji;
		public override void SetColor(Color color) => _spriteRenderer.color = color;

		private void OnCollisionEnter2D(Collision2D _)
		{
			EmojiCounter = emojiDuration;
			ChangeEmoji(shocked);
		}

		// public override void Hit(GameObject hitter)
		// {
		// 	base.Hit(hitter);
		// 	_rb.velocity = Vector2.zero;
		// }
	}
}
