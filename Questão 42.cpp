#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int nf, dn, ae, cdn, cae;
	
	printf("Verifica��o de Requerimento para Aposentadoria\n\n");
	printf("N�mero do funcion�rio: ");
	scanf("%d", &nf);
	printf("Data de nascimento do funcion�rio (apenas o ano): ");
	scanf("%d", &dn);
	printf("Data de engresso na empresa (apenas o ano): ");
	scanf("%d", &ae);
	
	cdn = 2022 - dn;
	cae = 2022 - ae;
	
	if(cdn >= 65){
		printf("Idade: %d anos;\nTempo de trabalho: %d anos;\n\n", cdn, cae);
		printf("Requerer aposentadoria.");
	} else if(cae >= 30){
		printf("Idade: %d anos;\nTempo de trabalho: %d anos;\n\n", cdn, cae);
		printf("Requerer aposentadoria.");
	} else if(cdn >= 60 && cae >= 25){
		printf("Idade: %d anos;\nTempo de trabalho: %d anos;\n\n", cdn, cae);
		printf("Requerer aposentadoria.");
	} else{
		printf("Idade: %d anos;\nTempo de trabalho: %d anos;\n\n", cdn, cae);
		printf("N�o requerer.");
	}
	
	
	return 0;
}
