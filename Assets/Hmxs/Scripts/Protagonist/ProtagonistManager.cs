using System;
using Sirenix.OdinInspector;
using UnityEngine;

namespace Hmxs.Scripts.Protagonist
{
	public class ProtagonistManager : MonoBehaviour
	{
		[Title("References")]
		[SerializeField] private Protagonist protagonistSolid;
		[SerializeField] private Protagonist protagonistGas;
		[Title("Settings")]
		[SerializeField] private ProtagonistType startingProtagonist;
		[SerializeField] [ReadOnly] private Protagonist current;

		private void Start() => Setup();

		private void Setup()
		{
			protagonistGas.gameObject.SetActive(false);
			protagonistSolid.gameObject.SetActive(false);
			current = GetProtagonist(startingProtagonist);
			current.gameObject.SetActive(true);
			current.Enter(transform.position);
		}

		[Button]
		public void ChangeState(ProtagonistType newType)
		{
			var newProtagonist = GetProtagonist(newType);
			if (newProtagonist == current) return;
			var pos = current.Exit();
			current.gameObject.SetActive(false);
			newProtagonist.gameObject.SetActive(true);
			newProtagonist.Enter(pos);
			current = newProtagonist;
		}

		private Protagonist GetProtagonist(ProtagonistType type)
		{
			Protagonist protagonist = type switch
			{
				ProtagonistType.Solid => protagonistSolid,
				ProtagonistType.Gas => protagonistGas,
				_ => throw new ArgumentOutOfRangeException()
			};
			return protagonist;
		}
	}
}