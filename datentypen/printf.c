#include <stdio.h>
#include <stdbool.h>
int main()
{	
	int anzahl=2;
	float preis=1.5,ergebnis;
	char c=Mandarinen;
	bool rechnung;

		ergebnis=anzahl*preis;
		if (ergebnis>0)
			rechnung=true;
		else
			rechnung=false;

		if(rechnung) printf("%i %c kosten %f €.",anzahl,c,ergebnis);
		else printf("Die Rechnung ist nicht korrekt!");
return 0;
}
