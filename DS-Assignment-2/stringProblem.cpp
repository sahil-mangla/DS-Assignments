#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    string s3 = "abcd";

    getline(cin, s1);
    getline(cin, s2);
    
    // Concatenate
    cout << s1 + s2 << endl;
    s1.append(s2);

    // Reverse
    int n = s3.length();
    int start = 0;
    while(start < n/2){
        swap(s3[start], s3[n-start-1]);
        start++;
    }
    cout << s3 << endl;

    // Remove Vowels
    string res = "";
    for(char c : s3){
        if(c!='a' && c!='e' && c!='i' && c!='o' && c!='u' &&
           c!='A' && c!='E' && c!='I' && c!='O' && c!='U'){
            res += c;
        }
    }
    cout << res << endl;

    // Convert to lowercase
    for(int i=0; i<s1.length(); i++){
        s1[i] = tolower(s1[i]);
    }
    cout << s1 << endl;
    
    //Upper
    for(int i=0; i<s1.length(); i++){
        s1[i] = toupper(s1[i]);
    }
    cout << s1 << endl;

    //ALPHABATICAL ORDER
    sort(s1.begin(),s1.end());
    
    cout<<s1<<endl;

    return 0;
}
