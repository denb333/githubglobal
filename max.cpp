#include<iostream>
using namespace std;

int counts(int n){
    int max = 0;
    while (n > 0) {
        int temp = n % 10;
        n /= 10;
        if (temp >= max)
            max = temp;
    }
    cout<<max<<" ";
    int number=n;
    int count = 0;
    while (number> 0) {
        int temp = number % 10;
        if (temp == max){
            count++;
        }
        number /= 10;
    }
   cout<< count;
   return max;
    
}
int main(int argc, char const *argv[]) {
    int n;
    cin >> n;
    if (n>0 && n<10000)
	{
  
    counts(n);
    }else{
        cout<<"N";
    }
    return 0;
}