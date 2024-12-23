using System;
using System.Collections;
using Hmxs.Toolkit;
using UnityEngine;
using UnityEngine.Scripting;

namespace Hmxs.Scripts.Protagonist
{
	[RequireComponent(typeof(JellySprite))]
	public class ProtagonistGas : Protagonist
	{
		private UnityJellySprite _jellySprite;

		private void Awake()
		{
			Setup();
		}

		private void Setup()
		{
			if (!_jellySprite)
			{
				_jellySprite = GetComponent<UnityJellySprite>();
				if (!_jellySprite)
					Debug.LogError("Gas should have a JellySprite component");
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

		public override Vector2 GetPosition() => _jellySprite.CentralPoint.transform.position;

		public override void SetPosition(Vector2 position, bool resetVelocity)
		{
			// Vector2 offset = position - (Vector2)_jellySprite.CentralPoint.transform.position;
			// _jellySprite.m_ReferencePointParent.transform.position += (Vector3)offset;
			_jellySprite.SetPosition(position, resetVelocity);
		}

		public override void AddForce(Vector2 force, ForceMode2D mode) =>
			_jellySprite.CentralPoint.Body2D.AddForce(force, mode);

		protected override void ChangeEmoji(Sprite emoji) => _jellySprite.m_Sprite = emoji;
		public override void SetColor(Color color) => _jellySprite.m_Color = color;

		[Preserve]
		private void OnJellyCollisionEnter2D(JellySprite.JellyCollision2D _)
		{
			EmojiCounter = emojiDuration;
			ChangeEmoji(shocked);
		}

		// public override void Hit(GameObject hitter)
		// {
		// 	base.Hit(hitter);
		// 	_jellySprite.CentralPoint.Body2D.velocity = Vector2.zero;
		// }
	}
}
