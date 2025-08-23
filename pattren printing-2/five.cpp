#include<iostream>
using namespace std;

int main(){

    int row,col;
    for(row=1;row<=5;row++){
      char name='a'+(row-1);

      for(col=1;col<=row;col++){
        cout<<name<<" ";
      }

      cout<<endl;
    }
}

// col<=row.    
// char name='a'+(row-1);
// a 
// b b 
// c c c 
// d d d d 
// e e e e e 







// int main(){
//     char name;
//     for(char row='a';row<='f';row++){
//         for(char col='a';col<='f';col++){
          
//            cout<<col;
//         }
//         cout<<endl;
//     }
// }

// abcdef
// abcdef
// abcdef
// abcdef
// abcdef
// abcdef
