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

 // STEP3
 // 暗記ではなく頭のなかでシュミレーションしながらコード組み立てられた
 // まずコメントで実装したい動き自然言語で書いてからコード化
 
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) {
          return nullptr;
        }
        // 現在調査ノード
        ListNode *current = head;
        // リストの終端まで重複チェックを実行
        while (current != nullptr && current->next != nullptr) {
            // 現在のノードと次のノードの値が同じ場合
            if(current->val == current->next->val) {
            // 重複ノードをスキップ
            current->next = current->next->next;
            } else {
            // 現在調査ノードを次のノードに進める
            current = current->next;
            }
        }
        return head;
    }
};