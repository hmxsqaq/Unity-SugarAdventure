using UnityEngine;

namespace Hmxs.Scripts.Protagonist
{
	[RequireComponent(typeof(JellySprite))]
	public class ProtagonistGas : Protagonist
	{
		private UnityJellySprite _jellySprite;

		private void Start()
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

		public override void Hit(GameObject hitter)
		{

		}
	}
}