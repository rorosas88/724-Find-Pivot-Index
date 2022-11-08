// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int pivotIndex(std::vector<int>& nums)
{

    bool doesPivotIndexExist = false;
    bool noSolution = false;

    int input_length = nums.size();
    int input_index = 0;

    while (!doesPivotIndexExist && !noSolution)
    {
        int first_half_sum = 0;
        int last_half_sum = 0;
        for (int i = 0; i < input_length; i++)
        {

            if (i < input_index)
            {
                first_half_sum += nums[i];
            }
            else if (i == input_index)
            {
                0;
            }
            else
            {
                last_half_sum += nums[i];
            }
        }
        if (first_half_sum == last_half_sum)
        {
            doesPivotIndexExist = true;
        }
        else if (input_index >= input_length)
        {
            noSolution = true;
        }
        else
        {
            input_index++;
        }
    }
    if (doesPivotIndexExist == true)
    {
        return { input_index };
    }
    else
    {
        return -1;
    }
}

int main()
{
    std::vector<int> input{ 2,1,-1 };
    int output = 0; 
    output = pivotIndex(input); 
    std::cout << output << "\n";
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
