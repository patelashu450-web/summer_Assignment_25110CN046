#include <iostream>
using namespace std;
int main(){
    int originalnum, newnum , remainder;
    int reversenum = 0;
    cout<< " ENTER AN INTEGER: ";
    cin>> originalnum;

    newnum = originalnum;

    while( newnum > 0){
    remainder = newnum % 10 ;
    reversenum = ( reversenum *10) + remainder ;
    newnum = newnum/ 10;
    }

    if ( originalnum == reversenum){
        cout<< originalnum << " is a palindrome. "<< endl;
    }else{
         cout<< originalnum << " is  not a palindrome. "<< endl;
    }
    return 0 ;

}