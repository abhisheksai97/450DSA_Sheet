 public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        if(node==NULL)
        return 0;
        
        int l=height(node->left);
        int r=height(node->right);
        
        int m=max(l,r)+1;
        return m;
    }
