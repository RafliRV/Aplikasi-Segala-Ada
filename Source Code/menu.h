#ifndef MENU_H
#define MENU_H
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include "studio al musik.h"
#include "cjp.h"
menu(){
	 int pilihan;
    char coba;
    menu:
    	clrscr();
	   cout<<"======================================================================================================================="<<endl;
      cout<<"					MENU"<<endl;
      cout<<"======================================================================================================================="<<endl;
      cout<<"1.Karyawan PT.CAHAYA JAYA PRATAMA"<<endl;
      cout<<"2.Studio Al Musik"<<endl;
      cout<<"Pilihan Anda	:";cin>>pilihan;
      switch(pilihan){
    		case 1:
         	cjp();
      		break;
         case 2:
      		studio();break;
         default:
      		cout<<"Pilihan Tidak Ada,Silahkan Coba Lagi";
            cout<<"\nCoba Lagi(y/t)	:";cin>>coba;
            if(coba=='y' || coba=='Y'){
         		goto menu;
            }
      }
}
#endif