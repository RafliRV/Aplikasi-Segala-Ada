#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include "Header/LOGIN.h"
main(){
	char login,awal;
   awal:
		cout<<"======================================================================================================================="<<endl;
   	cout<<"					APLIKASI SEGALA ADA"<<endl;
   	cout<<"======================================================================================================================="<<endl;
   	cout<<"Pengembang 1	:Rafli Aditya"<<endl;
      cout<<"Pengembang 2	:Refaldy Febriansyah"<<endl;
   	cout<<"Aplikasi	:Borland C++ v5.02"<<endl;
   	cout<<"Username	:admin"<<endl;
   	cout<<"Password	:1234"<<endl;
   	cout<<"\nLogin(y/t)	:";cin>>login;
   	if(login=='y' || login=='Y'){
   		clrscr();
   		menulogin();
   	}else{
      	goto akhir;
      }cout<<"Kembali ke Menu Awal?(y/t)";cin>>awal;
   	if(awal=='y' || awal=='Y'){
   		goto awal;
   	}
      akhir:
}