#include<bits/stdc++.h>
using namespace std;
string hexadecimal(int num){
    if(num == 0)return"0";
    unsigned int n = num & 0xFFFFFFFF;
    
    string hexa = "0123456789abcdef";
    string ans = "";
    
    while(n > 0){
        int digit = n % 16;
        ans.push_back(hexa[digit]);
        n /= 16;
    }
    reverse(ans.begin(),ans.end());
    return  ans;
}
    

int main(){
    int num ;
    cin >> num;
    cout << hexadecimal(num);
    return 0;
   
    
}