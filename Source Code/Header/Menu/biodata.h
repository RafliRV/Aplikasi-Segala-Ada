#ifndef BIODATA_H
#define BIODATA_H
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
biodata(){
	char nama[25],kota[25],tl[25],alamat[25],telp[15],lagi;
   lagi:
   	cout<<"========================================================================================================================\n";
		cout<<"						BIODATA PRIBADI SAYA"<<endl;
   	cout<<"========================================================================================================================";
  	 	cout<<"Nama Lengkap	:";gets(nama);
   	cout<<"Kota Kelahiran	:";gets(kota);
   	cout<<"Tanggal Lahir	:";gets(tl);
   	cout<<"Alamat		:";gets(alamat);
   	cout<<"No.Telp		:";gets(telp);
   	clrscr();
   	cout<<"Perkenalkan Nama Saya "<<nama<<",Saya Lahir di "<<kota;
   	cout<<"\nSaya Lahir Pada Tanggal "<<tl<<",Alamat Saya "<<alamat;
   	cout<<"\nTeman-teman Boleh Menghubungi Saya Di No.Telp ini--> "<<telp;
   	cout<<"\n\nSalam Persahabatan.......!!";
   	cout<<"\n\nInput Data Lagi?(y/t)";cin>>lagi;
   	if(lagi=='y' || lagi=='Y'){
      	goto lagi;
   	}return 0;
}
#endif