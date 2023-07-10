#include <iostream>
#include <fstream>
using namespace std;

int main(){

// write

ofstream file;
file.open("test.txt");

if(file.is_open()){
    file << "test text\n";
    file.close();
}
else{
    cout << "file could not be opened!" << endl;
}

// read

string line;
ifstream file2("test.txt");
if(file2.is_open()){
    while(getline(file2,line)){
        cout << line << "\n";
    }
file2.close();
}

return 0;
}
