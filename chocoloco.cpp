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
    int t;
    cin>>t;
    int m,n;
    cin>>m>>n;
    int x[m-1]={0};
    int y[n-1]={0};
    int xsum=0;
    int ysum=0;
    for(int i=0;i<m-1;i++){
        cin>>x[i];
        xsum+=x[i];
    }

    for(int i=0;i<n-1;i++){
        cin>>y[i];
        ysum+=y[i];
    }
    
    
}