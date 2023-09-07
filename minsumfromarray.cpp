#include <iostream>
#include <cmath>
#include <string>
#include <stdlib.h>
#include <unordered_set>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <queue>
using namespace std;
int main()
{
    int arr[] = {5, 3, 0, 7, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    string s1="0";
    string s2="0";
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            s1 += to_string(arr[i]);
        }
        else
        {
            s2 += to_string(arr[i]);
        }
    }
    int a = stoi(s1);
    int b = stoi(s2);
    cout << a + b << endl;
}