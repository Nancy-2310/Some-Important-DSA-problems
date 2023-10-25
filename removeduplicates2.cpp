#include<bits/stdc++.h>
#include <bits/stl_iterator.h>
#include<iostream>
using namespace std;
int removeduplicates(int arr[],int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}
int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The array after removal of duplicates is "<<endl;
    int k= removeduplicates(arr,n);
    for(int i=0;i<k;i++){
        cout<<arr[i]<<endl;
    }
    // Time complexity is O(n)
    // space complexity is O(1)
    return 0;
}