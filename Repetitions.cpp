/*
You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.
Input
The only input line contains a string of n characters.
Output
Print one integer: the length of the longest repetition.
Constraints
1 \le n \le 10^6
Example
Input:
ATTCGGGA
Output:
3
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    string dnasequence;
    cin>>dnasequence;
    int ans=1;
    int cur=1;
    for(int i=0;i<dnasequence.size()-1;i++){
        if (dnasequence[i+1]==dnasequence[i]){
            cur+=1;
        }else{
            cur=1;
        }
        ans=max(cur,ans);
    }
    cout<<ans;
    return 0;
}