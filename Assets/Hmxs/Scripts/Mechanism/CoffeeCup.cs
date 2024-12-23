using Hmxs.Scripts.Protagonist;
using Hmxs.Toolkit;
using UnityEngine;
using UnityEngine.Events;

namespace Hmxs.Scripts.Mechanism
{
	public class CoffeeCup : MonoBehaviour
	{
		[SerializeField] private UnityEvent onWin;

		private void OnTriggerEnter2D(Collider2D other)
		{
			if (other.CompareTag("Protagonist"))
			{
				Events.Trigger(EventNames.Win, ProtagonistManager.Instance.CurrentProtagonist);
				onWin?.Invoke();
			}
		}
	}
}
