#include<iostream>
#include<vector>
#include<fstream>
#include<string>
using namespace std;
void errormessage(string s) {
    cout << "ERROR/n" << s;
    exit;
}
int main() {
    fstream paststrokes;
    paststrokes.open("strokes.txt", ios::in | ios::out);
    if (!paststrokes.is_open()) {
        errormessage("File didn't open");
    }

    string line = "", inputed = "";
    vector<string>messages;
    while (getline(paststrokes, line)) {
        messages.push_back(line);

    }
    while (true) {
        getline(cin, inputed);
        if (inputed == "exit") {
            break;
        }
        else if (inputed.substr(0, 4) == "disp") {
            for (int i = 0; i < messages.size(); i++) {
                cout << messages[i] << endl;
            }
        }
        else {
            messages.push_back(inputed);
            cout << "Stroke added" << endl << messages.size() << " strokes\n";
        }
    }
    for (int i = 0; i < messages.size(); i++) {
        cout << messages[i] << endl;
    }
    paststrokes.close();
    cout << "Closed\nStrokes = " << messages.size();
}