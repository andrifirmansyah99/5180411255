#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <iomanip.h>
#include <cstring.h>

void daftar()
{
string inputH[3]={"UH 1","UH 2","UH 3"};
for(int i=1; i<4; i++)
	{
   cout<<i<<". "<<inputH[i-1]<<endl;
   }
}

int main(){
int i, j;
unsigned long int data[999][6];
int m;
string input[6]={"NIM","nama lengkap","jenis kelamin","UH 1","UH 2","UH 3",};
int r1, r2;

cout<<"       Data kelulusan mahasiswa "<<endl;
cout<<"========================================"<<endl<<endl;
cout<<"Daftar Nilai Ujian Harian :"<<endl;
daftar();
cout<<"Masukkan jumlah mahasiswa :";
cin>>m;
cout<<endl;

//memasukkan data array
for(i=0; i<m; i++)
{
	for(j=0; j<9; j++)
	{
	if(j<4){cout<<"Masukkan "<<input[j]<<" : ";
   			cin>>data[i][j];}
   else{cout<<"Masukkan Nilai "<<input[j]<<" : ";
   			cin>>data[i][j];}
   }
}

//menghitung rata-rata
for(i=0; i<m; i++)
{
r1=0;
r2=0;
	for(j=1; j<5; j++)
   {
   r1=r1+data[i][j];
   }
r2=r1/3;
data[i][5]=r2;
}

//menampilkan array
cout<<"=================================================================="<<endl;
cout<<"   Hasil yang anda masukkan, Tampilannya adalah"<<endl;
cout<<"==================================================================="<<endl;
cout<<"     Nim    |  Nama  |  Jenis Kelamin   | jurusan|UH 1 |UH 2|UH3| Rata-rata"<<endl;
for(i=0; i<m; i++)
{
	for(j=0; j<7; j++){
	cout<<data[i][j]<<setw(15);}
	cout<<endl;
}

getch();
}
