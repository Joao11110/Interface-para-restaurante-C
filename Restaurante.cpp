#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int op, q, p; 
	float t, cq, ba, xs, ha, re, so, ta, ca, su, pq;
	do{
		t=t+0;
		printf("+------------------------------------+\n");
		printf("|                 Menu               |\n");
		printf("+------------------------------------+\n");
		printf("| Código | Prato           | Preço   |\n");
		printf("+------------------------------------+\n");
		printf("| Comidas                            |\n");
		printf("+------------------------------------+\n");
		printf("| 01     | Cachorro quente | R$8,00  |\n");
		printf("| 02     | Bauru           | R$9,00  |\n");
		printf("| 03     | X-salada        | R$10,00 |\n");
		printf("| 04     | Hambúrguer      | R$12,00 |\n");
		printf("| 05     | Sopa            | R$8,00  |\n");
		printf("| 06     | Tapioca         | R$6,00  |\n");
		printf("| 07     | Pão de queijo   | R$5,00  |\n");
		printf("+------------------------------------+\n");
		printf("| Bebidas                            |\n");
		printf("+------------------------------------+\n");
		printf("| Código | Prato          | Preço    |\n");
		printf("+------------------------------------+\n");	
		printf("| 107    | Café           | R$2,00   |\n");
		printf("| 108    | Suco           | R$4,00   |\n");
		printf("| 109    | Refrigerante   | R$3,00   |\n");
		printf("+------------------------------------+\n");
		printf("| Digite o código do prato:          |\n");
		printf("+------------------------------------+\n");
		scanf("%i", &op);
		printf("+------------------------------------------+\n");
		printf("| Digite a quantidade que deseja:          |\n");
		printf("+------------------------------------------+\n");
		scanf("%i", &q);		
		switch(op){	
		case 01:
			printf("+-------------------------------------------------+\n");
			printf("| Você escolheu %i unidade(s) de cachorro quente. |\n", q);
			printf("| O seu pedido vai custar: R$%.2f                 |\n", cq=q*8);
			printf("+-------------------------------------------------+\n");
			printf("| Digite a 1 para adicionar ou 0 para parar:      |\n");
			printf("+-------------------------------------------------+\n\n");
			scanf("%i", &p);
			t=cq+0;
			break;
	    case 02:
	    	printf("+--------------------------------------------+\n");
			printf("| Você escolheu %i unidade(s) de bauru.      |\n",q);
			printf("| O seu pedido vai custar: R$%.2f            |\n", ba=q*9);
			printf("+--------------------------------------------+\n");
			printf("| Digite a 1 para adicionar ou 0 para parar: |\n");
			printf("+--------------------------------------------+\n\n");
			scanf("%i", &p);
			t=ba+0;
			break;
	    case 03:
	    	printf("+------------------------------------------------+\n");
			printf("| Você escolheu %i unidades(s) de x-salada.      |\n",q);
			printf("| O seu pedido vai custar: R$%.2f                |\n",xs=q*10);
			printf("+------------------------------------------------+\n");
			printf("| Digite a 1 para adicionar ou 0 para parar:     |\n");
			printf("+------------------------------------------------+\n\n");
			scanf("%i", &p);
			t=xs+0;
			break;
	    case 04:
	    	printf("+------------------------------------------------+\n");
			printf("| Você escolheu %i unidade(s) de hambúrguer.     |\n",q);
			printf("| O seu pedido vai custar: R$%.2f                |\n",ha=q*12);
			printf("+------------------------------------------------+\n");
			printf("| Digite a 1 para adicionar ou 0 para parar:     |\n");
			printf("+------------------------------------------------+\n\n");
			scanf("%i", &p);
			t=ha+0;
			break;
	    case 05:
	    	printf("+-----------------------------------------------------+\n");
			printf("| Você escolheu %i unidade(s) de sopa.                |\n",q);
			printf("| O seu pedido vai custar: R$%.2f                     |\n",so=q*8);
			printf("+-----------------------------------------------------+\n");
			printf("| Digite a 1 para continuar ou 0 para parar:          |\n");
			printf("+-----------------------------------------------------+\n\n");
			scanf("%i", &p);
			t=so+0;
			break;
		case 06:
	    	printf("+--------------------------------------------+\n");
			printf("| Você escolheu %i unidade(s) de tapioca.    |\n",q);
			printf("| O seu pedido vai custar: R$%.2f            |\n",ta=q*6);
			printf("+--------------------------------------------+\n");
			printf("| Digite a 1 para adicionar ou 0 para parar: |\n");
			printf("+--------------------------------------------+\n\n");
			scanf("%i", &p);
			t=ta+0;
			break;
		case 07:
	    	printf("+-----------------------------------------------+\n");
			printf("| Você escolheu %i unidade(s) de pão de queijo. |\n",q);
			printf("| O seu pedido vai custar: R$%.2f               |\n",pq=q*5);
			printf("+-----------------------------------------------+\n");
			printf("| Digite a 1 para adicionar ou 0 para parar:    |\n");
			printf("+-----------------------------------------------+\n\n");
			scanf("%i", &p);
			t=pq+0;
			break;			
		case 107:
	    	printf("+------------------------------------------------+\n");
			printf("| Você escolheu %i unidade(s) de café (pequeno). |\n",q);
			printf("| O seu pedido vai custar: R$%.2f                |\n",ca=q*2);
			printf("+------------------------------------------------+\n");
			printf("| Digite a 1 para adicionar ou 0 para parar:     |\n");
			printf("+------------------------------------------------+\n\n");
			scanf("%i", &p);
			t=ca+0;
			break;	
		case 108:
	    	printf("+------------------------------------------------+\n");
			printf("| Você escolheu %i unidade(s) de suco (polpa).   |\n",q);
			printf("| O seu pedido vai custar: R$%.2f                |\n",su=q*4);
			printf("+------------------------------------------------+\n");
			printf("| Digite a 1 para adicionar ou 0 para parar:     |\n");
			printf("+------------------------------------------------+\n\n");
			scanf("%i", &p);
			t=su+0;
			break;
		case 109:
	    	printf("+-----------------------------------------------------+\n");
			printf("| Você escolheu %i unidade(s) de Refrigerante (lata). |\n",q);
			printf("| O seu pedido vai custar: R$%.2f                     |\n",re=q*4);
			printf("+-----------------------------------------------------+\n");
			printf("| Digite a 1 para adicionar ou 0 para parar:          |\n");
			printf("+-----------------------------------------------------+\n\n");
			scanf("%i", &p);
			t=re+0;
			break;		
		default:
			printf("+-------------------------------------------------+\n");
			printf("| Opção inválida.                                 |\n");	
			printf("+-------------------------------------------------+\n");
			printf("| Digite a 1 para voltar ao menu ou 0 para parar: |\n");
			printf("+-------------------------------------------------+\n\n");
			scanf("%i", &p);	
	}
	t=cq+ba+xs+ha+re+so+ta+ca+su+pq;
	printf("+---------------------------------------+\n");
	printf("| Custo Total: %.2f.                   |\n",t);
	printf("+---------------------------------------+\n");
	printf("| Digite a 1 adicionar ou 0 para parar: |\n");
	printf("+---------------------------------------+\n\n");
	scanf("%i", &p);
	}while(p != 0);
	printf("+----------------------------+\n");
	printf("| Obrigado pela preferência. |\n");
	printf("+----------------------------+\n");
	return(0);
}
