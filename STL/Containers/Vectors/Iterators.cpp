// Vec.begin and Vec.end;

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vec = {1,2,3,4,5,60};

    cout<< "begining value: " <<*vec.begin() << endl;
    cout<< "ending value: " <<*vec.end();

    return 0;
}