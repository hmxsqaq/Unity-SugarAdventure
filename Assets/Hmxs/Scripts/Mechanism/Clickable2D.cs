using System;
using HighlightPlus2D;
using UnityEngine;

namespace Hmxs.Scripts.Mechanism
{
	[RequireComponent(typeof(HighlightEffect2D), typeof(Collider2D))]
	public abstract class Clickable2D : MonoBehaviour, IInteractable
	{
		[SerializeField] private bool interactable;

		protected bool Interactable
		{
			get => interactable;
			set
			{
				interactable = value;
				if (value == false) HighlightEffect.highlighted = false;
			}
		}

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

		private void OnMouseOver() => HighlightEffect.highlighted = Interactable;
		private void OnMouseExit() => HighlightEffect.highlighted = false;

		private void OnMouseUp()
		{
			if (Interactable) Interact();
		}

		public abstract void Interact();
	}
}