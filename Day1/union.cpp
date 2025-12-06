

#include <iostream>
#include <vector>
#include <set>

using namespace std;
//pehle ek ka unique element daal do phir doosre array ka daal do
vector<int> unionArray(vector<int>arr1, vector<int>arr2){
    set<int>st;
    for(int i = 0;i<arr1.size();i++){
        st.insert(arr1[i]);
    }

    for(int i = 0;i<arr2.size();i++){
        st.insert(arr2[i]);
    }
    return vector<int>(st.begin(),st.end());
}

int main() {
    vector<int> arr1 = {1, 2, 3};
    vector<int> arr2 = {2, 3, 4};

    vector<int> result = unionArray(arr1, arr2);

    for (int x : result) 
        cout << x << " ";
}