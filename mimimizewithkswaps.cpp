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

int minswapsk(int arr[],int n, int k){
    for(int i=0;i<n-1 && k>0;i++){
        int pos=i;
        for(int j=i+1;j<n;j++){
            if(j-i>k){
                break;
            }
            if(arr[j]<arr[pos]){
                pos=j;
            }
        }
        for(int j=pos;j>i;j--){
            swap(arr[j],arr[j-1]);
        }
        k-=pos-i;
    }
}