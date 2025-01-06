#ifndef MENU_H
#define MENU_H
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include "Header/Menu/studio al musik.h"
#include "Header/Menu/karyawan.h"
#include "Header/Menu/kafe_kekinian.h"
#include "Header/Menu/biodata.h"
#include "Header/Menu/warnet.h"
menu(){
	 int pilihan,menu;
    char coba;
    menu:
    	clrscr();
	   cout<<"======================================================================================================================="<<endl;
      cout<<"						DAFTAR MENU"<<endl;
      cout<<"======================================================================================================================="<<endl;
      cout<<"1.Karyawan PT.CAHAYA JAYA PRATAMA"<<endl;
      cout<<"2.Studio Al Musik"<<endl;
      cout<<"3.Kafe Kekinian"<<endl;
      cout<<"4.Warnet Kece"<<endl;
      cout<<"5.Biodata Pribadi"<<endl;
      cout<<"Pilihan Anda	:";cin>>pilihan;
      switch(pilihan){
    		case 1:
         	karyawan();
      		break;
         case 2:
      		studio();break;
         case 3:
         	kafe();break;
         case 4:
         	warnet();break;
         case 5:
         	biodata();break;
         default:
      		cout<<"Pilihan Tidak Ada,Silahkan Coba Lagi";
            cout<<"\nCoba Lagi(y/t)	:";cin>>coba;
            if(coba=='y' || coba=='Y'){
         		goto menu;
            }
      }cout<<"1.Kembali Ke Daftar Menu"<<endl;
      cout<<"0.Log out"<<endl;
      cout<<"Pilihanmu	:";cin>>menu;
      if(menu==1){
      	goto menu;
      }
      return 0;
}
#endif