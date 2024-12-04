/*
num-bin = A no. of 1 & 0   1    B no of 0
~num-bin = A no of 0 & 1   0    B no of 1
~num-bin+1=A no of 0 & 1   1    B no of 0
right set bit = num-bin & 2's complement(~num-bin+1) 

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 35;
    // -x = 1's complement + 1 == 2's complement
    int rsbm = n & -n;

    // Convert to binary string using bitset
    cout << bitset<32>(rsbm) << endl;

    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 43;
//Kernigham's algorithm :- to count number of set bit (1)
    int count = 0 ;
    while(n!=0){
        int rsbm = n & -n ;
        n = n - rsbm ;
        count ++;
    }
cout<<"The number of set bit is "<<count<<endl;
}