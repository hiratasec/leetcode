/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

/**
*STEP2
*if(head != nullptr) などを if(!head)の簡略形式に変更
*行数数を削減
*/

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head){return nullptr;}
        //variable
        ListNode *fast = head;
        ListNode *slow = head;
        //探索　explore position
        while(fast && fast->next){
            //更新　update
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow){
                //fastを初期化　initialize the fast pointer
                fast = head;
                //Cycle開始位置探索　find cycle entry position;
                while(fast != slow){
                    fast = fast -> next;
                    slow = slow -> next;
                } return slow;
            }
        } return nullptr;
    }
};