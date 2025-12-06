// #include <iostream>
// #include <vector>
// using namespace std;

// void merge(vector<int>& arr1, vector<int>& arr2) {
//     int n = arr1.size();
//     int m = arr2.size();

//     for (int i = 0; i < n; i++) {
//         if (arr1[i] > arr2[0]) {

//             // swap first element of arr2 with arr1[i]
//             swap(arr1[i], arr2[0]);

//             // Now fix arr2 (place arr2[0] at correct position)
//             int first = arr2[0];
//             int k = 1;

//             while (k < m && arr2[k] < first) {
//                 arr2[k - 1] = arr2[k];
//                 k++;
//             }

//             arr2[k - 1] = first;
//         }
//     }
// }

// int main() {
//     vector<int> arr1 = {1, 4, 8, 9};
//     vector<int> arr2 = {2, 3, 6, 7};

//     merge(arr1, arr2);

//     for (int x : arr1) cout << x << " ";
//     cout << endl;
//     for (int x : arr2) cout << x << " ";
// }




#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int nextGap(int gap) {
    if (gap <= 1) return 0;
    return (gap / 2) + (gap % 2);
}

void merge(vector<int>& arr1, vector<int>& arr2) {
    int n = arr1.size();
    int m = arr2.size();

    int gap = nextGap(n + m);

    while (gap > 0) {
        int i = 0;
        int j = gap;

        while (j < n + m) {

            int a, b;

            // left in arr1
            if (i < n)
                a = arr1[i];
            else
                a = arr2[i - n];

            // right in arr1 or arr2
            if (j < n)
                b = arr1[j];
            else
                b = arr2[j - n];
                
            // swap if needed
            if (a > b) {
                if (i < n && j < n)
                    swap(arr1[i], arr1[j]);
                else if (i < n && j >= n)
                    swap(arr1[i], arr2[j - n]);
                else
                    swap(arr2[i - n], arr2[j - n]);
            }

            i++;
            j++;
        }

        gap = nextGap(gap);
    }
}

