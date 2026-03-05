// Detect and remove cycle from linked list;

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
    public:
    Node* head;
    Node* tail;

    List(){
        head = tail = NULL;
    }
    void push_back(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        } else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void DetectCycle(){
        Node* slow = head;
        Node* fast = head;
        int index = 0;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            index++;

            if(slow == fast){
                cout<<"Cycle detected at index: "<<index<<endl;
                cout<<"Node data: "<<slow->data<<endl;
                return;
            }
        }
        cout<<"No cycle detected"<<endl;
    }
};
int main(){

    List l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);
    l1.push_back(5);
    
    l1.head->next->next->next->next->next = l1.head->next->next;


    l1.DetectCycle();
    
    return 0;
}