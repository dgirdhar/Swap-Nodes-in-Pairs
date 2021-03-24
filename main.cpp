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
    ListNode* swapPairs(ListNode* head) {
        ListNode* next = head;
        
        while (true) {
            ListNode *firstNode = nullptr;
            ListNode *secondNode = nullptr;
            
            if (next != nullptr) {
                firstNode = next;
                next = next->next;
            }
            else {
                break;
            }
            if (next != nullptr) {
                secondNode = next;
                next = next->next;
            }
            else {
                break;
            }         
            
            int temp = firstNode->val;
            firstNode->val = secondNode->val;
            secondNode->val = temp;
        }
        
        return head;
    }
};
