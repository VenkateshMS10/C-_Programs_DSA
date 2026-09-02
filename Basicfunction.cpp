#include<iostream>
using namespace std;
void add(int ,int );
int main(){
    int a,b;
    cout<<"Enter the number of a and b ";
    cin>>a>>b;
    add(a,b);

}
void add(int a,int b){
    cout<<a+b<<endl;
}