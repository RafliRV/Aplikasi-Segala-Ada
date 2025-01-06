#ifndef WARNET_H
#define WARNET_H
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
warnet(){
	char kode,nama[25],lagi;
   double harga,diskon,total,kembalian,waktu,bayar;
   do{
   	clrscr();
   	cout<<"========================================================================================================================";
   	cout<<"						Warnet Kece"<<endl;
   	cout<<"========================================================================================================================";
   	cout<<"Nama Pelanggan		:";gets(nama);
   	cout<<"Kode			:";cin>>kode;
   	if(kode=='P' || kode=='p'){
   		harga=4000;
      	cout<<"Keterangan		:Pelanggan Warnet"<<endl;
      }else{
   		harga=5000;
      	cout<<"Keterangan		:Pelanggan Umum"<<endl;
      }
   	cout<<"Waktu Sewa		:";cin>>waktu;
   	if(waktu>=5){
   		diskon=0.5*harga;
      }else if(waktu<5 && waktu>=3){
      	diskon=0.3*harga;
      }else{
   		diskon=0;
      }
   	total=(waktu*harga)-diskon;
   	cout<<"Diskon Yang Diperoleh	:RP."<<diskon;
   	cout<<"\nTotal Pembayaran	:RP."<<total;
   	cout<<"\nTotal Bayar		:RP.";cin>>bayar;
   	kembalian=bayar-total;
      cout<<"______________________________________________________________________"<<endl;
   	cout<<"Total Kembalian		:RP."<<kembalian;
   	cout<<"\n========================================================================================================================";
      cout<<"Input Data Lagi(y/t)	:";cin>>lagi;
   }while(lagi=='y' || lagi=='Y');
   return 0;
}
#endif
