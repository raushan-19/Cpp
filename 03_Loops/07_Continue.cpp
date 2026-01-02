// Print 1 to 20 except 3 & 8.

#include <iostream>                 
using namespace std;               
int main()                        
{
    for (int i = 1; i <= 20; i++)  // Loop starts: i begins at 1 and increases up to 20 (inclusive)
    {
        if (i == 3) continue;      // If i becomes 3, skip the rest of the loop and move to next number
        if (i == 8) continue;      // If i becomes 8, skip the rest of the loop and move to next number
        
        cout << i << " ";          // Print the current value of i followed by a space
    }
}          