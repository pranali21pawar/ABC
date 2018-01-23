Node* Insert(Node *head,int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;

    if (head == NULL) {
        return newNode;
    }

    Node *currentNode = head;

    while (currentNode->next) {
        currentNode = currentNode->next;
    }

    currentNode->next = newNode;

    return head;
}