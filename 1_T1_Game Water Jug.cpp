#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;

int emberA = 0;
int emberB = 0;
string instruksi;

//-----------------------------------------------------
void tuangAkeB()
{
    //ember A tuang ke B
    if (emberB <= 2)
    {
        emberB = emberB + emberA;
        emberA = 0;
    }
    else if (emberB>=2 && emberA == 3)
    {
        emberA = emberA - (5 - emberB);
        emberB = 5;
    }
    else if (emberB>=3 && emberA == 2)
    {
        emberA = emberA - (5 - emberB);
        emberB = 5;
    }
    else if (3<=emberB<5 && emberA == 1)
    {
        emberA = emberA - 1;
        emberB = emberB + 1;
    }
    else if (emberB>=5)
    {
        emberA = emberA;
        emberB = 5;
    }
}

//-----------------------------------------------------
void tuangBkeA()
{
   //ember B tuang ke A
if (emberA == 0 && emberB <= 3)
{
    emberA = 0 + emberB;
    emberB = 0;
}
else if (emberA == 0 && emberB >= 4)
{
    emberA = 3;
    emberB = emberB - 3;
}
else if (emberA == 1 && emberB <= 2)
{
    emberA = 1 + emberB;
    emberB = 0;
}
else if (emberA == 1 && emberB >= 3)
{
    emberA = 3;
    emberB = emberB - 2;
}
else if (emberA == 2 && emberB <= 1)
{
    emberA = 2 + emberB;
    emberB = 0;
}
else if (emberA == 2 && emberB >= 2)
{
    emberA = 3;
    emberB = emberB - 1;
}
else if (emberA >= 3)
{
    emberA = emberA;
    emberB = emberB;
}
}

//-----------------------------------------------------
int main()
{
    do
    {
    cout<<"--------------------------------------------------------\n\n";
    cout<<"Selamat datang di GAME EMBER\n";
    cout<<"Game akan berakhir ketika Ember B berisi 4 Liter\n\n";
    cout<< "\tEmber A (maks 3L) = "; cout<< emberA; cout<< " Liter\n";
    cout<< "\tEmber B (maks 5L) = "; cout<< emberB; cout<< " Liter\n\n";
    cout<< "Pilih intruksi di bawah ini:\n\n";
    cout<< "\t1. Isi ember A 3L\n";
    cout<< "\t2. Isi ember B 5L\n";
    cout<< "\t3. Tuang ember A ke ember B\n";
    cout<< "\t4. Tuang ember B ke ember A\n";
    cout<< "\t5. Kosongkan ember A\n";
    cout<< "\t6. Kosongkan ember B\n\n";
    cout<< "Instruksi yang dipilih:"; cin>> instruksi;
    cout<< "\n";

            if (instruksi=="1")
            {
                emberA = 3;
            }
            else if (instruksi=="2")
            {
                emberB = 5;
            }
            else if (instruksi=="3")
            {
                tuangAkeB();
            }
            else if (instruksi=="4")
            {
                tuangBkeA();
            }
            else if (instruksi=="5")
            {
                emberA = 0;
            }
            else if (instruksi=="6")
            {
            emberB = 0;
            }

    }
    while (emberB!=4);
    cout<< "-----SELAMAT ANDA BERHASIL-----\n";
    cout<< "Ember A = "; cout<< emberA; cout<< " Liter\n";
    cout<< "Ember B = "; cout<< emberB; cout<< " Liter\n\n";
    getch();
}
