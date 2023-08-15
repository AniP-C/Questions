#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int n ,m;
    cin >> n >>m;
   
    vector<int> vec;
    if (n)
     for (int i = 1; i <= min(n, m); i++) {
        if (n % i == 0 && m % i == 0) {
            vec.push_back(i);
        }
    }
    
    
    
    
     for (int i = 0; i < vec.size(); i++) {
        cout << "Stored divisor at index " << i << ": " << vec[i] << endl;
    }
    
    
return 0;
}
