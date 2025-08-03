#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* reverseKGroup(ListNode* head, int k) {
    ListNode* node = head;
    int count = 0;
    while(!node){
        node = node->next;
        count++;
    }
    if(count<k) return head;


    ListNode* prev = NULL;
    ListNode* curr = head;
    ListNode* next = NULL;
    for(int i=0;i<k;i++){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    
    head->next =  reverseKGroup(curr,k);
    return prev;
}
int main() {
    ListNode* head = new ListNode(1);
    ListNode* snode = new ListNode(2);
    head->next = snode;
    ListNode* thirdnode = new ListNode(3);
    snode->next = thirdnode;
    ListNode* fourthnode = new ListNode(4);
    thirdnode->next = fourthnode;
    ListNode* fifthnode = new ListNode(5);
    fourthnode->next = fifthnode;
    
    return 0;
}