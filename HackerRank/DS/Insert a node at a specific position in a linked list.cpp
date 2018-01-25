/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function. 
    Node *newNode = new Node();
    newNode->data = data;

    if (head == NULL) {
        return newNode;
    }

    if (position == 0) {
       newNode->next = head;
       return newNode;
    }

    Node *currentNode = head;
    position--;
    while (position--) {
        currentNode = currentNode->next;
        
    }

    newNode->next = currentNode->next;
    currentNode->next = newNode;

    return head;
    
}
