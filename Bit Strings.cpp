/*
Your task is to calculate the number of bit strings of length n.
For example, if n=3, the correct answer is 8, because the possible bit strings are 000, 001, 010, 011, 100, 101, 110, and 111.
Input
The only input line has an integer n.
Output
Print the result modulo 10^9+7.
Constraints

1 \le n \le 10^6

Example
Input:
3

Output:
8
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    const long long modulo=1000000007;
    long long ans=1;
    for(int i=1;i<=n;i++){
        ans=2*ans%modulo;
    }
    cout<<ans;
    return 0;
}