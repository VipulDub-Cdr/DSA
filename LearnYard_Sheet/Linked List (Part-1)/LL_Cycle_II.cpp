#include <bits/stdc++.h>
using namespace std;

// Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null.

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 
ListNode *detectCycle(ListNode *head) {
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast!=NULL and fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            slow = head;
            break;
        }
    }
    if(fast==NULL || fast->next==NULL) return NULL;
    while(slow!=fast){
        slow = slow->next;
        fast = fast->next;
    }
    return fast;
}

int main() {
    
    return 0;
}