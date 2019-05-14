#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
using namespace std;



int ch,a;
void menu();
void creat_event();
void view_event();
void buy_tickit();
void total_cost();
struct ticket{
char event_names[30];
char org_name [100];
char date_time[50];
float price;
float booking_fee;
int no_ticket;
//int i;
char con ;
}s[10];



int main()
{	
 menu();
	           
}
void menu()
{
	system("cls");
			   cout<<"\t\t*************\n";
               cout<<"\t\t* NO *    XYZ Ticketing System    *\n";
               cout<<"\t\t*************\n";
               cout<<"\t\t* 1  *     CREAT EVENT TICKET     *\n";
               cout<<"\t\t* 2  *         BUY TICKET         *\n";
               cout<<"\t\t* 3  *      SHOW EVENT INFO       *\n";
               cout<<"\t\t* 4  * SHOW TOTAL COST AND PROFIT *\n";
               cout<<"\t\t* 5  *        EXIT SYSTEM         *\n";
               cout<<"\t\t*************\n";
               cout<<"SELECT YOUR CHOICE >>";
               cin>> ch;
               
               if(ch==1)
               creat_event();
               if(ch==2)
               buy_tickit();
               if(ch==3)
               view_event();
               if(ch==4)
			   total_cost();
      		   else if(ch==5)
               exit(1); 
	 
	            	
}



void creat_event()
{
      system("cls");
     
    cout<<"\n\t================================";
	cout<<"\n\tWelcome to XYZ Ticketing System \n";
	cout<<"\t================================\n\n";
	cout<<" Please Enter Event Info \n\n";
 
 	
 	
 		int i;
		for ( i = 1 ; i<=5 ; i++)
		{
			cin.ignore();
			cout<<"\n-Event [ "<<i<<" ] -----------------------------------------------------\n";
    			cout<<"\t\t Event Name  : \t";
     			cin.getline(s[i].event_names,30);
   
			 cout<<"\n--------------------------------------------------------------\n";
    		 cout<<"\t\tOrganization Name  : \t";
   			//	cin>>org_name[100][i];
   				cin.getline(s[i].org_name,100);
   			
 			cout<<"\n--------------------------------------------------------------\n";
    			 cout<<"\t\tDate and Time  : \t";
    			 //cin>>date_time[50][i];
    			 cin.getline(s[i].date_time,50);
    			 
    	
 			cout<<"\n--------------------------------------------------------------\n";
    			 cout<<"\t\tPrice Per Tikeckt  : \t";
    			 cin>>s[i].price;
    			 //cin.getline(price,10);
    	
			 cout<<"\n--------------------------------------------------------------\n";
     			cout<<"\t\tBokking fee (%)  : \t";
     			cin>>s[i].booking_fee;
     			//cin.getline(booking_fee,10);
     		
			cout<<"\n--------------------------------------------------------------\n";
     			cout<<"\t\tNumber of Tickets For Sale  : \t";
     			cin>>s[i].no_ticket;
     			//cin.getline(no_ticket,10);
     		
		}//for
		
		
	cout<<"Events successfully inserted."<<endl;
	cout<<"Event Code"<<setw(20)<<"Event Name"<<setw(20)<<"Ticket Available"<<setw(20)<<endl;
	cout<<"_________________________________________________________"<<endl;
	for (int i = 1 ; i<=5 ; i++)
	{
		cout<< i << setw(20) << s[i].event_names << setw(20) <<  s[i].no_ticket<<endl;
		
		//cout<<"Event Nmae : "<<s[i].event_names<<endl;
		//cout<<"Ticket No : "<<s[i].no_ticket<<endl;
	}
	

		
     	cout<<"\n\tPress 1 to menu or 0 to exit? : ";
	  	cin>>a;
      
		switch(a)
		{
			case 1 : menu();
			break;
			case 0 : exit(1);
			break;
			default : cout<<"\tInvalid choice !! \n";		
		}
		
		
}//creat_event
void buy_tickit(){
	system("cls");
	cout<<"Please Select Event : \n";
	cout<<"\t\t\t\t-------------------\n";
	cout<<"Event Code"<<setw(20)<<"Event Name"<<setw(20)<<"Ticket Price (RM)"<<setw(20)<<"Ticket Available"<<endl;
	int i;
	cout<<"_________________________________________________________________________________________________________________"<<endl;
	for ( i = 1 ; i<=5 ; i++){
		
    cout<< i << setw(20) << s[i].event_names << setw(20) << s[i].price<< setw(20) <<  s[i].no_ticket<<endl;
    
	}
	
	
	cout<<"Your Code : ";
    cin>>i;
    cout<<"No. of tickets : ";
    cin>>s[i].no_ticket;
	cout <<"You to pay RM "<< s[i].price + s[i].booking_fee<<" for this purchase"<<endl;
    cout<<"There are "<< s[i].price - s[i].no_ticket << " left for "<<s[i].event_names<<" event"<<endl;

	
    	cout<<"\n\tPress 1 to menu or 0 to exit? : ";
	  	cin>>a;
      
		switch(a)
		{
			case 1 : menu();
			break;
			case 0 : exit(1);
			break;
			default : cout<<"\tInvalid choice !! \n";		
		}
	
	
}
void view_event()
{
	
	system("cls");
	cout<<"\t\t\t\tView Info \n";
	cout<<"\t\t\t\t-----------------\n";
	cout<<"Event Code"<<setw(20)<<"Event Name"<<setw(20)<<"orgnization name"<<setw(20)<<"Date and Time"<<setw(20)<<"Booking fee"<<setw(20)<<"Ticket Price (RM)"<<setw(20)<<"Ticket Available"<<setw(20)<<endl;
	int i;
	cout<<"_______________________________________________________________________________________________________________________________________________"<<endl;
	for ( i = 1 ; i<=5 ; i++){
		
    cout<< i << setw(20) << s[i].event_names << setw(20) << s[i].org_name<< setw(20) <<  s[i].date_time << setw(20) <<  s[i].booking_fee<< setw(20) <<  s[i].price<<setw(20) <<  s[i].no_ticket<<endl;
    
	}
	
		cout<<"\n\tPress 1 to menu or 0 to exit? : ";
	  	cin>>a;
      
		switch(a)
		{
			case 1 : menu();
			break;
			case 0 : exit(1);
			break;
			default : cout<<"\tInvalid choice !! \n";		
		}

		
}
void total_cost(){
	
	system("cls");
	int i;
	float total_cost;
	double sum;
	cout<<"\t\t\t\tTotal cost and profit\n";
	cout<<"\t\t\t\t-----------------------\n";
	cout<<"Event Code"<<setw(20)<<"Event Name"<<setw(20)<<"Total cost (RM)"<<endl;
	cout<<"____________________________________________________________________________"<<endl;
	for ( i = 1 ; i<=5 ; i++){
    total_cost = s[i].price + s[i].booking_fee;
    cout<< i << setw(20) << s[i].event_names << setw(20) << total_cost <<endl;
    //total_cost += i;
    //cout <<"Total profit : " << total_profit <<endl;
        sum = sum + total_cost;
	}
	          	
      	// total_profit = total_cost + i[5];
        cout <<"Total profit : " << sum <<endl;
		cout<<"\n\tPress 1 to menu or 0 to exit? : ";
	  	cin>>a;
      
		switch(a)
		{
			case 1 : menu();
			break;
			case 0 : exit(1);
			break;
			default : cout<<"\tInvalid choice !! \n";		
		}
	
}

