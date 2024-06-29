/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        int n = -99999, flag;
        ListNode *curr = head, *follower;

        if (head == nullptr || head->next == nullptr)
            return head;

        do {
            flag = 0;
            follower = curr->next;
            
            while (curr->val == follower->val) {
                flag = 1;
                follower = follower->next;
                if (follower == nullptr)
                    break;
            }

            if (flag)
                curr->next = follower;
            curr = curr->next;
        } while (curr != nullptr && curr->next != nullptr);

        return head;
    }
};
