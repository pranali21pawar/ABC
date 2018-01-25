/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    if(head==NULL){
        return 0;
    }
    Node* fast = head;
    Node* slow = head;
    while(fast->next!= NULL && fast->next->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow){
            return 1;
        }
    }
    return 0;
}
