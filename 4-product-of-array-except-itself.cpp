// DSA.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <chrono>
#include <vector>

std::vector<int> productExceptSelf(std::vector<int>& nums) {
    std::vector<int> ans(nums.size(), 0);
    signed long int p = 1;
    int zeros = 0, zero_caught;

    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] == 0) {
            ++zeros;
            zero_caught = i;
        }
        else {
            p *= nums[i];
        }
    }

    if (zeros > 1) return ans;
    else if (zeros == 1) {
        ans[zero_caught] = p;
        return ans;
    }

    for (int i = 0; i < nums.size(); ++i) {
        ans[i] = p / nums[i];
    }

    return ans;
}
 /*
int main()
{
    auto s = std::chrono::high_resolution_clock::now();

    unsigned long int all = 1;
    auto v = std::vector<int>{ 1, 2, 3, 4 };
    v = productExceptSelf(v);
    auto e = std::chrono::high_resolution_clock::now();
    auto t = std::chrono::duration < double, std::milli>(e - s).count();
    std::cout << "Time = " << t << "\n";
}*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
