/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    if (position > 0 && head->next == NULL) {
        return head;
    }

    if (position == 0 || head->next == NULL) {
        return head->next;
    }

    head->next = Delete(head->next, --position);
    return head;
}
