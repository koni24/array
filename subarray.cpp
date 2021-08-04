#include<iostream>
using namespace std;
 void subarray(int *arr,int n){
     for(int sp=0;sp<n;sp++){
         for(int ep=sp;ep<n;ep++){
             for(int i=sp;i<=ep;i++){
                 cout<<arr[i]<<" ";
             }
             cout<<endl;
         }
     }
 }
 int main(){
     int n;
     cin>>n;
     int *arr=new int[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     subarray(arr,n);
 }