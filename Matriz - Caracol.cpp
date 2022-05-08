//Matriz serpiente 3x3
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int i,j,num,num2;
	
	//Inicialización de variables
	i=0; //filas 
	j=0; //columnas
	num=0;
	float matriz[5][5];
	
	matriz[0][0]=num;
	
	while(i<1){
		while(j<5){
			num=num+1;
			matriz[i][j]=num;
			j++;
		}
		i++;
	}
	
	i=1;
	j=4;
	while(i<5){
		num=num+1;
		matriz[i][j]=num;
		i++;
	}
	
	i=4;
	j=3;
	while(j>=0){
		num=num+1;
		matriz[i][j]=num;
		j--;
	}
	
	i=3;
	j=0;
	while(i>0){
		num=num+1;
		matriz[i][j]=num;
		i--;
	}
	
	i=1;
	j=1;
	while(j<4){
		num=num+1;
		matriz[i][j]=num;
		j++;
	}
	
	i=2;
	j=3;
	while(i<4){
		num=num+1;
		matriz[i][j]=num;
		i++;
	}
	
	i=3;
	j=2;
	while(j>0){
		num=num+1;
		matriz[i][j]=num;
		j--;
	}
	
	i=2;
	j=1;
	while(j<3){
		num=num+1;
		matriz[i][j]=num;
		j++;
	}
	
	//Resultados	
	i=0;
	j=0;
	cout<<"MATRIZ RESULTANTE"<<endl<<endl;
	while(i==0){
		while(j<5){
			cout<<matriz[i][j]<<"  ";
			j++;
		}
		cout<<endl;
		i++;
	}
	
	while(i<5){
		j=0;
		while(j<5){
			cout<<matriz[i][j]<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}

	getch();
	return 0;
}