#include<iostream>
#include<vector>
#include<fstream>
#include<string>
using namespace std;
void errormessage(string s){
    cout<<"ERROR/n"<<s;
    exit;
}
int main(){
    ifstream paststrokes;
    ofstream newstrokes;
    paststrokes.open("paststrokes.txt",ios::in);
    newstrokes.open("newstrokes.txt",ios::out);
    if(!paststrokes.is_open()){
        errormessage("Past file didn't open");
    }
    if(!newstrokes.is_open()){
        errormessage("New file didn't open");
    }

    string line = "",inputed = "";
    vector<string>messages;
    while(getline(paststrokes,line)){
        messages.push_back(line);
    }

    while(true){
        getline(cin,inputed);
        if(inputed=="exit"){
            break;
        }
        else if(inputed.substr(0,4)=="disp"){
            for(int i = 0;i<messages.size();i++){
                cout<<messages[i]<<endl;
            }
        }
        else{
            messages.push_back(inputed);
            cout<<"Stroke added"<<endl<<messages.size()<<" strokes\n";
        }
    }
    for(int i = 0;i<messages.size();i++){
        newstrokes<<messages[i]<<endl;
    }
    paststrokes.close();
    newstrokes.close();
    cout<<"Closed\nStrokes = "<<messages.size();
    /*paststrokes.open("paststrokes.txt",ios::out);
    newstrokes.open("newstrokes.txt",ios::in);
    vector<string>moving;
    while(getline(paststrokes,line)){
        moving.push_back(line);
    }
    for(int i = 0;i<moving.size();i++){
        cout<<moving[i]<<endl;
    }
    paststrokes.close();
    newstrokes.close();*/
}