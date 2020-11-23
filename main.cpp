#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int next,prevs,i,s,fatto,n,powr;//n non era stato dichiarato
	float rad;

	ins:
	printf("\nInserire un numero positivo: ");
	scanf("%d",&n);
	if(n<0)
	{
		printf("\nil numero non e' positivo. Inserirne un altro");
		goto ins;
	}//fino a qui, salvo parentesi, tutto ok
	

	printf("\nI 5 numeri successivi a %d sono:\n",n);
	next=n;
	prevs=n;
	s=0;//punti e virgole ao
	for (i=0;i<5;i++)//calcolo i next
	{
		next++;//; <--- ricorda
		s=s+next;
		printf("\n> %d",next);

	}
	powr=pow(s,2);//così tu hai messo che suc, che è uguale a n, è elevato alla seconda e sommato a s
	printf("\n %d",powr);
	s=0;
	int prevsPow=0;
	printf("\nI 2 numeri precedenti a %d sono:\n",n);
	for(i=0;i<2;i++)//for??? mancano tutti i parametri tra ( )
		{
			prevs--;
			s=s+prevs;
			printf("\n %d",prevs);
		}
		//printf("\n>>%d",pre); andava bene
	prevsPow=pow(prevs,2);
//}il main non finisce qui
	printf("\nLa somma del quadrato dei succ e' %d",powr);
	printf("\nLa somma del quadrato dei prec e' %d\n",prevsPow);
//break; lo switch è finito fuori dalle parentesi
//case 2:
	s=0;//;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; tieni possono servirti
	for(i=0;i<=n;i++) 
		{
			s=s+i;
		}
	printf("la somma dei numeri compresi tra 1 a %d e' %d\n",n,s);
//break;
//case 3:
	fatto=1;
	i=1;
	while(i<=n)//poteva essere fatto identico alla serie/sommatoria, con la differenza che al posto di + va *, e con un for
	{
		fatto=fatto*i;
		i++;
	}
	
	printf ("il !fattoriale di %d e' %d", n, fatto);

	/*s=0;
	i=1;
	do {
		s=s+i;
		i++;
		}
		while (i<=n);
		rad=sqrt(s); molto carino ricalcolare n, ma non ce lo avevi già? */
		rad=sqrt(n);
		printf ("radice di %d = %d",n,rad);

		/*for (i=1; i<=n; i++)
		{
			s=s+i;	
		} loop in più perchè sì*/
		/*break;
		default printf("il codice inserito non corrisponde");
		goto scelta; ho reso questo codice useless senza lo switch, ma è carino e fatto bene quindi lo tengo*/
		return 0;
}
