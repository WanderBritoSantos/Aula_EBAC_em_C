//========bibliotecas========== ==============================
 #include <stdio.h> // biblioteca de comunição com o usuario.
  #include <stdlib.h> //biblioteca de alocação em memoria.
  #include <locale.h> //biblioteca de alocação de texto por regiã
  #include <string.h> // responsavel das funcoes de string 
    //========funcoes ≠=============== 
 int add_alunos(){
 	        setlocale(LC_ALL,"portuguese");
 	             
 	        char arquivo[40];
 	        char cpf[11];
 	        char nome[40];
 	        char sobre_nome[40];
 	        char cargo[40]; 
 	        printf("\topção 1 escolhida.\n\t1 - Registrar alunos............\n");
                      
 	        printf("\tdigite o cpf:");
 	        scanf("%s",cpf);
 	        
 	        strcpy(arquivo,cpf);
 	        
 	        FILE *file;
 	        
 	        file= fopen(arquivo, "w");
 	        
 	        fprintf(file,cpf);
 	        
 	        fclose(file);
 	        
 	        printf("\tDigite o nome: ");
 	        scanf("%s",nome);
 	        
 	        file=fopen(arquivo,"a");
 	        fprintf(file, nome);
 	        fclose(file);
 	        
 	        file=fopen(arquivo,"a");
 	        fprintf(file,", ");
 	        fclose(file);
 	        
 	        printf("\tDigite o sobrenome: ");
 	        scanf("%s",sobre_nome);
 	        
 	        file=fopen(arquivo,"a");
 	        fprintf(file,sobre_nome);
 	        fclose(file);
 	        
 	        file=fopen(arquivo,"a");
 	        fprintf(file,", ");
 	        fclose(file);
 	        
 	         printf("\tDigite o cargo:");
 	        scanf("%s",cargo);
 	        
 	        file=fopen(arquivo,"a");
 	        fprintf(file,cargo);
 	        fclose(file);
 	       
 	        file=fopen(arquivo,"a");
 	        fprintf(file,",");
 	        fclose(file);
 	        
 	        system ("pause");
 	  	
 }
            
 int selecionar_aluno(){
 		
 		    setlocale(LC_ALL,"portuguese");
 		    
 	        char cpf[40];
 	        char conteudo[200];
 	        
 	       printf("\topção 2 escolhida.\n\t1 - Consulta alunos............\n");
                      
 	        printf("\tDigite o cpf:");
 	        scanf("%s",cpf);
 	        
 	        FILE*file;   
 	        file= fopen(cpf, "r");
 	        
 	        if(file == NULL){
 	        	printf("Não foi possivel abrir o aquivo,  cpf não localizado! \n");
 	        	system ("pause");
 	        	return 0;
 	        }
 	        	while (fgets(conteudo , 200, file) != NULL){
 	        		printf("Essas sao as informações do aluno!");
 	        		printf("%s", conteudo);
 	        		printf("\n\n");
 	        
               }
               system("pause");      
 }
 
 int deletar_aluno(){
 	        char cpf[40];
 	        
 	      printf("\tDigite o cpf para ser excluido.");
 	        scanf("%s",cpf);
 	        remove(cpf);
 	        
 	       FILE*file;
	        file =fopen(cpf,"r");
 	        
       if(file == NULL){
    	printf( "Usuario não se emcontra no sistema.");
 	      	system("pause");
 	      }
 	        
 	        
 }
 
 int Erros_entradas(){
 	        
 	        printf("..essa opção não existe.\n.........Digite um numero valido!\n.........pressione quaquer tecla para retorna.\n\n");
              system("pause");
            
              return 0;
              
 }
 
 int sair(){   
            printf("\n\n.........Programa finalizado\n.........\n\n");
           exit(0);
 }
  int main(){
  	   setlocale(LC_ALL,"portuguese");//funcao serve pra ultilizar simbolos especiais na saida da tela, como caracteres da lingua pontuguesa.   
 //========variaveis===============
 int opcao;
 int laco=1;


 for(laco=1;laco==1;){
    system("cls");
    
	    printf("\t..........Cartório da EBAC...........\n\n");
        printf(".....Selecione uma opção desejada:\n\n");
       printf("\t1 - Registrar aluno............\n");
       printf("\t2 - Consultar aluno............\n");
       printf("\t3 - Deletar aluno..............\n\n"); 
       printf("\tDigite a opção desejada 1, 2 ou 3!");  /*   printf("\tdigite a opção desejada: 1, 2, 3 ou aperte 0 para sair\n\n");*/
       printf("\tOpção: ");
       
       scanf("%d",&opcao);
       
    system("cls");
    
    switch(opcao)
    {
       case 1:
    	    
    	   add_alunos();
        break;
       case 2:
           selecionar_aluno();
       break;   
       case 3:
    	    deletar_aluno();
       break;
    /*   case 0:	
            sair();
        break;*/
       default:
              printf(".........%d",opcao);
               
              Erros_entradas();
              
    	   break;
  }
 }//fim do laço for
    return 0;
};