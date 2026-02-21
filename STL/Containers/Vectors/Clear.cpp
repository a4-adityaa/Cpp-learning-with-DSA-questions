// Clear is used to clear all elements of Vector;

#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec={1,2,3,4,5};

    vec.clear();

    cout<<"Size of vector after clear: "<<vec.size()<<endl;
    cout<< "Capacity of vector: " << vec.capacity() << endl;
    cout << "Is vector Empty: " << vec.empty();

    return 0;
}