#include <ctime>
#include <iostream>
#include <math.h>
using namespace std;
void mostrarTiempo (clock_t tiempo);
int main (){
clock_t tiempo=clock ();  //iniciar el reloj para calcular el tiempo
//variables
long long i=0;
double sum = 0;
//Inicia el ciclo de alrededor de 28 segundos
for (i=1; i<1000000000; i++){
sum= sum+ log(double(i));

	}
	//Mostramos el tiempo que le tom� ejecutar
mostrarTiempo(tiempo);
//Salimos
cout<<"Pulse salir...";
cin.get();
return 0;
}

//Funci�n para calcular el tiempo de ejecuci�n
void mostrarTiempo(clock_t tiempo){
	tiempo=clock()-tiempo;
	cout<<endl<<"Tiempo de ejecuci�n es "<<double(tiempo)/CLOCKS_PER_SEC<<"seg."<<endl;
}
