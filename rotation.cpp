#include<iostream>
using namespace std;
void reverse(int *arr,int left,int right){
    while(left<right){
        int temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        left++;
        right--;
    }
}
void rotate(int *arr,int n,int k){
    k=k%n;
    if(k<0){
        k+=n;
    }
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
}
void display(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n,r;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>r;
    rotate(a,n,r);
    display(a,n);
}