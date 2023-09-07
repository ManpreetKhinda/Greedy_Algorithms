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
int minnum(int s, int d)
{
    if(s>d*9){
        return -1;
    }
    int num=pow(10,d-1);
    s--;
    int d=1;
    while(s>0){
        num+=d*(min(s,9));
        s-=(min(d,9));
        d*=10;

    }
    return num;
}

int main()
{
    int s = 9;
    int d = 2;
    cout << minnum(20, 3);
}