#include<bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
                }

               return root;
           }
          }

    void topView(Node * root) {
        
        queue<pair<Node*,int>>q;
        q.push(make_pair(root,0));
        
        int hd = 0, l = 0, r = 0;
        
        stack<int>left;
        
        vector<int>right;
        
        Node* node;
        
        while(q.size()){
            node = q.front().first;
            hd = q.front().second;
            
            if(hd>1){
                right.push_back(node->data);
                r = hd;
            }
            
            if(hd<1){
                left.push(node->data);
                l = hd;
            }
            
            if(root->left){
                q.push(make_pair(node->left,hd-1));
            }
       
            if(root->right != NULL){
                q.push(make_pair(node->right,hd+1));
            }
            q.pop();
        }
        while (left.size()) {
            cout << left.top() << " ";
            left.pop();
        }
       
       cout << root->data << " ";
       
       for (auto x : right) {
            cout << x << " ";
        }  

    
    }
}; //End of Solution

int main() {
    
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  
    myTree.topView(root);

    return 0;
}