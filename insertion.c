#include<stdio.h>
void insertionSort(int arr[],int n)
for(int i=1; i<n; i++){
    int key=arr[i];
    int j=i-1;
    while(j>=0 &&arr[j]>key){
        arr[j+1]=arr[j];
        j--;
    }
arr[j+1]=key;
{
    }
    int BinarySearch (int arr[],int key){
        int s=0; int1=n-1;
        while(s<=1){
            int mid=(s+1)/2;
            if(arr[mid]==key)
            return mid;
            else if(arr[mid]<key)
            s=mid+1;
            else
            mid+1;
        }
    }
}