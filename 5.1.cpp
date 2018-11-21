#include<iostream>
#include<string>
using namespace std;
class customer
{
public:
	char id[10],fname[10],lname[10],adrs[20],credit[10];
	int idi(char,char,char,char,char);
	int ido(char,char,char,char,char);
};
customer cus;
int customer::idi(char id,char fname,char lname,char adr,char credit)
{
cout<<"enter id";
cin>>cus.id;
cout<<"enter first name";
cin>>cus.fname;
cout<<"enter last name";
cin>>cus.lname;
cout<<"enter address";
cin>>cus.adrs;
cout<<"enter credit";
cin>>cus.credit;
}
int customer::ido(char id,char fname,char lname,char adr,char credit)
{
cout<<"                Information display             "<<endl;
cout<<"enter id";
cout<<cus.id<<endl;
cout<<"enter first name";
cout<<cus.fname<<endl;
cout<<"enter last name";
cout<<cus.lname<<endl;
cout<<"enter address";
cout<<cus.adrs<<endl;
cout<<"enter credit";
cout<<cus.credit<<endl;
}
int main(char id,char fname,char lname,char adr,char credit)
{
	cus.idi( id, fname, lname, adr, credit);
	cus.ido(id, fname, lname, adr, credit);
}
