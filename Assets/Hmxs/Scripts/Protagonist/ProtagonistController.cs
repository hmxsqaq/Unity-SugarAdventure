using System;
using UnityEngine;

namespace Hmxs.Scripts.Protagonist
{
    [RequireComponent(typeof(SolidController))]
    public class ProtagonistController : MonoBehaviour
    {
        private enum ProtagonistState
        {
            Solid,
            Liquid,
            Gas
        }

        private ProtagonistState _currentState;
        private SolidController _solidController;

        private void Start()
        {
            _solidController = GetComponent<SolidController>();
        }
    }
}