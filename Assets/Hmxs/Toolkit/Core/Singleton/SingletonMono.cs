using System;
using JetBrains.Annotations;
using UnityEngine;

namespace Hmxs.Toolkit
{
	/// <summary>
	/// generic singleton base class - inherit from MonoBehaviour
	/// </summary>
	public abstract class SingletonMono<T> : MonoBehaviour where T : SingletonMono<T>
	{
		private static T _instance;
		private static readonly object Lock = new();

		public static T Instance
		{
			get
			{
				lock (Lock)
				{
					if (_instance) return _instance;
					var instances = FindObjectsOfType(typeof(T));
					if (instances.Length > 1)
						Debug.LogWarning("[Singleton] Multiple instances of singleton found in the scene.");
					_instance = (T)instances[0];
					if (_instance) return _instance;
					GameObject instance = new GameObject();
					_instance = instance.AddComponent<T>();
					instance.name = $"{typeof(T)}_SingletonMono";
					Debug.Log($"[Singleton] An instance of {typeof(T)} is created.");
					return _instance;
				}
			}
		}

		protected virtual void Awake()
		{
			if (!_instance) _instance = (T)this;
			else if (_instance != this)
				Destroy(gameObject);
		}

		protected virtual void OnDestroy()
		{
			if (_instance == this) _instance = null;
		}
	}
}
