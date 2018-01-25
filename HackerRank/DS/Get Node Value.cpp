/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
    Node* first = head;
    Node* second = head;
    int c = 0;
    while(first!=NULL)
    {
        first=first->next;
        if (c++>positionFromTail)
        {
            second=second->next;
        }
    }
    return second->data;
    
}
