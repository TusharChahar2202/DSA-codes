#include<bits/stdc++.h>
using namespace std;


int Add(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main(){
    int num;
    cin >> num;

    cout<<Add(num)<<endl;
    return 0;

}
