//Q6 - Given a vector array vs, print the count of triplets [vs[i], vs[j], vs[k]] such that i != j, i != k, and j != k, and vs[i] + vs[j] + vs[k] == x. Where k is an integer given by the user.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v={-1,0,1,2,-1,4};
    int x=0,sum=0,count=0;
    for(int i=0;i<v.size();i++){
        int j=i+1,k=v.size()-1;
        int val=x-v[i];
        while(j<k){
            sum=v[j]+v[k];
            if(sum<val){
                j++;
            }
            else if(sum>val){
                k--;
            }
            else{
                vector <int> temp={v[i],v[j],v[k]};
                count++;
                while(j<k && v[j]==temp[1]){
                    j++;
                }
                while(j<k && v[k]==temp[2]){
                    k--;
                }
            }
        }
        while(i+1<v.size() && v[i]==v[i+1]){
            i++;
        }
    }
    cout<<count;

    return 0;
}