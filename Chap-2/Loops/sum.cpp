#include<iostream>
using namespace std;

int main() {
    int n;
    int sum =0;
    cout <<"enter the value of n: ";
    cin >> n;

    // for Sum
//     for(int i=1; i<=n; i++) {
//         sum += i;
//     }
//     cout << "the sum is: " << sum << endl;
//     return 0;
// }

// For product 
int product=1;

for(int i=1; i<=n; i++){
    product *= i;
}
cout << "the product is: " << product << endl;
return 0;
}