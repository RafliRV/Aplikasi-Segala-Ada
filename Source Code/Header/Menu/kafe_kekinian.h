#ifndef KAFE_H
#define KAFE_H
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
kafe(){
	char kokas[25],nakas[25],lagi;
	int kode;
   double beli,harga,total,ppn,bayar,kembalian,th;
   do{
   clrscr();
   cout<<"======================================================================================================================="<<endl;
   cout<<"						KAFE KEKINIAN"<<endl;
   cout<<"======================================================================================================================="<<endl;
   cout<<"Masukkan Kode[1..3]	:";cin>>kode;
   cout<<"Jumlah Beli		:";cin>>beli;
   cout<<"Kode Kasir		:";gets(kokas);
   cout<<"Nama Kasir	  	:";gets(nakas);
   clrscr();
   cout<<"					Kafe Kekinian"<<endl;
   cout<<"				  Jl.Jendral Sudirman No.150"<<endl;
   cout<<"			  	Telp.222244444		266663666"<<endl;
   cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"<<endl;
   switch(kode){
   	case 1:
      	harga=7500;
         cout<<"				PAKET 	HEMAT"<<endl;break;
      case 2:
      	harga=10000;
         cout<<"			  	PAKET 	NASI"<<endl;break;
      case 3:
      	harga=15000;
         cout<<"			 	PAKET 	SPESIAL"<<endl;break;
      default:
      	cout<<"KODE PAKET TERSEBUT TIDAK ADA/TIDAK TERSEDIA";goto akhir;
   }
   cout<<"				"<<beli<<"		X		"<<harga<<endl;
   cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
   total=harga*beli;
   ppn=0.1*total;
   cout<<"				Total			:Rp."<<total<<endl;
   cout<<"			 	PPN 10%			:Rp."<<ppn<<endl;
   th=total+ppn;
   cout<<"				Total Pembayaran	:Rp."<<th<<endl;
   cout<<"		  		Total Bayar		:Rp.";cin>>bayar;
   kembalian=bayar-(total+ppn);
   cout<<"			        Kembalian		:Rp."<<kembalian;
   cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
   cout<<"				SELAMAT MENIKMATI"<<endl;
   cout<<"				TERIMAKASIH"<<endl;
   cout<<"				"<<nakas<<"		"<<kokas;
   akhir:
   	cout<<"\n\nInput Data Lagi(y/t)	:";cin>>lagi;
      }while(lagi=='y' || lagi=='Y');
      getch;
      return 0;
}
#endif
