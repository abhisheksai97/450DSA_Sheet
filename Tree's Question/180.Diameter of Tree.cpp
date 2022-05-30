// method 1... usiing height of a tree concept.
  int height(struct Node* node)
   {
       // code here 
       if(node==NULL) return 0;
       int left=height(node->left);
       int right=height(node->right);
       return max(left,right)+1;
   }
   int diameter(Node* root) 
   {
       // Your code here
       if(root==NULL) return 0;
       int op1=diameter(root->left);
       int op2=diameter(root->right);
       int op3=height(root->left)+1+height(root->right);
       return max(op3,max(op1,op2));
   }
};

// method2.. using both diameter &  hieght of particular node in pair<int,int>p
  // Function to return the diameter of a Binary Tree.
    pair<int,int> diamfast(Node * root){
        if(root==NULL){
            pair<int,int> p=make_pair(0,0);
            return p;
        }
        // if root is not null here..
        pair<int,int> lef=diamfast(root->left);
        pair<int,int> righ=diamfast(root->right);
        
        int op1=lef.first;
        int op2=righ.first;
        int op3=lef.second+righ.second+1;
        
        pair<int,int> ans;
        ans.first=max(op1,max(op2,op3));
        ans.second=max(lef.second,righ.second)+1;
        return ans;
    }
    
    int diameter(Node* root) {
     return diamfast(root).first;
    }
