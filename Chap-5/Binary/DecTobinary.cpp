#include<iostream>
using namespace std;

int decTobinary(int decNum){
    int ans=0; int pow=1;

    while(decNum>0){
        int rem =decNum % 2;
        decNum/= 2;

        ans+= (rem *pow);
        pow *= 10;
    }
    return ans;
}

int main(){
    int decNum;
    cout <<"enter the decimal number: ";
    cin>> decNum;

    cout<< "dec to binary is: "<< decTobinary(decNum) <<endl;
    return 0;
}