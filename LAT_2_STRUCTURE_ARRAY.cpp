#include <iostream>

using namespace std;

typedef struct orang
{
    char nama[30];
    int NIM;
    int hadir;
}
sp;
main(){
    sp data[5];
    int i,x;
    for(i=0; i<=2; i++)
    {
        cout<<"Nama : ";cin>>data[i].nama;
        cout<<"NIM : ";cin>>data[i].NIM;
        cout<<"Kehadiran (%): ";cin>>data[i].hadir;
        cout<<endl;
    }

        cout<<"Daftar kehadiran kurang dari 80% : \n";
   for(x=0; x<=4; x++)
   {
       if (data[x].hadir <= 81)
       {
            cout<<"Data ke ["<<x<<"] "<<"Nama :"<<data[x].nama<<", NIM :"<<data[x].NIM<<", Kehadiran :"<<data[x].hadir<<" % ";
            cout<<endl;
       }
        else
            cout<<"tidak ada";
        return 0;
   }
}
