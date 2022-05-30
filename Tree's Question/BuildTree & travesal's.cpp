#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node * left;
    node* right;
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
// insertinto binarytree..
node * buildbtree(node* root){
    cout<< " enter the data to insert into node:"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"\n enter data for left binary tree:"<<endl;
    root->left=buildbtree(root->left);
    cout<<"\n enter data for right binary tree:"<<endl;
    root->right=buildbtree(root->right);
    
    return root;
}

// linear order traversal in binary tree..
void linearordertravel(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);  //->  here null is used as seprator for next Line..
    
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        // if temp is null (means in queue null is there so we have to go to next line )
        if(temp==NULL){
            cout<<endl;
            // (important. also check if queue is not empty then add NULL in last)
            if(!q.empty()){
                q.push(NULL);
            }
    }
    else{
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
      }
    }
  }
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
 // postorder traversal.. (L-R-N)..
 void postorder(node* root){
     // base case..
     if(root==NULL){
         return;
     }
     postorder(root->left);
     postorder(root->right);
     cout<<root->data<<" "; 
 }

    
    int main(){
      node * root=NULL;
      root=buildbtree(root);
      cout<<"\n level order travel:";
      linearordertravel(root);    
      cout<<"\n inorder travel is:";
      inorder(root);
      cout<<"\n preorder travel is:";
      preorder(root);
      cout<<"\n postorder travel is:";
      postorder(root);
        return 0;
    }
