using System;
using HighlightPlus2D;
using UnityEngine;

namespace Hmxs.Scripts.Mechanism
{
	[RequireComponent(typeof(HighlightEffect2D))]
	public abstract class Clickable2D : MonoBehaviour, IInteractable
	{
		[SerializeField] protected bool interactable;

		private HighlightEffect2D HighlightEffect { get; set; }

		protected virtual void Awake()
		{
			HighlightEffect = GetComponent<HighlightEffect2D>();
			if (!HighlightEffect)
			{
				Debug.LogError("HighlightEffect2D not found on " + name);
				return;
			}
			HighlightEffect.highlighted = false;
		}

		private void OnMouseEnter() => HighlightEffect.highlighted = interactable;
		private void OnMouseExit() => HighlightEffect.highlighted = false;

		private void OnMouseUp()
		{
			if (interactable) Interact();
		}

		public abstract void Interact();
	}
}