#include <iostream>
using namespace std;
int main()
{
    int arr[] = {500,200,100,50,20,10};
    int a,n,count1;
    cin >> n;
    count1=0;
    for (int i=0;i<6;i++){
        a=arr[i];
        count1+=n/a;
        n%=a;
    }
    if(n>0){
        count1=-1;
    }
    cout << count1;
    return 0;
}
