void solve(Node * root,vector<int>&ans,int level){
    /// base case .
    if(root==NULL)
    return ;
    
    // check if it is a first node of a new level or not?
    if(level==ans.size()){
        ans.push_back(root->data);
    }
    solve(root->left,ans,level+1);
    solve(root->right,ans,level+1);
}
vector<int> leftView(Node *root)
{
   vector<int> ans;
   solve(root,ans,0);
   return ans;
}
