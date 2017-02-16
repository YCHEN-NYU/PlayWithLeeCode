class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        if (l1 == NULL)
            return l2;
        else if (l2 == NULL)
            return l1;

        ListNode *res = l1;
        int tmp = 0;
        while (true) {
            l1->val += l2->val + tmp;
            tmp = l1->val / 10;
            l1->val %= 10;

            if (l1->next == NULL) {
                l1->next = l2->next;
                break;
            }

            else if (l2->next == NULL)
                break;

            l1 = l1->next;
            l2 = l2->next;
        }

        while (tmp && l1->next != NULL) {
            l1 = l1->next;
            l1->val += tmp;
            tmp = l1->val / 10;
            l1->val %= 10;
        }

        if (tmp) {
            l2->val = tmp;
            l2->next = NULL;
            l1->next = l2;
        }
        
        return res;