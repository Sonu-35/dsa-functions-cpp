//basic of switch cases
#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter 1 or 2 :" << endl;
    cin >> num;

    switch( num ){
        case 1 : cout << "First" << endl;
                break;
        
        case 2 : cout << "Second" << endl;
                break;

        default : cout << "Wrong input" << endl;
    }
}