// Starting point of cycle;

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

class list{
    public:
    Node* head;
    Node* tail;

    list(){
        head = tail = NULL;
    }

    void Push_back(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        } else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    Node* CycleDetect(){
        Node* slow = head;
        Node* fast = head;
        bool isCycle = false;

        while(fast != NULL && fast -> next != NULL){
            slow = slow ->next;
            fast = fast -> next -> next;

            if(slow == fast){
                isCycle= true;
                cout<<"Cycle detected!"<<endl;
                break;
            }
        }
        if(!isCycle){
            cout<<"No cycle found"<<endl;
            return NULL;
        }
        slow = head;
        Node* prev = NULL;
        while(slow != fast){
            slow = slow -> next;
            prev = fast;
            fast = fast -> next;
        }
        cout<<"Cycle starts at node with data: "<<slow->data<<endl;
        prev->next = NULL;
        cout<<"Cycle removed!"<<endl;
        return slow;
    }
};

int main(){
    list l1;
    l1.Push_back(1);
    l1.Push_back(2);
    l1.Push_back(3);
    l1.Push_back(4);
    l1.Push_back(5);

    // creating a cycle
    l1.tail->next = l1.head->next;

    Node* cycleStartNode = l1.CycleDetect();

    return 0;
}