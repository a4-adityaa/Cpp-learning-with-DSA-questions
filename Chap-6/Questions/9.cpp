// program to find odd numbers in array and store in same array

#include<iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter size: ";
    cin >> size;
    
    int arr[size];
    cout << "Enter elements: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    
    int oddIndex = 0; 
    
    for(int i = 0; i < size; i++){
        if(arr[i] % 2 != 0){  
            arr[oddIndex] = arr[i];  
            oddIndex++;
        }
    }
    
    cout << "Odd numbers: ";
    for(int i = 0; i < oddIndex; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}