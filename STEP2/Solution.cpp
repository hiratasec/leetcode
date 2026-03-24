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
*vectorからFroyd法に変更
*
*
*/

class Solution {
public:
    bool hasCycle(ListNode *head) {
        //nullCheck
        if(head == nullptr){
            return false;
        }    
        //探索用ポインタ変数に初期値に*headをセット
        ListNode *fast = head;
        ListNode *slow = head;

        //現在値と次のノードのnullチェック
        while(fast != nullptr && fast -> next != nullptr){
            if(fast == slow){
                return true;
            }
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        return false;
    }
};