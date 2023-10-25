#include<bits/stdc++.h>
#include <bits/stl_iterator.h>
#include<iostream>
using namespace std;
void rotate(int arr[],int n){
    
    int temp=arr[0];
    for(int i=0;i<(n-1);i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
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
    cout<<"After rotation "<<endl;
    rotate(arr,n);
//Time complexity is O(n);
//Space complexity is O(1);    
    return 0;
}