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
struct item{
    int  value;
    int  weight;
};
bool comparison (item a, item b){
    double r1 = (double)a.value / (double)a.weight;
    double r2 = (double)b.value / (double)b.weight;
    return r1 > r2;
}
int main(){
    int n=3;
    item arr[n]={{60, 10}, {100, 20}, {120, 30}};
    int w=50;
    sort(arr,arr+n,comparison);
    int i=0;
    double value=0.0;
    for(int i=0;i<n;i++){
        if(arr[i].weight<=w){
            value+=arr[i].value;
            w-=arr[i].weight;
            // i++;
        }
        else{
            value
                += arr[i].profit
                   * ((double)w / (double)arr[i].weight);
            
            break;
        }
        
        


    }
    cout<<value;


}