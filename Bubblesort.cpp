#include<iostream>
using namespace std;
int main(){
    int a[5]={54,23,26,21,22};
    
    for (int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        for (int j=0;j<sizeof(a)/sizeof(a[0])-i;j++){
            if (a[j]>a[j+1]){
swap(a[j],a[j+1]);
            }
        }
    }
    for (int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        cout<<a[i]<<" ";
    }
}