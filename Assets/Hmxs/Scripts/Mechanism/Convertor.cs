using System;
using Hmxs.Scripts.Protagonist;
using UnityEngine;

namespace Hmxs.Scripts.Mechanism
{
	public class Convertor : MonoBehaviour
	{
		private void OnCollisionStay2D(Collision2D other)
		{
			if (other.gameObject.CompareTag("Protagonist") && ProtagonistManager.Instance.protagonistType == ProtagonistType.Solid)
				ProtagonistManager.Instance.isConverting = true;
			else
				ProtagonistManager.Instance.isConverting = false;
		}

		private void OnCollisionExit2D(Collision2D other)
		{
			if (other.gameObject.CompareTag("Protagonist"))
				ProtagonistManager.Instance.isConverting = false;
		}
	}
}
