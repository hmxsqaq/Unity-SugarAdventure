using Hmxs.Toolkit;
using UnityEngine;

namespace Hmxs.Scripts.Mechanism
{
	public class CoffeeCup : MonoBehaviour
	{
		private void OnTriggerEnter2D(Collider2D other)
		{
			if (other.CompareTag("Protagonist"))
			{
				Events.Trigger(EventNames.Win);
			}
		}
	}
}
