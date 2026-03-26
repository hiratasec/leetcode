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

 // STEP2
 // STEP1で使用していたelplore変数なくても成り立ちそうだったので更新
 // フィードバックで教えてもらったコーディング規約意識「https://google.github.io/styleguide/cppguide.html」
 
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) {
          return nullptr;
        }
        // 現在調査ノード
        ListNode *current = head;
        // 現在調査ノードと次のノードがnullptrではないなら調査続行
        while (current != nullptr && current->next != nullptr) {
            // valが重複しているノード除外(2つ目以降が対象)
            if(current->val == current->next->val) {
            current->next = current->next->next;
            } else {
            current = current->next;
            }
        }
        return head;
    }
};