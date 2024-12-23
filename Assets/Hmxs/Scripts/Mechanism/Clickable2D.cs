using System;
using HighlightPlus2D;
using MoreMountains.Feedbacks;
using Sirenix.OdinInspector;
using UnityEngine;

namespace Hmxs.Scripts.Mechanism
{
	[RequireComponent(typeof(Collider2D))]
	public abstract class Clickable2D : MonoBehaviour, IInteractable
	{
		[SerializeField] private bool interactable;
		[Title("Audio")]
		[SerializeField] protected MMF_Player sound1;
		[SerializeField] protected MMF_Player sound2;

		protected bool Interactable
		{
			get => interactable;
			set
			{
				interactable = value;
				if (value == false) highlightEffect.highlighted = false;
			}
		}

		[SerializeField] private HighlightEffect2D highlightEffect;

		protected virtual void Awake()
		{
			if (highlightEffect) return;
			highlightEffect = GetComponent<HighlightEffect2D>();
			if (!highlightEffect)
			{
				Debug.LogError("HighlightEffect2D not found on " + name);
				return;
			}
			highlightEffect.highlighted = false;
		}

		private void OnMouseOver() => highlightEffect.highlighted = Interactable;
		private void OnMouseExit() => highlightEffect.highlighted = false;

		private void OnMouseUp()
		{
			if (Interactable) Interact();
		}

		public abstract void Interact();
	}
}
