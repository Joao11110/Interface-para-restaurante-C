#include<stdio.h>

int main(){
	int op, am, s;
	float t, hd, ba, sa, bg, so, wa, ft, cf, ju, co;
	do{
		t=t+0;
		printf("+------------------------------+\n");
		printf("|              Menu            |\n");
		printf("+------------------------------+\n");
		printf("| Food                         |\n");
		printf("+------------------------------+\n");
		printf("| Code | Dish          | Price |\n");
		printf("+------------------------------+\n");
		printf("| 01   | Hot dog       | $2,00 |\n");
		printf("| 02   | Bacon         | $2,00 |\n");
		printf("| 03   | Salad         | $6,00 |\n");
		printf("| 04   | Burguer       | $5,00 |\n");
		printf("| 05   | Soup          | $7,00 |\n");
		printf("| 06   | Waffles       | $6,00 |\n");
		printf("| 07   | French toast  | $4,00 |\n");
		printf("+------------------------------+\n");
		printf("| Drinks                       |\n");
		printf("+------------------------------+\n");
		printf("| Code | Dish          | Price |\n");
		printf("+------------------------------+\n");
		printf("| 107  | Coffee        | R$3,00|\n");
		printf("| 108  | Juice         | R$6,00|\n");
		printf("| 109  | Cola          | R$2,00|\n");
		printf("+------------------------------+\n");
		printf("| Type the dish code:          |\n");
		printf("+------------------------------+\n");
		scanf("%i", &op);
		printf("+------------------------------+\n");
		printf("| Type the amount you'd like:  |\n");
		printf("+------------------------------+\n");
		scanf("%i", &am);		
		switch(op){	
		case 01:
			printf("+------------------------------------+\n");
			printf("| You choose %i unity(s) of hot dog. |\n", am);
			printf("| Price: R$%.2f                      |\n", hd=am*2);
			printf("+------------------------------------+\n");
			printf("| Type 1 to add or 0 to stop 0:      |\n");
			printf("+------------------------------------+\n\n");
			scanf("%i", &s);
			t=hd+0;
			break;
	    	case 02:
	    		printf("+------------------------------------+\n");
			printf("| You choose %i unity(s) of bacon.   |\n", am);
			printf("| Price: R$%.2f                      |\n", ba=am*2);
			printf("+------------------------------------+\n");
			printf("| Type 1 to add or 0 to stop 0:      |\n");
			printf("+------------------------------------+\n\n");
			scanf("%i", &s);
			t=ba+0;
			break;
	    	case 03:
	    		printf("+------------------------------------+\n");
			printf("| You chose %i unity(s) of salad.    |\n", am);
			printf("| Price: R$%.2f                      |\n", sa=am*6);
			printf("+------------------------------------+\n");
			printf("| Type 1 to add or 0 to stop 0:      |\n");
			printf("+------------------------------------+\n\n");
			scanf("%i", &s);
			t=sa+0;
			break;
	   	case 04:
	    		printf("+------------------------------------+\n");
			printf("| You chose %i unity(s) of burger.   |\n", am);
			printf("| Price: R$%.2f                      |\n", bg=am*5);
			printf("+------------------------------------+\n");
			printf("| Type 1 to add or 0 to stop 0:      |\n");
			printf("+------------------------------------+\n\n");
			scanf("%i", &s);
			t=bg+0;
			break;
		case 05:
	    		printf("+------------------------------------+\n");
			printf("| You chose %i unity(s) of soup.     |\n", am);
			printf("| Price: R$%.2f                      |\n", so=am*7);
			printf("+------------------------------------+\n");
			printf("| Type 1 to add or 0 to stop 0:      |\n");
			printf("+------------------------------------+\n\n");
			scanf("%i", &s);
			t=so+0;
			break;
		case 06:
	    		printf("+------------------------------------+\n");
			printf("| You chose %i unity(s) of waffles.  |\n", am);
			printf("| Price: R$%.2f                      |\n", wa=am*6);
			printf("+------------------------------------+\n");
			printf("| Type 1 to add or 0 to stop 0:      |\n");
			printf("+------------------------------------+\n\n");
			scanf("%i", &s);
			t=am+0;
			break;
		case 07:
	    		printf("+----------------------------------------+\n");
			printf("| You chose %i unity(s) of french toast. |\n", am);
			printf("| Price: R$%.2f                          |\n", ft=am*4);
			printf("+----------------------------------------+\n");
			printf("| Type 1 to add or 0 to stop 0:          |\n");
			printf("+----------------------------------------+\n\n");
			scanf("%i", &s);
			t=ft+0;
			break;			
		case 107:
	    		printf("+------------------------------------+\n");
			printf("| You chose %i unity(s) of coffee.   |\n", am);
			printf("| Price: R$%.2f                      |\n", cf=am*3);
			printf("+------------------------------------+\n");
			printf("| Type 1 to add or 0 to stop 0:      |\n");
			printf("+------------------------------------+\n\n");
			scanf("%i", &s);
			t=cf+0;
			break;	
		case 108:
	    		printf("+------------------------------------+\n");
			printf("| You chose %i unity(s) of juice.    |\n", am);
			printf("| Price: R$%.2f                      |\n", ju=am*6);
			printf("+------------------------------------+\n");
			printf("| Type 1 to add or 0 to stop 0:      |\n");
			printf("+------------------------------------+\n\n");
			scanf("%i", &s);
			t=ju+0;
			break;
		case 109:
	    		printf("+------------------------------------+\n");
			printf("| You chose %i unity(s) of cola.     |\n", am);
			printf("| Price: R$%.2f                      |\n", co=am*2);
			printf("+------------------------------------+\n");
			printf("| Type 1 to add or 0 to stop 0:      |\n");
			printf("+------------------------------------+\n\n");
			scanf("%i", &s);
			t=co+0;
			break;		
		default:
			printf("+---------------------------------------------+\n");
			printf("| Please choose a valid option.               |\n");	
			printf("+---------------------------------------------+\n");
			printf("| Type 1 to go back to the menu or 0 to stop: |\n");
			printf("+---------------------------------------------+\n\n");
			scanf("%i", &s);	
	}
	t=hd+ba+sa+bg+so+wa+ft+cf+ju+co;
	printf("+-------------------------------+\n");
	printf("| Total price: %.2f.            |\n",t);
	printf("+-------------------------------+\n");
	printf("| Type 1 to add or 0 to stop 0: |\n");
	printf("+-------------------------------+\n\n");
	scanf("%i", &s);
	}while(s != 0);
	printf("+-------------------------------+\n");
	printf("| Thank you for the preference. |\n",t);
	printf("+-------------------------------+\n");
	return(0);
}
