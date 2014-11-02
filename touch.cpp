#include <Windows.h>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;;

string myPath()
{
    char buffer[MAX_PATH];
    GetModuleFileName(NULL, buffer, MAX_PATH);
    string::size_type pos = string(buffer).find_last_of("\\/");
    return string(buffer).substr(0 ,pos);
}

int main(int zero, char* argv[])
{
    if (!argv[1] || argv[1] == "help")
    {
        cout << "please enter a file name" << endl;
        cout << "function expects touch <string filename>" << endl;
        cout << "if filename has spaces use quotes." << endl;
        cout << "don't forget to edit PATH variable to touch.exe directory." << endl;
    }else
    {
        string fileToCreate = argv[1];
        //fileToCreate = fileToCreate.replace(" ", "_");
        ofstream myFile;
        myFile.open(argv[1]);
        myFile.close();
        cout << "file: " << fileToCreate << " Created Successfully! \n";
        return 0;
    }

}


