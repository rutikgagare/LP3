// fibonacci 

#include<iostream>
using namespace std;

int recursive_fibonacci(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return recursive_fibonacci(n-1)+recursive_fibonacci(n-2);
}

int fibonacci(int n){
    if(n == 0 || n == 1){
        return n;
    }

    int x = 0;
    int y = 1;

    for(int i = 2; i<=n; i++){
        int temp = y;
        y = x+y;
        x = temp;
    }

    return y;
}

int main(){
    cout<<"Enter n : ";
    int n;
    cin>>n;

    cout<<n<<"th fibonacci number is : "<<recursive_fibonacci(n)<<endl;

    cout<<n<<"th fibonacci number is : "<<fibonacci(n)<<endl;

    return 0;
}