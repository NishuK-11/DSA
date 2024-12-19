linear search :-
bool isPresent(int*arr,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==value){
            return true;
        }
    }
    return false;
}
time complexity in linear search :- O(N)
space complexity = O(1)

Time Complexity -> it is the amount of time taken by an algo to run
--> as a function of length of input
Time Complexity representation --> Big O notation / theta / omega
Big O -> upper bound dikhati hai -> worst to worst case 
omega -> lower bound

constant time -> O(1) --> jab pta hai ki n baar hi chalega int i=1
Ex:-O(N)
for(int i =0 ;i<10;i++){
    cout<<"hello";
}
linear time -> O(n)
logarithmic time->binary search
quadratic time->O(n^2) --> 2 for loop
cubic ->O(n^3)--> 3 for loop

Increasing order of complexity
O(1) -> O(logN) -> O(N) -> O(N logN) -> O(N^2) -> O(N^3) -> O(2^n) -> O(N!)
f(x)=2n^2 + 3n --> O(n^2)(lower degree ignore karo)
f(x)=n^2+logn --> O(n^2)(log n ki kam hoti hai)

O(N!),O(N^6)     input range LESS THAN EQUAL TO [10...11]
O(2^N*N^2)       LESS THAN EQUAL TO [15...18]
O(n^4)           LESS THAN EQUAL TO 100
O(n^3)           LESS THAN EQUAL TO 400
O(n^2*logn)      LESS THAN EQUAL TO 2000
O(n^2)           LESS THAN EQUAL TO 10^4
O(nlogn)         LESS THAN EQUAL TO 10^6
O(n),O(logn)     LESS THAN EQUAL TO 10^8


space complexity:-
vector<int>v(n)--> O(n)(fixed ni hai isiliye)

int arr[5]--> O(1)(fixed hai isiliye)

for(int i=0;i<n;i++){
    vector<int>v(n);
    for(  ; ; ){

    }
}iski space complexity bhi O(n) hi hogi 

Time complexity:-
int fact(int n){
    //base case
    if(n==0){
        return 1;
    }
    //rec call
    return n*fact(n-1);
}