void exemplo_inicial(){
	char exemplo[]={"printf (\"Hello World!\");\nprintf(\"-_-  \\ \\ \\ -_-\");\nprintf(\" | ( -_ - ) |\");\nprintf(\" |___|  |___|\");\nprintf(\"     |  | \");\nprintf(\"     / / \");"};
	printf ("Hello World!");
	printf("\n-_-  \\ \\ \\ -_-");
	printf("\n | ( -_ - ) |");
	printf("\n |___|  |___|");
	printf("\n     |  | ");
	printf("\n     / / ");
	
	printf("\n\nDeseja ver o c�digo fonte desse exemplo? 1-Sim 2-N�o ");
	int opcao;
	scanf("%d",&opcao);
	if(opcao==1){
		printf("printf (\"Hello World!\");");
		printf("\nprintf(\"\\n-_-  \\ \\ \\ -_-\");");
		printf("\nprintf(\"\\n | ( -_ - ) |\");");
		printf("\nprintf(\"\\n |___|  |___|\");");
		printf("\nprintf(\"\\n     |  | \");");
		printf("\nprintf(\"\\n     / / \");");
	}
}
