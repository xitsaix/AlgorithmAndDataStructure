#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    while(a < 10){
        a += 1;
        if(a == 8){
            break;
        }
        cout << "hore" ;
        cout << a << endl;
    }
    
    cout << "Selesai" << endl;

    cin.get();
	return 0;
}
