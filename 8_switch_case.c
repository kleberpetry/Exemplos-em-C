void exemplo_switch(){
	int opcao;
	printf("\nEscolha uma opcao");
	printf("\n1- Sorvete\n2-Milkshake\n3-Lanche\n4-Batata Frita\n");
	scanf("%d",&opcao);
	switch(opcao){
		case 1:
			printf("Sua conta deu R$ 4,50");
		break;
		case 2:
			printf("Sua conta deu R$ 8,50");
		break;
		case 3:
			printf("Sua conta deu R$ 9,00");
		break;
		case 4:
			printf("Sua conta deu R$ 4,00");
		break;	
	}
}

