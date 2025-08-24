#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 2, 3, 4, 4, 5};
    sort(arr.begin(), arr.end());

    int distinct = 1; 
    for(int i=1; i<arr.size(); i++) {
        if(arr[i] != arr[i-1]) distinct++;
    }

    cout << "Total distinct elements = " << distinct << endl;
}
