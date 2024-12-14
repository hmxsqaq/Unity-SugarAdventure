using Hmxs.Scripts.Mechanism;
using UnityEngine;

namespace Hmxs.Scripts.Protagonist
{
	public abstract class Protagonist : MonoBehaviour, ICanBeHit
	{
		public abstract void Enter(Vector2 position);
		public abstract Vector2 Exit();

		public abstract Vector2 GetPosition();
		public abstract void SetPosition(Vector2 position);

		public abstract void AddForce(Vector2 force, ForceMode2D mode);

		public abstract void Hit(GameObject hitter);
	}
}
