// use of pront, back & at;

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vec={1, 2, 3, 4, 5,};

    cout<< "front number: " << vec.front() << endl;
    cout<< "back number: " << vec.back() << endl;
    cout<< "at particular: "<< vec.at(3) << endl;
    
    return 0;
}