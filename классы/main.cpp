#include <iostream>
using namespace std;
#include <windows.h>    
#include "roundCone.h"

int main(void) {
	setlocale(LC_ALL, "russian");

    int key = 0;
    cout << "������� 1 - ���� ������ �������� ������� ���������� ����������. ������� 2 - ���� ������ �������� ������� ���������� �����������. ������� 3 - ���� ������ �������� ������ ��������.: ";
    cin >> key;

    switch (key) {
    case 1: {
        roundCone A;

        A.In();

        A.Out();

        cout << "����� ������ �����: " << A.Volume() << endl;
        return 0;
    }   
    break;

    case 2: {
        roundCone* A = new roundCone;

        A->In();

        A->Out();

        cout << "����� ������ �����: " << A->Volume() << endl;
        delete A;
        return 0;
    }
    break;

    case 3: {
        const int N = 3;

        roundCone cone_arr[N] = {     //�������������
        roundCone()                 //����������� �� ���������
        };

        for (int i = 0; i < N; i++) {   
            cone_arr[i].In();
            cone_arr[i].Out();
            cout << "����� ������ �����: " << cone_arr[i].Volume() << endl;
        }   
    }
    break;
    }
}