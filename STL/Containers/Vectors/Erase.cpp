// implement erase function;

#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec={1,2,3,4,5};
    vec.erase(vec.begin()+2);
    for(int value :vec){
        cout<< value <<" ";
    }
    return 0;
} 