// C++ program to replace all ‘0’
// with ‘5’ in an input Integer
#include <iostream>
using namespace std;

// A iterative function to reverse a number
int reverseTheNumber(int temp)
{
    int ans = 0;
    while (temp > 0) {
        int rem = temp % 10;
        ans = ans * 10 + rem;
        temp = temp / 10;
    }
    return ans;
}

int convert0To5(int num)
{
    // if num is 0 return 5
    if (num == 0)
        return 5;

    // Extract the last digit and
    // change it if needed
    else {
        int temp = 0;

        while (num > 0) {
            int digit = num % 10;
            //if digit is 0, make it 5
            if (digit == 0)
                digit = 5;

            temp = temp * 10 + digit;
            num = num / 10;
        }
        // call the function reverseTheNumber by passing
        // temp
        return reverseTheNumber(temp);
    }
}

// Driver code
int main()
{
    int num = 10120;
    cout << convert0To5(num);
    return 0;
}

// This code is contributed by Vrashank Rao M.