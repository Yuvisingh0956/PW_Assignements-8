//Q5 - Given a vector arr[] sorted in increasing order of n size and an integer x, find the number of unique pairs that exist in the array whose absolute sum is exactly x.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v={1,2,3,4,6};
    int x=7,ans=0;
    int m=v.size();
    int i=0,j=m-1;
    while(i<j){
        if (v[i]+v[j]==x){
            ans++;
            i++;
            j--;
        }
        else if(v[i]+v[j]>x){
            j--;
        }
        else{
            i++;
        }
    }
    cout<<ans;

    return 0;
}