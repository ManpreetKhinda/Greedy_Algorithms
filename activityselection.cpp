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
    int start[]={1,3,0,5,8,5};
    int end[]={2,4,6,7,9,9};
    vector<int>s;
    s.push_back(0);
    int selected=0;
    for(int i=1;i<6;i++){
        if(start[i]>=end[selected]){
            s.push_back(i);
            selected=i;
        }
    }
    for(auto i:s){
        cout<<i<<" "<<endl;
    }
}