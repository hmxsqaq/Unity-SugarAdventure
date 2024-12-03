using System;
using Sirenix.OdinInspector;
using UnityEngine;

namespace Hmxs.Scripts.Protagonist
{
    public class GroundCheck2D : MonoBehaviour
    {
        public bool IsGrounded { get; private set; } = false;

        private enum GroundCheckType
        {
            Box,
            Circle,
            Ray
        }

        [Title("Setting")]
        [SerializeField] private Transform point;
        [SerializeField] private LayerMask groundLayer;
        [SerializeField] private GroundCheckType type;
        [ShowIf("type", GroundCheckType.Circle)]
        [SerializeField] private float radius;
        [ShowIf("type", GroundCheckType.Box)]
        [SerializeField] private Vector2 size;
        [ShowIf("type", GroundCheckType.Ray)]
        [SerializeField] private float distance;

        private void Update() => CheckGround();

        private void CheckGround()
        {
            IsGrounded = type switch
            {
                GroundCheckType.Box => Physics2D.OverlapBox(point.position, size, 0, groundLayer),
                GroundCheckType.Circle => Physics2D.OverlapCircle(point.position, radius, groundLayer),
                GroundCheckType.Ray => Physics2D.Raycast(point.position, Vector2.down, distance, groundLayer),
                _ => throw new ArgumentOutOfRangeException()
            };
        }

        private void OnDrawGizmos()
        {
            Gizmos.color = Color.green;
            switch (type)
            {
                case GroundCheckType.Box:
                    Gizmos.DrawWireCube(point.position, size);
                    break;
                case GroundCheckType.Circle:
                    Gizmos.DrawWireSphere(point.position, radius);
                    break;
                case GroundCheckType.Ray:
                    Gizmos.DrawRay(point.position, Vector2.down * distance);
                    break;
                default:
                    throw new ArgumentOutOfRangeException();
            }
        }
    }
}