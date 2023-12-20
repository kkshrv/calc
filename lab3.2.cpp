#include <iostream>
#include <cmath>

using namespace std;

bool ifExists(int nums[], int indexDiff, int valueDiff, int numsSize)
{
    for (int i = 0; i < (numsSize - indexDiff); i++)
    {
        if (abs(nums[i] - nums[i+indexDiff]) == valueDiff)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int nums[] = {1, 2, 3, 1}; 
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int indexDiff = 3; int valueDiff = 0;
    if(ifExists(nums, indexDiff, valueDiff, numsSize))
    {
        cout << "True";
    }
    else cout << "False";
    
    // int nums[] = {1, 5, 9, 1, 5, 9}; 
    // int numsSize = sizeof(nums) / sizeof(nums[0]);
    // int indexDiff = 2; int valueDiff = 3;
    // if(ifExists(nums, indexDiff, valueDiff, numsSize))
    // {
    //     cout << "True";
    // }
    // else cout << "False";
    // return 0;
}