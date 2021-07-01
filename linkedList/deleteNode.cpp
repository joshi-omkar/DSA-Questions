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

Node* deleteNode(Node * head,int i){
    Node * temp = head;
    int count = 0;

    if (i == 0){
        head = temp->next;
        delete(temp);
        return head ;
    }

    while(temp != NULL && count<i-1){
        
        temp = temp->next;
        count++;
    }
    if(temp != NULL){
    Node *temp1 = temp ->next;
    temp->next = temp1->next; 
    delete temp1;
    }

    return head;

}

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
    int i ;
    cin>>i;
    head = deleteNode(head ,i);
    print(head);
    

    return 0;
}