using System;
using System.Diagnostics;
using Hmxs.Toolkit;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.InputSystem;
using Debug = UnityEngine.Debug;

namespace Hmxs.Scripts.Input
{
    public class InputHandler : SingletonMono<InputHandler>
    {
        public bool JumpPressedThisFrame => jumpPressedThisFrame;
        public Vector2 MoveInput => moveInput;

        [Title("Info")]
        [ReadOnly] [SerializeField] private bool jumpPressedThisFrame;
        [ReadOnly] [SerializeField] private Vector2 moveInput;

        private InputControls _inputControls;

        protected override void Awake()
        {
            base.Awake();
            _inputControls = new InputControls();
        }

        private void OnEnable()
        {
            _inputControls.Enable();
            Events.AddListener<bool>("SetPause", SetPause);
        }

        private void OnDisable()
        {
            _inputControls.Disable();
            Events.RemoveListener<bool>("SetPause", SetPause);
        }

        private void Update()
        {
            jumpPressedThisFrame = _inputControls.Gameplay.Jump.WasPressedThisFrame();
            moveInput = _inputControls.Gameplay.Move.ReadValue<Vector2>();
        }

        private void SetPause(bool pause)
        {
            if (pause)
                _inputControls.Gameplay.Disable();
            else
                _inputControls.Gameplay.Enable();
        }
    }
}