#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

void preorder(Node *root){

    if(root  == NULL)
        return;

    cout<< root->data<<endl;
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node *root){

    if(root  == NULL)
        return;

    inorder(root->left);
    cout<< root->data<<endl;
    inorder(root->right);
}

void postorder(Node *root){

    if(root  == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    cout<< root->data<<endl;
}


int main(){

    struct Node *root = new Node(1); 
    root->left             = new Node(2); 
    root->right         = new Node(3); 
    root->left->left     = new Node(4); 
    root->left->right = new Node(5);  
  
    preorder(root); 
  cout<<endl;
    inorder(root);  
  cout<<endl;

    postorder(root); 
  
    return 0; 

}