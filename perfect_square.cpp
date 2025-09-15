#include<bits/stdc++.h>
using namespace std;

bool perfect_square(int n){
    if(n < 0) return false;
    int left = 0 , right = n;
    while(left <= right){
        int mid = left + (right - left) / 2;
        long long square = (long long)mid * mid; // Use long long to prevent overflow
        if(square == n) return true;
        else if(square < n) left = mid + 1;
        else right = mid - 1;
    }
    return false;
}
int main() {
    int n;
    cin >> n;
    if (perfect_square(n))
        cout << "true\n";
    else
        cout << "false\n";
    return 0;
}