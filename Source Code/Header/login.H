#ifndef LOGIN_H
#define LOGIN_H
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "Header/Menu/menu.h"
/*
	Dibuat menggunakan Borland C++ v5.2
   Username:admin
   Password:1234
*/
menulogin(){
	char user[25],pass[25],lagi,login;
   login:
   	clrscr();
		cout<<"======================================================================================================================="<<endl;
      cout<<"						SELAMAT DATANG"<<endl;
      cout<<"======================================================================================================================="<<endl;
      cout<<"Masukkan Username	:";cin>>user;
      cout<<"Masukkan Password	:";cin>>pass;
   	if(strcmp(user,		"admin") ==0 && (strcmp(pass, "1234")==0)){
      	clrscr();
         menu();
      }else{
      	if(strcmp(user,"admin")==0 && (strcmp(pass,"1234")!=0)){
         	cout<<"Password Salah,Silahkan Coba Lagi!";
         }else if(strcmp(user,"admin")!=0 && (strcmp(pass,"1234")==0)){
         	cout<<"Username Salah,Silahkan Coba Lagi!";
         }else if(strcmp(user,"admin")!=0 && (strcmp(pass,"1234")!=0)){
         	cout<<"Username dan Password Salah,Silahkan Coba Lagi!";
         }
         cout<<"\nCoba Lagi(y/t)	:";cin>>lagi;
         if(lagi=='y' || lagi=='Y'){
      		goto login;
         }
      }cout<<"Anda Telah Log Out,Login Kembali?(y/t)	:";cin>>login;
      if(login=='y' || login=='Y'){
      	goto login;
      }
      return 0;
}
#endif
