#include<bits/stdc++.h>
#include <bits/stl_iterator.h>
#include<iostream>
using namespace std;
void leftrotate(int arr[],int n,int d){
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
    cout<<"Array after rotation is "<<endl;
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
    leftrotate(arr,n,3);
    return 0;
// T.C. O(2n)
// S.C. O(1) 
}