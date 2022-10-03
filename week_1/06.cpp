#include <iostream>

using namespace std;

int tambah(int a, int b);
int kuadrat(int x){
    int y;
    y = x*x;
    return y;
}

void tampilkan(int input){
    cout << "Menampilkan dengan void \n";
    cout << input << endl;
}

int main()
{
    char lanjut;
    while(true){
        cout << "Ingin mengulangi? (y/n)  ";
        cin >> lanjut;

        if(lanjut ==  'y'){
            int input, hasil, a, b, hasil2;
            cout << "nilai kuadrat dari: ";
            cin >> input;

            hasil = kuadrat(input);
            cout << hasil << endl;

            cout << "masukkan nilai a: ";
            cin >> a;
            cout << "masukkan nilai b: ";
            cin >> b;

            hasil2 = tambah(a,b);
            tampilkan(hasil2);
        }
        else if(lanjut == 'n'){
            break;
        }
        else{
            cout << "Warning ketik y atau n dong kakak!" << endl;
        }

    }

    cin.get();
	return 0;
}

int tambah(int a, int b){
    int c;
    c = a + b;
    return c;
}
