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
    ListNode* reverseList(ListNode* head) {
        ListNode    *ptr = nullptr;
        vector<int> lst = {};

        ptr = head;
        for (int i = 0; ptr != nullptr; i++){
            lst.push_back(ptr->val);
            ptr = ptr->next;
        }
        ptr = head;
        for (int i = lst.size() - 1; i >= 0; i--){
            ptr->val = lst[i];
            ptr = ptr->next;
        }
        return head;
    }
};