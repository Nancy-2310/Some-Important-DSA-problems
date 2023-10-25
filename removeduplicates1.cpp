#include<bits/stdc++.h>
#include <bits/stl_iterator.h>
#include<iostream>
using namespace std;
void removeduplicates(int arr[],int n){
    set <int> st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    int index=0;
    for(auto it:st){
        arr[index]=it;
        index++;
    }
    int k=st.size();
    for(int i=0;i<k;i++){
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
    cout<<"The array after removal of duplicates is "<<endl;
    removeduplicates(arr,n);
//Time complexity is O(nlogn)+o(n);
//Space complexity is O(n)
    // sort(arr,arr+n);
    // cout<<"Largest element is "<<arr[n-1]<<endl;  //Time complexity is O(nlogn)
    
    
    return 0;
}