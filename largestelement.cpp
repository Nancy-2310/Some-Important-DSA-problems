#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int largest(int arr[],int n){
    int max=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
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
    int max=largest(arr,n);
    cout<<"Largest element is "<<max<<endl;

}