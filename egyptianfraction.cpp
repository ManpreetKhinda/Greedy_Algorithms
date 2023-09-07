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

void fraction(int n, int d){
    if(n==0 ||d==0){
        return ;
    }
    if(d%n==0){
        cout<<"1/"<<d/n;
        return;
    }
    if(n%d==0){
        cout<<n/d;
        return;
    }
    if(n>d){
        cout<<n/d<<"+";
        fraction(n%d,d);
        return;

    }
    int x=d/n+1;
    cout<<"1/"<<x<<"+";
    fraction(n*x-d,d*x);
}
int main(){
    int n=3;
    int d=7;
    fraction(n,d);
    }
    

