﻿using Hmxs.Scripts.Protagonist;
using UnityEngine;

namespace Hmxs.Scripts.Mechanism
{
	[RequireComponent(typeof(Collider2D))]
	public class Saw : MonoBehaviour
	{
		private void OnTriggerEnter2D(Collider2D other)
		{
			if (other.CompareTag("Protagonist")) ProtagonistManager.Instance.CurrentProtagonist.Hit(gameObject);
		}
	}
}