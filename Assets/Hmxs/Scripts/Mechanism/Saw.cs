using UnityEngine;

namespace Hmxs.Scripts.Mechanism
{
	[RequireComponent(typeof(Collider2D))]
	public class Saw : MonoBehaviour
	{
		private void OnTriggerEnter2D(Collider2D other)
		{
			if (other.TryGetComponent(out ICanBeHit hit)) hit.Hit(gameObject);
		}
	}
}