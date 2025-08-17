#include<iostream>
using namespace std;
int main(){

     int fact=1;
     for(int i=1;i<=5;i++){
       fact =fact*i;
     }
     cout<<fact<<endl;
}

int main(){
    int i,fact=1,n;
    cout<<"Enter a factorial number:";
    cin>>n;

    for(i=0;i<=n;i++){
        fact=fact*i;
    }
    cout<<fact;
    
}