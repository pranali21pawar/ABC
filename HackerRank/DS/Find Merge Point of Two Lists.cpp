/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    // Complete this function
    // Do not write the main method. 
    int lenA=0,lenB=0;
    Node* nodeA = headA;
    while(nodeA!=NULL){
        nodeA=nodeA->next;
        lenA++;
    }
    Node* nodeB = headB;
    while(nodeB!=NULL){
        nodeB=nodeB->next;
        lenB++;
    }
    int diff;
    if(lenA<lenB){
        diff = lenB-lenA;
        nodeA = headA;
        nodeB = headB;
        while(diff--){
           nodeB=nodeB->next; 
        }
        while(nodeA!=nodeB){
            nodeA=nodeA->next;
            nodeB=nodeB->next; 
        }
    }
    else{
        diff = lenA-lenB;
        nodeA = headA;
        nodeB = headB;
        while(diff--){
           nodeA=nodeA->next; 
        }
        while(nodeA!=nodeB){
            nodeA=nodeA->next;
            nodeB=nodeB->next; 
        }
    }
    return nodeA->data;
}
