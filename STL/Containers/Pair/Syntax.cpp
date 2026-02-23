// Implement Pair

#include<iostream>
using namespace std;

int main(){

    pair<int, int> p1 = {1, 3};
    pair<char, string> p2 = {'A', "Aditya"};

    cout<< "Elements of pair: " <<p1.first<<", "<<p1.second<< endl;
    cout<< "Elements of pair: " <<p2.first<<" for "<<p2.second;

    return 0;
}