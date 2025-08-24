#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,6,7,8};
    int n = arr.size();

    int low = 0, high = n - 1, ans = n; 
    
    while(low <= high){
        int mid = low + (high - low) / 2;
        
        if(arr[mid] != mid + 1){
            ans = mid; 
            high = mid - 1; 
        }else{
            low = mid + 1;  
        }
    }

    cout << "Missing Number is: " << ans + 1 << endl;
    return 0;
}
