# leetcode
141. Linked List Cycle
https://leetcode.com/problems/linked-list-cycle/description/

実装方法として
まずstd::vectorの中に探索済みノードを格納していく方法で実装　
→Time Limit Exceedになった

計算量がO(2^n)

次にフロイド法で実装　→　計算量O(2^n)
最初に書いた時fastの次のノードのnullチェック忘れていたためnullポインターエラー発生

修正前
while(fast != nullptr && slow != nullptr)
修正後
while(fast != nullptr && fast->next != nullptr)

ついでに最初にfastとslowで初期値変わらないのでslowを削除
