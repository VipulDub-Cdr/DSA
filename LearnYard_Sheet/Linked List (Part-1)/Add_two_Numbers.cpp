#include <bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
ListNode* addTwoNumbers(ListNode* l1,ListNode* l2){
    ListNode* p = l1;
    ListNode* q = l2;
    ListNode* resHead = NULL;
    ListNode* prev = NULL;
    int carry = 0;
    while(p!=NULL || q!=NULL){
        int x = 0;
        int y = 0;
        if(p!=NULL){
            x = p->val;
            p = p->next;
        }
        if(q!=NULL){
            y = q->val;
            q = q->next;
        }
        int sum = x+y+carry;
        int carry = sum/10;

        ListNode* temp = new ListNode(sum%10);
        if(resHead==NULL) resHead = temp;
        else prev->next= temp;

        prev = temp;
    }
    if(carry>0){
        ListNode* temp = new ListNode(carry);
        prev->next = temp;
    }
    return resHead;
}
int main() {
    
    return 0;
}