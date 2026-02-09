// Program using malloc for dynamic memory allocation

#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    
    // Allocate memory using malloc (uninitialized)
    int* arr = (int*)malloc(n * sizeof(int));
    
    if(arr == NULL){
        cout << "Memory allocation failed!" << endl;
        return 1;
    }
    
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    cout << "Array elements: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Free allocated memory
    free(arr);
    
    return 0;
}
