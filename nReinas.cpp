#include <iostream>
#include<stdio.h>
using namespace std;
int x=0;//numero de solucion

//Aca comprobamos si la reina esta colocado en una posicion valida
//para que la posicion sea valida las reinas no deben en la misma columna
//y tampoco pueden estar en la misma fila, ni diagonal
bool comprobar(int reinas[],int n, int k){
	int i;
	for(i=0;i<k;i++){//for para recorer las k reinnas que tenemos dentro del array
		if( (reinas[i]==reinas[k]) or (abs(k-i) == abs(reinas[k]-reinas[i]))){//colisiones
			return false;
		}
	}
	return true;
}
	
void Nreinas(int reinas[],int n, int k){
	//este es el caso base que me indica que se ha encontrado una solucion
	//por lo cual ya no hay mas reinas por colocar.Hemos logrado poner
	//todas las reinas en el tablero deajerdrez
	if(k==n){//Para la funcion recursiva cuando el nivel de arbol y N-Reinas sea igual
		//print(reinas,n);
		x++;
		cout<<"Solucion "<<x<<" : ";
		for(int i=0;i<n;i++){//imprimir todas las pisiones del Arra reinna (Soluciion)
			cout<<reinas[i]<<" , ";
		}
		cout<<endl;
		
	}
	//aun quedan reinas por colocar y el algoritmo debe seguir buscando
	else{//expandira el arbol de buqueda
		for(reinas[k]=0;reinas[k]<n;reinas[k]++){
			if(comprobar(reinas,n,k)){//Comprobar si donde queremos colocar una nueva reinas es una posicion valida
				Nreinas(reinas,n,k+1);
			}
		}
	}
}
		
int main(int argc, char *argv[]) {
	//Nivel del arbol el cual nos encontramos o tambien el numero de reinas que emos puesto dentro del tablero
	int k=0; 
	int cant; //Representa la cantidad de N reinas
	cout<<"Ingresar la cantidad de reinas : ";
	cin>>cant;

	int *reinas = new int[cant];//Array de N cantidad de N-Reinas
	//Llenamos todo el array en menos -1, donde nos indica que no hemos puesto ninguna reina
	for(int i=0;i<cant;i++){
		reinas[i]=-1;
	}
    //Funcion recursiva N reinas, que calculara todas las soluciones posibles
	
	Nreinas(reinas,cant,k);

	return 0;
}