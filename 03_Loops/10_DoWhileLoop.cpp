#include <iostream>
using namespace std;
int main()
{
    int i = 1; // Initialize variable i with value 1 (loop will start from 1)

    do // Start of do-while loop (this block will run at least once)
    {
        cout << i << " "; // Print the current value of i followed by a space
        i++;              // Increase the value of i by 1 (increment)
    } while (i <= 10); // Condition: repeat the loop while i is less than or equal to 10
}