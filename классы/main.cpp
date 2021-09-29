#include <iostream>
using namespace std;
#include <windows.h>    
#include "roundCone.h"

int main(void) {
	setlocale(LC_ALL, "russian");

    int key = 0;
    cout << "¬ведите 1 - если хотите объ€вить простую переменную статически. ¬ведите 2 - если хотите объ€вить простую переменную динамически. ¬ведите 3 - если хотите объ€вить массив объектов.: ";
    cin >> key;

    switch (key) {
    case 1: {
        roundCone A;

        A.In();

        A.Out();

        cout << "ќбъем конуса равен: " << A.Volume() << endl;
        return 0;
    }   
    break;

    case 2: {
        roundCone* A = new roundCone;

        A->In();

        A->Out();

        cout << "ќбъем конуса равен: " << A->Volume() << endl;
        delete A;
        return 0;
    }
    break;

    case 3: {
        const int N = 3;

        roundCone cone_arr[N] = {     //»нициализаци€
        roundCone()                 //конструктор по умолчанию
        };

        for (int i = 0; i < N; i++) {   
            cone_arr[i].In();
            cone_arr[i].Out();
            cout << "ќбъем конуса равен: " << cone_arr[i].Volume() << endl;
        }   
    }
    break;
    }
}