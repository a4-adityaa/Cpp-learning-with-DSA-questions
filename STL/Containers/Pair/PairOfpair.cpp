// Implement pair of pair;

#include<iostream>
using namespace std;

int main(){

    pair<int,pair<char,string>> pp ={1, {'A', "Aditya"}};

    cout<<pp.first<<" "<<pp.second.first<<" "<<pp.second.second;

    return 0;
}