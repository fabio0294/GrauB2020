#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
// programa le nome, sexo (1-Masculino 2-Feminino), idade, e estado civil(1-Solteiro, 2-Casado 3-Divorciado) de um grupo de 10 pessoas. Todos os dados em de uma pessoa em uma linha,
// utilizar tecnicas de armazenamento de dados em vetores, estrutura de repetição para leitura e apresentação na tela, estrutura condicionais, entre outras;
// deve ser executado infintas vezes ate que pressione a tecla S no final da repetição
// media da idade das mulhers
// media da idade dos homens
// estado civil que mais ocorreu
// estaco civil que menos ocorreu
	
	char nome[10][10];
	int sexo[10], i, contador, idade[10], ec[10], totalF=0, totalM=0, contadorF=0, contadorM=0, c1=0, c2=0, c3=0;
	float mediaM=0, mediaF=0;

	for (contador=0; contador<3; contador++){

//  
	    printf("\nNome:\n");
		fflush(stdin);
		scanf(" %s", &nome[contador]);
		
		printf("\nSexo: 1=Masculino 2=Feminino\n");
		fflush(stdin);
		scanf("%d", &sexo[contador]);
	
//  
		  if(sexo[contador] == 1 || sexo[contador] == 2){
		
		printf("\nIdade:\n");
		fflush(stdin);
		scanf("%d", &idade[contador]);	  
		  if(idade[contador] >= 0 && idade[contador] <= 110){
		
		printf("\nEstado Civil: 1=Solteiro 2=Casado 3=Divorciado\n");
		fflush(stdin);
		scanf("%d", &ec[contador]);
		
//  
		  if(ec[contador] == 1 || ec[contador] == 2 || ec[contador] == 3){
			
//  
			}else {
				printf("Invalido! Comece novamente.\n\n");
			    contador--;
			}

//  
	        }else {
	            printf("\nInvalido! Comece novamente.\n\n");
		        contador--;
	        }   
	
        	}else {
		        printf("\nInvalido! Comece novamente.\n\n");
		        contador--;
	        }
            }



//  
  	for (i=0; i<contador; i++) {
  		
		printf("\n Nome:%s, Sexo: %d, Idade: %d, Estado: %d", nome[i], sexo[i], idade[i], ec[i]);  	

//  
		if (sexo[i] == 1){
			contadorF++;
			
			totalF=totalF + idade[i];
		}

//  
		if (sexo[i] == 2){
			contadorM++;
			
			totalM=totalM + idade[i];
		}
		
//  
		switch (ec[i]){
			case 1:
			c1++;
				break;
			case 2:
				c2++;
				break;
			case 3:
				c3++;
				break;	
		}
		
	}

//  
	mediaF=totalF/contadorF;
	mediaM=totalM/contadorM;

//  
	printf("\n\nMedia de idade dos Homens: %.0f anos", mediaF);
	printf("\n\\nMedia de idade dos Mulheres: %.0f anos", mediaM);	
		
//  
	if (c1>c2 && c1>c3){
		printf("\n\nO estado civil que mais ocorreu foi: Solteiro");
	} else if(c2>c1 && c2>c3){
		printf("\n\nO estado civil que mais ocorreu foi: Casado");
	} else if(c3>c1 && c3>c2){
		printf("\n\nO estado civil que mais occoreu foi: Divorciado");
	} else {
		printf("\n\nNao tem estado civil mais ocorrente.");
	}
	
//  
	if (c1<c2 && c1<c3){
		printf("\n\nO estado civil menos ocorrente eh Solteiro");
	} else if(c2<c1 && c2<c3){
		printf("\n\nO estado civil menos ocorrente eh Casado");
	} else if(c3<c1 && c3<c2){
		printf("\n\nO estado civil menos occorente eh Divorciado");
	} else {
		printf("\n\nNao tem estado civil menos ocorrente");
	}
	
	return 0;
}
