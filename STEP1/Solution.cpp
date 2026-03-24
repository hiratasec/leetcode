/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

/**
*memo
*LeetcodeでTime Limit Exceed になったためこのアルゴリズムは不採用
*
*/

class Solution {
public:
    bool hasCycle(ListNode *head) {
                //現在ノード
        ListNode* current = head;
        //探索済みノード
        std::vector<ListNode*> visitedNode;
        
        //現在のノードnullptrになるまで探索
        while(current != nullptr){
            //探索済みノードと現在ノード比較
            for(int i = 0; i < visitedNode.size(); i++){
                //合致したらCycleがtrue判定
                if(current == visitedNode.at(i)){
                    return true;
                }
            }
        }
        //finish while  サイクル無し
        return false;
    }
};