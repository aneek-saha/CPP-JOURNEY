#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << endl;

    // Variables to track our totals
    int totalEven = 0;
    int totalOdd = 0;
    int totalDivBy3 = 0;
    int sumEven = 0;

    // Loop from 1 up to the number entered by the user
    for(int i = 1; i <= num; i++) {
        cout << "Number: " << i << "\t-> "; // Using \t for cleaner spacing
        
        // 1. Check if Even or Odd
        if(i % 2 == 0) {
            cout << "Even";
            totalEven++;      // Increase even count by 1
            sumEven += i;     // Add the number to our even sum
        } else {
            cout << "Odd";
            totalOdd++;       // Increase odd count by 1
        }
        
        // 2. Check if Divisible by 3
        if(i % 3 == 0) {
            cout << ", Divisible by 3";
            totalDivBy3++;    // Increase divisible by 3 count by 1
        }
        
        // Move to the next line for the next number
        cout << endl;
    }

    // Print the final summary
    cout << "\n---------------------------" << endl;
    cout << "Total Even Numbers: " << totalEven << endl;
    cout << "Total Odd Numbers: " << totalOdd << endl;
    cout << "Total Divisible by 3: " << totalDivBy3 << endl;
    cout << "Sum of Even Numbers: " << sumEven << endl;
    cout << "---------------------------" << endl;

    return 0;
}