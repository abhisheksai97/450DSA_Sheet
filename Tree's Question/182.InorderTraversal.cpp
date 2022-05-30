// inorder traversal..(L-N-R)..
  void inorder(node* root){
      // base case..
      if(root==NULL){
          return;
      }
      
      inorder(root->left);
      cout<<root->data<<" ";
      inorder(root->right);
  }
