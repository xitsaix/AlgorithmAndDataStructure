#include <iostream>
#include <array>
using namespace std;

int main()
{
    array < int, 5 > nilai;

    for(int i = 0; i <= 4; i++){
        nilai[i] = i;
        cout << "nilai [" << i << "] = " << nilai[i];
        cout << "address: " << &nilai[i] << endl;
    }

    cout << endl;
    cout << "ukuran: " << nilai.size() << endl;
    cout << "address awal: " << nilai.begin() << endl;
    cout << "address akhir: " << nilai.end() << endl;
    cout << "nilai ke 2: " << nilai.at(2) << endl;

    cin.get();
	return 0;
}