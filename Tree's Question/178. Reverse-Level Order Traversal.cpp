// for reverse level we require 1 queue and 1 stack 

void reversetravel(node * root){
    queue<node *> q;
    stack<node*> st;
    q.push(root);
    while(!q.empty()){
        node * root=q.front();
        q.pop();
        st.push(root);
        if(root->right){
            q.push(root->right);
        }
        if(root->left){
            q.push(root->left);
        }
    }
    while(!st.empty()){
        node* t=st.top();
        st.pop();
        cout<<t->data<<" ";   
    }
}

//this is gfg solution..
#include<stack>
#include<queue>
vector<int> reverseLevelOrder(Node *root)
{
    vector<int> v;
    stack<Node* >st;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node * root=q.front();
        q.pop();
        st.push(root);
        if(root->right){
            q.push(root->right);
        }
        if(root->left){
            q.push(root->left);
        }
    }
    // now stack me se nikal kr vector me dalta ja bass.
    while(!st.empty()){
        v.push_back(st.top()->data);
        st.pop();
    }
    return v;
}
