#include <bits/stdc++.h>
using namespace std;

int main() {

    string s ;
    cin >> s;
    int a = s.size();
    // cout << a;
    // cout << s[0] << " " << endl;
    
    
//     precomputing hash array
    int hash[256] = {0};
    
    for (int i = 0 ;i < a ; i++){
        hash[s[i]]++;    
    }
    
    int q ;
    cin >>q;
    for (int j = 0 ; j <q; j++){
    char c;
        cin >>c;
        cout << "The value of " << "'" << c <<"'"<< " "<< "int he given string is: " <<hash[c] << endl;
    }
return 0;
}
