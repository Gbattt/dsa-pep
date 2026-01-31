#include<iostream>
using namespace std;
// int  fibo(int n){
   // if(n==0){ return 0;
    //}b
   // if(n==1){ return 1;
   // }
    //return fibo(n-1)+fibo(n-02);
    
// }
bool issorted(int arr[],int size){
    if(size==0 || size==1)return true;
    if(arr[0]>arr[1])return false;
    return  issorted(arr+1,size-1);
}
int sumarray(int arr[],int size){
    if(size==1)return arr[0];
    return arr[0]+ sumarray(arr+1,size-1);
}
int findkey(int arr[],int size,int key){
    if(size==0)return false;
    if(arr[0]==key)return true;
    return findkey(arr+1,size-1,key);
}

int main(){
    // cout<<fibo(3)<<" ";
    int arr[6]={1,3,4,5,6,3,};
    cout<<findkey(arr,6,7)<<" ";

}
