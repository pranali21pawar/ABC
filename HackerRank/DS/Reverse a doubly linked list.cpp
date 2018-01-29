/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
#include<vector>
Node* Reverse(Node* head)
{
    // Complete this function
    // Do not write the main method. 
   vector <int> v;
    Node* temp=head;
    while(temp!=NULL){
       v.push_back(temp->data);
        temp=temp->next;
    }
    int n=v.size();
    Node* temp1=head;
    for(int i=n-1;i>=0;i--){
        temp1->data = v[i];
        temp1=temp1->next;
    }
    return head;
}
