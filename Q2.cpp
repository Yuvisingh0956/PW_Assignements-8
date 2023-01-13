//Q2 - Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists a pair in the array whose sum is exactly x.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v={1,2,3,4};
    int x=5,count=0;
    int m=v.size();
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(v[i]+v[j]==x){
                count++;
            }
        }
    }
    if(count>0){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}