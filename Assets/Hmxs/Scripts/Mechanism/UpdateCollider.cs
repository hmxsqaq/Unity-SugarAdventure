using System;
using Sirenix.OdinInspector;
using UnityEngine;

namespace Hmxs.Scripts.Mechanism
{
	public class UpdateCollider : MonoBehaviour
	{
		[Button]
		private void Start()
		{
			GetComponent<BoxCollider2D>().size = GetComponent<SpriteRenderer>().size;
		}
	}
}
