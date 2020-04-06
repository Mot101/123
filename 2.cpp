#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
struct man{
           string name1;
           string name2;
           int math;
           int physics;
           int it;
           double sred;
};
bool cmp(man a,man b){
    return a.sred>b.sred;
}

int main()
{
    long long n;
    cin >> n;
    vector <man> g(n);
    for (int i=0;i<n;i++){
        cin >> g[i].name1 >> g[i].name2 >>  g[i].math >> g[i].physics >> g[i].it;
        g[i].sred=(g[i].math+g[i].physics+g[i].it)/3;
    }

    stable_sort(g.begin(),g.end(),cmp);
    for (int i=0;i<n;i++){
        cout << g[i].name1 << " "<< g[i].name2;
        cout << endl;
    }
    return 0;
}
