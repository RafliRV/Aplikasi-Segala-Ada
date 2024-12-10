#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include "LOGIN.h"
main(){
	char login;
	cout<<"======================================================================================================================="<<endl;
   cout<<"					APLIKASI SEGALA ADA"<<endl;
   cout<<"======================================================================================================================="<<endl;
   cout<<"Pengembang	:Rafli Aditya"<<endl;
   cout<<"Platform	:Borland C++ v5.2"<<endl;
   cout<<"Alamat		:Ciamis"<<endl;
   cout<<"Username	:admin"<<endl;
   cout<<"Password	:1234"<<endl;
   cout<<"\nLogin(y/t)	:";cin>>login;
   if(login=='y' || login=='Y'){
   	clrscr();
   	menulogin();
   }
}