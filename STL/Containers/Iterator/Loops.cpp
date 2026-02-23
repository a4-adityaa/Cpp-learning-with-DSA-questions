// implement loops using Iterator;

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vec = {1,2,3,4,5};
    
    // transverse from begining;
    vector<int>::iterator it;
    for(it = vec.begin(); it != vec.end(); it++){
        cout<< *it << " ";
    }
    cout<< endl;
    
    // tranverse from end;
    vector<int>::reverse_iterator rit;
    for(rit = vec.rbegin(); rit != vec.rend(); rit++){
        cout<< *rit << " ";
    }
    
    return 0;
}