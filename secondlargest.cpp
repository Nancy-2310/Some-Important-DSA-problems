#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// int secondlargest(int arr[],int n){
//     int max=-1;
//     int secondmax;
//     for(int i=0;i<n;i++){
//         if(arr[i]>max){
//             secondmax=max;
//             max=arr[i];
//         }
//         else if(arr[i]>secondmax and arr[i]!=max)  secondmax=arr[i]; 
//     }
//     return secondmax;
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
    int secondmax;
    for(int i=n-2;n>=0;n--){
        if(arr[i]!=arr[n-1]){
            secondmax= arr[i];
                break;
        }
    }
    cout<<"SecondmaximumLargest element is "<<secondmax<<endl;  
    return 0;
    //Time complexity is O(nlogn)
    // int secondmax=secondlargest(arr,n);
    // cout<<"Largest element is "<<secondmax<<endl;

}