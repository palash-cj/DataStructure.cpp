#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

//find n^p

// int powerOf(int n, int p){

//     if(p==0){
//         return 1;
//     }

//     return n*powerOf(n,p-1);

// }

// int main(){

//     int n;
//     cin>>n;

//     int p;
//     cin>>p;

//     cout<<powerOf(n,p);


//     return 0;
// }

//find the factorial of n

// int factorial(int n){
//     if(n==1){
//         return 1;
//     }

//     int prevFactorial = factorial(n-1);
//     return n*prevFactorial;
// }

// int main(){
//     int n;
//     cin>>n;

//     cout<<factorial(n)<<endl;
//     return 0;
// }

//find the nth element of Fibonacci Sequence

// int fibonacci(int n){

//     if(n==0 || n==1){
//         return n;
//     }  

//     return fibonacci(n-1) + fibonacci(n-2);
// }

// int main(){
//     int n;
//     cin>>n;

//     cout<<fibonacci(n)<<endl;
//     return 0;
// }

//Check wheather the array is sorted or not.

// bool check(int arr[],int n){

//     if(n==1){
//         return true;
//     }
//     int rest = check(arr+1,n-1);
//     return (arr[0]<arr[1] && rest);
// }

// int main(){

//     int arr[]={1,6,3,4,5};

//     cout<<check(arr,5)<<endl;
//     return 0;
// }

void dec(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    dec(n-1);
}

void inc(int n){
    if(n==0){
        return;
    }
    inc(n-1);
    cout<<n<<endl;
}

int main(){
    int n;
    cin>>n;

    int no =1;

    dec(n);
    inc(n);
    return 0;
}