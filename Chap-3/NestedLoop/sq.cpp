// same number of rows ans column


#include<iostream>
using namespace std;

int main() {
    int n; 
    cout << "enter the value of n: ";
    cin >> n;

    for(int i=1; i<=n; i++) {
        for( int j=1; j<=n; j++) {
            cout<< j;
        }
        cout << endl;
    }
    return 0;
}

// for(int i=0; i<n; i++) {
//     char ch = 'A';
// for (int j=0; j<n; j++) {
//     cout << ch << " ";
//     ch++;
// }
// cout << endl;
// } return 0;
// }