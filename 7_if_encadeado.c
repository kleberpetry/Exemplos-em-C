void exemplo_if_encadeado(){
	int hora;
	float valor;
	printf("Digite a hora");
	scanf("%d", &hora);
	printf("Digite valor");
	scanf("%f", &valor);
		
	
	if(hora >=6 && hora<=22){
		if(valor <= 5000){
			printf("Saque efetuado com sucesso");
		}else{
			printf("Valor maximo de saque é de R$5000,00");
		}
		}else{
		 if(valor <=400){
			printf("Saque efetuado com sucesso");
		}else{
			printf("Valor maximo do saque é de R$400,00");
			}
		}
	
}
