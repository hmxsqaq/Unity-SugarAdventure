using System;
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
		[SerializeField] public ProtagonistType protagonistType;
		[SerializeField] private float timeToConvert = 1f;
		[SerializeField] private Color convertColor = Color.red;
		[SerializeField] [ReadOnly] private Protagonist current;
		[SerializeField] [ReadOnly] private float convertCounter;
		[SerializeField] [ReadOnly] public bool isConverting;

		public Protagonist CurrentProtagonist => current;

		private bool _isSetup;

		public Protagonist Setup()
		{
			protagonistGas.gameObject.SetActive(false);
			protagonistSolid.gameObject.SetActive(false);
			current = GetProtagonist();
			current.gameObject.SetActive(true);
			current.SetPosition(GameManager.Instance.startPosition.position, true);
			_isSetup = true;
			return current;
		}

		public void Hide()
		{
			protagonistGas.gameObject.SetActive(false);
			protagonistSolid.gameObject.SetActive(false);
			current = null;
			_isSetup = false;
		}

		private void Update()
		{
			if (!_isSetup) return;

			if (isConverting)
				convertCounter += Time.deltaTime;
			else
				convertCounter = 0;
			if (convertCounter >= timeToConvert)
				ChangeState(ProtagonistType.Gas);

			CurrentProtagonist.SetColor(Color.Lerp(Color.white, convertColor, convertCounter / timeToConvert));
		}

		[Button]
		public void ChangeState(ProtagonistType newType)
		{
			if (protagonistType == newType) return;
			protagonistType = newType;
			var newProtagonist = GetProtagonist();
			var pos = current.Exit();
			current.gameObject.SetActive(false);
			newProtagonist.gameObject.SetActive(true);
			newProtagonist.Enter(pos);
			current = newProtagonist;
		}

		private Protagonist GetProtagonist()
		{
			return protagonistType switch
			{
				ProtagonistType.Solid => protagonistSolid,
				ProtagonistType.Gas => protagonistGas,
				_ => throw new ArgumentOutOfRangeException()
			};
		}
	}
}
