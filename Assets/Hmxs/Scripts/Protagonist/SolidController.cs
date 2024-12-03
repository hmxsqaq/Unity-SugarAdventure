using Hmxs.Scripts.Input;
using Sirenix.OdinInspector;
using UnityEngine;

namespace Hmxs.Scripts.Protagonist
{
    [RequireComponent(typeof(Rigidbody2D), typeof(GroundCheck2D))]
    public class SolidController : MonoBehaviour
    {
        #region Settings

        [Title("Movement")]
        [SerializeField] private float moveSpeed;

        [Title("Jump")]
        [SerializeField] private float jumpForce;
        [SerializeField] private float jumpBufferTime;

        #endregion


        #region Private Variables

        private float _moveInput;
        private float _jumpTimeCounter;

        #endregion


        #region Components

        private Rigidbody2D _rb;
        private GroundCheck2D _groundCheck;

        #endregion


        private void Start()
        {
            _rb = GetComponent<Rigidbody2D>();
            _groundCheck = GetComponent<GroundCheck2D>();
        }

        private void Update()
        {
            GetInput();
        }

        private void FixedUpdate()
        {
            ApplyMovement();
        }

        private void GetInput()
        {
            _moveInput = InputHandler.Instance.MoveInput;

            if (InputHandler.Instance.JumpPressedThisFrame)
                if (_groundCheck.IsGrounded)
                    ApplyJump();
                else
                    _jumpTimeCounter = jumpBufferTime;
        }

        private void ApplyMovement()
        {
            throw new System.NotImplementedException();
        }

        private void ApplyJump()
        {
            throw new System.NotImplementedException();
        }
    }
}