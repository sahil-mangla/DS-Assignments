#include <iostream>
#include <vector>
using namespace std;


long long mergeAndCount(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L(n1), R(n2);
    for(int i=0;i<n1;i++) L[i] = arr[left+i];
    for(int j=0;j<n2;j++) R[j] = arr[mid+1+j];

    int i=0, j=0, k=left;
    long long invCount = 0;

    while(i<n1 && j<n2){
        if(L[i] <= R[j]){
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
            invCount += (n1 - i); 
        }
    }

    while(i<n1) arr[k++] = L[i++];
    while(j<n2) arr[k++] = R[j++];

    return invCount;
}


long long mergeSortAndCount(vector<int>& arr, int left, int right){
    long long invCount = 0;
    if(left < right){
        int mid = left + (right-left)/2;
        invCount += mergeSortAndCount(arr, left, mid);
        invCount += mergeSortAndCount(arr, mid+1, right);
        invCount += mergeAndCount(arr, left, mid, right);
    }
    return invCount;
}

int main(){
    vector<int> arr = {2, 4, 1, 3, 5};
    int n = arr.size();

    long long inversions = mergeSortAndCount(arr, 0, n-1);

    cout << "Number of inversions: " << inversions << endl;

    return 0;
}
