#include <bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
ListNode* reverseList(ListNode* head) {
    if(head==NULL) return NULL;
    if(head->next==NULL) return head;
    ListNode* prev = NULL;
    ListNode* curr = head;
    ListNode* ahead = head->next;
    while(ahead!=NULL){
        curr->next = prev;
        prev = curr;
        curr = ahead;
        ahead = ahead->next;
    }
    //last Node ka next ptr set karna baaki hai
    curr->next = prev;
    head = curr;
    return head;
}


int main() {
    
    return 0;
}