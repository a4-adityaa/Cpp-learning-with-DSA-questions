#include <iostream>
#define MAX 5
using namespace std;

int stack[MAX], top = -1;

void push(int data) {
    if(top == MAX-1) {
        cout << "\nOverflow! Stack full.";
        return;
    }
    stack[++top] = data;
}

int pop() {
    if(top == -1) {
        cout << "\nUnderflow! Stack empty.";
        return -1;
    }
    return stack[top--];
}

void handleChoice(int choice) {
    int data, n, i;

    switch(choice) {

        case 1:
            cout << "\nHow many elements to push? ";
            cin >> n;

            for(i = 0; i < n; i++) {
                cout << "Enter element " << i+1 << ": ";
                cin >> data;
                push(data);
            }
            break;

        case 2:
            cout << "\nHow many elements to pop? ";
            cin >> n;

            for(i = 0; i < n; i++) {
                data = pop();
                if(data != -1)
                    cout << data << " popped\n";
            }
            break;

        default:
            cout << "\nWrong choice";
    }
}

int main() {
    int choice;

    do{
        cout << "\n1. Push\n2. Pop\n3. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        handleChoice(choice);
    }while(1);
    
    return 0;
}