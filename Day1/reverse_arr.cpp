// int* reverse(int arr[]) {
//     static int new_arr[6];

//     for (int i = 0; i < 6; i++) {
//         new_arr[i] = arr[6 - i - 1];
//     }

//     return new_arr; // VALID
// }
#include <iostream>
using namespace std;

// int* reverse(int arr[],int n){
//     int *new_arr = new int[n];
//     for(int i = 0;i<n;i++){
//         new_arr[i] = arr[n-i-1];
//     }
//     return new_arr;
// }
// int main(){
//     int arr[6] = {1,2,3,4,5,6};
//     int* rev_arr = reverse(arr,6);
//     int n=6;
//     // printing reversed arr
//     for (int i = 0; i < n; i++) {
//         cout << rev_arr[i] << " ";
//     }

//     delete[] rev_arr; // free memory in C++
// }


void reverse(int arr[], int n) {
    for (int i = 0; i < n/2; i++) {
        int tmp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = tmp;
    }
}
int main(){
    int arr[]={1,2,3,4,5,6};
     reverse(arr,6);
        for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
}