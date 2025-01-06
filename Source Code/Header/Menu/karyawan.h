#ifndef CJP_H
#define CJP_h
#include <iostream.h>
#include <conio.h>
#include <stdio.h>
karyawan(){
	clrscr();
	char nama[25],lagi;
	double penjualan,jasa,komisi,total,komisi_rp;
   cout<<"======================================================================================================================="<<endl;
   cout<<"						PT. CAHAYA JAYA PRATAMA"<<endl;
   lagi:
   	cout<<"======================================================================================================================="<<endl;
      cout<<"Nama Karyawan		:";gets(nama);
      cout<<"Total Penjualan		:RP.";cin>>penjualan;
      if(penjualan>=0){
   		if(penjualan>=1000000){
      		jasa=75000;
            komisi=0.35;
         }else if(penjualan>=350000 && penjualan <1000000){
      	   jasa=50000;
            komisi=0.15;
         }else if(penjualan>=0 && penjualan<350000){
      	   jasa=15000;
            komisi=0.05;
         }
         komisi_rp=komisi*penjualan;
         total=jasa+komisi_rp;
         cout<<"Uang Jasa		:RP."<<jasa<<endl;
         cout<<"Komisi Yang Diterima	:"<<komisi*100<<"%"<<endl;
         cout<<"Uang Komisi		:RP."<<komisi_rp<<endl;
         cout<<"________________________________________________________________";
         cout<<"\nTotal			:RP."<<total;
       }else{
         cout<<"Angka Tidak Boleh Negatif,Coba Lagi!";
       }
       cout<<"\nInput Data Lagi(y/t)	:";cin>>lagi;
       if(lagi=='y' || lagi=='Y'){
       	goto lagi;
       }
       return 0;
}
#endif
