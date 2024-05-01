#include <add_two_numbers.h>

ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2) {
  ListNode* out_list = new ListNode(0, nullptr);
  ListNode* update_list = out_list;

  int last_sum = 0;

  while (l1 || l2 || last_sum) {
    int sum = last_sum;

    if (l1) {
      sum += l1->val;
      l1 = l1->next;
    }

    if (l2) {
      sum += l2->val;
      l2 = l2->next;
    }

    last_sum = sum / 10;

    update_list->next = new ListNode(sum % 10, nullptr);

    update_list = update_list->next;
  }
  return out_list->next;
}
