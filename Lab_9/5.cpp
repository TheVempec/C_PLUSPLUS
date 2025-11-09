#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm> 
#include <limits> 
using namespace std;

int main() {
    
    const int ARRAY_SIZE = 10;
    
    int randomM[ARRAY_SIZE] = {};

    int largest = numeric_limits<int>::min(); 
    int secondLargest = numeric_limits<int>::min(); 
    
    srand(time(NULL));

    cout << "The given array: ";
    
    for (int i = 0; i < ARRAY_SIZE; i++) {
        
        randomM[i] = rand() % 1000; 
        cout << randomM[i] << " ";
    }
    cout << endl;
    
    for (int i = 0; i < ARRAY_SIZE; i++) {
        int current = randomM[i];
        
        if (current > largest) {
            
            secondLargest = largest; 
            
            largest = current;
        } 
        
        else if (current > secondLargest && current < largest) {
            
            secondLargest = current;
        }
    }
    
    if (secondLargest == numeric_limits<int>::min()) {
         cout << "The array does not contain enough unique elements to determine the second largest." << endl;
    } else {
        cout << "The largest element: " << largest << endl;
        cout << "The second largest element: " << secondLargest << endl;
    }

    return 0;
}