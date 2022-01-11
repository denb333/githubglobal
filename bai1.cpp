#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n<=0){
        cout<<"nhap n="<<endl;
        cin>>n;
    }
    while(n>0){
    int temp ,s=0;
     temp=n%10;
        s=s*10+temp;
        n=n/10;

     cout<<s;
    }
    return 0;
}