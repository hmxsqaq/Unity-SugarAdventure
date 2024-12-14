using System;
using Hmxs.Scripts.Protagonist;
using UnityEngine;

namespace Hmxs.Scripts.Mechanism
{
	public class Water : MonoBehaviour
	{
		private void OnTriggerEnter2D(Collider2D other)
		{
			if (other.CompareTag("Protagonist")) ProtagonistManager.Instance.CurrentProtagonist.Hit(gameObject);
		}
	}
}
