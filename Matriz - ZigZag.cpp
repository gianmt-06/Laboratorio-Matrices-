#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int i,j;
	float num;
	float matriz [3][3];
	
	//Inicializar variables
	num=0;
	i=1;
	j=0;
	
	matriz[0][0]=0;
	
	while(i<3){
		num=matriz[i-1][j]+1.0;
		matriz[i][j]=num;
		i++;
	}

	j=1;
	while(j<3){
		i=0;
		num=matriz[0][j-1]+0.1;
		matriz[i][j]=num;
		j++;
	}
	
	
	i=1;
	while(i<3){
		j=1;
		while(j<3){
			num=matriz[i][j-1]+0.1;
			matriz[i][j]=num;
			j++;
		}
		i++;
	}
	
	//Imprimir
	i=0;
	j=0;
	while(i<3){
		j=0;
		while(j<3){
			cout<<matriz[i][j]<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}
	
	getch();
	return 0;
}