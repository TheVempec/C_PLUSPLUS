#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    int arr[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
     
     sort(arr, arr +12);
     
     cout<<"Increase: ";
     
    for (int i = 0; i < 12; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    reverse(arr, arr +12);
    
     cout<<"Decrease: ";
     
    for (int j = 0; j < 12; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;

    return 0;
}
