#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int i,j;
	int matriz[5][5]; //matriz e 5x5 (solo se usa como 4x4)
	
	//inicializar variables
	i=1;
	j=1;
	cout<<endl<<"LLENANDO LA MATRIZ"<<endl; //Solo visual
	while(i<5){ //Se llenan las filas
		j=0;
		while(j<4){
			cout<<"Ingrese el valor de la fila "<<i<<", columna "<<j<<": "; //Se llenan las columnas
				cin>>matriz[i][j];
			j++;
		}
		i++;
	}
	
	i=1;
	j=0;
	while(i<5){
		j=0;
		if(i%2==0){ //Filas pares invertidas
			j=3;
			while(j>=0){
				cout<<matriz[i][j]<<" ";
				j--;
			}
		} else { //Filas impares imprime normal
			j=0;
			while(j<4){
				cout<<matriz[i][j]<<" ";
				j++;
			}
		}
		cout<<endl;
		i++;
	}
		
	getch();
	return 0;
}
