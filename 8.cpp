#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
int point=0,check=0,count=-1;
string str;
cin >> str;
for (int i=0; i<str.length(); i++){
     if(str[i]!='.' && str[i]!='0' && str[i]!='1' && str[i]!='2' && str[i]!='3' && str[i]!='4' && str[i]!='5' && str[i]!='6' && str[i]!='7' && str[i]!='8' && str[i]!='9'){
        check=-1;
     }
}
if (check==0){
    for(int i = 0;i<str.length();i++){
    if (str[i]!='.'){
        if(count==-1){
                count=str[i]-48;
            }
        else{
            count=count*10+str[i]-48;
        }
    }
    else {
        if( count >= 0 && count<=255){
                count=-1;
                point++;
        }
        else{
                check=-1;
                break;
        }
    }

}

if(point== 3 && count>=0 && count<=255){
        cout << "true";
    }
    else{
            cout << "false" ;
    }
}
}
