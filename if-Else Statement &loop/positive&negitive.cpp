#include<iostream>
using  namespace std;
int main(){
    int number;
    cout<<"Enter your number:";
    cin>>number;
    if(number>0){
        cout<<"Positive";

    }else if(number==0){
        cout<<"0";
    }else{
        cout<<"negative";
    }
}