#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
    bool isValid(vector<int> &arr , int k , int n , int mid){
        int students = 1;
        int pages = 0;
        for(int i = 0 ; i < n ;i++){
            if(arr[i] > mid)return false;
            if(arr[i] + pages  <= mid){
                pages += arr[i];
            }
            else{
                students++;
                pages = arr[i];
            }
        }
        return students > k ?false: true;
    };
  public:
    int findPages(vector<int> &arr, int k) {
        int n = arr.size();
        if(k > n)return -1;
        int ans = -1;
        int sum = 0;
        for(int i = 0 ; i < n ; i++){
            sum+=arr[i];
        }
        int start = 0 , end = sum;
        while(start <= end){
            int mid = start + (end - start)/2;
            if(isValid(arr ,  k , n , mid)){
                ans = mid;
                end = mid - 1;
            }
            else start = mid + 1;
        }
        return ans;
    }
};
int main(){
    vector<int> arr = {15 , 17, 20};
    int k = 2;
    Solution sol;
    int result = sol.findPages(arr, k);
    cout << "Minimum number of pages: " << result << endl;
    return 0;
}
