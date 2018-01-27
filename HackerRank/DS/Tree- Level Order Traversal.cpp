
/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

queue <node*> q;

void levelOrder(node * root) {
    if(root==NULL){
        return;
    }
    q.push(root);
  while(!q.empty()){
      node* temp = q.front();
      cout << temp->data << " ";
      
        if(temp->left!=NULL)
            q.push(temp->left);
        if(temp->right!=NULL)
            q.push(temp->right);
      q.pop();
  }
    return;
  
}

