// Reverse the string

/*
#include <iostream>
using namespace std;

// void reverse(string &str,int i,int j){
//     if(i>j){
//         return;
//     }

//     swap(str[i],str[j]);
//     i++;
//     j--;
//     reverse(str,i,j);
// }

bool checkPalindrome(string str,int i,int j){
    if(i>j){
        return true ;
    }
    if(str[i]!=str[j]){
        return false;
    }
    else{
        return checkPalindrome(str,i+1,j-1);
    }
}

int main(){
    /*
    string s ="nishu";
    int i = 0;int j = s.length()-1;
    while(i<j){
        char c = s[i];
        s[i]=s[j];
        s[j]=c;
        i++;
        j--;
    }
    cout<<"string after reverse"<<s;
    */
    /*
    string name = "nishu";
    // reverse(name,0,name.length()-1);
    // cout<<name<<endl;
    // return 0;
    
    bool isPalindrome = checkPalindrome(name,0,name.length()-1);
    if(isPalindrome){
        cout<<"it is palindrome"<<endl;
    }
    else{
        cout<<"it is not a palindrome"<<endl;
    }
    
}
    
    */
//   #include <iostream>
// using namespace std;
// int power(int m,int n){
//     if(n==0){
//         return 1;
//     }
//     else{
//         return m*power(m,n-1);
//     }
// }
// int main(){
//     int m , n;
//     cin>>m;
//     cin>>n;
//     cout<<"m to the power n is :- "<<power(m,n);
// }  
/*
  #include <iostream>
using namespace std;
int power(int a,int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    int ans = power(a,b/2);
    if(b%2 == 0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}
//2^9 = 2(2^4 * 2^4) = 2(2^4)^2 = 2(2^2*2^2)^2 = 2(2^2)^2^2 = 2(2)^2^2^2 .........
//2^1024 = (2^512)^2 = (2^128)^2 = (2^64)^2= (2^32)^2 = (2^16)^2 = (2^8)^2 = (2^4)^2 = (2^2)^2 = (2^1)^2  
int main(){
int m , n;
    cin>>m;
    cin>>n;
    cout<<"m to the power n is :- "<<power(m,n);
}
*/
#include <iostream>
using namespace std;

void bubbleSort(int *arr, int n) {
    if (n == 0 || n == 1) {
        return;
    }
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }
    bubbleSort(arr, n - 1);
}

int main() {
    int arr[5] = {3, 4, 1, 2, 5};
    int size = 5;
    
    bubbleSort(arr, size);

    cout << "Array after bubble sort: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
