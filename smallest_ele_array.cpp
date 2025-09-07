#include<bits/stdc++.h>
using namespace std;

int helper(vector<int> &arr){
    int smallest = arr[0];
    for(int i=1; i<arr.size(); i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    return smallest;
}
int main(){
   vector<int> arr1 = {34, 15, 88, 2};
   vector<int> arr2 = {34, -345, -1, 100};
   cout << helper(arr1);
   return 0;
};
