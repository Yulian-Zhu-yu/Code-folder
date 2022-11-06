#include <iostream>
#include <vector>
#include <map>
using namespace std;
struct yearage{
     int zodiac = 0;
     int year = 0;
};
int main(){

     //freopen("triangles.in","r",stdin);
     //freopen("triangles.out","w",stdout);
     map<string,int>zodiac = {{"Ox",0},{}};
     // Rat Ox Tiger Rabit Dragon Snake Horse Lamb Monkey Chicken Dog Pig
     int n = 0;
     cin>>n;
     map<string,yearage>cows = {{"Bessie",{2,0}}};
     for(int i = 0;i<n;i++){
          vector<string>s(7);
          for(int j = 0;j<7;j++){
               cin>>s[j];
          }
          string c1 = s[0];
          string c2 = s[6];
          int cyear = cows[c2].year;
          if(s[3]=="previous"){
               cyear -=
          }
          cows.insert(s[0],{});
     }
}
//Mildred born in previous Dragon year from Bessie