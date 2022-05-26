#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    const string a="301211100310", b="xayr2003";
    string x,y;
    ofstream MyWriteFile("nazoratchi.txt");
   nishon: cout << "Login: ";
    MyWriteFile << "Login: ";
    cin >> x;
    MyWriteFile << x;
    cout << "Parol: ";
    MyWriteFile << "\nParol: ";
    cin >> y;
    MyWriteFile << y;
    if (x==a && y==b) {
        cout << "Siz tizimga muvaffaqiyatli kirdingiz.";
        MyWriteFile << "\nSiz tizimga muvaffaqiyatli kirdingiz.";
    }
    else {
        cout << "Login yoki parol xato\n";
        MyWriteFile << "\nLogin yoki parol xato";
       goto nishon;
    }
    MyWriteFile.close();
    return 0;
}
