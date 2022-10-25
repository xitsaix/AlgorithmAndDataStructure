#include <iostream>
#include <string>
using namespace std;

int main(){
    string kata("car");
    cout << kata << endl;

    string data;
    cout << "masukkan kata: " << endl;
    cin >> data;
    cout << "data yang dimasukkan adalah: " << endl;
    cout << data << endl;

    std::cin.get();
	return 0;
}