#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(vector<int> arr1, vector<int> arr2) {
    int i = 0, j = 0;
    vector<int> ans;
    int n = arr1.size();
    int m = arr2.size();

    while (i < n && j < m) {
        if (arr1[i] > arr2[j]) {
            ans.push_back(arr2[j]);
            j++;
        } else {
            ans.push_back(arr1[i]);
            i++;
        }
    }

    while (i < n) ans.push_back(arr1[i++]);
    while (j < m) ans.push_back(arr2[j++]);

    return ans;
}

int main() {
    vector<int> arr1 = {1, 2, 5, 8, 9};
    vector<int> arr2 = {3, 4, 5, 6, 19};

    vector<int> result = merge(arr1, arr2);

    for (int x : result)
        cout << x << " ";
}
