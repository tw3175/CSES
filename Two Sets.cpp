/*
Time limit: 1.00 s
Memory limit: 512 MB

Your task is to divide the numbers 1,2,\ldots,n into two sets of equal sum.
Input
The only input line contains an integer n.
Output
Print "YES", if the division is possible, and "NO" otherwise.
After this, if the division is possible, print an example of how to create the sets. 
First, print the number of elements in the first set 
followed by the elements themselves in a separate line, 
and then, print the second set in a similar way.
Constraints

1 \le n \le 10^6

Example 1
Input:
7

Output:
YES
4
1 2 4 7
3
3 5 6
Example 2
Input:
6

Output:
NO*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%4==2||n%4==1){
        cout<<"NO"<<endl;
    }else{
        if(n%4==0){
            cout<<"YES"<<endl;
            vector<int> sub1;
            vector<int> sub2;
            for(int i=1;i<=n;i++){
                if(i%4==1 || i%4==0){
                    sub1.push_back(i);
                }else{
                    sub2.push_back(i);
                }
            }
            cout<<sub1.size()<<endl;
            for(int i=0;i<sub1.size();i++){
                cout<<sub1[i];
                if(i!=sub1.size()-1){
                    cout<<" ";
                }else{
                    cout<<endl;
                }
            }
            cout<<sub2.size()<<endl;
            for(int i=0;i<sub2.size();i++){
                cout<<sub2[i];
                if(i!=sub2.size()-1){
                    cout<<" ";
                }else{
                    cout<<endl;
                }
            }
        }else{
            //n%4=3
            cout<<"YES"<<endl;
            vector<int> sub1;
            vector<int> sub2;
            sub1.push_back(1);
            sub1.push_back(2);
            sub2.push_back(3);
            for(int i=4;i<=n;i++){
                if(i%4==0||i%4==3){
                    sub1.push_back(i);
                }else{
                    sub2.push_back(i);
                }
            }
                        cout<<sub1.size()<<endl;
            for(int i=0;i<sub1.size();i++){
                cout<<sub1[i];
                if(i!=sub1.size()-1){
                    cout<<" ";
                }else{
                    cout<<endl;
                }
            }
            cout<<sub2.size()<<endl;
            for(int i=0;i<sub2.size();i++){
                cout<<sub2[i];
                if(i!=sub2.size()-1){
                    cout<<" ";
                }else{
                    cout<<endl;
                }
            }
        }
    }
    return 0;
}