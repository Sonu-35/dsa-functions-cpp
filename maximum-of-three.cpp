//function to find maximum of 3 numbers
#include<iostream>
using namespace std;

int fx(int a, int b, int c){
    if(a > b){
        cout << "A is max";
    }
        else if(b > c){
            cout << "B is max";
        }
            else if (c > a){
                cout << "C is max";
            }
                else if(b > a){
                    cout << "B is max";
                }
    return 0;
}

int main(){
    int a , b, c, max;
    cout << "Enter the values of a, b & c: "<< endl;
    cin >> a >> b >> c;

    max = fx(a, b, c);

    cout  << endl;

    return 0; 
}