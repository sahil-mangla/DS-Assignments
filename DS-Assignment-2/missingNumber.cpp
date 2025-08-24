#include<iostream>
using namespace std;

int main(){

    vector<int> arr = {1,2,3,5,6,7,8};
    int n = arr.size();
    int cnt = 1;
    for(int i=0;i<n;i++){
       if(arr[i]!=cnt){
        cout<<"Missing number is: "<<cnt<<endl;
        break;
       }
       cnt++;
    }
    return 0;
}