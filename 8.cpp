#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
int point=0,c=0,check=0,count=-1;
string d;
cin >> d;
for (int i=0; i<d.length(); i++){
     if(d[i]!='.' && d[i]!='0' && d[i]!='1' && d[i]!='2' && d[i]!='3' && d[i]!='4' && d[i]!='5' && d[i]!='6' && d[i]!='7' && d[i]!='8' && d[i]!='9'){
        check=-1;
     }
}
if (check==0){
    for(int i = 0;i<d.length();i++){
    if (d[i]!='.'){
        if(count==-1){
                count=d[i]-48;
            }
        else{
            count=count*10+d[i]-48;
        }
    }
    else {
        if( count >= 0 && count<=255){
                count=-1;
                point++;
        }
        else{
                d=-1;
                break;
        }
    }

}

if(count>=0 && count<=255 && point== 3){
        cout << "true";
    }
    else{
            cout << "false" ;
    }
}
}
