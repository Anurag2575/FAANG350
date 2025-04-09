//  Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeList(ListNode* list1, ListNode* list2) {
   ListNode* dummy = new ListNode(0);
   ListNode* mover = dummy;
   //using the approach to not tamper with the input list
   ListNode* temp1 = list1;
   ListNode* temp2 = list2;

   while(temp1 && temp2){
    if(temp1->val <= temp2->val){
        mover->next = temp1;
        temp1 = temp1->next;
    }else{
        mover->next = temp2;
        temp2 = temp2->next;
    }
    mover = mover->next;
   }

   mover->next = temp1 ? temp1 : temp2;

   return dummy->next;
}