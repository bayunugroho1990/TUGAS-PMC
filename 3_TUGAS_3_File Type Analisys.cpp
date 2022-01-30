#include<fstream>
#include<string.h>
#include<conio.h>
#include<cstdlib>
#include<stdio.h>
#include<iostream>
using namespace std;

int main ()
{
char *namafile = "3_TUGAS_3_konten.txt";
char kode[25];
char buffer[256];
char *ptr;

    system("cls");
    cout<<"------------------------------\n";
    cout<<"       Analisa Tipe File\n";
    cout<<"------------------------------\n";
    cout<<"Masukkan kode signature file : ";
    cin>>kode;
    cout<<"\n";
        ifstream myfile;
        myfile.open(namafile);
        if (myfile.good())
        {
            while(!myfile.eof())
            {
                myfile.getline(buffer,100);
                ptr = strstr(buffer,kode);
                if(ptr)
                {
                    cout<<"Kode Hex Signature : "<<ptr<<endl;
                    getch();
                    return 0;
                }
            }
            cout<<"Jenis file tidak diketahui!"<<endl;
            myfile.close();
            getche();
        }
        else cout <<"tidak dapat membuka file";
        return 0;
}


