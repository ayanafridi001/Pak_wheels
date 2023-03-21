#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int usedcars();
int search();
int dlt();
int update();


int main()
{
  cout<<"File successfully opened"<<endl;
  usedcars();
	
	
}

int usedcars(){    ////////////////////////////////////////////////                    For file reading of used cars
	
		               fstream newcarsdata;
	  //               Reading of  used cars data of Honda

newcarsdata.open("Used cars.txt",ios::in);
	string line1;
	
	cout<<"\n\n\n\n\n"<<endl;
	
	while(!newcarsdata.eof())
	{
		getline(newcarsdata,line1);
		cout<<"\n\t\t\t\t\t"<<line1<<endl;
	}
	newcarsdata.close();

      cout<<"\n\t\t\t\t\t1)Search Car\n\t\t\t\t\t2)Delete\n\t\t\t\t\t3)Update data\n\t\t\t\t\t4)Exit";
					int back;
					cin>>back;
					   switch(back){             //Using switch for back option
					         case 3:
							        update();
					                break;
					         case 4:
					                return 0;
							        break;
							case 1:
					                search();
							        break;
							case 2:
					                dlt();
							        break;        
							 default:cout<<"Enter a valid number";
					                 system("pause");
									 system("cls");
					                 return usedcars();
									 break;
									 } 	         
}

int search(){            // Search Car function
 	
	struct car{
	string company,price,model;
	
};
 
 car cardata[0];
fstream newcarsdata;
newcarsdata.open("Used cars.txt"); //or file.open("e.txt",ios::app);

string name,line;
cout<<"Enter Name you want to search";
cin>>cardata[0].model;
while(!newcarsdata.eof()) // eof: End of File
{
getline(newcarsdata,line);

if(line.find(cardata[0].model)!= string::npos ) {
cout<<"\n\n\t\t\t\t\t"<<line<<"\n\n";
}
}
newcarsdata.close();

      cout<<"\n\t\t\t\t\t1)Back\n\t\t\t\t\t2)Exit";
					int back;
					cin>>back;
					   switch(back){             //Using switch for back option
					         case 1:system("cls");
					                return usedcars();
					                break;
					         case 2:
					                return 0;
							        break;
							 default:cout<<"Enter a valid number";
					                 system("pause");
									 
					                 return usedcars();
									 break;
									 } 	         

}

int dlt(){
	
struct car{
	string company,price,model,contact;
	
};

 car cardata[1];

fstream newcarsdata,temp;
 newcarsdata.open("Used cars.txt"); //or file.open("e.txt",ios::app);
 
 string line;
cout<<"\n\n\t\t\t\t\tEnter Name you want to delete";
cin>>cardata[0].model;
temp.open("temp.txt",ios::out); //or file.open("e.txt",ios::app);
while(!newcarsdata.eof()) // eof: End of File
{
getline(newcarsdata,line);
if(line.find(cardata[0].model)!= string::npos ) {
continue;
}
else{
temp<<line;
temp<<endl;
}
}
newcarsdata.close();
temp.close();
temp.open("temp.txt",ios::in);
newcarsdata.open("Used cars.txt",ios::out);
while(!temp.eof()) // eof: End of File
{
if(newcarsdata.is_open()){
getline(temp,line);
newcarsdata<<line;
newcarsdata<<endl;
}
else{

cout<<"Unsuccessful";
}
}
newcarsdata.close();
temp.close();

}

int update(){

struct car{
	string company,price,model,contact;
	
};

	
car cardata[1];
	int i;
	string num;	
	
fstream newcarsdata,temp;
newcarsdata.open("Used cars.txt"); //or file.open("e.txt",ios::app);
if(newcarsdata.is_open()){
cout<<"File Created/opened";
}else
cout<<"File creation/opening Failed";
string name,line;
cout<<"Enter Car model you want to update=";
getline(cin,cardata[0].model);
temp.open("temp.txt",ios::out); //or file.open("e.txt",ios::app);
while(!newcarsdata.eof()) // eof: End of File
{
getline(newcarsdata,line);
if(line.find(cardata[0].model)!= string::npos ) {
string num,price,company,model,contact;

	               	getline(cin,num);
	                cout<<"new Enter sale Price of your car = ";
					getline(cin,cardata[0].price);
					cout<<"new Enter Company of your car = ";
                    getline(cin,cardata[0].company);
                    cout<<"new Enter Model of your car = ";
                    getline(cin,cardata[0].model);
                    cout<<"new Enter your Contact no. (Press # when finishd)=";
					getline(cin,cardata[0].contact,'#');
                    temp<<cardata[0].price<<"     "<<cardata[0].company<<"\t"<<cardata[0].model<<"\t"<<cardata[0].contact<<endl;

}else{
temp<<line;
temp<<endl;
}
}
newcarsdata.close();
temp.close();
temp.open("temp.txt",ios::in);
newcarsdata.open("Used cars.txt",ios::out);
while(!temp.eof()) // eof: End of File
{
if(newcarsdata.is_open()){
getline(temp,line);
newcarsdata<<line;
newcarsdata<<endl;
}else{
cout<<"Unsuccessful";
}
}
remove("temp.txt");
newcarsdata.close();
temp.close();

return 0;
}
