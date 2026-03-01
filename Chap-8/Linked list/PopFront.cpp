// Implement Pop Front from sacrach

#include <iostream>
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
        head = tail= NULL;
    }
    void Push_back(int val){
        Node* temp = new Node(val);
        if(head==NULL){
            head = tail = temp;
        }
        else{
            tail->next = temp;
            tail = temp;
        }
    }
    void Pop_front(){
        if(head==NULL){
            cout<< "LL is empty";
            return;
        } 
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"-> ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    List ll;

    ll.Push_back(1);
    ll.Push_back(2);
    ll.Push_back(3);
    ll.Push_back(4);
    ll.Push_back(5);

    ll.Pop_front();
    ll.Pop_front();

    ll.display();

    return 0;
}