//  Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(nullptr) {}
 };
 
void deleteNode(ListNode* node) {
    //copy the next node's value and skip the next node.
    node->val = node->next->val;
    node->next = node->next->next;
}
