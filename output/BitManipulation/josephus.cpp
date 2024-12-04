
/*
n                              ans
1                               1
2                               1
3                               3
4                               1
5                               3
6                               5
7                               7
8                               1
express n as 2^x + l , then answer is 2*l -1 

*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i*2<=n){
        i = i*2 ;
    }

    int l = n - i ;
    cout<< 2*l + 1 ;
}