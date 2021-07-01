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

Node * takeInput(){
    cout<<"enter data"<<"\n";
    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;

    while(data !=-1){
        Node * newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode; 
        }else{
            tail->next=newNode;
            tail = tail->next;
        }
        cin>>data;
    }
    return head;
}

int lengthOfLL(Node *head){

    if(head == NULL){
        return 0;
    }
    else{
        return 1+lengthOfLL(head->next);
    }
    // return 0;
};

void print(Node *head){
    Node * temp = head ;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
};

int main(){

    Node * head = takeInput();
    print(head);
    cout<<"\n";
    int length = lengthOfLL(head);
    cout<<length;

    return 0;
}