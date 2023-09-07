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
    int arr[]={ 10,12,15 };
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    vector<int> v;
    v.push_back(arr[0]);
    v.push_back(arr[n-1]);
    for(int i=1;i<n-1;i++){
        v.push_back(arr[i]);

    }
    int sum=0;
    for(int i=0;i<n-1;i++){
        sum+=abs(v[i+1]-v[i]);

        
    }
    sum+=abs(v[n-1]-v[0]);
    cout<<sum;



}