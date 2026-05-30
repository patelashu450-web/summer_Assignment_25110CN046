#include <iostream>
using namespace std;
int main (){
    int n, i;
    double factorial=1;
    cout<< "Enter a positive number";
    cin>>n;
    
    if(n<0){
        cout<<"Factorial of a negative number doesn't exist.\n";
    }
    else{
         for(i=1; i<=n; ++i){
        factorial= factorial* i;
    }
        cout<<"Factorial of "<<n<<" = "<<factorial<<"\n";
    }
    return 0;

}
