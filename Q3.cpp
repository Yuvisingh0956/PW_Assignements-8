//Q3 - Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists a pair in the array whose absolute difference is exactly x.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v={5,6,7,8,9};
    int x=4,count=0;
    int m=v.size(); //length of vector
    //doing absolute difference of elements of vector
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(abs(v[i]-v[j])==x){
                count++;  //count stores number of required pairs
            }
        }
    }
    if(count>0){
        cout<<"yes";
    }
    else{
        cout<<"No";
    }

    return 0;
}