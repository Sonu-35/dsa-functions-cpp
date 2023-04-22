#include<iostream>
using namespace std;

void update(int a){
    a++;
    cout << "A is " << a << endl;
}

int main(){
    int a;
    cout << "Enter the number: " << endl;
    cin >> a;

    update(a);
    
    cout << "Number is " << a << endl;

    return 0;
}


    
