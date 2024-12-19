using Hmxs.Scripts.Protagonist;
using UnityEngine;

namespace Hmxs.Scripts.Mechanism
{
	public class Recycler : MonoBehaviour
	{
		private void OnTriggerExit2D(Collider2D other)
		{
			if (other.CompareTag("Protagonist") && ProtagonistManager.Instance.protagonistType == ProtagonistType.Gas)
			{
				ProtagonistManager.Instance.ChangeState(ProtagonistType.Solid);
			}
		}
	}
}
