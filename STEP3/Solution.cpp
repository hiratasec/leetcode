/**
*STEP3
*Time 6:52
*2026/03/24
*コメントでの処理や変数の説明どの程度まで詳細に残すか悩んだ。
*
*2026/03/25 更新
*Time 4:12
*leetcodeでsubmitを行っていなかったため再実装
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    bool hasCycle(ListNode *head) {
        //headのnullチェック
        if(head == nullptr){
            return false;
        }
        ListNode *fast = head;
        ListNode *slow = head;

        //nullptrになるまで探索
        while(fast != nullptr && fast -> next != nullptr){
            //更新
            fast = fast -> next ->next;
            slow = slow -> next;
            //Cycle発見
            if(fast == slow){
                return true;
            }
        }
        //Cycleなし
        return  false;
    }
};