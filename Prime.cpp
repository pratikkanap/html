#include<iostream>
using namespace std;
bool isPrime(int num){
    for(int i=2; i<num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main(){
int num;
cout<<"Enter a number :";
cin>>num;
if(isPrime(num)){
    cout<<"Is prime ";
}
else{
cout<<"Not a prime";
}
}
