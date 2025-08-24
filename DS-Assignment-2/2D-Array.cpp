#include <iostream>
using namespace std;

int main() {
    int n = 4; 

    // (a) Diagonal Matrix → needs only n elements
    int diag[4] = {5, 8, 9, 12};
    cout << "Diagonal Matrix:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) cout << diag[i] << " ";
            else cout << 0 << " ";
        }
        cout << "\n";
    }

    // (b) Tri-diagonal Matrix → needs 3n-2 elements
    int tri[10] = {2, 3, 4,    
                   5, 6, 7, 8, 
                   9, 10, 11}; 
    cout << "\nTri-diagonal Matrix:\n";
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) cout << tri[n-1+i] << " ";      
            else if(i==j+1) cout << tri[i-1] << " ";  
            else if(i+1==j) cout << tri[2*n-1+i] << " "; 
            else cout << 0 << " ";
        }
        cout << "\n";
    }

    // (c) Lower Triangular Matrix → n(n+1)/2 elements
    int lower[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    cout << "\nLower Triangular Matrix:\n";
    k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>=j) cout << lower[i*(i+1)/2 + j] << " ";
            else cout << 0 << " ";
        }
        cout << "\n";
    }

    // (d) Upper Triangular Matrix → n(n+1)/2 elements
    int upper[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "\nUpper Triangular Matrix:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<=j){
                int index = (i*n - (i*(i-1))/2) + (j-i);
                cout << upper[index] << " ";
            } else cout << 0 << " ";
        }
        cout << "\n";
    }

    // (e) Symmetric Matrix → store lower part only
    int sym[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "\nSymmetric Matrix:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>=j) cout << sym[i*(i+1)/2 + j] << " ";
            else cout << sym[j*(j+1)/2 + i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
