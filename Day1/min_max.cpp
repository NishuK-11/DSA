//find min and max using min number of comparisons

//recusrion(2 ko compare krke min and max store kr liya, phir next do ke liye call kr diya)


#include <iostream>
#include <climits>

using namespace std;
 void recursion(int arr[],int n,int i,int j,int &maxi,int &mini){
    if (i >= n || j >= n) return;

    if (arr[i] > arr[j]) {
        maxi = max(maxi, arr[i]);
        mini = min(mini, arr[j]);
    } else {
        maxi = max(maxi, arr[j]);
        mini = min(mini, arr[i]);
    }
    recursion(arr, n, i + 2, j + 2, maxi, mini);
 }
 int main(){
    int arr[6] = {1,4,6,2,0,9};
    int maxi = INT_MIN;int mini = INT_MAX;
    recursion(arr,6,0,1,maxi,mini);
     cout << "Max = " << maxi << endl;
    cout << "Min = " << mini << endl;
 }


