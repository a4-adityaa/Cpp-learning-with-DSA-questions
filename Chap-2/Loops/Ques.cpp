// print only odd nuumbers
#include<iostream>
using namespace std;

int main() {
    int n;
    cout<< "enter the value of n: ";
    cin>> n;
    int OddSum =0;

//     cout << " odd numbers are: " << endl;
//     for(int i=1; i<=n; i++){
//         if(i%2 !=0) {
//             cout << i << endl;
//         }
//     }
// return 0;
// }


for(int i=1; i<=n; i++) {
    if(i%2!=0) {
        OddSum += i;
        
    }
}
cout << " the sum of odd numbers are: " << OddSum << endl;
return 0;
}