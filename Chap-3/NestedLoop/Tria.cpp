
// for traingle pattern

#include<iostream>
using namespace std;

int main() {
    int n;
    
    cout<< "enter the value of n: " ;
    cin >> n;

//     for( int  i=0; i<n; i++) {
//         for(int j=0; j<=i; j++){
//             cout<< "*" << " " ;
//         } 
//         cout << endl;
//     } 
//     return 0;
// }



// for inverted traingle pattern

for( int i=0; i<n; i++) {
    for( int j=n; j>i; j--) {
        cout<< "*" << " " ;
    }
    cout << endl;
}
return 0;
}