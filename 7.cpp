#include<iostream>
#include<vector>
using namespace std;

int n = 0;
int counter = 1;
vector<int> g;

void rec1(int j) {
for (int i = 0; i < j; i++) {
if (i!=j-1){
cout << g[i] << '+';}
else {cout << g[i]; }
}
};

void rec(int j, int sum, int last) {
if (sum == n) {
if (counter == 13672) rec1(j);
counter++;
return;
}
for (int i = last; i <=n - sum; i++)
{
g[j] = i;
rec(j + 1, sum + i, i);
}
};

int main() {
cin >> n;
g = vector<int>(n);
rec(0,0,1);

}
