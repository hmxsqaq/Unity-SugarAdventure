using UnityEngine;

namespace Hmxs.Scripts.Protagonist
{
	[RequireComponent(typeof(Rigidbody2D))]
	public class ProtagonistSolid : Protagonist
	{
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

		public override void Hit(GameObject hitter)
		{

		}
	}
}