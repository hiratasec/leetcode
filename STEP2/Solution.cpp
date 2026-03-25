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
*
*
*
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