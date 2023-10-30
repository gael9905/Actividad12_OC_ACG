#include <windows.h> //biblioteca para la función sleep ()
#include <process.h>//biblioteca para la función_beginthread()
#include <time.h> //biblioteca para las funciones del reloj ()
#include <stdio.h> //biblioteca para la función de getchar ()
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
