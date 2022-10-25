#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

    ifstream myfile;
    string output, buffer;
    bool isData = false;
    int no;
    string nama;

    myfile.open("data.txt", ios::in);

    while(!isData){
        getline(myfile,buffer);
        output.append("\n"+buffer);
        if (buffer == "data"){
            isData = true;
        }
    }
    cout << output << endl;

    getline(myfile,buffer);
    cout << buffer << endl;
    int jumlahData = 0;
    while(!myfile.eof()){
        myfile >> no;
        myfile >> nama;

        cout << no << "\t" << nama << endl;
        jumlahData++;
    }

    cout << "jumlah data = " << jumlahData << endl;
    
    cin.get();
	return 0;
}