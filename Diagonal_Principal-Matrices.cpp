#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int i,j,ceros;
	int matriz[6][6];
	
	//Inicializacion de variables
	i=1;
	j=1; 
		
	while(i<6){ //para las filas
		j=0;
		while(j<6){ //para las columnas;
			if(i==j){
				ceros=i;
			} else {
				ceros=0;
			}
			matriz[i][j]=ceros;
			j++;
		}
		i++;
	}
	
	i=1;
	j=1; 
	cout<<"IMPRIMIENDO LA MATRIZ"<<endl;
		while(i<6){ //Imprime la fila 
		cout<<"| "; //Solo visual
		j=1;
		while(j<6){ //Imprime las columnas
			cout<<matriz[i][j]<<" "; //Imprime los numeros con un espacio
			j++; 
		}
		cout<<"|"<<endl; //Solo visual
		i++;
	}
		
	getch();
	return 0;
}
