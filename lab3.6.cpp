#include <iostream>
#include <vector>
#include <bits/stdc++.h> 

using namespace std;

int maxProfit(vector<int> &prices)
{
    /* по условию задачи, мы можем купить бумагу любой стоимости, 
    поэтому bargain1, bargain2 = INT_MAX */

    int bargain1 = INT_MAX; int profit1 = INT_MIN;
    int bargain2 = INT_MAX; int profit2 = INT_MIN;

    for (int i = 0; i < prices.size(); i++)
    {
        bargain1 = min(prices[i], bargain1); // покупаем максимально дешево
        profit1 = max(profit1, prices[i] - bargain1); // продаем, если выручка от ПЕРВОЙ предыдушей продажи < выручка от текущей
        bargain2 = min(prices[i] - profit1, bargain2); // покупаем максимально дешево
        profit2 = max(profit2, prices[i] - bargain2); // продаем, если выручка от ВТОРОЙ предыдушей продажи < выручка от текущей
    }
    return profit2;
}


int main()
{
    // Test

    vector<int> prices;
    prices = {3,3,5,0,0,3,1,4};
    cout << maxProfit(prices) << endl;

    prices = {1,2,3,4,5};
    cout << maxProfit(prices) << endl;

    prices = {7,6,4,3,1};
    cout << maxProfit(prices) << endl;

    return 0;
}