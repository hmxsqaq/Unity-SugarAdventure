using Hmxs.Scripts.Mechanism;
using UnityEngine;

namespace Hmxs.Scripts.Protagonist
{
	public abstract class Protagonist : MonoBehaviour, ICanBeHit
	{
		[SerializeField] protected GameObject hitEffect;
		[SerializeField] protected Sprite normal;
		[SerializeField] protected Sprite angry;
		[SerializeField] protected Sprite afraid;
		[SerializeField] protected Sprite shocked;
		[SerializeField] protected float emojiDuration;
		protected float EmojiCounter;

		public abstract void Enter(Vector2 position);
		public abstract Vector2 Exit();
		public abstract Vector2 GetPosition();
		public abstract void SetPosition(Vector2 position, bool resetVelocity);
		public abstract void AddForce(Vector2 force, ForceMode2D mode);

		public virtual void Hit(GameObject hitter)
		{
			Instantiate(hitEffect, GetPosition(), Quaternion.identity);
			GameManager.Instance.ResetProtagonist();
		}
		public abstract void ChangeEmoji(Sprite emoji);
		public abstract void SetColor(Color color);

		protected virtual void Update()
		{
			if (EmojiCounter <= 0) return;
			EmojiCounter -= Time.deltaTime;
			if (EmojiCounter <= 0)
			{
				ChangeEmoji(normal);
			}
		}
	}
}
