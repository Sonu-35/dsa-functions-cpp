//function to find factorial of a number
#include<iostream>
using namespace std;

int fact(int n){
    int i, f = 1;

    for(i = 1; i <= n; i++){
        f = f * i;
       }

    return f;
}

int main(){
    int n;
    cout << "Enter the value of n:" << endl;
    cin >> n;

    fact(n);

    cout << "Factorial of the number: " << fact(n) << endl;

    return 0;
}