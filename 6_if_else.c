void exemplo_if_else(){
	
	int idade;
	char nome[80];
	printf("Digite seu nome: ");
	gets(nome);
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	
	if(idade>=18){
		printf("%s e maior de idade tem %d anos",nome,idade);
	}else{
		printf("%s e menor de idade tem %d anos");
	}
	
	
}
