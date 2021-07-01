#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this -> data = data;
        next = NULL;
    }
};
void print(Node *head){
    Node * temp = head ;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
};

int main(){
    // dianamically
    Node *n3 = new Node(10);
    Node *head = n3;

    Node *n4 = new Node(20);

    n3 ->next = n4;
    print(head);


    return 0;
}