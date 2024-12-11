using UnityEngine;

namespace Hmxs.Scripts.Protagonist
{
	public class Protagonist : MonoBehaviour
	{
		[SerializeField] private ProtagonistState state;

		public void ChangeState(ProtagonistState newState)
		{
			state = newState;
		}

		public void Die()
		{

		}
	}
}