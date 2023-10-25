#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int ifsorted(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
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
//Time complexity is O(n);
//Space complexity is O(1)
    // sort(arr,arr+n);
    // cout<<"Largest element is "<<arr[n-1]<<endl;  //Time complexity is O(nlogn)
    bool flag=ifsorted(arr,n);
    if(flag==true) cout<<"Sorted"<<endl;
    else cout<<"Not Sorted"<<endl;
    return 0;

}