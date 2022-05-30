// preorder traversal..(N-L-R)..
 void preorder(node* root){
     // base case.
     if(root==NULL){
         return ;
     }
     cout<<root->data<<" ";
     preorder(root->left);
     preorder(root->right);
 }
