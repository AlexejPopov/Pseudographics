#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    system("chcp 1251");
    system("cls");
    cout << "--------------------------------------------------------Программа рисующая снежинку!-------------------------------------------------------------" << endl;
    int N = 0;
    char S = '+';
    cout << "Введите символ для снежинки: "; cin >> S;
    cout << "Введите размер снежинки: "; cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if ((i == j) || (i + j == N - 1) || (i == N / 2) || (j == N / 2))cout << S << " ";
            else
            {
                if (N % 2 == 0)                                                          // если размер четный
                {
                    if ((i == N / 2 - 1) || (j == N / 2 - 1))cout << S << " ";           // дорисовать две линии для звездочки
                    else cout << "  ";
                }
                else cout << "  ";                                                       // иначе, если размер нечетный, заполним пробелом
            }
        }
        cout << endl;
    }
}/* Модернезировать алгоритм так, чтобы вместо звездочки рисовался любой символ с клавиатуры, в том числе и русские символы! Чтобы была и четная и нечетная снежинка. */