#include <iostream>
using namespace std;

int main()
{
    int arrayNilai[10] = {0,1,2,3,4,5,6,7,8,9};

    for(int nilai: arrayNilai){
        cout << "Address " << &nilai << " nilainya: " << nilai << endl;
        nilai = 1;
    }

    cout << endl;

    for(int nilaiRef : arrayNilai){
        nilaiRef *= 2;
    }

    cout << endl;

    for(int &nilaiRef : arrayNilai){
        cout << "Address " << &nilaiRef << " nilainya: " << nilaiRef << endl;
    }
    
    cin.get();
	return 0;
}

/*
#include <iostream>
#include <array>
using namespace std;

int main()
{
    array <int, 10> arrayNilai = {0,1,2,3,4,5,6,7,8,9};

    for(int nilai: arrayNilai){
        cout << "Address " << &nilai << " nilainya: " << nilai << endl;
        nilai = 1;
    }

    cout << endl;

    for(int nilaiRef : arrayNilai){
        nilaiRef *= 2;
    }

    cout << endl;

    for(int &nilaiRef : arrayNilai){
        cout << "Address " << &nilaiRef << " nilainya: " << nilaiRef << endl;
    }
    
    cin.get();
	return 0;
}
*/