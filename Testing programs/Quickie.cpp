#include<iostream>
#include<vector>
using namespace std;
int main(){
    string input;
    cin>>input;
    for(int i=0;i<input.size();i++){
        if(input[i]=='['){
            input[i]='{';
        }
        else if(input[i]==']'){
            input[i]='}';
        }
    }
    cout<<endl<<input;
}