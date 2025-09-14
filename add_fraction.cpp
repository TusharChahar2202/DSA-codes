#include <iostream>
using namespace std;

int gcd(int a , int b){
    if(a == 0) return b;
    return gcd(b % a , a);
}

void addFraction(int num1, int den1, int num2, int den2) {
    int deno = gcd(den1 , den2);       // Step 1: GCD of denominators
    deno = (den1 * den2) / deno;       // Step 2: LCM of denominators
    
    int num = num1 * (deno / den1) + num2 * (deno / den2); // ✅ FIXED

    int common_factor = gcd(num, deno); // Step 3: Reduce to simplest form
    
    num = num / common_factor;
    deno = deno / common_factor;
    
    cout << num << "/" << deno << endl;
}

int main() {
    int num1, den1, num2, den2;
    cin >> num1 >> den1 >> num2 >> den2;
    
    addFraction(num1, den1, num2, den2);
    
    return 0;
}