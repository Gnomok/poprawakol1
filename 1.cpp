#include <iostream>
#include <cmath>
#include <time.h> 
using namespace std;

int main(){
    int a, b;
    int licznik = 0;
    do{
        cout << "Liczba a: \n";
        cin >> a;
        licznik++;
    }while((a>0 || a % 2 == 0) && licznik !=3 );
    licznik = 0;
    do{
        cout << "Liczba b: \n";
        cin >> b;
        licznik++;
    }while((b<0 || b % 2 != 0) && licznik !=3 );

    if(a>0 || a % 2 == 0){
        a = -1;
    }
    if(b<0 || b % 2 != 0){
        b = 2;
    }

    cout << a << " " << b << endl;


    int array [5][6] = {};

    srand(time(0));
    int r;

    for(int j = 0; j < 6; j++){
        for(int i = 0; i < 5; i++){
            r = rand()%(b-2*a+1)+2*a;
            array[i][j] = r;
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 6; j++){
            cout << array[i][j] << " ";
        }
        cout << '\n';
    }
    
    int* min = nullptr;
    int* max = nullptr;
    int prik = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 6; j++){
            if(array[i][j] == b && prik == 0){
                min = &array[i][j];
                cout << min << " ";
                prik = 1;
            }
            if(array[i][j] == b && prik == 1){
                max =&array[i][j];
                cout << max << " ";
            }

        }
        
    }
    cout << endl << max - min;

}
