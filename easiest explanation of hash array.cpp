#include<bits/stdc++.h>
using namespace std;


int main() {
    int n = 5;
    int arr[5] = {1,4,1,6,7};
    int zrr[8] = {0};
    
    for (int i= 0 ; i < n ; i++) {
        zrr[arr[i]] = zrr[arr[i]] +1; // adding elements 
    }
    
    
    for (int k = 1; k < n ; k++){
        cout << zrr[k] << endl ;
    }


}
