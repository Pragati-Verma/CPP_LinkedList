// SINGLY LINKED LIST INSERTION AT BEGINNING AND LAST, DISPLAY ELEMENTS
#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};

class LinkedList{
    Node* head;
    public:
        LinkedList(): head(NULL) { }
    void insertAtBeginning(int value)
    {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }
    
    void insertAtLast(int value) 
    {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;
        if(!head)
        {
            head = newNode;
            return;
        }
        Node* temp = head;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    
    void display()
    {
        if(!head){
            cout<<"List is empty!"<<endl;
        }
        Node* temp = head;
        while(temp) {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main() {
    // Write C++ code here
    //cout << "Try programiz.pro";
    LinkedList l1;
    l1.insertAtBeginning(8);
    l1.insertAtBeginning(3);
    l1.display();
    l1.insertAtLast(10);
    l1.insertAtLast(15);
    l1.display();
    return 0;
}