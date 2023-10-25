#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// int secondsmallest(int arr[],int n){
//     int min=INT16_MAX;
//     int secondmin;
//     for(int i=0;i<n;i++){
//         if(arr[i]<min){
//             secondmin=min;
//             min=arr[i];
//         }
//         else if(arr[i]<secondmin and arr[i]!=min)  secondmin=arr[i]; 
//     }
//     return secondmin;
// }
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
    sort(arr,arr+n);
    int secondmin;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[0]){
            secondmin= arr[i];
                break;
        }
    }
    cout<<"Secondminimum element is "<<secondmin<<endl;  

    //Time complexity is O(nlogn)
    // int secondmin=secondsmallest(arr,n);
    // cout<<"secondminimum element is "<<secondmin<<endl;
    return 0;
}