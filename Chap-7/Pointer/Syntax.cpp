#include<iostream>
using namespace std;

int main(){

    int a = 15;
    int *ptr = &a;
    int **ptr2 = &ptr;

    cout<<"Address of a is : "<<ptr2<<endl;
    cout<<"Address of a is : "<< ptr <<endl;

    return 0;
}