#include<iostream>
using namespace std;
int main(){
    int k=1;

    int a[5]={2,4,6,8,10};
    for (int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        
        for (int j=i;j<5;j++){
            
            for (int k=i;k<=j;k++){
                cout<<a[k]<<" ";
            }
        }
        

cout<<endl;
    }
}