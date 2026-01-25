// Use push and pop in vector with size;

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec;

    cout<<"Size of vector: "<<vec.size()<<endl;

    vec.push_back(46);
    vec.push_back(42);
    vec.push_back(35);
    vec.push_back(62);
    vec.push_back(53);

    cout<< "size of vector after push out: " << vec.size()<< endl;
    
    vec.pop_back();

    for(int val: vec){ // for each loop
        cout<< val<< " ";
    }
    return 0;
}