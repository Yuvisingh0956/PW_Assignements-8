//Q4 - Given a vector arr[] sorted in increasing order. Return an array of squares of each number sorted in increasing order. Where size of vector 1<size<101.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    //coverting each element of vector to it's square
    vector <int> v={-5,-4,-3,-2,-1};
    int size=v.size();
    for(int i=0;i<size;i++){
        v[i] *=v[i];
    }
    
    //sorting the square vector
    for(int i=0;i<(size);i++){
        for(int j=0;j<(size-1);j++){
            int a=v[j+1];
            if(v[j]>v[j+1]){
                v[j+1]=v[j];
                v[j]=a;
            }
        }
    }

    //Printing the required vector
    for(int ele:v){
        cout<<ele<<" ";
    }

    return 0;
}