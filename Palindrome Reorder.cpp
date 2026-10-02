/*
Time limit: 1.00 s
Memory limit: 512 MB
Given a string, your task is to reorder its letters in such a way that it becomes a palindrome (i.e., it reads the same forwards and backwards).
Input
The only input line has a string of length n consisting of characters A–Z.
Output
Print a palindrome consisting of the characters of the original string. 
You may print any valid solution. If there are no solutions, print "NO SOLUTION".
Constraints
1 \le n \le 10^6
Example
Input:
AAAACACBA
Output:
AACABACAA
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int> cnt(26,0);
    for(int i=0;i<s.size();i++){
        cnt[s[i]-'A']+=1;
    }

    int odd=0;
    int middle=0;
    for(int i=0;i<26;i++){
        if(cnt[i]%2==1){
            odd++;
            middle=i;
        }
    }
    
    if(odd>1){
        cout<<"NO SOLUTION";
    }else{
        string ans="";
        string right="";
        for(int i=0;i<26;i++){
            right+=string(cnt[i]/2,('A'+i));
        }
        ans+=right;
        if(odd){
            ans+=(middle+'A');
        }
        reverse(right.begin(),right.end());
        ans+=right;
        cout<<ans;
    }
    return 0;
}