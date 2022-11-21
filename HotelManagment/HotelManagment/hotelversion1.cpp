#include <iostream>
#include<string>
using namespace std;
const double costPerDay=250.00;
/////////////////////////////////////
void intializeRoomNumbers();
void AddNewReservation();     //Functions 
void ShowCutomerRecords();
void showRoomReserved();
void editCustomerRecord();jkkj
void deleteCutomerRecord();
/////////////////////////////////
int arrRooms[10]={0};
int arrcustomerID[10];
string arrnamesCustomer[10];
int arrnumDays[10];
string  arraddresses[10];
string arrphoneNum[10];
double arrtotalPrice[10];
////////////////////////////////
void list();
int main()
{
	list();
	return 0;
}
//////////////////////////////

//////////////////////////
void AddNewReservation()
{
	int id_customer;
	int roomNum;
	string name;
	int numday;
	string address;
	string  phone;
	double totalCost=0.0;
	l:	cout<<"Enter Room Number from 1 to 10 "<<endl;
		cin>>roomNum;
	cin.ignore();
if(roomNum>=1 && roomNum<=10)
{
	roomNum-=1;
if(arrRooms[roomNum]==0)	
{
	cout<<"Enter ID Customer "<<endl;
	cin>>id_customer;
  cin.ignore();
	cout<<"Enter Name Of The Cutomer "<<endl;
	getline(cin, name);
	cout<<"Enter Number Of Days To Stay "<<endl;
	cin>>numday;
	cin.ignore();
totalCost=costPerDay*numday;
	cout<<"Enter The Address "<<endl;
	getline(cin , address );
k:	cout<<"Enter Phone Number only 9 Digits "<<endl;
     getline(cin , phone);
	if(phone.length()>=10 || phone<"0" || phone>"9")
	{
		goto k;
	}
cout<<"roomNum"<<roomNum<<endl;
arrRooms[roomNum]=roomNum+1;
arrnamesCustomer[roomNum]=name;
arrnumDays[roomNum]=numday;
arraddresses[roomNum]=address;
arrphoneNum[roomNum]=phone;
arrcustomerID[roomNum]=id_customer;
arrtotalPrice[roomNum]	=totalCost;
}	
else
{
	cout<<"Room Is Reerved "<<endl;
}	
}
else
{
	system("cls");
 goto l;
}
	}
////////////////////////////////
void list()
{
	cout<<"\n\t\t\t\t\t\t**************************";
	cout<<"\n\t\t\t\t\t\t*Hotel Management Program*";
	cout<<"\n\t\t\t\t\t\t**************************";
	cout<<"\n\n\n\t\t\t\t\t\t1-Add New Customer  Reservation "<<endl;
	cout<<"\n\t\t\t\t\t\t2-Show Customer Records "<<endl;
	cout<<"\n\t\t\t\t\t\t3-Show Rooms Reserved "<<endl;
		cout<<"\n\t\t\t\t\t\t4-Delete Cutomer "<<endl; 
			cout<<"\n\t\t\t\t\t\t5-Exit "<<endl;  
	 char   x;
	cin>>x;
	 switch(x)
	 {
 		case '1':
 		system("cls");AddNewReservation();list();break;
 			case '2':
 		system("cls");ShowCutomerRecords();list();break;
 		case '3':
		system("cls");showRoomReserved();list();break;
			case '4':	system("cls");deleteCutomerRecord();list();break;
			case '5':exit(1);
 		default:system("cls");cout<<"Choose Correct \n";list();
 	}	
}
//////////////////////////////////////////////////////////////////////////
void ShowCutomerRecords()
{
cout<<"  RoomNumber  "<<"    CustomerID  "<<"  CustomerName      "<<"  DayNumbers   "<<"   Address   "<<"   PhoneNumber    "<<"  TotalCost "<<endl;	
   for (int i=0; i<10 ; i++ )
   {
      if(arrRooms[i]!=0)
	  {
cout<<"    "<<arrRooms[i]<<"             "<<arrcustomerID[i]<<"        "<<arrnamesCustomer[i]<<"           "<<arrnumDays[i]<<"           "<<arraddresses[i]<<"       "<<arrphoneNum[i]<<"          "<<arrtotalPrice[i]<<endl;
	  }
   }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
void showRoomReserved()
{
	int flag=0; 
	for (int i=0 ; i<10 ; i++)
	{
		if(arrRooms[i]!=0)
		{
	         cout<<arrRooms[i]<<endl;	
			flag=1;
		}
	}
	if (flag==0)
	{
		cout<<"Rooms Are Not Busy \t (Rooms are Empty) "<<endl;
	}
}
////////////////////////////////////////////////////////////////////////
void deleteCutomerRecord()
{

	int id_c;
	cout<<"Enter ID Cutomer To Delete It "<<endl;
	cin>>id_c;
		for (int i=0 ; i<10 ; i++)
		{
			if(arrcustomerID[i]==id_c)
			{
			 arrRooms[i]=0;
			 cout<<"Ok Delete Succefully  "<<endl;
			 break;	
			}
		}
}
//////////////////////////////////////////////////////////////////////////////////
