#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string str;
    ofstream fout;

    fout.open("TextFromUser.txt", ios::app);
    getline(cin, str);
    fout << str;

    fout.close();




    return 0;
}
