#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while (n<1||n>10)
    {
        cin>>n;
    }
    switch (n)
    {
    case 1:
    case 2:
    case 3:
    case 4:
        cout<<"Xep loai D";
        break;
    case 5:
    case 6:
        cout<<"Xep loai C";
        break;
    case 7:
    case 8:
        cout<<"Xep loai B";
        break;
    case 9:
    case 10:
        cout<<"Xep loai B";
        break;
    
    }
    return 0;
}
