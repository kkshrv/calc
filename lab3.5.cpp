#include <iostream>
#include <vector>
#include <stdlib.h>
#include <stack>


using namespace std;

int maxRectangle(vector<vector<char>> &matrix)
{
    vector<int> colsHeight(matrix[0].size());
    int maxRec = 0;

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            int currentNum = matrix[i][j] - '0';
            if (i == 0) colsHeight[j] = currentNum;
            
            else colsHeight[j] += currentNum;
        }

        int maxRectangleArea = 0;
        
        stack<int> s;
        colsHeight.push_back(0);
        for (int i = 0; i < colsHeight.size(); i++)
        {
            if (s.empty() || colsHeight[i] >= colsHeight[s.top()])
                s.push(i);
            else
            {
                int temp = colsHeight[s.top()];
                s.pop();
                maxRectangleArea = max(maxRectangleArea, temp * (s.empty() ? i : i - 1 - s.top()));
                i--;
            }
        }

        maxRec = max(maxRec, maxRectangleArea);
    }

    return maxRec;
}

int main()
{
    // Test
    vector<vector<char>> matrix = {
        {'1','0','1','0','0'},
        {'1','0','1','1','1'},
        {'1','1','1','1','1'},
        {'1','0','0','1','0'}
    };
    cout << maxRectangle(matrix) << endl;
    matrix = {
        {'1'}
    };
    cout << maxRectangle(matrix) << endl;
    matrix = {
        {'0'}
    };
    cout << maxRectangle(matrix) << endl;

    return 0;
}