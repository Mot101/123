#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(long long a,long long b){
    return a>b;
}
int main()
{
    long long n;
    cin >> n;
    vector <long long> g(n);
    for (int i=0;i<n;i++){
        cin >> g[i];
    }
    sort(g.begin(),g.end(),cmp);
    for (int i=0;i<n;i++){
        cout << g[i];
    }
    return 0;
}
