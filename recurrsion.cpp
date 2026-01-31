#include<iostream>
using namespace std;
void print(int n){
    if(n<=0)return;
    if(n%2==0){
        cout<<n<<" ";
    }


    print(n-1);
}

 int main (){
    print();

 }


 //n!=n*(n-1)!;
 int factorial(int n){
    if(n==0 || n==1)return 1;
    return n*factorial(n-1);
 }
