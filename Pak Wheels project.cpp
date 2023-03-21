#include<iostream>
#include<string>
#include<fstream>
using namespace std;


class hondacar      //Using class for  honda cars list
{ 
public:
	//properties
    string company; 
    string model; 
    int price;
    
    //methods
    void display(){
    	cout<<company;
    	cout<<model<<price<<endl;
	}

}; 

class toyotacar      //Using class for  suzuki cars list
{ 
public:
	//properties
    string company; 
    string model; 
    int price;
    
    //methods
    void display(){
    	cout<<company;
    	cout<<model<<price<<endl;
	}

}; 

class suzukicar      //Using class for  toyota cars list
{ 
public:
	//properties
    string company; 
    string model; 
    int price;
    
    //methods
    void display(){
    	cout<<company;
    	cout<<model<<price<<endl;
	}

}; 

class hondabike      //Using class for  honda bikes list
{ 
public:
	//properties
    string company; 
    string model; 
    int price;
    
    //methods
    void display(){
    	cout<<company;
    	cout<<model<<price<<endl;
	}

}; 

class suzukibike      //Using class for  Suzuki bikes list
{ 
public:
	//properties
    string company; 
    string model; 
    int price;
    
    //methods
    void display(){
    	cout<<company;
    	cout<<model<<price<<endl;
	}

}; 

class yamahabike      //Using class for Yamaha bikes list
{ 
public:
	//properties
    string company; 
    string model; 
    int price;
    
    //methods
    void display(){
    	cout<<company;
    	cout<<model<<price<<endl;
	}

}; 


////////           Functions used in program

int menu();

int payment();
int recipt();
int recipt2(); 
 
int newcars();
int hondacars();
int newcarsdata();
int hondcars();
int toyotacars();
int suzukicars();

int autostores();
int autostoresdata();
int readautostoresdata1();
int readautostoresdata2();
int readautostoresdata3();

int usedcars();
int search();
int sellcar();
int dlt();

int bikes();
int yamahabike();
int hondabike();
int suzukibike();

int contact();
int help();

int main()

{
   menu();

	return 0;	
}

int menu(){

	cout<<"\n \n";
	cout<<"\t  [][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]"<<endl;     
	cout<<"\t  []                                                                                                []"<<endl;
	cout<<"\t  []  []()()    []       []  []  []     []     [] []    [] [][][][] [][][][] []       ()[][][][]    []"<<endl;
	cout<<"\t  []  []   ()  [][]      [] []   []    [][]    [] []    [] []       []       []       []            []"<<endl;
	cout<<"\t  []  []   () []  []     [][]    []   []  []   [] []    [] []       []       []       []            []"<<endl;
	cout<<"\t  []  []()() []    []    [][]    []  []    []  [] [][][][] [][][][] [][][][] []       [][][][]()    []"<<endl;
	cout<<"\t  []  []    [][][][][]   [] []   [] []      [] [] []    [] []       []       []               []    []"<<endl;
	cout<<"\t  []  []   []        []  []  []  [][]        [][] []    [] []       []       []               []    []"<<endl;
	cout<<"\t  []  []  []          [] []   [] []            [] []    [] [][][][] [][][][] [][][][] [][][][]()    []"<<endl;
	cout<<"\t  []                                                                                                []"<<endl;
	cout<<"\t  [][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]"<<endl;
	cout<<"\n \n \n \n \n";
	
	cout<<"\t\t\t\t\t\t 1) Used Cars   "<<endl<<"\t\t\t\t\t\t 2) New Cars      "<<endl<<"\t\t\t\t\t\t 3) Bikes"<<endl;
	cout<<"\t\t\t\t\t\t 4) Auto Stores"<<endl<<"\t\t\t\t\t\t 5) Sell your car"<<endl<<"\t\t\t\t\t\t 6) Contact Info"<<endl;
    cout<<"\t\t\t\t\t\t 7) Exit"<<endl;
	cout<<"\n\n\n ";
    int option;
    cin>>option;
    
	switch(option){
		
		case 1:
			usedcars();
			break;
		case 2:
			newcars();			
			break;
			
		case 3:
			bikes();	
			break;
		case 4:
			autostores();
			break;
		case 5:
		    sellcar();	
		
		case 6:
		    contact();	
			break;
		case 7:
			return 0;
			break;	
		default:
		    cout<<"\t\t\t\t \"Enter a valid number to select any option of the menu\" ";						
	        system("pause");
			system("cls");
		    return menu();
	} }

int payment()         ////////////////////////////////////////////////////     Function for payment detail
{ 
   cout<<"\n\t\t\t\t\tBrand "<<"  "<<"Model No"<<"  "<<"Price(PKR)"<<endl;
 } 

int recipt(){    ////////////////////////////////////////////////////////          Receipt function
 	cout<<endl;
 	cout<<"\n\t\t\t\t\t Owner Name = ABC"<<endl<<""<<endl<<"\t\t\t\t\t Contact No = 0312 4567890"<<endl;
    cout<<"\t\t\t\t\t b)Back";
	char back;
	cin>>back;
	switch(back){
		case 'b':system("cls");
		return newcars();
		default:
			cout<<"\t\t\t\t\t Enter a valid number";
			system("pause");
			system("cls");
			return newcars();
	}
	 
 }


int recipt2(){    ////////////////////////////////////////////////////////          Receipt function
 	cout<<endl;
 	cout<<"\n\t\t\t\t\t Owner Name = ABC"<<endl<<""<<endl<<"\t\t\t\t\t Contact No = 0312 4567890"<<endl;
    cout<<"\t\t\t\t\t b)Back";
	char back;
	cin>>back;
	switch(back){
		case 'b':system("cls");
		return bikes();
		default:
			cout<<"\t\t\t\t\t Enter a valid number";
			system("pause");
			system("cls");
			return bikes();
	}
	 
 }


int newcars(){               // New Cars Function*************
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t\t=>New Cars: \n\n\t\t\t\t\t\t\"Please select your car brand:\""<<endl;
			cout<<"\n\t\t\t\t\t\t1)Honda \n\t\t\t\t\t\t2)Suzuki \n\t\t\t\t\t\t3)Toyota \n\n\t\t\t\t\t\t4)Back \n\n\t\t\t\t\t\t5)Exit"<<endl;
			int option;
			cin>>option;
			
			switch(option){                       //****************Using nested switch*********
				case 1:
					cout<<"\n\t\t\t\t\t\t=>Honda: "<<endl;
						system("cls");
					hondacars(); 
				break;
				case 2:
					cout<<"\n\t\t\t\t\t\t=>Suzuki: "<<endl;
					 system("cls");
					suzukicars();
				break;
				case 3:
					cout<<"\n\t\t\t\t\t\t=>Toyota: "<<endl;
					 system("cls");
					toyotacars();
				break;
				case 4://for going banck option	
				system("cls");
				return menu();
				case 5:
			    return 0;
			    break;
			
				default:
				    cout<<"\t\t\t\t\t\t \"Enter a valid number to select any option of the menu\" ";			
		            system("pause");
		 }
}

int hondacars()           //           function for new cars data of honda
{  
 system("cls");
int listofnmbers[8];
hondacar listofcars[8];
listofcars[0].company="\t\t\t\t(1)Honda ";
listofcars[0].model="    City 1.3L      ";
listofcars[0].price=4500000;
listofcars[1].company="\t\t\t\t(2)Honda ";
listofcars[1].model="    City 1.3L      ";
listofcars[1].price=4000000;
listofcars[2].company="\t\t\t\t(3)Honda ";
listofcars[2].model="    City Aspire.   ";
listofcars[2].price=3800000;
listofcars[3].company="\t\t\t\t(4)Honda";
listofcars[3].model="      BR-V\t    ";
listofcars[3].price=4400000;
listofcars[4].company="\t\t\t\t(5)Honda";
listofcars[4].model="    Civic 1.8L      ";
listofcars[4].price=3900000;
listofcars[5].company="\t\t\t\t(6)Honda";
listofcars[5].model="    Civic 1.5L VTE  ";
listofcars[5].price=3700000;
listofcars[6].company="\t\t\t\t(7)Honda  ";
listofcars[6].model="    RS-Turbo      ";
listofcars[6].price=4300000;
listofcars[7].company="\t\t\t\t(8)Honda   ";
listofcars[7].model="   CR-V\t    ";
listofcars[7].price=4300000;

cout<<"\n\n\n\n\t\t\t\t company  |    model    |   price"<<endl;

for(int i=0;i<=7;i++){
	listofcars[i].display();}
	cout<<endl;
	
	int choose;
	cout<<"\t\t\t\t\t 11)Back\n\t\t\t\t\t 12)Exit  "<<endl;
	cout<<"\n\t\t\t\t\t select the number which one do you want to buy ";
	cin>>choose;
    switch(choose)
	{    case 1: payment();listofcars[0].display();recipt();
	         break;
	    case 2: payment();listofcars[1].display();recipt();
	         break;
	    case 3: payment();listofcars[2].display();recipt();
	        break;
	    case 4: payment();listofcars[3].display();recipt();   
	            break;
	    case 5: payment();listofcars[4].display();recipt();
	            break;
	    case 6: payment();listofcars[5].display();recipt();
	            break;     		 
	    case 7: payment();listofcars[6].display();recipt();
	            break;          
	    case 8: payment();listofcars[7].display();recipt();   
	            break;         
	    case 9: payment();listofcars[8].display();recipt();   
	            break;         
	    case 10: payment();listofcars[9].display();recipt();  
	            break;
		case 11:
		system("cls");
		return newcars();
		break;
		case 12:
		return 0;
		break;
		
	    default :cout<<"not availible";
	    system("pause");
		system("cls");
		return suzukicars();
		}
	
} 

int toyotacars(){                       //           function for new cars data of toyota

system("cls");
int listofnmbers[8];
toyotacar listofcars[8];
listofcars[0].company="\t\t\t\t(1)Toyota    ";
listofcars[0].model=   " Corolla Altis 1.8   ";
listofcars[0].price=   4500000;
listofcars[1].company="\t\t\t\t(2)Toyota    ";
listofcars[1].model=   " Corolla Altis\n\t\t\t\t\t       Automatic 1.6      ";
listofcars[1].price=   4000000;
listofcars[2].company="\t\t\t\t(3)Toyota    ";
listofcars[2].model=   " Corolla Altis\n\t\t\t\t\t       CVT-i 1.8\t  ";
listofcars[2].price=   3800000;
listofcars[3].company="\t\t\t\t(4)Toyota    ";
listofcars[3].model=   " Corolla Altis\n\t\t\t\t\t       Grande CVT-i 1.8   ";
listofcars[3].price=   4400000;
listofcars[4].company="\t\t\t\t(5)Toyota    ";
listofcars[4].model=   " Corolla Altis\n\t\t\t\t\t       Manual 1.6\t  ";
listofcars[4].price=   3900000;
listofcars[5].company="\t\t\t\t(6)Toyota    ";
listofcars[5].model=   " Yaris ATIV CVT 1.3  ";
listofcars[5].price=   3700000;
listofcars[6].company="\t\t\t\t(7)Toyota    ";
listofcars[6].model=   " Yaris ATIV MT 1.3   ";
listofcars[6].price=   4300000;
listofcars[7].company="\t\t\t\t(8)Toyota    ";
listofcars[7].model=   " Yaris GLI CVT 1.3   ";
listofcars[7].price=   4300000;


cout<<"\n\n\n\n\t\t\t\t  company    |      model      |  price"<<"\n"<<endl;
for(int i=0;i<=7;i++){
	listofcars[i].display();}
	cout<<endl;
	
	int choose;
	cout<<"\t\t\t\t\t 11)Back\n\t\t\t\t\t 12)Exit "<<endl;
	cout<<"\n\t\t\t\t\t select the number which one do you want to buy ";
	cin>>choose;
    switch(choose)
	{    case 1: payment();listofcars[0].display();recipt();
	         break;
	    case 2: payment();listofcars[1].display();recipt();
	         break;
	    case 3: payment();listofcars[2].display();recipt();
	        break;
	    case 4: payment();listofcars[3].display();recipt();   
	            break;
	    case 5: payment();listofcars[4].display();recipt();
	            break;
	    case 6: payment();listofcars[5].display();recipt();
	            break;     		 
	    case 7: payment();listofcars[6].display();recipt();
	            break;          
	    case 8: payment();listofcars[7].display();recipt();   
	            break;         
	    case 9: payment();listofcars[8].display();recipt();   
	            break;         
	    case 10: payment();listofcars[9].display();recipt();  
	            break;
		case 11:
		system("cls");
		return newcars();
		break;
		case 12:
		return 0;
		break;
	    default :cout<<"not availible";
	    system("pause");
		system("cls");
		return toyotacars();
	    
        
}
	
}

int suzukicars(){                   //           function for new cars data of  suzuki

int listofnmbers[8];
suzukicar listofcars[8];
listofcars[0].company="\t\t\t\t(1)Suzuki";
listofcars[0].model=   "    Alto VX         ";
listofcars[0].price=   4500000;
listofcars[1].company="\t\t\t\t(2)Suzuki";
listofcars[1].model=   "    Cultus AGS      ";
listofcars[1].price=   4000000;
listofcars[2].company="\t\t\t\t(3)Suzuki";
listofcars[2].model=   "    Wagon R         ";
listofcars[2].price=   3800000;
listofcars[3].company="\t\t\t\t(4)Suzuki";
listofcars[3].model=   "    APV GLX         ";
listofcars[3].price=   4400000;
listofcars[4].company="\t\t\t\t(5)Suzuki";
listofcars[4].model=   "    Ciaz Auto       ";
listofcars[4].price=   3900000;
listofcars[5].company="\t\t\t\t(6)Suzuki";
listofcars[5].model=   "    Ravi Euro II    ";
listofcars[5].price=   3700000;
listofcars[6].company="\t\t\t\t(7)Suzuki";
listofcars[6].model=   "    Vitara GLX 1.6  ";
listofcars[6].price=   4300000;
listofcars[7].company="\t\t\t\t(8)Suzuki";
listofcars[7].model=   "    Jimny GA MT     ";
listofcars[7].price=   4300000;


cout<<"\n\n\n\n\t\t\t\t company  |    model     |   price"<<endl;

for(int i=0;i<=7;i++){
	listofcars[i].display();}
	cout<<endl;
	
	int choose;
	cout<<"\t\t\t\t\t 11)Back\n\t\t\t\t\t 12)Exit  "<<endl;
	cout<<"\n\t\t\t\t\t select the number which one do you want to buy ";
	cin>>choose;
    switch(choose)
	{    case 1: payment();listofcars[0].display();recipt();
	         break;
	    case 2: payment();listofcars[1].display();recipt();
	         break;
	    case 3: payment();listofcars[2].display();recipt();
	        break;
	    case 4: payment();listofcars[3].display();recipt();   
	            break;
	    case 5: payment();listofcars[4].display();recipt();
	            break;
	    case 6: payment();listofcars[5].display();recipt();
	            break;     		 
	    case 7: payment();listofcars[6].display();recipt();
	            break;          
	    case 8: payment();listofcars[7].display();recipt();   
	            break;         
	    case 9: payment();listofcars[8].display();recipt();   
	            break;         
	    case 10: payment();listofcars[9].display();recipt();  
	            break;
		case 11:
		system("cls");
		return newcars();
		break;
		case 12:
		return 0;
		break;
	    default :cout<<"not availible";
	    system("pause");
		system("cls");
		return suzukicars();
	}
}




int contact(){  // Contact info. Function*************
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t[][][][][][][][][][][][]][][][][]][][][][][][][][]\n\t\t\t\t\t[]\t\t\t\t\t\t[]\n";
	cout<<"\t\t\t\t\t[]  PakWheels.com\t\t\t\t[]\n\t\t\t\t\t[]  Saeed Alam Tower, 37-Commercial Zone\t[]"
        <<" \n\t\t\t\t\t[]  Liberty Market, Gulberg, Lahore, Pakistan.\t[]"
        <<" \n\t\t\t\t\t[]  Phone: 042 - 111 WHEELS (042 - 111 943 357)\t[]"
        <<" \n\t\t\t\t\t[]  Monday-Saturday\t\t\t\t[]"
        <<" \n\t\t\t\t\t[]  10:00am-07:00pm\t\t\t\t[]\n\t\t\t\t\t[]  info@pakwheels.com\t\t\t\t[]"<<endl;
	cout<<" \t\t\t\t\t[]\t\t\t\t\t\t[]\n\t\t\t\t\t[]  1)Back\t\t\t\t\t[] \n\t\t\t\t\t[]\t\t\t\t\t\t[]\n\t\t\t\t\t[]"
	    <<"  2)Exit\t\t\t\t\t[]"<<endl;
    cout<<" \t\t\t\t\t[]\t\t\t\t\t\t[]"<<endl;	
	cout<<"\t\t\t\t\t[][][][][][][][][][][][]][][][][]][][][][][][][][] "<<endl;
			int option;
			cin>>option;
			
			switch(option){                       //****************Using nested switch*********
				case 1://for going banck option	
				system("cls");
				return menu();
				break;
				case 2:
			    return 0;
			    break;
			
				default:
                cout<<"\t\t\t\t\t\t \"Enter a valid number to select any option of the menu\" ";	
                system("pause");
				system("cls");
                return contact();
}
}


 


int autostores(){               //***************************************       Auto Stores Function*************
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t[][][][][][][][][][][][][][][][][][][][][]";
	cout<<"\n\t\t\t\t\t[]\t\t\t\t\t[]"<<endl;
	cout<<"\t\t\t\t\t[]\t=>Auto stores:\t\t\t[] \n\t\t\t\t\t[]\t\t\t\t\t[]";
	cout<<"\n\t\t\t\t\t[]\t\"Please select your city:\"\t[]"<<endl;
	cout<<"\t\t\t\t\t[]\t\t\t\t\t[]\n\t\t\t\t\t[]\t1)Karachi\t\t\t[]"; 
    cout<<"\n\t\t\t\t\t[]\t2)Lahore\t\t\t[] \n\t\t\t\t\t[]\t3)Islamabad\t\t\t[]";
	cout<<"\n\t\t\t\t\t[]\t4)Back\t\t\t\t[]"; 
	cout<<"\n\t\t\t\t\t[]\t\t\t\t\t[]\n\t\t\t\t\t[]\t5)Exit\t\t\t\t[]"<<endl;
	cout<<"\t\t\t\t\t[]\t\t\t\t\t[]";
	cout<<"\n\t\t\t\t\t[][][][][][][][][][][][][][][][][][][][][]"<<endl;		    
			int option;
			cin>>option;
			
			switch(option){                       //****************Using nested switch*********
				case 1:
					cout<<"\n\t\t\t\t\t\t=>Karachi: "<<endl;
					system("cls");
					readautostoresdata1();
					 
				break;
				case 2:
					cout<<"\n\t\t\t\t\t\t=>Lahore: "<<endl;
                    system("cls");
					readautostoresdata2(); 	              				
				break;
				case 3:
					cout<<"\n\t\t\t\t\t\t=>Islamabad: "<<endl;
				    readautostoresdata3();
				break;
				 case 4:
					cout<<"\n\t\t\t\t\t\t=>Back: "<<endl;
				system("cls");
				return menu();
				break;
				case 5:
			    return 0;
			    break;
			
				default:
				cout<<"\t\t\t\t\t\t \"Enter a valid number to select any option of the menu\" ";			
		        system("cls");
                system("pause");
				return autostores(); 
		 }
}


int autostoresdata(){     //                    For file creation of autostores
	string name,address,contact,timings;
	                fstream islamabad;
	                islamabad.open("Islamabad autostores.txt",ios::app);
	                islamabad<<"Shop name\t\t"<<"Address\t\t"<<"Contact info.\t\t"<<"Timings"<<endl;
	                getline(cin,name);
                    getline(cin,address);
                    getline(cin,contact);
                    getline(cin,timings,'#');
                    islamabad<<name<<"\t\t"<<address<<"\t\t"<<contact<<"\t\t"<<timings<<"\t\t"<<endl;
				    islamabad.close();
}

int readautostoresdata1(){       //                                                 Karachi Autostores data
		fstream karachi;
	karachi.open("Karachi autostores.txt",ios::in);
	string line1;
	
	while(!karachi.eof())
	{
		getline(karachi,line1);
		cout<<line1<<endl;
	}
	
	
	cout<<"\n\t\t\t\t\t1)Back"<<"\n\t\t\t\t\t2)Exit";
					int back;
					cin>>back;
					   switch(back){             //Using switch for back option
					         case 1:system("cls");
					                return autostores();
					                break;
					         case 2:
					                return 0;
					                break;
							 default:cout<<"Enter a valid number";
					            system("pause");
								     system("cls");
					                 return readautostoresdata1();
									 break;}

}
int readautostoresdata2(){     //                                                       Lahore Autostores data
		fstream lahore;
	lahore.open("Lahore autostores.txt",ios::in);
	string line;
	
	while(!lahore.eof())
	{
		getline(lahore,line);
		cout<<line<<endl;
	}
    cout<<"\n\t\t\t\t\t1)Back"<<"\n\t\t\t\t\t2)Exit";
					int back;
					cin>>back;
					   switch(back){             //Using switch for back option
					         case 1:system("cls");
					                return autostores();
					                break;
					         case 2:
					                return 0;
					                break;
							 default:cout<<"Enter a valid number";
					                system("pause");
									 system("cls");
					                 return readautostoresdata2();
									 break;}
}

int readautostoresdata3(){     //                                                       Islamabaad Autostores data
		fstream islamabad;
	islamabad.open("Islamabad autostores.txt",ios::in);
	string line;
	
	while(!islamabad.eof())
	{
		getline(islamabad,line);
		cout<<line<<endl;
	}
    cout<<"\n\t\t\t\t\t1)Back"<<"\n\t\t\t\t\t2)Exit";
					int back;
					cin>>back;
					   switch(back){             //Using switch for back option
					         case 1:system("cls");
					                return autostores();
					                break;
					         case 2:
					                return 0;
					                break;
							 default:cout<<"Enter a valid number";
					                 system("pause");
									 system("cls");
					                 return readautostoresdata3();
									 break;} 	         
}


int usedcars(){    ////////////////////////////////////////////////                    For file reading of used cars
	
	system("cls");
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

      cout<<"\n\t\t\t\t\t1)Search Car\n\t\t\t\t\t2)Delete\n\t\t\t\t\t3)Back\n\t\t\t\t\t4)Exit";
					int back;
					cin>>back;
					   switch(back){             //Using switch for back option
					         case 3:system("cls");
					                return menu();
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

int sellcar(){      /////////////////////////////////////////////////                 Sell car function
 
 struct car{
	string company,price,model,contact;
	
};
	
    car cardata[1];
	int i;
	string num;
	fstream newcarsdata;
	        newcarsdata.open("Used cars.txt",ios::app);
	//		newcarsdata<<"price Rs\t   Company\t  model\t  Contact no."<<endl;
    
	               	getline(cin,num);
	                cout<<" Enter sale Price of your car = ";
					getline(cin,cardata[0].price);
					cout<<" Enter Company of your car = ";
                    getline(cin,cardata[0].company);
                    cout<<" Enter Model of your car = ";
                    getline(cin,cardata[0].model);
                    cout<<" Enter your Contact no. (Press # when finishd)=";
					getline(cin,cardata[0].contact,'#');
                    newcarsdata<<cardata[0].price<<"     "<<cardata[0].company<<"\t"<<cardata[0].model<<"\t"<<cardata[0].contact<<endl;

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
									 system("cls");
					                 return search();
									 	         
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

int bikes(){               //                    *****************************Bikes Function*************
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t\t=>Bikes : \n\n\t\t\t\t\t\t\"Please select your bikes brand:\""<<endl;
			cout<<"\n\t\t\t\t\t\t1)Honda \n\t\t\t\t\t\t2)Suzuki \n\t\t\t\t\t\t3)Yamaha \n\n\t\t\t\t\t\t4)Back \n\n\t\t\t\t\t\t5)Exit"<<endl;
			int option;
			cin>>option;
			
			switch(option){                       //****************Using nested switch*********
				 
				case 1:
					cout<<"\n\t\t\t\t\t\t=>Honda: "<<endl;
						system("cls");
					    hondabike(); 
				break;
				case 2:
					cout<<"\n\t\t\t\t\t\t=>Suzuki: "<<endl;
					    system("cls");
					    suzukibike();
				break;
				case 3:
					cout<<"\n\t\t\t\t\t\t=>Yamaha: "<<endl;
					    system("cls");
					    yamahabike();
				break;
				case 4://for going banck option	
				system("cls");
				return menu();
				case 5:
			    return 0;
			    break;
			
				default:
				    cout<<"\t\t\t\t\t\t \"Enter a valid number to select any option of the menu\" ";			
		            system("pause");
		 }
}




int hondabike()           //           function for new bikes data of honda
{                                                 
 system("cls");
int listofnmbers[8];
hondacar listofcars[8];
listofcars[0].company="\t\t\t\t(1)Honda ";
listofcars[0].model="    CG 125      ";
listofcars[0].price=131900;
listofcars[1].company="\t\t\t\t(2)Honda ";
listofcars[1].model="    CD 70       ";
listofcars[1].price=79500;
listofcars[2].company="\t\t\t\t(3)Honda ";
listofcars[2].model="    Pridor      ";
listofcars[2].price=110500;
listofcars[3].company="\t\t\t\t(4)Honda";
listofcars[3].model="      CB 150F   ";
listofcars[3].price=247500;
listofcars[4].company="\t\t\t\t(5)Honda";
listofcars[4].model="    CB 250F     ";
listofcars[4].price=875250;
listofcars[5].company="\t\t\t\t(6)Honda";
listofcars[5].model="    CBR 500R    ";
listofcars[5].price=1250000;
listofcars[6].company="\t\t\t\t(7)Honda  ";
listofcars[6].model="    CD 70 Dream ";
listofcars[6].price=85500;
listofcars[7].company="\t\t\t\t(8)Honda   ";
listofcars[7].model="   CG 125 Dream ";
listofcars[7].price=106900;

cout<<"\n\n\n\n\t\t\t\t company  |    model    |   price"<<endl;

for(int i=0;i<=7;i++){
	listofcars[i].display();}
	cout<<endl;
	
	int choose;
	cout<<"\t\t\t\t\t 11)Back\n\t\t\t\t\t 12)Exit  "<<endl;
	cout<<"\n\t\t\t\t\t select the number which one do you want to buy ";
	cin>>choose;
    switch(choose)
	{    case 1: payment();listofcars[0].display();recipt2();
	         break;
	    case 2: payment();listofcars[1].display();recipt2();
	         break;
	    case 3: payment();listofcars[2].display();recipt2();
	        break;
	    case 4: payment();listofcars[3].display();recipt2();   
	            break;
	    case 5: payment();listofcars[4].display();recipt2();
	            break;
	    case 6: payment();listofcars[5].display();recipt2();
	            break;     		 
	    case 7: payment();listofcars[6].display();recipt2();
	            break;          
	    case 8: payment();listofcars[7].display();recipt2();   
	            break;         
	    case 9: payment();listofcars[8].display();recipt2();   
	            break;         
	    case 10: payment();listofcars[9].display();recipt2();  
	            break;
		case 11:
		system("cls");
		return bikes();
		break;
		case 12:
		return 0;
		break;
		
	    default :cout<<"not availible";
	    system("pause");
		system("cls");
		return hondabike();               
		}
	
} 

int suzukibike()           //           function for new bikes data of suzuki
{  
 system("cls");
int listofnmbers[8];
hondacar listofcars[8];
listofcars[0].company="\t\t\t\t(1)Suzuki ";
listofcars[0].model="    GS 150      ";
listofcars[0].price=193000;
listofcars[1].company="\t\t\t\t(2)Suzuki ";
listofcars[1].model="    GD 110S     ";
listofcars[1].price=181000;
listofcars[2].company="\t\t\t\t(3)Suzuki";
listofcars[2].model="    GD 110      ";
listofcars[2].price=119000;
listofcars[3].company="\t\t\t\t(4)Suzuki";
listofcars[3].model="      GS 150 SE ";
listofcars[3].price=210000;
listofcars[4].company="\t\t\t\t(5)Suzuki";
listofcars[4].model="    GSXR600     ";
listofcars[4].price=1950000;
listofcars[5].company="\t\t\t\t(6)Suzuki";
listofcars[5].model="    Bandit      ";
listofcars[5].price=1450000;
listofcars[6].company="\t\t\t\t(7)Suzuki  ";
listofcars[6].model="    GR 150      ";
listofcars[6].price=287000;
listofcars[7].company="\t\t\t\t(8)Suzuki   ";
listofcars[7].model="   Hayabusa     ";
listofcars[7].price=2600000;

cout<<"\n\n\n\n\t\t\t\t company  |    model    |   price"<<endl;

for(int i=0;i<=7;i++){
	listofcars[i].display();}
	cout<<endl;
	
	int choose;
	cout<<"\t\t\t\t\t 11)Back\n\t\t\t\t\t 12)Exit  "<<endl;
	cout<<"\n\t\t\t\t\t select the number which one do you want to buy ";
	cin>>choose;
    switch(choose)
	{    case 1: payment();listofcars[0].display();recipt2();
	         break;
	    case 2: payment();listofcars[1].display();recipt2();
	         break;
	    case 3: payment();listofcars[2].display();recipt2();
	        break;
	    case 4: payment();listofcars[3].display();recipt2();   
	            break;
	    case 5: payment();listofcars[4].display();recipt2();
	            break;
	    case 6: payment();listofcars[5].display();recipt2();
	            break;     		 
	    case 7: payment();listofcars[6].display();recipt2();
	            break;          
	    case 8: payment();listofcars[7].display();recipt2();   
	            break;         
	    case 9: payment();listofcars[8].display();recipt2();   
	            break;         
	    case 10: payment();listofcars[9].display();recipt2();  
	            break;
		case 11:
		system("cls");
		return bikes();
		break;
		case 12:
		return 0;
		break;
		
	    default :cout<<"not availible";
	    system("pause");
		system("cls");
		return suzukibike();
		}
	
} 

int yamahabike()           //           function for new bikes data of yamaha
{  
 system("cls");                                          
int listofnmbers[8];
hondacar listofcars[8];
listofcars[0].company="\t\t\t\t(1)Yamaha ";
listofcars[0].model="    YB 125Z      ";
listofcars[0].price=163000;
listofcars[1].company="\t\t\t\t(2)Yamaha ";
listofcars[1].model="     YB 125-DX   ";
listofcars[1].price=175500;
listofcars[2].company="\t\t\t\t(3)Yamaha ";
listofcars[2].model="    YBR 125      ";
listofcars[2].price=181000;
listofcars[3].company="\t\t\t\t(4)Yamaha";
listofcars[3].model="      YNR 125G   ";
listofcars[3].price=190000;
listofcars[4].company="\t\t\t\t(5)Yamaha";
listofcars[4].model="    YZF-R3       ";
listofcars[4].price=930000;

cout<<"\n\n\n\n\t\t\t\t company  |    model    |   price"<<endl;

for(int i=0;i<=4;i++){
	listofcars[i].display();}
	cout<<endl;
	
	int choose;
	cout<<"\t\t\t\t\t 11)Back\n\t\t\t\t\t 12)Exit  "<<endl;
	cout<<"\n\t\t\t\t\t select the number which one do you want to buy ";
	cin>>choose;
    switch(choose)
	{    case 1: payment();listofcars[0].display();recipt2();
	         break;
	    case 2: payment();listofcars[1].display();recipt2();
	         break;
	    case 3: payment();listofcars[2].display();recipt2();
	        break;
	    case 4: payment();listofcars[3].display();recipt2();   
	            break;
	    case 5: payment();listofcars[4].display();recipt2();
	            break;
	    case 11:
		system("cls");
		return bikes();
		break;
		case 12:
		return 0;
		break;
		
	    default :cout<<"not availible";
	    system("pause");
		system("cls");
		return yamahabike();
		}
	
} 

