#include <iostream>
#include <vector>
#include <cmath>
#include <bits/stdc++.h> 

using namespace std;

class MedianFinder
{
    public:
        vector<double> nums; 
        
        void addNum(double num)
        {
            nums.push_back(num);
            sort(nums.begin(), nums.end());
        }
        double findMedian()
        {
            if (nums.size() % 2 != 0)
            {
                int medianPos = nums.size() / 2;
                return nums[medianPos];
            }
            else
            {
                int medianPos = nums.size() / 2;
                return (nums[medianPos] + nums[medianPos - 1]) / 2;
            }
        }
};

int main()
{
    vector<string> instructions = {"MedianFinder", "addNum", "addNum",
    "findMedian", "addNum", "findMedian"};
    
    MedianFinder medianFinder = MedianFinder();
    medianFinder.addNum(1);
    medianFinder.addNum(2);
    cout << medianFinder.findMedian() << endl;
    medianFinder.addNum(3);
    cout << medianFinder.findMedian() << endl;

    return 0;
}