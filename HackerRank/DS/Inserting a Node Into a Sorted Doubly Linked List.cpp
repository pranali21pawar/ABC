/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{
    // Complete this function
   // Do not write the main method. 
    
    struct Node *new_node = new Node();
    struct Node* temp = head;
    new_node->data = data;
    if(head==NULL) {
        head = new_node;
        return head;
    }
    else if(data < temp->data) {
        new_node->next = temp;
        temp->prev = new_node;
        head =  new_node;
        return head;
    }
    else{
        struct Node* temp1 = NULL;
        while(temp!= NULL && temp->data < data) {
            temp1 = temp;
            temp=temp->next;
        }
        if(temp==NULL) {
            temp1->next = new_node;
            new_node->prev = temp1;
            new_node->next = NULL;
        }
        else{
            temp1->next = new_node;
            temp->prev = new_node;
            new_node->next = temp;
            new_node->prev = temp1;
        }
        return head;
    }
    
}