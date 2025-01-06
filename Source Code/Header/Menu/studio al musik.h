#ifndef STUDIO_H
#define STUDIO_H
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
studio(){
	 clrscr();
    char group[1000],alamat[1000],telp[1000],back;
    int ha=200000,waktu,bayar;
      do{
      	cout<<"========================================================================================================================";
			cout<<"						Studio Al Musik	"<<endl;
   		cout<<"========================================================================================================================";
   		cout<<"Isi Daftar Penyewa Berikut\n";
   		cout<<"Nama Group	:";
      	gets(group);
      	cout<<"Alamat		:";
      	gets(alamat);
      	cout<<"No. Telp	:";
      	gets(telp);
      	cout<<"========================================================================================================================";
      	cout<<"Lama Rental	:";
      	cin>>waktu;
      	bayar=ha+((waktu-1)*25/100*ha);
      	cout<<"Total Bayar	:";
      	cout<<bayar;
      	cout<<"\n========================================================================================================================";
      	cout<<"\nKembali(y/t)";
      	cin>>back;
      	clrscr();
      }while(back=='y' || back =='Y');
      cout<<"========================================================================================================================";
		cout<<"						Studio Al Musik	"<<endl;
   	cout<<"========================================================================================================================";
   	cout<<"Isi Daftar Penyewa Berikut\n";
   	cout<<"Nama Group	:"<<group;
      cout<<"\nAlamat		:"<<alamat;
      cout<<"\nNo. Telp	:"<<telp;
      cout<<"\n========================================================================================================================";
      cout<<"Lama Rental	:"<<waktu;
      cout<<"\nTotal Bayar	:"<<bayar;
      cout<<"\n========================================================================================================================";
      cout<<"						Terima Kasih\n";
      return 0;
}
#endif