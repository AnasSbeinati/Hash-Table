#include"HashTable.h"
#include <math.h>

HashTable::HashTable(int size1)
{
	if(size>19)
		size=size1;
	else
		size=19;
	data=new int[size];
	for(int i=0;i<size;++i)
		data[i]=-1;
	prim[0]=1;
	prim[1]=2;
	prim[2]=3;
	prim[3]=5;
	prim[4]=7;
	prim[5]=11;
	prim[6]=13;
	prim[7]=17;
	prim[8]=19;
	prim[9]=23;
	prim[10]=29;
	prim[11]=31;
	prim[12]=37;
	prim[13]=41;
	prim[14]=43;
	prim[15]=47;
	prim[16]=53;
	prim[17]=59;
	prim[18]=61;
	prim[19]=67;
}

void HashTable::HashCoff(string str)
{
	int sum=0;
	for(int i=0;i<str.length();++i)
		sum+=3*str[i];
	for(int i=0;i<size;i++)
		coff[i]=(sum/prim[i])%size;
}

int HashTable::HashIndex(string str)
{
	HashCoff(str);
	int i=0,sum=0;
	for(int i=0;i<str.length();++i)
	{
		sum+=coff[i]*(int)str[i];
	}
	return sum%size;
}

void HashTable::insert(string student,int grade)
{
	int index=HashIndex(student);
	data[index]=grade;
}

int HashTable::delet(string student)
{
	int index=HashIndex(student);
	int temp=data[index];
	data[index]=-1;
	return temp;
}

int HashTable::get(string student)
{
	int index=HashIndex(student);
	return data[index];
}

void HashTable::print()
{
	cout<<"table with Size : "<<size<<"\n---------------------------------------"<<endl;
	for(int i=0;i<this->size;++i)
	{
		if(data[i]!=-1)
			cout<<"table ["<<i<<"]= "<<data[i]<<endl;
	}
}