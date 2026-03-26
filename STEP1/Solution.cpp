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

 //STEP1
 //前回の142.-Linked-List-Cycle-IIと同じでheadから始まるノード２つ用意
 //ノード探索は変数exploreに一任
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head){
            return nullptr;
        }
        ListNode *current = head;
        ListNode *explore = head;
        while(current != nullptr && current -> next != nullptr){
            explore = current -> next;
            while(explore != nullptr && explore -> val == current -> val){
                 explore = explore -> next;
            }
            current -> next = explore ;
            current = current -> next ;
        }
        return head;
    }
};