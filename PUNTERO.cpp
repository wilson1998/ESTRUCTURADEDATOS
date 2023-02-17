#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;


int suma(int &a,int &b,int &c){

    int  res=a+ b+ c;
	return res;
}


int main()
{

 int a,b,c;
 
 cout<<"INGRESE VALORES PARA A,B Y C"<<endl;
 cin>> a;
 cin>> b;
 cin>> c;
 
 int *ptra,*ptrb,*ptrc;
 
 
 ptra=&a;
 ptrb=&b;
 ptrc=&c;
 
 cout<< suma(*ptra,*ptrb,*ptrc);
 
 
 
 

}

