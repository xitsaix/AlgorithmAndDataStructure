#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n;

    char lanjut;
    while(true){
        cout << "Lempar dadu? (y/n)  ";
        cin >> lanjut;

        if(lanjut == 'y'){
            cout << 1 + (rand() % 6) << endl;
        }else if(lanjut == 'n'){
            break;
        }else{
            cout << "Warning: ketik y atau n dong!\n";
        }
    }
    
    cin.get();
	return 0;
}
