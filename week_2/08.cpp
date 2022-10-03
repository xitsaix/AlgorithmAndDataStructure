#include <iostream>
using namespace std;

int x = 10;

int ambilGlobal(){
    return x;
}

int xLocal(){
    int x = 5;
    return x;
}

int luasKotak(int panjang, int lebar){
    int luas = panjang * lebar;
    return luas;
}

int luasKotak(int sisi){
    int luas = sisi * sisi;
    return luas;
}

double luasKotak(double sisi){
    return sisi * sisi;
}

int main()
{
    cout << "luas kotak 2x3: " << luasKotak(x, 3) << endl;
    int x = 2;
    cout << "luas kotak 2x3: " << luasKotak(x, 3) << endl;
    {
        int x = 1;
        cout << "luas kotak 2x3: " << luasKotak(x, 3) << endl;
    }
    cout << "luas kotak 2x3: " << luasKotak(x, 3) << endl;
    cout << "luas kotak 2x3: " << luasKotak(ambilGlobal(), 3) << endl;
    cout << "luas kotak 2x2: " << luasKotak(2) << endl;
    cout << "luas kotak 2.5x2.5: " << luasKotak(2, 5) << endl;
    cin.get();
    
	return 0;
}