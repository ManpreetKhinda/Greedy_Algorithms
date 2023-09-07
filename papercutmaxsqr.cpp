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
int numsqr(int h, int w){
    if(h<w){
        swap(h,w);
    }
    int rem=0;
    int result=0;
    while(w>0){
        result+=h/w;
        rem=h%w;
        h=w;
        w=rem;
        
    }
    return result;
}
int main(){
    int h=13;
    int w=29;
    cout<<numsqr(13,29);
}
