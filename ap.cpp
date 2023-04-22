//finding the nth term of the ap
#include<iostream>
using namespace std;

int series(int n){
    int a = (3 * n + 7);
    return a;
}

int main(){
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    int ans = series(n);

    cout <<"Nth term of the AP = " << ans << endl;

    return 0;
}