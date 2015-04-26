#include<iostream>
#include<math.h>
#include"HashTable.h"
 using namespace std;

 int main()
 {
	 int size=0;
	 cout<<"Enetr Size Of table\n";cin>>size;
	 HashTable table(size);
	 
	 int ch=5;
	 do{
		 string ID;
		 switch(ch)
		 {
		 case 1:
			 int grade;
			 cout<<"enetr ID then grade\n";cin>>ID>>grade;
			 table.insert(ID,grade);
			 break;
		 case 2:
			 cout<<"enetr ID \n";cin>>ID;
			 cout<<" deleted and it's grade is "+table.delet(ID)<<endl;
			 break;
		 case 3:
			 cout<<"enetr ID \n";cin>>ID;
			 cout<<ID;
			 cout<<"'s grade is "<<table.get(ID)<<endl;
			 break;
		 case 4:
			 table.print();
		 }
		  cout<<"1-insert 2-delete 3-get 4-print Exit for Exit \n";
	 }
	 while(std::cin>>ch);
	 system("pause");
	 return 0;
 }