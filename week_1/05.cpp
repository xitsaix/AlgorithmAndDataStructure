#include <iostream>

using namespace std;

int main()
{
    cout << "Loop 1 \n";
    for (int i = 1; i <= -10; i++){
        cout << i << endl;
    }cout << "\n Loop 2 \n";
    for (int i = 1; i <= -10; i += 2){
        cout << i << endl;
    }cout << "\n Loop 3 \n";
    for (int i = 1; i <= -10; i--){
        cout << i << endl;
    }
    
    cout << "\n Loop 4 \n" << endl;
    int total = 0;
    for (int i = 1; i <= 10; i++, total += 10){
        cout << i << " || " << total << endl;
    }

    cin.get();
	return 0;
}
