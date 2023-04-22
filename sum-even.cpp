//function to get sum of even number upto N
#include<iostream>
using namespace std;

int nEvenSum(int n){
    int i, sum = 0;
    
    for(i = 1; i<=n; i++){
        if(i % 2 == 0){
        sum += i; 
        }
    }
    return sum;
}

int main(){
    int n;
    cout << "Enter the value of n: \n";
    cin >> n;

    cout << "Sum of the even number till:" << n << " is = " << nEvenSum(n);

    return 0;
}