//Matriz copia
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int n,m,i,j;
	
	//Inicialización de variables
	i=0;
	j=0;
	
	cout<<"DECLARACION - FILAS Y COLUMNAS"<<endl;
	cout<<"Ingrese cuantas filas tendra la matriz: ";
	cin>>n;
	
	cout<<"Ingrese cuantas columnas tendra la matriz: ";
	cin>>m;
	
	int matriz[n][m];
	int copia[n][m];
	
	//Llenar la matriz
	cout<<endl<<"INGRESO DE VALORES"<<endl;
	while(i<n){
		j=0;
		while(j<m){
			cout<<"Ingrese un numero: ";
			cin>>matriz[i][j];
			j++;
		}
		i++;
	}
	
	i=0;
	//Imprimir la matriz 1
	cout<<endl<<"MATRIZ NUMERO 1"<<endl;
	while(i<n){
		j=0;
		while(j<m){
			cout<<matriz[i][j]<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}
	
	//Copiar la matriz 
	i=0;
	while(i<n){
		j=0;
		while(j<m){
			copia[i][j]=matriz[i][j];
			j++;
		}
		i++;
	}
	
	//Imprimir la copia
	cout<<endl<<"MATRIZ NUMERO 1 - COPIA"<<endl;
	i=0;
	while(i<n){
		j=0;
		while(j<m){
			cout<<copia[i][j]<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}

	getch();
	return 0;
}