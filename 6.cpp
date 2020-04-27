#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
int a,n,count1,summ;
cin >>  n >>  summ;
vector <int> money(n);
for (int i=0;i<n;i++){
  cin >>  money[i];
}
sort(money.rbegin(), money.rend());
count1=0;
for (int i=0;i<n;i++){
  a=money[i];
  count1+=summ/a;
  summ%=a;
}
cout << count1;
return 0;
}
