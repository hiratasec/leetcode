/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

/**
*STEP3
*STEP2よりコメントを整理
*
*/

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head){return nullptr;}

        ListNode *fast = head;
        ListNode *slow = head;
        //探索
        while(fast && fast->next){
            //更新
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow){
                //fastをheadで初期化
                fast = head;
                //Cycle開始位置探索
                while(fast != slow){
                    fast = fast->next;
                    slow = slow->next;
                } return slow;
            }
        } return nullptr;
    }
};