
//last and first element ka multiply gr -ve h to swap
//else if dono element less than 0 hai to-> j--, check while(a[j]<0 then again swap)

// -1,2,4,-3,6,-8(i=0,j=n-1)
// 1-*-8->(j=n-2) while(check a[j-2]<0) then a[j] swap a[i] then i++
#include <iostream>
#include <vector>
#include <map>
using namespace std;
vector<int> negpos(vector<int>& a) {
    int i = 0;
    int j = a.size() - 1;

    while (i < j) {
        if (a[i] < 0 && a[j] >= 0) {
            i++; 
            j--;
        }
        else if (a[i] >= 0 && a[j] < 0) {
            swap(a[i], a[j]);
            i++;
            j--;
        }
        else if (a[i] >= 0 && a[j] >= 0) {
            j--;
        }
        else {
            i++;
        }
    }
    return a;
}

int main(){
    vector<int>arr = {3,-4,2,-1,3};
    negpos(arr);
    for(auto it:arr){
        cout<<it<<endl;
    }
}

