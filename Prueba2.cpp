#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[100][100];
	
	int filas=4;
	int columnas=4;
	
	//Rellenando la matriz	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	} 
	
	cout<<"\nMostrando matriz\n\n";
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"         "<<numeros[i][j] <<"\t";
		}
		cout<<"\n";
	}
	
	cout<<endl;
	
	cout<<"\nMostrando matriz Inversas\n\n";
	cout<<endl;
	
	for (int i = filas -1; i > -1; i--){
		
		for (int j =columnas -1; j >-1;j--){
			
			cout<<"         "<< numeros[i][j] <<"\t" ;
		}
	
	cout<<"\n";
	
}
	
	
	getch();
	return 0;
}
