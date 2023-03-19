#include <iostream>
#include <cstdlib>
#include <time.h> 
using namespace std;

int main() {
    setlocale(0, "ru");

    int size = 20;
    int* arr = new int[size]; 

    for (int i = 0; i < size; i++) 
        arr[i] = rand() % 2; 

    for (int i = 0; i < size; i++) { 
        int counter = 0;
        for (int j = 0; j < size - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int bubble = arr[j]; 
                arr[j] = arr[j + 1]; 
                arr[j + 1] = bubble; 
                counter++;
            }
        }
        if (counter == 0) {
            break;
        }
    }
  
}