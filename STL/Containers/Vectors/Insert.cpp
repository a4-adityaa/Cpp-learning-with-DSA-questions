// insert element at selected position;

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec={1,2,3,4,5};

    vec.insert(vec.begin()+2, 10);

    for(int value :vec){
        cout<< value <<" ";
    }
    return 0;
}
