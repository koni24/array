#include<iostream>
using namespace std;
void negative(int *arr, int n){
    int left=0;
    int right=n-1;
    while(left<=right){
        if(arr[left]<0 && arr[right]<0){
            left++;
        }
        else if(arr[left]>0 && arr[right]<0){
            int temp=arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
            left++;
            right--;
        }
        else if(arr[left]<0 && arr[right]<0){
            left++;
        }
        else{
            right--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    negative(arr,n);
}