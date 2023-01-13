//Q1 - Given two vectors arr1[] and arr2[] of size m and n sorted in increasing order. Merge the two arrays into a single sorted array of size m+n.

#include<iostream>
#include<vector>
using namespace std;

int push(vector<int> v,vector<int> v1,int size){
    for(int i=0;i<size;i++){
        v.push_back(v1[i]);
    }
}

int main(){
    vector <int> v1={1,3,5};
    vector <int> v2={2,4,6};
    int m=v1.size();
    int n= v2.size();
    vector <int> v;
    for(int i=0;i<m;i++){
        v.push_back(v1[i]);
    }
    for(int i=0;i<n;i++){
        v.push_back(v2[i]);
    }

    for(int i=0;i<(m+n);i++){
        for(int j=0;j<(m+n-1);j++){
            int a=v[j+1];
            if(v[j]>v[j+1]){
                v[j+1]=v[j];
                v[j]=a;
            }
        }
    }
    for(int ele:v){
        cout<<ele<<" ";
    }
    return 0;
}