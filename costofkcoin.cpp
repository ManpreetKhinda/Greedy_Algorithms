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
int main(){
    int coin[] = {8, 5, 3, 10,
                  2, 1, 15, 25};
    int k=3;
    int n=sizeof(coin)/sizeof(coin[0]);
    sort(coin,coin+n);
    int rem=ceil(n/k+1);
    int sum=0;
    for(int i=0;i<rem-1;i++){
        sum+=coin[i];
    }
    cout<<sum<<endl;
}