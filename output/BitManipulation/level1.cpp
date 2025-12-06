

/*
 int x= 57;//
    NIBBLE -> 4 BITS (2^4) --> -2^3 TO 2^3-1(-8 TO 7)
    byte-8 bit(can represent 2^8 numbers)  --> -2^7 TO 2^7-1
    short = 16 bit(can represent 2^16 numbers) --> -2^15 TO 2^15-1
    int = 32 bits (can represent 2^32 numbers) --> -2^31 TO 2^31-1
    long = 64 bits (can represent 2^64 numbers) --> -2^63 TO 2^63-1
    ribble=4 bits(2^4 distinct numbers)

    why failed? --> negative number,+-0,approach 3 :- value ke liye 2's complement dekhti hai
1 MSB --> 2's complent = i's complement + binary 1
0 MSB --> simple convert

As a nibble (4 bits) 1010 is -6  but as a byte (8 bits ) it is 10
+ sign
--> convert to binary
--> fit in bits --> 16- 10000 , as nibble it is 0000(last 4) but as byte , it is 00010000(8 bits)

- sign
--> leave the negative sign , convert to binary
--> fit in bits 
--> store 2's complement

>>>(triple right shift) ~ (1's complement)  -x(2's complement)
|(OR)

YOU ARE GIVEN A NUMBER N:-
1. PRINT THE NUMBER PRODUCED ON SETTING ITS ith  bit.//num-bin OR (1<<i)
2. PRINT THE NUMBER PRODUCED ON UNSETTING ITS ith  bit.// num-bin AND ~(1<<i)
3. PRINT THE NUMBER PRODUCED ON toggling its kth bit.// num-bin XOR 1<<k
4. also, check if its m-th bit is on or off . print true if it is on, otherwise print "false"//(n&(1<<i))==0?false:true;


*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 35;
    int i, j, k, m; // Declare m here

    // Input i, j, k, and m
    cin >> i;
    cin >> j;
    cin >> k;
    cin >> m;

    int onmask = (1 << i);
    int offmask = ~(1 << j);
    int tmask = (1 << k);
    int cmask = (1 << m);

    // Perform bitwise operations and output the results
    cout << (n | onmask) << endl;    // Set the ith bit
    cout << (n & offmask) << endl;   // Clear the jth bit
    cout << (n ^ tmask) << endl;     // Toggle the kth bit

    bool p = n & cmask;              // Check if the mth bit is set
    cout << (p == 0 ? "false" : "true") << endl;

    return 0;
}
