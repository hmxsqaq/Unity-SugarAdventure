using System;
using System.Collections;
using Hmxs.Toolkit;
using Sirenix.OdinInspector;
using UnityEngine;

namespace Hmxs.Scripts.Protagonist
{
	public class ProtagonistManager : SingletonMono<ProtagonistManager>
	{
		[Title("References")]
		[SerializeField] private Protagonist protagonistSolid;
		[SerializeField] private Protagonist protagonistGas;
		[Title("Settings")]
		[SerializeField] private ProtagonistType startingProtagonist;
		[SerializeField] [ReadOnly] private Protagonist current;

		public Protagonist CurrentProtagonist => current;

		protected override void Awake()
		{
			base.Awake();
			Setup();
		}

		private void Setup()
		{
			protagonistGas.gameObject.SetActive(false);
			protagonistSolid.gameObject.SetActive(false);
			current = GetProtagonist(startingProtagonist);
			current.gameObject.SetActive(true);
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
