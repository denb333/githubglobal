#include<iostream>
using namespace std;
void Floyd(int n){
    int temp = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << temp<<" ";
            temp+=1;
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin>>n;
    if (n>0)
    {
        Floyd(n);
    } else
    {
        cout<<"N";
    }
    return 0;
}
