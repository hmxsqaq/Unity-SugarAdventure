using System;
using Sirenix.OdinInspector;
using UnityEngine;

namespace Hmxs.Scripts.Protagonist
{
    public class PhysicsCheck2D : MonoBehaviour
    {
        public bool Detected { get; private set; } = false;

        private enum CheckType
        {
            Box,
            Circle,
            Ray
        }

        [Title("Setting")]
        [SerializeField] private Transform point;
        [SerializeField] private LayerMask checkLayer;
        [SerializeField] private CheckType type;
        [ShowIf("type", CheckType.Circle)]
        [SerializeField] private float radius;
        [ShowIf("type", CheckType.Box)]
        [SerializeField] private Vector2 size;
        [ShowIf("type", CheckType.Ray)]
        [SerializeField] private Vector2 direction;
        [ShowIf("type", CheckType.Ray)]
        [SerializeField] private float distance;

        private void Update() => CheckGround();

        private void CheckGround()
        {
            Detected = type switch
            {
                CheckType.Box => Physics2D.OverlapBox(point.position, size, 0, checkLayer),
                CheckType.Circle => Physics2D.OverlapCircle(point.position, radius, checkLayer),
                CheckType.Ray => Physics2D.Raycast(point.position, direction.normalized, distance, checkLayer),
                _ => throw new ArgumentOutOfRangeException()
            };
        }

        private void OnDrawGizmosSelected()
        {
            Gizmos.color = Color.green;
            switch (type)
            {
                case CheckType.Box:
                    Gizmos.DrawWireCube(point.position, size);
                    break;
                case CheckType.Circle:
                    Gizmos.DrawWireSphere(point.position, radius);
                    break;
                case CheckType.Ray:
                    Gizmos.DrawRay(point.position, direction.normalized * distance);
                    break;
                default:
                    throw new ArgumentOutOfRangeException();
            }
        }
    }
}