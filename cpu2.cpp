#include <windows.h> //biblioteca para la funci�n sleep ()
#include <process.h>//biblioteca para la funci�n_beginthread()
#include <time.h> //biblioteca para las funciones del reloj ()
#include <stdio.h> //biblioteca para la funci�n de getchar ()
void task1(void *);
int main (int, char**)
{
	int ThreadNr;
	int nucleos =50;
	for (int i=0; i<nucleos; i++) _beginthread (task1, 0, &ThreadNr);
	(void) getchar ();
	return 0;
}
void task1(void*)
{
	while (1)
	{
		clock_t wakeup= clock ()+50;
		while (clock() <wakeup) {	}
		Sleep (50);
	}
}
