#include<iostream>
using namespace std;

int binearysearch(int arr[], int key, int size){
    int start =0;
    int end=size-1;
     while (start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key) return mid;
        else if(arr[mid]<key){
            start=mid+1;

        }
        else{
            end=mid-1;
        }
        }
}