#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

struct mov_t{
	char judul [50];
	char tahun [50];
};
mov_t jdl,th;
void printmov(mov_t mov);
int main(){
	top:
	int n,a,no,pilih;
		cout<<"				==================				"<<endl;
		cout<<"				   PROGRAM FILM					"<<endl;
		cout<<"				==================				"<<endl;
		cout<<"1. MASUKKAN DATA"<<endl;
		cout<<"2. TAMPILKAN DATA"<<endl;
		cout<<"3. KELUAR PROGRAM"<<endl<<endl;
		cout<<"Pilih : ";
		cin>>pilih;
	switch(pilih){
	case 1:
		cout<<endl;
		cout<<"Masukkan banyak data : ";
		cin>>a;
	for(int i=1;i<=a;i++){
		cout<<endl;
		cout<<"Data ke - "<<i<<endl;
		cout<<"------------"<<endl;
		cout<<"Masukkan judul film : ";
	fflush(stdin);	gets(jdl.judul);
		cout<<"Masukkan tahun : ";
	fflush(stdin);	gets(th.tahun);
	
	}
	getch();
	goto top;
	case 2:
		for(int i=1;i<=a;i++){
		cout<<"Data ke -"<<i<<endl;
		cout<<"Judul film : "<<jdl.judul<<endl;
		cout<<"Tahun : "<<th.tahun<<endl;
	}
	getch();
	goto top;
	case 3:
		cout<<"Anda telah keluar dari Program. . ."<<endl;
		
		break;

}	
}
