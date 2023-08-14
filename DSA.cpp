// DSA.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <chrono>
#include <vector>


int main()
{
    auto s = std::chrono::high_resolution_clock::now();
    int a = 10, b = 20;
    int t = 0;
    while (b != 0) {
        t = (a & b);
        a ^= b;
        b = t << 1;
    }
    std::cout << a;
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
