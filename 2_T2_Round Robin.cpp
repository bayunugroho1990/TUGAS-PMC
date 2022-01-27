#include<stdio.h>
#include<string.h>
main ()
{
int n, ar[100], b[100], i, j, tmp, wt[100], ta[100], time[100];
int totWT=0, totTA=0;
float AvWT, AvTA;
char name[20][20], tmpName[20];
printf("\t.:: Program Penjadwalan CPU ROUND ROBIN ::.\n");
puts("");
printf("Banyak Proses\t= "); scanf("%d", &n);
puts("");
// Masukkan data yang diproses
for(i=0; i<n; i++){
fflush(stdin);
printf("Nama Proses\t= "); gets(name[i]);
printf("Waktu datang\t= "); scanf("%d", &ar[i]);
printf("Waktu Eksekusi\t= "); scanf("%d", &b[i]);
puts("");
}
// SORTING Data
for(i=0; i<n; i++){
for(j=i+1; j<n; j++)
if(ar[i]>ar[j]){
//tukar nama
strcpy(tmpName, name[i]);
strcpy(name[i], name[j]);
strcpy(name[j], tmpName);
//tukar arrival time
tmp=ar[i];
ar[i]=ar[j];
ar[j]=tmp;
//tukar eksekusi
tmp=b[i];
b[i]=b[j];
b[j]=tmp;
}
}
time[0]=ar[0];
puts("\n\t.:: Process Table ::.");
puts("==========================================");
printf("| no | proses\t | waktu datang\t | eksekusi |\n");
puts("——————————————");
for (i=0; i<n; i++){
printf("| %2d | %s\t |  \t%d\t | %d\t |\n", i+1, name[i], ar[i], b[i]);
time[i+1]=time[i]+b[i]; //menghitung time pada ganchart
wt[i]=time[i]-ar[i];
ta[i]=time[i+1]-ar[i];
totWT+=wt[i];
totTA+=ta[i];
}
puts("==========================================");
printf("\tTotal waktu tunggu\t= %d \n", totWT);
printf("\tTotal waktu selesai\t= %d \n", totTA);
puts("\n\t.:: Time Process Table ::.");
puts("==================================================");
printf("| no | proses\t | waktu tunggu\t | waktu selesai\t |\n");
puts("————————————————–");
for(i=0; i<n; i++){
printf("| %2d | %s\t |  \t%d\t | \t%d\t |\n", i+1, name[i], wt[i], ta[i]);
}
puts("==================================================");
//untuk Gant Chart
puts("\n");
puts("\t.:: Gant-Chart ::.\n");
for(i=0; i<n; i++){
printf(" %s\t ", name[i]);
}
puts("");
for(i=0; i<n; i++){
printf("|=========");
}
printf("|\n");
for(i=0; i<=n; i++){
printf(" %d\t ", time[i]);
} printf("//diperoleh dari penjumlahan waktu eksekusi");
puts("\n");
AvWT=(float)totWT/n; //average waiting time
AvTA=(float)totTA/n; //average turn arround time
printf("\tRata2 Waktu Tunggu : %f\n", AvWT);
printf("\tRata2 Waktu Selesai : %f\n", AvTA);
}
