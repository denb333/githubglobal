#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    if(n>0&&n<1001){
        int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int gt;
    cin>>gt;
    for(int i=0;i<n;i++){
        if(a[i]>gt){
            cout<<a[i]<<endl;
        }
     }
        
    }
}