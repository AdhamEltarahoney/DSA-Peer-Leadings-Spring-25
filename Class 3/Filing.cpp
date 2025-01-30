#include <fstream> // this provides file handling classes
#include <iostream> //
#include <sstream> //for string operations
#include <string>
using namespace std;


int main(){
    fstream infs;

    infs.open("sometext.txt", ios_base::in);

    if (!infs.is_open()){
        cout << "failed to open" <<endl;
    }

    string line;

    while(getline(infs, line)){
        cout << line << endl;
    }

    fstream outfs;
    outfs.open("newfile.txt", ios_base::out);

    if (!outfs.is_open()){
        cout << "Failed to open";
    }

    cout<<"Please type what you want added to the file: "<<endl;


    while (getline(cin, line) && line != "q"){
        outfs << line << endl;
    }
    
    outfs.close();



    return 0;

}