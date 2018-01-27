template <class T> const T& max (const T& a, const T& b) {
  return (a<b)?b:a;     
}
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        // Write your code here.
        if(root==NULL){
            return -1;
        }
        return max(height(root->left),height(root->right))+1;
    }
  