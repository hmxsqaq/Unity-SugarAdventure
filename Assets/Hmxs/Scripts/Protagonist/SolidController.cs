using System;
using Hmxs.Scripts.Input;
using Sirenix.OdinInspector;
using UnityEngine;

namespace Hmxs.Scripts.Protagonist
{
    [RequireComponent(typeof(Rigidbody2D))]
    public class SolidController : MonoBehaviour
    {
        #region Settings

        [Title("Movement")]
        [SerializeField] private float moveSpeed;

        [Title("Jump")]
        [SerializeField] private float jumpForce;
        [SerializeField] private float jumpBufferTime;
        [SerializeField] private float coyoteTime;
        [SerializeField] private float airResistanceMultiplier;

        [Title("Components")]
        [SerializeField] private PhysicsCheck2D groundCheck;
        [SerializeField] private PhysicsCheck2D wallCheck;

        #endregion


        #region Private Variables

        private float _moveInput;
        private float _jumpBufferTimeCounter;
        private float _coyoteTimeCounter;
        private int _isFacingRight = 1;
        private Rigidbody2D _rb;

        #endregion


        private void Start()
        {
            _rb = GetComponent<Rigidbody2D>();
        }

        private void Update()
        {
            GetInput();
            CheckFlip();
        }

        private void FixedUpdate()
        {
            ApplyMovement();
        }

        private void GetInput()
        {
            _moveInput = InputHandler.Instance.MoveInput.x;

            _coyoteTimeCounter = groundCheck.Detected ? coyoteTime : _coyoteTimeCounter - Time.deltaTime;

            if (InputHandler.Instance.JumpPressedThisFrame)
            {
                if (groundCheck.Detected || _coyoteTimeCounter > 0)
                    ApplyJump();
                else
                    _jumpBufferTimeCounter = jumpBufferTime;
            }
            else if (_jumpBufferTimeCounter > 0)
            {
                if (groundCheck.Detected)
                    ApplyJump();
                _jumpBufferTimeCounter -= Time.deltaTime;
            }
        }

        private void CheckFlip()
        {
            if (_moveInput > 0 && _isFacingRight == -1 || _moveInput < 0 && _isFacingRight == 1)
            {
                _isFacingRight *= -1;
                transform.Rotate(0, 180, 0);
            }
        }

        private void ApplyMovement()
        {
            if (!groundCheck.Detected && _moveInput == 0)
            {
                _rb.velocity = new Vector2(_rb.velocity.x * airResistanceMultiplier, _rb.velocity.y);
                return;
            }
            _rb.velocity = new Vector2(_moveInput * moveSpeed, _rb.velocity.y);
        }

        private void ApplyJump()
        {
            _rb.velocity = new Vector2(_rb.velocity.x, jumpForce);

            _coyoteTimeCounter = 0;
            _jumpBufferTimeCounter = 0;
        }
    }
}