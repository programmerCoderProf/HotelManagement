#include <iostream>
#include<string>
using namespace std;
struct cutomer 
{
int  roomNo;
string name;
 string address;
int  phoneNumber;
int numberDays; 
double totalPrice;
};
int countBusyRoom=0; 
const double costPerDay=250.00;
cutomer c[10];
void intializeRoomNumbers();
void AddNewReservation();
void ShowCutomerRecords();
void list();
int main()
{
	intializeRoomNumbers();
	list();
	return 0;
}
//////////////////////////////
void intializeRoomNumbers()
{
 c[0].roomNo=0;
 c[1].roomNo=0;
 c[2].roomNo=0;
 c[3].roomNo=0;
 c[4].roomNo=0;
 c[5].roomNo=0;
 c[6].roomNo=0;
 c[7].roomNo=0;
 c[8].roomNo=0;
 c[9].roomNo=0;
 
}
//////////////////////////
void AddNewReservation()
{
	cutomer c1;
	int roomNumber;
  l:  cout<<"Enter Number Of Rooms From 1 To 10 "<<endl;
 cin>>roomNumber;
  if(roomNumber>=1 && roomNumber<=10)
  {
  	//roomNumber-=1;
     if(c[roomNumber].roomNo==0)
     {
	    c[roomNumber].roomNo=roomNumber;
	    cout<<"Enter Name OF customer "   <<endl;
	    getline(cin,c1.name,'\n');
	    c[roomNumber].name=c1.name;
	    
     	
     }
     else
     {
     	cout<<"Rooms Is  Busy "<<endl;
     	goto l;
     }
  }
  else
 	{
  	cout<<"Sorry "<<endl;
  	goto l;
  }
	
}
////////////////////////////////
void list()
{
	cout<<"\n\n\t\t\t1-Add New Reservation "<<endl;
	cout<<"\t\t\t2-Show Customer Records "<<endl;
	cout<<"\t\t\t3-Show Room Reserved "<<endl; 
	 char x;
	cin>>x;
	 switch(x)
	 {
 		case '1':
 		system("cls");AddNewReservation();list();break;
 			case '2':
 		system("cls");ShowCutomerRecords();list();break;
 		default:list();
 	}	
}
//
void ShowCutomerRecords()
{
cout<<"Room Number             \tCustomer Name \t Phone Customer \t Number OfDay \tTotal Price"<<endl;
	for (int i=0  ; i<10 ; i++)
	{
		if (c[i].roomNo!=0)
		{
			
		    cout<<c[i].roomNo<<"\t"<<c[i].name<<"\t"<<c[i].phoneNumber<<"\t"<<c[i].numberDays<<"\t"<<c[i].totalPrice<<endl;
		}
	}	
   
}