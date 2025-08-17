#include<iostream>
using namespace std;
int main(){
    int curr = 0, prev = 0, last = 1; // initialized

    for(int i = 0; i <= 5; i++){
        curr = prev + last;   // add previous two
        last = prev;          // move last one step back
        prev = curr;          // move prev to current
    }

    cout << curr;
}
