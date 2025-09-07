#include<bits/stdc++.h>
using namespace std;

bool isLeapYear(int year){
    if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                return true;
            }
            return false;
        }
        return true;
    }
    return false;
}

int main(){
int year;
cin >> year;
if(isLeapYear(year)){
    cout << year << " is a leap year";
}
else{
    cout << year << " is not a leap year";
} 
return 0;
};

//command to run after compile  
