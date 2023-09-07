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

int maxsum(int arr1[],int arr2[], int arr3[], int a, int b, int c){
    int sum1=0,sum2=0,sum3=0;
    for(int i=0;i<a;i++){
        sum1+=arr1[i];

    }
    for(int i=0;i<b;i++){
        sum2+=arr2[i];

    }
    for(int i=0;i<c;i++){
        sum3+=arr3[i];

    }
    int x=0,y=0,z=0;
    while(1){
        if(x==a||y==b||z==c){
            return 0;
        }
        if(sum1==sum2 && sum2==sum3){
            return sum1;
        }
        if(sum1>=sum2 && sum1>=sum3){
            sum1-=arr1[x++];
        }
        else if(sum2>=sum1 && sum2>=sum3){
            sum2-=arr2[y++];
        }
        else if(sum3>=sum1 && sum3>=sum1){
            sum3-=arr3[z++];
        }
    }
    
    
    
    
    
    
}
int main(){
    int stack1[]={3,2,1,1,1};
    int stack2[]={4,3,2};
    int stack3[]={2,5,4,1};
    cout<<maxsum(stack1,stack2,stack3,5,3,4)<<endl;

}

