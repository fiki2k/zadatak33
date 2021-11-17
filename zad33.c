// Program treba naci najveci od 3 broja pomocu pointera.

#include <stdio.h>
int main()
{
    int br1, br2, br3;
    int *p1, *p2, *p3;

    //Korisnik unosi brojeve.
    printf("Unesi prvi broj: ");
    scanf("%d",&br1);
    printf("Unesi drugi broj: ");
    scanf("%d",&br2);
    printf("Unesi treci broj: ");
    scanf("%d",&br3);

    //Pridruzujemo adresu pointerima.
    p1 = &br1;
    p2 = &br2;
    p3 = &br3;
    if(*p1 > *p2)
    {
	if(*p1 > *p3)
	{
		printf("%d je najveci broj", *p1);
	}
	else
	{
		printf("%d je najveci broj", *p3);
	}
    }
    else
    {
	if(*p2 > *p3)
	{
		printf("%d je najveci broj", *p2);
	}
	else
	{
		printf("%d je najveci broj", *p3);
	}
    }
    return 0;
}
