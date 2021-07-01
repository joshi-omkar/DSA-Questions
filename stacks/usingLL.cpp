#include <iostream>
using namespace std;

typedef struct Node{
    int data;
    struct Node * next;
}Node;

Node* top ;

void push(int data){
    Node * temp = new Node();

    temp->data= data;
    temp->next = top;
    top = temp ;

};

void pop(){
    Node * temp;
    if(top == NULL) return;

    temp  = top;
    top = top->next;
    temp->next=NULL;
    delete(top);

};

void display()  
{  
    struct Node* temp;  
  
    // Check for stack underflow  
    if (top == NULL) 
    {  
        cout << "\nStack Underflow";  
        exit(1);  
    }  
    else 
    {  
        temp = top;  
        while (temp != NULL) 
        {  
  
            // Print node data  
            cout << temp->data << "\n";  
  
            // Assign temp link to temp  
            temp = temp->next;  
        }  
    }  
}  

int main(){
    cout<<"pushing\n";
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    push(7);
    push(8);

    display();

    cout<<"poping\n";

    pop();
    pop();
    pop();
    pop();

    display();

    return 0;
}