// Insert elements in middle of ll;

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
  Node* head;
  Node* tail;

  public:
    List(){
        head=tail=NULL;
    }

    void Push_back(int val){
        Node* NewNode = new Node(val);

        if(head== NULL){
            head=tail=NewNode;
        return;
        } else{
            tail->next = NewNode;
            tail = NewNode;
        }
    }
    void InsertMiddle(int val, int pos){
        Node* NewNode = new Node(val);
        if(pos==0){
            NewNode->next = head;
            head = NewNode;
            return;
        }
        Node* temp = head;
        for(int i=1; i<pos-1 && temp!=NULL; i++){
            temp = temp->next;
        }
        if(temp == NULL){
            cout<<"Position out of bounds";
            delete NewNode;
            return;
        }
        NewNode->next = temp->next;
        temp->next = NewNode;

    }
    void PrintLL(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"-> ";
            temp = temp->next;
        }
        cout<< "NULL"<< endl;
    }
};

int main(){
    List l;

    l.Push_back(1);
    l.Push_back(2);
    l.Push_back(3);

    l.PrintLL();

    l.InsertMiddle(4,1);
    l.PrintLL();

    return 0;
}