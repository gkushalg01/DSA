// DSA.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <chrono>
#include <vector>


int main()
{
    auto s = std::chrono::high_resolution_clock::now();
    
    int a = 6, b = 7, ans = 0;
    bool carry = 0;

    while (a || b) {
        int x = a & 1, y = b & 1;
        bool res = x ^ y;
        if (carry) {
            carry = x | y;
            res = !res;
        } else {
            carry = x & y;
        }
        ans = (ans<<1)|res;
        a >>= 1;
        b >>= 1;
    }
    if (carry) {
        ans = (ans << 1) | 1;
    }

    int fres = 0;
    while (ans) {
        bool t = ans & 1;
        fres = fres << 1 | t;
        ans >>= 1;
    }
    std::cout << fres;
    auto e = std::chrono::high_resolution_clock::now();
    auto t = std::chrono::duration < double, std::milli>(e - s).count();
    std::cout << "Time = " << t << "\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
