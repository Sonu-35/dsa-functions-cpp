//finding total no of set bits in given numbers
#include <iostream>

using namespace std;

int SetBits(int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int totalSetBits = SetBits(a) + SetBits(b);
    cout << "Total number of set bits: " << totalSetBits << endl;

    return 0;
}

