// Rassul Khalizov
// Lab 9
// 11/17/24

#include <iostream> 
#include <cstdlib> 
#include <ctime> 
using namespace std; 
int main() {

srand(time(0)); 

const int ARRAY_SIZE = 100; // Size of the array 
int alpha[ARRAY_SIZE]; 
for (int i = 0; i < ARRAY_SIZE; i++) {
alpha[i] = rand() % 100 + 1; // Random number between 1 and 100 
} 
// calculates the average
int sum = 0; 
for (int i = 0; i < ARRAY_SIZE; i++) {
    sum += alpha[i]; 
} 
double average = static_cast<double>(sum) / ARRAY_SIZE;
cout << "The average of the elements is: " << average << endl; 
// Counts how many elements are equal to 100
int countEqual100 = 0; 
for (int i = 0; i < ARRAY_SIZE; i++) { 
    if (alpha[i] == 100) { 
        countEqual100++; 
        } 
    } 
cout << "The number of elements exactly equal to 100 is: " << countEqual100 << endl; 
/*
The average of the elements is: 52.5
The number of elements exactly equal to 100 is: 3
*/
return 0; 
}

