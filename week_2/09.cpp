#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int *aPtr = nullptr;
    aPtr = &a;

    cout << "nilai dari a: " << a << endl;
    cout << "alamat dari a: " << aPtr << endl;

    a = 10;
    cout << "mengambil nilai dari pointer aPtr: " << *aPtr << endl;


    cin.get();
	return 0;
}