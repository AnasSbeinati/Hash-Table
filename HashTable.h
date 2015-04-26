#include<iostream>
#include<string>
using namespace std;

class HashTable {
	private:
	int*data;
	int coff[20];
	void HashCoff(string str);
	int HashIndex(string str);
public:
	int size;
	HashTable(int size);
	int prim[20];//={1,2,3,5,7,11,13,17,19,23,27,29,31,37,39};
	void insert(string,int);
	int delet(string);
	int get(string);
	void print();
};