//Matriz zigzag grande
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int i,j;
	float num;
	float matriz [4][4];
	
	//Inicializar variables
	num=0;
	i=1;
	j=0;
	
	matriz[0][0]=0;
	
	while(i<4){
		num=matriz[i-1][j]+1.0;
		matriz[i][j]=num;
		i++;
	}

	j=1;
	while(j<4){
		i=0;
		num=matriz[0][j-1]+0.1;
		matriz[i][j]=num;
		j++;
	}
	
	
	i=1;
	while(i<4){
		j=1;
		while(j<4){
			num=matriz[i][j-1]+0.1;
			matriz[i][j]=num;
			j++;
		}
		i++;
	}
	
	//Imprimir
	i=0;
	j=0;
	while(i<4){
		j=0;
		while(j<4){
			cout<<matriz[i][j]<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}
	
	getch();
	return 0;
}