// Implement vector in pair;

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<pair<int, string>> vp ={{1,"Aditya"}, {2,"Manish"},{3,"Prince"}};
    vp.push_back({4, "Shubham"});
    vp.emplace_back(5, "Anurag"); // create in-place object at complie time;

    for(pair<int, string> p : vp){
        cout<< p.first<<". "<<p.second<< endl;
    }
    return 0;
}