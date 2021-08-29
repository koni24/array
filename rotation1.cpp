#include<iostream>
using namespace std;
void reverse(int arr[],int left,int right){
    while(left<right){
    int temp =arr[left];
    arr[left]=arr[right];
    arr[right]=temp;
    left++;
    right--;

    }

}
void rotate(int arr[],int n,int d){
    d=d%n;
    if(d<0){
        d+=n;
    }
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}
void display(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main (){
    int n,d;
    cout<<("enter the number of array element and the value of d");
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rotate(arr,n,d);
    display(arr,n);

}