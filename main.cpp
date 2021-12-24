#include <iostream>

using namespace std;
int main()
{
    int maxi = 0;
    int a0 = 0, a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0, a9 = 0;
    int chasto = 0;
    int sum = 0;
    int64_t chislo;



    cout << "vvedite  chislo" << endl;
    cin >> chislo;
    if (chislo > 1000000000) { cout << "ERROR"; return 1; }
    while (chislo > 0)
    {
        sum += chislo % 10;


        if (chislo % 10 > maxi)
        {
            maxi = chislo % 10;
        }

        if (0 == chislo % 10) a0++;
        if (1 == chislo % 10) a1++;
        if (2 == chislo % 10) a2++;
        if (3 == chislo % 10) a3++;
        if (4 == chislo % 10) a4++;
        if (5 == chislo % 10) a5++;
        if (6 == chislo % 10) a6++;
        if (7 == chislo % 10) a7++;
        if (8 == chislo % 10) a8++;
        if (9 == chislo % 10) a9++;




        chislo = chislo / 10;
    }

    if (a0 <= a1) { a0 = a1; chasto = 1; };
    if (a0 <= a2) { a0 = a2; chasto = 2; };
    if (a0 <= a3) { a0 = a3; chasto = 3; };
    if (a0 <= a4) { a0 = a4; chasto = 4; };
    if (a0 <= a5) { a0 = a5; chasto = 5; };
    if (a0 <= a6) { a0 = a6; chasto = 6; };
    if (a0 <= a7) { a0 = a7; chasto = 7; };
    if (a0 <= a8) { a0 = a8; chasto = 8; };
    if (a0 <= a9) { a0 = a9; chasto = 9; };







    cout << endl << "maximalnoe chislo  " << maxi << endl << "summa cifr  " << sum << endl << "samaia chastaia   " << chasto << " - " << a0 << "  ed" << endl;
    return 0;
}


