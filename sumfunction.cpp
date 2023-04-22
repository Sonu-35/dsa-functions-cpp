//function to add 2 numbers
#include<iostream>
using namespace std;

int add(int a, int b){

    return a + b;
}

int main(){
    int a, b, sum;
    cout << " Enter the value of a and b:" <<endl;
    cin >> a >> b;

    sum = add(a , b);

    cout <<"Sum of two numbers:" << sum <<endl;
    return 0;
}