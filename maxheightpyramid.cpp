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


int maxlevel(int boxes[], int n){
    sort(boxes,boxes+n);
    int ans=1;
    
    int prevw=boxes[0];
    int prevc=1;
    int curr=0;
    int currw=0;
    for(int i=1;i<n;i++){
        currw+=boxes[i];
        curr++;
        if(currw> prevw && curr> prevc){
            prevc=curr;
            prevw=currw;
            curr=0;
            currw=0;
            ans++;
        }

    }
}