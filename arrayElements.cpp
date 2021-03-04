// Accessing array elements using pointers

#include<iostream>

#define MAX 5

using namespace std;

int main(void){
    int numbers[MAX];
    int *ptr = numbers;
    
    // Taking input
    cout << "Enter " << MAX << " Elements: ";
    for(int i = 0; i < MAX; i++){
        cin >> numbers[i];
    }

    // Giving output
    cout << "You enteredL: ";
    for(int i = 0; i < MAX; i++){
        cout << *(numbers + i) << " ";
    }

    return 0;
}
