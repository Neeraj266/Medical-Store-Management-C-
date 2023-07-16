#include<iostream>
#include<conio.h>
#include<string.h>
#include<fstream>
#include<windows.h>

using namespace std;

void main_menu();

void medicine_menu();
void customer_menu();
void Suplier_menu();

ofstream fout;
ifstream fin;


class Suplier
{
	public:
	string sup_name;
	string sup_email;
	string sup_city;
	int sup_mob;
	
	public:
		void suplier_reg();
		void show_suplier();
		void suplier_r();
};
Suplier sup_de;

class Customer
{
//	string cus_name;
//	string cus_email;
//	string cus_city;
//	string cus_mob;
	
	public:
		string cus_name;
	string cus_email;
	string cus_city;
	string cus_mob;
		void customer_reg();
		void show_customer();
		void customer_r();	
};
Customer cus_de;

class MedicalStore: public Suplier,public Customer
{
	int med_id;
	string  med_name;
	float med_price;
	int med_quantity;
	float med_cost_unit;
	int med_per_packet;
	
	string exp_date;
	string mfg_date;
	
	float total_bill;
	int bill_no;
	
	char cus_name[10];
	char sup_name[10];
	
	public:
		void add_medicine();
		void sell_medicine();
		void show_medicine();
		void update_medicine();
		void delete_medicine();
		void search_medicine();
		void med_quantity_update();
		
};
MedicalStore medical;


void Customer::customer_reg()
{
	
//	string domain="@gmail.com";
//	string valid_email=cus_de.cus_email;
	char ch='y';	
	
	fout.open("customer.txt", ios::out|ios::app);
	while(ch=='y'||ch=='Y')
	{	
		cout<<"\n\t\t\tCustomer Entry";
		cout<<"\n\t\t\t----------------";
		cout<<"\n\t\t\tEnter customer name:";
		cin>>cus_de.cus_name;

				
		//check email is valid or not	
//		while(!(valid_email.find(domain)!= string::npos) )
//		{
//			cout<<"*********You entered invalid email please enter valid email**********";
//			cout<<"Enter customer email:";
//			cin>>valid_email;
//		}
		//end validation
			
		cout<<"\t\t\tEnter customer city:";
		cin>>cus_de.cus_city;
		cout<<"\t\t\tEnter customer mobile:";
		cin>>cus_de.cus_mob;		
		
		
		fout<<cus_de.cus_name<<"\t"<<cus_de.cus_city<<"\t"<<cus_de.cus_mob <<endl;
		cout<<"\t\t\tCustomer added succecfully";
		cout <<"\t\t\tYou want to add more customer press (y/n):";
		cin>>ch;
		cout<<"\t\t\t All Customer added succecfully";
		getch();	
    }
    fout.close();
    
}

void Customer::customer_r()
{
	
//	string domain="@gmail.com";
//	string valid_email=cus_de.cus_email;
	//char ch='y';	
	
	fout.open("customer.txt", ios::out|ios::app);
		cout<<"\n\t\t\tCustomer Entry";
		cout<<"\n\t\t\t----------------";
		cout<<"\n\t\t\tEnter customer name:";
		cin>>cus_de.cus_name;			
		cout<<"\t\t\tEnter customer city:";
		cin>>cus_de.cus_city;
		cout<<"\t\t\tEnter customer mobile:";
		cin>>cus_de.cus_mob;		
		
		
		fout<<cus_de.cus_name<<"\t"<<cus_de.cus_city<<"\t"<<cus_de.cus_mob <<endl;
		cout<<"\t\t\tCustomer added succecfully";
	fout.close(); 
    
}


void Customer::show_customer()
{
	system("cls");
	cout<<"\n\t\t\t-------------------All Customer Detail----------------------"<<endl;
	fin.open("customer.txt", ios::in);
	cout<<"\t\t\t\t\t-----------------------";
	cout<<"\n\t\t\t\t\tName \t City \t Mobile"<<endl;
	cout<<"\t\t\t\t\t-----------------------";
	if(!fin)
	{
		cout<<"\t File not found"<<endl;
		cout<<"\t\t\t------------------------------------------------";
	}
	
	else
	{		
		while(!fin.eof())
		{
			fin>>cus_de.cus_name;
			fin>>cus_de.cus_city;
			fin>>cus_de.cus_mob;
			
			
			cout<<"\n\t\t\t\t\t"<<cus_de.cus_name<<"\t"<<cus_de.cus_city<<"\t"<<cus_mob;		
	    }
	fin.close();		
	}

	
}

void Suplier::suplier_reg()
{
//	string domain="@gmail.com";
//	string valid_email=cus_de.cus_email;
	char ch='y';
	
	fout.open("suplier.txt", ios::out | ios::app);
	
	while(ch=='y')
	{
		cout<<"\n\t\t\tSuplier Entry";
		cout<<"\n\t\t\t-------------";
		cout<<"\n\t\t\tEnter suplier name:";
		cin>>sup_de.sup_name;
			
		//check email is valid or not	
	//	while(!(valid_email.find(domain)!= string::npos) )
	//	{
	//		cout<<"*********You entered invalid email please enter valid email**********";
	//		cout<<"\nEnter suplier email:";
	//		cin>>valid_email;
	//	}
		//end validation
			
		cout<<"\t\t\tEnter suplier city:";
		cin>>sup_de.sup_city;
		cout<<"\t\t\tEnter suplier mobile:";
		cin>>sup_de.sup_mob;
		
		fout<<sup_de.sup_name<<"\t"<<sup_de.sup_city<<"\t"<<sup_de.sup_mob <<endl;
		cout<<"\t\t\t Suplier Added Successfully";
		cout <<"\n\t\t\tYou want to add more customer press (y/n):";
		cin>>ch;
		cout<<"\n\t\t\t All Suplier added Successfuly ";		
	}
	
}


void Suplier::suplier_r()
{
//	string domain="@gmail.com";
//	string valid_email=cus_de.cus_email;
	//char ch='y';
	
	fout.open("suplier.txt", ios::out | ios::app);
		cout<<"\n\t\t\tSuplier Entry";
		cout<<"\n\t\t\t-------------";
		cout<<"\n\t\t\tEnter suplier name:";
		cin>>sup_de.sup_name;
			
		cout<<"\t\t\tEnter suplier city:";
		cin>>sup_de.sup_city;
		cout<<"\t\t\tEnter suplier mobile:";
		cin>>sup_de.sup_mob;
		
		fout<<sup_de.sup_name<<"\t"<<sup_de.sup_city<<"\t"<<sup_de.sup_mob <<endl;
		cout<<"\n\t\t\t Suplier Added Successfully";
		
	fout.close();
		
		//cout<<"\n\t\t\t All Suplier added Successfuly ";		
}

void Suplier::show_suplier()
{
	cout<<"\t\t\t-------------------All Suplier Detail----------------------"<<endl;
	fin.open("suplier.txt", ios::in);
	cout<<"\n\t\t\t\tName \t City \t Mobile"<<endl;
	cout<<"\t\t\t\t  ------------------------";
	if(!fin)
	{
		cout<<"\t File not found"<<endl;
		cout<<"------------------------------------------------";
	}
	
	else
	{		
		while(!fin.eof())
		{
			fin>>sup_de.sup_name;
			fin>>sup_de.sup_city;
			fin>>sup_de.sup_mob;
						
			cout<<"\n\t\t\t\t"<<sup_de.sup_name<<"\t"<<sup_de.sup_city<<"\t"<<sup_de.sup_mob;		
	    }
	fin.close();		
	}

	
}

void MedicalStore::add_medicine()
{
	system("cls");
	cout<<"---------------------------------------------------------------------------------------";
	cout<<"\n\t\t\t\t Medical Store Management";
	cout<<"\n----------------------------------------------------------------------------------------\n\n";


	medical.med_id=0;
	char ch='y';
	string e="exit";
	
	
	cout<<"\n\t\t\t ||Add Medicine To Stock||\n"<<endl;
		
	//suplier_r();
	fout.open("medicine.txt",ios::out|ios::app);
	//suplier_r();
	//fout<<"ID \t Medicine Name \t Mfg Date \t Expiry date \t Quantity \t Price"<<endl;
	
	while(ch=='y')
	{		
		//cout<<"\t\t\t Medicine Id:"<<medical.med_id+1<<endl;
		//med_id++; 
		
		cout<<"\n\t\t\t Enter Id of Medicine:";
		cin>>medical.med_id;cout<<endl;
		
		cout<<"\t\t\t Enter name of Medicine:";
		cin>>medical.med_name; cout<<endl;
		cout<<"\t\t\t Enter medicine mfg date(dd-mm-yyyy):";
		cin>>medical.mfg_date;cout<<endl;
		cout<<"\t\t\t Enter medicine expiry date(dd-mm-yyy):";
		cin>>medical.exp_date;cout<<endl;
		cout<<"\t\t\t Enter unit cost of medicine:";
		cin>>medical.med_per_packet;cout<<endl;

		cout<<"\t\t\t Enter medicine  total qauntity of packet:";
		cin>>medical.med_quantity;cout<<endl;

			
	fout<<medical.med_id<<"\t"<<medical.med_name<<"\t"<<medical.mfg_date<<"\t"<<medical.exp_date<<"\t"<<medical.med_per_packet<<"\t"<<medical.med_cost_unit<<"\t"<<medical.med_quantity<<"\t"<<medical.med_price<<endl;
		
		cout<<"\t\t\t Press \"y\" to add medidcine and \"n\" to exit: ";
		cin>>ch;

	}
	fout.close();	
	
}

void MedicalStore::show_medicine()
{
	system("cls");
	cout<<"---------------------------------------------------------------------------------------";
	cout<<"\n\t\t\t\t Medical Store Management";
	cout<<"\n----------------------------------------------------------------------------------------\n\n";

	cout<<"\n\t\t\t ||Available Medicine List||\n"<<endl;
	fin.open("medicine.txt",ios::in);
	
	fin>>medical.med_id;
	fin>>medical.med_name;
	fin>>medical.mfg_date;
	fin>>medical.exp_date;
	fin>>medical.med_per_packet;
	fin>>medical.med_cost_unit;
	fin>>medical.med_quantity;
	fin>>medical.med_price;
	
	cout<<"\t"<<"id"<<"\t"<<"Med Name"<<"\t"<<"mfg_date"<<"\t"<<"exp_date"<<"\t"<<"med_unit_cost"<<"\t"<<"med_quantity"<<endl;	
	cout<<"\t------------------------------------------------------------------------------------"<<endl;
	while(!fin.eof())
	{
		cout<<"\t"<<medical.med_id<<"\t"<<medical.med_name<<"\t"<<medical.mfg_date<<"\t\t"<<medical.exp_date<<"\t\t"<<medical.med_per_packet<<"\t\t"<<medical.med_quantity<<endl;	
	
		fin>>medical.med_id;
		fin>>medical.med_name;
		fin>>medical.mfg_date;
		fin>>medical.exp_date;
		fin>>medical.med_per_packet;
		fin>>medical.med_cost_unit;
		fin>>medical.med_quantity;
		fin>>medical.med_price;
		
	}
	cout<<"\t------------------------------------------------------------------------------------"<<endl;
	fin.close();
}

void MedicalStore::search_medicine()
{
	system("cls");
	cout<<"---------------------------------------------------------------------------------------";
	cout<<"\n\t\t\t\t Medical Store Management";
	cout<<"\n----------------------------------------------------------------------------------------";
	
	string s;
	int n=0;
	cout<<"\n\t\t\t\tSearch Medicine:"<<endl;
	cout<<"\t\t\t\t----------------"<<endl;
	
	fin.open("medicine.txt",ios::in);

	
	if(!fin)
	{
		cout<<"\n File does\'t  exist:\n";
	}
	else
	{
		cout<<"\t\t\t\tEnter medicine name to search medicine:";
		cin>>s;
		fin>>medical.med_id;
		fin>>medical.med_name;
		fin>>medical.mfg_date;
		fin>>medical.exp_date;
		fin>>medical.med_per_packet;
		fin>>medical.med_cost_unit;
		fin>>medical.med_quantity;
		fin>>medical.med_price;
		cout<<"\n\t"<<"id"<<"\t"<<"Med Name"<<"\t"<<"mfg_date"<<"\t"<<"exp_date"<<"\t"<<"med_per_packet"<<"\t"<<"med_cost_unit"<<"\t"<<"med_quantity"<<"\t|"<<"med_price"<<endl;	
		cout<<"\t-------------------------------------------------------------------------------------------------------------------"<<endl;
	
		
		while(!fin.eof())
		{
			if(medical.med_name==s)
			{
				//cout<<"\t\t\t"<<medical.med_id<<"\t"<<medical.med_name<<"\t"<<medical.mfg_date<<"\t"<<medical.exp_date<<"\t"<<medical.med_per_packet<<"\t"<<medical.med_cost_unit<<"\t"<<medical.med_quantity<<"\t"<<medical.med_price<<endl;
				cout<<"\t"<<medical.med_id<<"\t"<<medical.med_name<<"\t"<<medical.mfg_date<<"\t\t"<<medical.exp_date<<"\t\t"<<medical.med_per_packet<<"\t\t"<<medical.med_cost_unit<<"\t\t"<<medical.med_quantity<<"\t\t"<<medical.med_price<<endl;	
	
				n+=1;	
			}
						
			fin>>medical.med_id;
			fin>>medical.med_name;
			fin>>medical.mfg_date;
			fin>>medical.exp_date;
			fin>>medical.med_per_packet;
			fin>>medical.med_cost_unit;
			fin>>medical.med_quantity;
			fin>>medical.med_price;
			
			if(n==0)
			{
				cout<<"\n\t\t\t OPPs :) No Data Is Present:";
				break;
			}
		}		
		fin.close();
	}
	
}

void MedicalStore::update_medicine()
{
	system("cls");
	cout<<"---------------------------------------------------------------------------------------";
	cout<<"\n\t\t\t\t Medical Store Management";
	cout<<"\n----------------------------------------------------------------------------------------";
	
	string medname;
	int n=0;
	cout<<"\n\t\t\t Update Medicine Stock (-\"-you can only update quantity of medicine-\"-)"<<endl;
	
	medical.show_medicine();
	fin.open("medicine.txt",ios::in);
	
	if(!fin)
	{
		cout<<"\n\t File does\'t exit"<<endl;
		fin.close();
	}
	
	else
	{
		//medical.show_medicine();
		
		cout<<"\n\t\tEnter name of medicine whic u want to update:";
		cin>>medname;
		
		fout.open("newmedicine.txt", ios::app | ios::out);
			
		fin>>medical.med_id;
		fin>>medical.med_name;
		fin>>medical.mfg_date;
		fin>>medical.exp_date;
		fin>>medical.med_per_packet;
		fin>>medical.med_cost_unit;
		fin>>medical.med_quantity;
		fin>>medical.med_price;
			
		while(!fin.eof())
		{
			if(medname != medical.med_name)
			{
				fout<<medical.med_id<<"\t"<<medical.med_name<<"\t"<<medical.mfg_date<<"\t"<<medical.exp_date<<"\t"<<med_per_packet<<"\t"<<med_cost_unit<<"\t"<<medical.med_quantity<<"\t"<<medical.med_price<<endl;
			}
			
		
			else
			{
				cout<<"\t\t\t Enter medicine qauntity:";
				cin>>medical.med_quantity;
			fout<<medical.med_id<<"\t"<<medical.med_name<<"\t"<<medical.mfg_date<<"\t"<<medical.exp_date<<"\t"<<medical.med_per_packet<<"\t"<<medical.med_cost_unit<<"\t"<<medical.med_quantity<<"\t"<<medical.med_price<<endl;
			n++;
			}							
			fin>>medical.med_id;
			fin>>medical.med_name;
			fin>>medical.mfg_date;
			fin>>medical.exp_date;
			fin>>medical.med_per_packet;
			fin>>medical.med_cost_unit;
			fin>>medical.med_quantity;
			fin>>medical.med_price;
			if(n==0)
			{
				cout<<"\n\t\t\t Opps :) No data";
				break;
			}
		}
		fout.close();
		fin.close();
		remove("medicine.txt");
		rename("newmedicine.txt","medicine.txt");
	}
	
}

void MedicalStore::sell_medicine()
{
	int quantity[100];
	string medname[100];
	char ch='y';
	int n=0;
	float amount=0,total_amount=0;
	

	medical.med_quantity_update();
	customer_r();
	fin.open("medicine.txt",ios::in);
	
	if(fin)
	{
		fin.close();
		show_medicine();

		do
		{
			cout<<"\t\t\t Enter name of medicine which u want to sell:";
			cin>>medname[n];
			cout<<"\t\t\t Enter quantity:";
			cin>>quantity[n];
			n++;
			cout<<"\t\t\t Press \'y\' for another medicne and \'t\' for total:";
			cin>>ch;
		}while(ch=='y');
		cout<<"\t\t\t Thank U for your order press enter to generate bill:"<<endl;
		getch();
		system("cls");
		cout<<"---------------------------------------------------------------------------------------";
		cout<<"\n\t\t\t\t Medical Store Management";
		cout<<"\n----------------------------------------------------------------------------------------";
		
		cout<<"\n\n\t\t\t Customer Name:"<<cus_de.cus_name;
		cout<<"\n\n\t\t\t"<<"id"<<"\t"<<"Med Name"<<"\t"<<"med_unit_cost"<<"\t"<<"med_quantity"<<"\t"<<"amount"<<endl;
		cout<<"\t\t\t--------------------------------------------------------------"<<endl;	
		
			
			for(int i=0;i<=n;i++)
			{
				fin.open("medicine.txt",ios::in);
				
				fin>>medical.med_id;
				fin>>medical.med_name;
				fin>>medical.mfg_date;
				fin>>medical.exp_date;
				fin>>medical.med_per_packet;
				fin>>medical.med_cost_unit;
				fin>>medical.med_quantity;
				fin>>medical.med_price;
				
				while(!fin.eof())
				{
					if(medical.med_name==medname[i])
					{
						fout.open("bill.txt",ios::out|ios::app);
						amount =medical.med_per_packet * quantity[i];
						total_amount +=amount; 
						
//						cout<<"\t"<<cus_de.cus_name<<"\t"<<cus_de.cus_mob<<"\t"<<cus_de.cus_city;
						//break;
						cout<<"\t\t\t"<<med_id<<"\t"<<medname[i]<<"\t"<<med_per_packet<<"\t\t"<<quantity[i]<<"\t\t"<<amount<<"\n";	
						fout<<"\t"<<"customer name"<<cus_de.cus_name<<"\n"<<medname[i]<<med_price<<"\t"<<"\t"<<quantity[i];
					}
						fin>>medical.med_id;
						fin>>medical.med_name;
						fin>>medical.mfg_date;
						fin>>medical.exp_date;
						fin>>medical.med_per_packet;
						fin>>medical.med_cost_unit;
						fin>>medical.med_quantity;
						fin>>medical.med_price;
				}
				fin.close();
				//cout<<"\t\tTotal:"<<amount;
			}
			cout<<"\t\t\t--------------------------------------------------------------"<<endl;
			cout<<"\t\t\t\t\t\t\t\t\tTotal:"<<total_amount;
			
		
 }
	
}
	

void MedicalStore::med_quantity_update()
{
	system("cls");
	cout<<"---------------------------------------------------------------------------------------";
	cout<<"\n\t\t\t\t Medical Store Management";
	cout<<"\n----------------------------------------------------------------------------------------";
	
	int n=0;
	fin.open("medicine.txt",ios::in);
//	fout.open("medicine.txt",ios:app);
	
	if(!fin)
	{
		cout<<"\n File does\'t  exist:\n";
	}
	else
	{
		//cout<<"\t\t\t\tEnter medicine name to search medicine:";
		//cin>>s;
		fin>>medical.med_id;
		fin>>medical.med_name;
		fin>>medical.mfg_date;
		fin>>medical.exp_date;
		fin>>medical.med_per_packet;
		fin>>medical.med_cost_unit;
		fin>>medical.med_quantity;
		fin>>medical.med_price;
		//cout<<"\n\t"<<"id"<<"\t"<<"Med Name"<<"\t"<<"mfg_date"<<"\t"<<"exp_date"<<"\t"<<"med_per_packet"<<"\t"<<"med_cost_unit"<<"\t"<<"med_quantity"<<"\t|"<<"med_price"<<endl;	
		//cout<<"\t-------------------------------------------------------------------------------------------------------------------"<<endl;
		cout<<"\n\n\t\t-------------------------------------------";
		cout<<"\n\t\t Medicine List whose quantity less than 10";
	
		
		while(!fin.eof())
		{
			if(medical.med_quantity<10)
			{
				cout<<"\n\t\t-->\t"<<medical.med_name;
				//cout<<"\n\t\t\t quantity less than 10";
				//cout<<"\n\t\t\t---------------------------"<<endl;
				n++;	
			}
			
		//cout<<"\n\t\t\t-------------------------------------------";
						
			fin>>medical.med_id;
			fin>>medical.med_name;
			fin>>medical.mfg_date;
			fin>>medical.exp_date;
			fin>>medical.med_per_packet;
			fin>>medical.med_cost_unit;
			fin>>medical.med_quantity;
			fin>>medical.med_price;
			
			if(n==0)
			{
				cout<<"\n\t\t\t  No Data available:";
				break;
			}
		}
		cout<<"\n\t\t-------------------------------------------"<<endl;		
		fin.close();
	}
	
}


void medicine_menu()
{
	system("cls");
	cout<<"---------------------------------------------------------------------------------------";
	cout<<"\n\t\t\t\t Medical Store Management";
	cout<<"\n----------------------------------------------------------------------------------------";
	
	cout<<"\n\t\t\t Medicine Menu";
	cout<<"\n\t\t\t -------------";
	cout<<"\n\t\t\t 1. Add Medicine";
	cout<<"\n\t\t\t 2. Show Medicine";
	cout<<"\n\t\t\t 3. Search Medicine";
	cout<<"\n\t\t\t 4. Update Medicine";
	cout<<"\n\t\t\t 5. Sell Medicine";
	cout<<"\n\t\t\t 6. Main Menu";
	cout<<"\n\t\t\t 7. Exit";
	
	int ch;
	cout<<"\n\n\t\t\tNOTE:Eter index no. of choices:";
	cin>>ch;

	
	switch(ch)
	{
		case 1:	medical.add_medicine();
				medicine_menu();
				//medical.show_medicine();
					break;
					
		
		case 2: medical.show_medicine();
				cout<<"\n\t\t\t Press any key to see menu:";
				getch();
				medicine_menu();
				break;
					
		case 3:	medical.search_medicine();
				cout<<"\n\t\t\t Press any key to see menu:";
				getch();
				medicine_menu();
				break;
		
		case 4: medical.update_medicine();
				cout<<"\n\t\t\t Press any key to see menu:";
				getch();
				medicine_menu();
				break;
				
		case 5:	medical.sell_medicine();
				cout<<"\n\t\t\t Press any key to see menu:";
				getch();
				medicine_menu();
				break;
				
		case 6: main_menu();
				break;
			
		case 7: exit(0);
				break;					
					
		default: cout<<"\tYou entered wrong choice\n\tPlease enter valid choice:";
				 
				 break;	
				
					
	}
	
}


void customer_menu()
{
	system("cls");
	cout<<"---------------------------------------------------------------------------------------";
	cout<<"\n\t\t\t\t Medical Store Management";
	cout<<"\n----------------------------------------------------------------------------------------";
	cout<<"\n\t\t\t Customer Menu";
	cout<<"\n\t\t\t -------------";
	cout<<"\n\t\t\t 1. Add Customer";
	cout<<"\n\t\t\t 2. Show Customer";
	cout<<"\n\t\t\t 3. Main Menu";
	cout<<"\n\t\t\t 4. Exit";
		
	int ch,w;
	
	cout<<"\n\n\t\t\t NOTE:Eter index no. of choices(1/2/3/4):";
	cin>>ch;


	switch(ch)
	{
		case 1:	cus_de.customer_reg();
				customer_menu();
							
				break;
					
		
		case 2: cus_de.show_customer();
				cout<<"\n\t\t\tPress any key to see menu";
				getch();
				customer_menu();
				break;
				
		case 3: main_menu();
				break;
		
		case 4: exit(0);
				break;
				
						
						
		default:cout<<"\tYou entered wrong choice\n\tPlease enter valid choice:";
		
					cin>>ch;
					break;
					
	}
	
	
}

void suplier_menu()
{
	system("cls");
	cout<<"---------------------------------------------------------------------------------------";
	cout<<"\n\t\t\t\t Medical Store Management";
	cout<<"\n----------------------------------------------------------------------------------------";
	
	cout<<"\n\n\t\t\t -------------";
	cout<<"\n\t\t\t Suplier Menu";
	cout<<"\n\t\t\t -------------";
	cout<<"\n\t\t\t 1. Add Suplier";
	cout<<"\n\t\t\t 2. Show Suplier";
	cout<<"\n\t\t\t 3. Main Menu";
	cout<<"\n\t\t\t 4. Exit";
		
	int ch,w;
	cout<<"\n\n\t\t\t NOTE:Eter index no. of choices:";
	cin>>ch;

	
	switch(ch)
	{
		case 1:	sup_de.suplier_reg();			
				suplier_menu();
				break;
					
		
		case 2: sup_de.show_suplier();
				cout<<"\n\t\t\tPress any key to see menu";
				getch();
				suplier_menu();
				break;
				
		case 3: main_menu();
				break;
		
		case 4: exit(0);
				break;
				
					
		default:cout<<"You entered wrong choice\n Please enter valid choice:";
//				cin>>w;
//				suplier_menu();
				break;
					
	}
	
}

void main_menu()
{
	system("cls");
	cout<<"---------------------------------------------------------------------------------------";
	cout<<"\n\t\t\t\t Medical Store Management";
	cout<<"\n----------------------------------------------------------------------------------------";
	cout<<"\n\n\t\t\t 1.Customer ";
	cout<<"\n\n\t\t\t 2.Suplier ";
	cout<<"\n\n\t\t\t 3.Medicine(Perform all operations Add/Search/Update/Sell)";
	
	int ch,w;
	cout<<"\n\n\t\t\t NOTE:Enter index no. choices(1/2/3):";
	cin>>ch;

	
	switch(ch)
	{
		case 1:	customer_menu();
				break;
					
		
		case 2: suplier_menu();
				break;
					
		case 3: medicine_menu();
				break;
					
		default :	cout<<"You entered wrong choice\n Please enter valid choice:";
//					cin>>w;
//					main_menu();
					break;
					
	}
	
}

// main function
int main()
{
	main_menu();
		
	
	return 0;
}

