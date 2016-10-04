//
//  main.cpp
//  70. Climbing Stairs
//
//  Created by chenyufeng on 10/5/16.
//  Copyright © 2016 chenyufeng. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int climbStairs(int n)
{
    vector<int> resultVec;
    resultVec.push_back(1);
    resultVec.push_back(2);

    for (int i = 2; i < n; i++)
    {
        resultVec.push_back(resultVec[i - 1] + resultVec[i - 2]);
    }

    return resultVec[n-1];
}

int main(int argc, const char * argv[])
{
    int res = climbStairs(7);
    cout << res;


    return 0;
}
