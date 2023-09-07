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
    int deno[] = {1, 2, 5, 10, 20, 50, 100, 500, 1000, 2000};
    int v = 43;
    int i = 9;
    vector<int> coin;
    // while(v>=0){
    // for(int i=8;i>=0;i--){
    //     if(deno[i]<=v){
    //         v=v-deno[i];
    //         coin.push_back(deno[i]);
    //     }
    // }
    while (v > 0 && i >= 0)
    {

        if (deno[i] <= v)
        {
            v -= deno[i];
            coin.push_back(deno[i]);
        }
        else
        {
            i--;
        }
    }
    for (auto i : coin)
    {
        cout << i << " " << endl;
    }
    return 0;
}
