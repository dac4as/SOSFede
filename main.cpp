#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int cod,suc,pre,i,s,fatto,n;//n non era stato dichiarato
	float rad;

	ins:
	printf("inserire un numero positivo\n");
	scanf("%d",n);
	if(n<0)
	{
		printf("il numero non e' positivo inserirne un altro");
		goto ins:
	}
	
	scelta
	printf("testo verifica");
	scanf("%d",cod);
	switch(cod)
{
	case 1:
	printf("\nI 5 numeri successivi a %d sono",n);
	suc=n;
	pre=n;
	s=0
	for (i=0;i<5;i++)
	{
		suc=suc+1
		s=s+pow (suc, 2);
	}
	printf("\nI 2 numeri precedenti a %d sono",n);
	for
	pre=pre-1
	printf("\n>>%d",pre);
	s=s+pow (pre, 2);
}
printf("\nLa somma del loro quadrato e' %d",s);
break;
case 2:
s=0
for(i=1;i<=n; i++) 
{
s=s+i
}
printf("la somma dei numeri compresi tra 1 a %d e' %d\n", n,s);
break;
case 3:
fatto=1;
i=1;
while (1<=n)
{
	fatto=fatto*i;
	i++;
	}
	printf ("il fattoriale di %d e' %d", n, fatto);
	break;
	case 4
	s=0;
	i=1;
	do {
		s=s+i;
		i++;
		}
		while (i<=n);
		rad=sqrt (s);
		for (i=1; i<=n; i++)
		{
			s=s+i;	
		}
		break;
		default printf("il codice inserito non corrisponde");
		goto scelta;
		getch()
		return 0;
	}
