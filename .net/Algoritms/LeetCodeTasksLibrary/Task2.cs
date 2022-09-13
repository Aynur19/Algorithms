using DataStructures;

namespace LeetCodeTasksLibrary
{
    public class Task2
    {
        public static ListNode AddTwoNumbers(ListNode l1, ListNode l2)
        {
            int number = 0;

            if (l1 != null)
            {
                number += l1.Value;
            }

            if (l2 != null)
            {
                number += l2.Value;
            }

            if ((l1?.Next != null && l2?.Next != null))
            {
                l1.Value += number / 10;
                return new ListNode(number % 10, AddTwoNumbers(l1.Next, l2.Next));
            }
            else if (l1?.Next != null)
            {
                l1.Value += number / 10;
                return new ListNode(number % 10, AddTwoNumbers(l1.Next, null));
            }
            else if(l2?.Next != null)
            {
                l2.Value += number / 10;
                return new ListNode(number % 10, AddTwoNumbers(null, l2.Next));
            }
            else if(number / 10 > 0)
            {
                return new ListNode(number / 10);
            }

            return new ListNode();
        }
    }
}
