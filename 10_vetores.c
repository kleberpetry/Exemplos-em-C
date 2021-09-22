vetor_numerico(){
	float soma,media, numero[4];
	int i;
	
	for(i=0;i<4;i++){
		printf("digite a nota %d:",i+1);
		scanf("%f",&numero[i]);
		soma+=numero[i];
	}
	media=soma/i;
	printf("\nA media e: %f",media);
	
}

vetor_caractere(){
	char nome[50];
	gets(nome);
	printf("%s",nome);
}

vetor_for(){
	int idade [5],i;
	for(i=0;i<5;i++){
		printf("Insira uma idade: ");
		scanf("%d",&idade[i]);
	}
	for(i=0;i<5;i++){
		if(idade[i]>=18){
			printf("\n%d anos: Maior de idade",idade[i]);
		}
		else{
			printf("\n%d anos: Menor de idade",idade[i]);
		}
	}
	
}






