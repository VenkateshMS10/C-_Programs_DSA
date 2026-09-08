#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the value of a ";
    cin>>a;
int pow=1;
int ans=0;
    while(a!=0){

        int b=a%2;
        ans=ans+(b*pow);

        a=a/2;
        pow=pow*10;
        

    }
    cout<<endl;
    cout<<ans<<endl;
}