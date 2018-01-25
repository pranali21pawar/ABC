/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
    Node* a = headA;
    Node* b = headB;
    
    if (a == NULL) {
        return b;
    } else if (b == NULL) {
        return a;
    }

    if (a->data < b->data) {
        a->next = MergeLists(a->next, b);
        return a;
    } else {
        b->next = MergeLists(a, b->next);
        return b;
    }
}
