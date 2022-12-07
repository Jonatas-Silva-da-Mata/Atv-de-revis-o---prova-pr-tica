#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int nalunos, i=0, notat;
	float nota, media;
	
	printf("Calculadora de Médias\n\n") ;
	printf("Digite o número de alunos: ");
	scanf("%d", &nalunos);
	
	while(i<nalunos){
		printf("Digite as notas de cada aluno: ");
		scanf("%f", &nota);	
		i += 1;
		notat = notat + nota; 
	}

	media = (float)notat/nalunos;
	printf("Resultado: %f", media);
	
	return 0;
}
