#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ofstream myfile;

    myfile.open("data3.txt", ios::app);
    myfile << "\nMenuliskan baris baru pada data3";
    myfile.close();

    int a = 123876;
    myfile.open("data1.txt", ios::out);
    myfile << "Menuliskan baris baru pada data1\n";
    myfile << a;
    myfile.close();

    myfile.open("data2.txt", ios::trunc);
    myfile << "\nMenuliskan baris baru pada data2";
    myfile.close();

    cin.get();
	return 0;
}