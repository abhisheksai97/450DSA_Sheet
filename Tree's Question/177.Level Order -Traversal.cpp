class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
       vector<int> v;
       queue<Node*> q;
       q.push(node);
       while(!q.empty()){
           Node * temp=q.front();
           q.pop();
               v.push_back(temp->data);
               if(temp->left){
                   q.push(temp->left);
               }
               if(temp->right){
                   q.push(temp->right);
               }
           
       }
       return v;
    }
};
