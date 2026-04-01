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
 // STEP1
 //2026/04/02
 //
 // output結果が[1,2,5]になるはずがsubmit結果が[5]になっている
 // おそらく同一ノードが更新され続けていそう
 // -> ノード更新処理のdummy_node = dummy_node->next; が抜けていた
 // outputが[1,2,4,4,5]になった
 // 
 // 最終的にdummy_node->next = current_node;という無駄なコードを削除することでAC

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        // make dummy
        ListNode dummy(0);
        dummy.next = head;

        ListNode *dummy_node = &dummy;

        // reserching now
        ListNode *current_node = head;

        // check dupulicates
        bool has_dupulicates;

        while (current_node) {
            has_dupulicates = false;
            // nodecheck
            while (current_node->next != nullptr && current_node->val == current_node->next->val) {
                has_dupulicates = true;
                current_node = current_node->next;
            }

            if (has_dupulicates) {
                dummy_node->next = current_node->next;
            } else {
                dummy_node = dummy_node->next;
            }
            current_node = current_node->next;
        }
        return dummy.next;
    }
};