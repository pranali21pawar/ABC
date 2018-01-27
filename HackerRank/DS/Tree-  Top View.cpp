/*
You are given a pointer to the root of a binary tree. Print the top view of the binary tree. 
Top view means when you look the tree from the top the nodes you will see will be called the top view of the tree.

struct node
{
    int data;
    node* left;
    node* right;
};

*/
void leftTree(node * root){
    if(root==NULL){
        return;
    }
    leftTree(root->left);
    cout << root->data << " ";
    return;
}
void rightTree(node * root){
    if(root==NULL){
        return;
    }
    cout << root->data << " ";
    rightTree(root->right);
}
void topView(node * root) {
    if(root==NULL){
        return;
    }
      leftTree(root->left);
    cout << root->data << " ";
    rightTree(root->right);
    return;
}
