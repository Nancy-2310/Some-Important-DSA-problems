#include<bits/stdc++.h>
#include <bits/stl_iterator.h>
#include<iostream>
using namespace std;
void leftrotate(int arr[],int n,int d){
    d=d%n;
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=(n-d);i<n;i++){
        arr[i]=temp[i-(n-d)];
    }
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
    // T.C. O(d+n)
// S.C. O(d) 
    return 0;
}