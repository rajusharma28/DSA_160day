
#include<iostream>
using namespace std;
int main(){

    int row,col;
    for(row=1;row<=5;row++){

       char name='a' + row-1;
       for(col=1;col<=5;col++)
       {
        cout<<name<<" ";
       }
       cout<<endl;
    }
}






// int main(){

//     char row,col;
//     for(row='a';row<='f';row++){
//         for(col='a';col<='f';col++)
//         {
//            cout<<row<<" ";
//         };  
//        cout<<endl;    
//     }
// }


//op 
// a a a a a a 
// b b b b b b 
// c c c c c c 
// d d d d d d 
// e e e e e e 
// f f f f f f 