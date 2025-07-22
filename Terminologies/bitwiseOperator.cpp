#include <iostream>
using namespace std;

int main() {
    int a = 16;      // 010000 in binary
    int b = 10;      // 001010 in binary

    cout << "a = " << a << ", b = " << b << endl;
    cout << "a & b = " << (a & b) << " (Bitwise AND)" << endl;      // 0001 = 1
    cout << "a | b = " << (a | b) << " (Bitwise OR)" << endl;       // 0111 = 7
    cout << "a ^ b = " << (a ^ b) << " (Bitwise XOR)" << endl;      // 0110 = 6
    cout << "~a = " << (~a) << " (Bitwise NOT)" << endl;            // 1010 = -6 (in 2's complement)
    cout << "b << 1 = " << (b << 1) << " (Left Shift)" << endl;     // 0110 = 6
    cout << "a >> 1 = " << (a >> 1) << " (Right Shift)" << endl;    // 0010 = 2

    return 0;
}
