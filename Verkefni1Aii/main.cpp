#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string str;
    ofstream fout;
    char* ptr;

    fout.open("TextFromUser.txt", ios::app);

    do {
        getline(cin, str);
    if (str != ""){
        ptr = &str.at(0);
    }
    if (*ptr != '\\'){
        fout << str << endl;
    }
        } while (*ptr != '\\');

    fout.close();


    return 0;
}
