// sourêtte.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "math.h"

//int main()
//{
//    std::cout << "Hello World!\n";
//}

   // algo/sort1.cpp

#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> coll;
    vector<int> output_coll;
    int _Total = 0;
    int _minutes = 3;
    int x = 0;

    // fill both collections with the same elements
    coll.push_back(2);
    coll.push_back(1);
    coll.push_back(7);
    coll.push_back(4);
    coll.push_back(2);

    sort(coll.begin(), coll.end(), greater<int>());
    for (int i = 0; i < _minutes; i++)
    {
        _Total += coll[0];
        coll[0] = (int)floor(coll[0] / 2);
        sort(coll.begin(), coll.end(), greater<int>());
    }
    //INSERT_ELEMENTS(coll, 1, 9);
    //INSERT_ELEMENTS(coll, 1, 9);

    cout << "Total: "  << _Total << endl;
    for (int f : coll)
    {
        cout << f << endl;
    }
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
