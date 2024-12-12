using Hmxs.Scripts.Mechanism;
using UnityEngine;

namespace Hmxs.Scripts.Protagonist
{
	public class Protagonist : MonoBehaviour, ICanBeHit
	{
		[SerializeField] private ProtagonistState state;

		public void ChangeState(ProtagonistState newState)
		{
			state = newState;
		}

		public void Hit(GameObject hitter)
		{

		}
	}
}