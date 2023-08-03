#include <bits/stdc++.h>
using namespace std;
 



int main() {
//     Taking Input From user and storing it into array
    int n ;
    cin >> n;
    int input_arr[n];
        for (int i = 0 ; i < n ; i ++){
            cin >> input_arr[i];
           // cout << input_arr[i]+1;  // ye line print krti hai 
        }
    
//     making a zero array
    int hash_arr[15] = {0} ;  // ye zero array bna deta hai of 15 elements
    
    for (int j = 0 ; j < n ; j++){
        hash_arr[input_arr[j]] +=1;
    }
    
    
int q;
    cin >> q;
    for(int i = 0 ;i < q ; i++)
        int number;
        cout << "matching number dalo";
        cin >> number;
        // fetch
        cout << hash_arr[number] << endl;
        
    }
    
    return 0;
}



// inputs of the program
/* 5
4 1 2 3 1
5
4
2
14
6
1
  */
