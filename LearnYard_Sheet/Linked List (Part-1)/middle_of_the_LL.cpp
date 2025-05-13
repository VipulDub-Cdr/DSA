#include <bits/stdc++.h>
using namespace std;
struct ListNode {
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

// Yaad rakhna ptr agar even LL me do jump maar rahaa hai toh wo NULL pe rukega
// but if ptr agar odd LL me do jump maar rahaa hai toh wo lastNode pe rukega (3 node ka example sochlena easy rahega)


ListNode* middleNode(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast!=NULL and fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
int main() {
    
    return 0;
}