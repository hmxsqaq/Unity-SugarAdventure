using System;
using UnityEngine;

namespace Hmxs.Scripts.VFX
{
	[RequireComponent(typeof(ParticleSystem))]
	public class SelfDestroyVFX : MonoBehaviour
	{
		// private ParticleSystem _particle;
		//
		// private void Start() => _particle = GetComponent<ParticleSystem>();
		//
		// private void Update()
		// {
		// 	if (_particle.isPlaying) return;
		// 	Destroy(gameObject);
		// }
	}
}
