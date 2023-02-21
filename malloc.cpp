#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


using namespace std;

int * llenar(int v[],int t){
	for(int i=0;i<t;i++){
		
		v[i]=rand()%10+1;
	}
	
	return v;
	
}


void imprimir(int v[], int tam){
	
	for(int i=0;i<tam;i++){
		
	  cout<<"vector["<<i<<"]-> "<<v[i]<<endl;
	}
	
	
	
}


main(){
	srand(time(NULL));
  int tam;
  int *recibe;
  int *vector= new int [tam];
  
  cout<<"ingrese un tamaño al vector"<<endl;
  cin>>tam;

 recibe= llenar(vector,tam);
 imprimir(recibe,tam);	
}
