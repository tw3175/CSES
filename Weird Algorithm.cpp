#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    vector<long long> ans;
    ans.push_back(n);
    while (n!=1){
        if(n%2==1){
            n*=3;
            n+=1;
        }else{
            n/=2;
        }
        ans.push_back(n);
    }
    for(long x:ans){
        cout<<x<<" ";
    }

    return 0;
}