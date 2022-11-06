#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;
int countGoodSubstrings(string s){
    int output = 0;
    for(int i = 0;i<s.size()-2;i++){
        set<char>se;
        se.insert(s[i]);
        se.insert(s[i]+1);
        se.insert(s[i]+2);
        if(se.size()==3){
            output++;
        }
    }
    return output;
}
int main(){
    vector<string> v = {"d","b","c","b","c","a"};

    vector<string>output;
    cout<<countGoodSubstrings("xyzzaz");
    for(string i : output){
        cout<<i<<" ";
    }
}