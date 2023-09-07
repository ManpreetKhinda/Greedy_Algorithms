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
struct link{
    int num1;
    int num2;
};
bool compare(link a, link b){
    return(a.num2<b.num2);
}
int main(){
    int n=5;
    link arr[5]={{5, 24}, {39, 60}, {15, 28}, {27, 40}, {50, 90} };
    sort(arr,arr+n,compare);
    vector<link> v;
    link current=arr[0];
    v.push_back(current);
    for(int i=1;i<n;i++){
        if(arr[i].num1>current.num2){
            v.push_back(arr[i]);
            current=arr[i];
        }

    }
    for(auto i:v){
        cout<<'{'<<i.num1<<','<<i.num2<<'}'<<endl;
    }
}