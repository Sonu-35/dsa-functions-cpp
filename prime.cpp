//function to find whether a number is prime or not
#include<iostream>
using namespace std;

int prime(int n){
    int i = 1;
    i++;

    if(n % i == 0){
        
        cout << "Not a prime " << endl;
        }
            else{
                cout << "Prime number" << endl;
            }
    }

int main(){
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    prime(n);
    
    return 0;
}