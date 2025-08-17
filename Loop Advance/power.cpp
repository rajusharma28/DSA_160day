#include<iostream>
using namespace std;
// int main(){
//     int n=2,pow=2;
//     int num=n;
//     for(int i=1;i<pow;i++){
//       num=num*n;
        
//     }
//     cout<<num<<endl;
// }


int amin(){
    int n,pow,i,num;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter the power:";
    cin>>pow;

    num=n;
    for(i=1;i<pow;i++){
        num=num*n;
    }
    cout<<num;
}