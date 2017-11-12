#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int voltar;

//--------------------- CRIPTOGRAFIA ---------------------------
void criptografia(){
	
	//---------- MENSAGEM ----------//
	char mensagem [400];
	int tamanho_mensagem;
	//-----------------------------//
	//----------- CHAVE -----------//
	int chave, cont;
	//-----------------------------//
	
	printf("##############################################\n");
	printf("###########   FUNCAO CRIPTOGRAFAR  ###########\n");
	printf("##############################################\n\n");	

	//------------------- DIGITAR MENSAGEM --------------------//
	printf("\n\nDigite a mensagem para ser criptografada:");
	gets(mensagem);
	//--------------------------------------------------------//	
	
	//-------------------- DIGITAR CHAVE ---------------------//	
	while(chave<1 || chave>140){
	printf("\n\nDigite a chave que sera utilizada (<=140):");
		scanf("%d", &chave);
		setbuf(stdin,NULL);
	}
	//--------------------------------------------------------//
	
	//--------------------- CRIPTOGRAFAR --------------------//
	tamanho_mensagem=strlen(mensagem);
	for (cont=0; cont<tamanho_mensagem;cont++)
		mensagem[cont] = mensagem [cont]+chave;
	//--------------------------------------------------------//
		
	printf("\n\nMensagem criptografada: %s", mensagem);
	
	chave=0;
	printf("\n\nPressione Enter para voltar ao menu principal");
	scanf("%c",&voltar);
	
}
//--------------------------------------------------------------

//-------------------- DESCRIPTOGRAFIA -------------------------
void descriptografia(){
	
	//---------- MENSAGEM ----------//
	char mensagem [400];
	int tamanho_mensagem;
	//-----------------------------//
	//----------- CHAVE -----------//
	int chave, cont;
	//-----------------------------//
	
	printf("##############################################\n");
	printf("##########   FUNCAO DESCRIPTOGRAFAR  #########\n");
	printf("##############################################\n\n");	

	//------------------- DIGITAR MENSAGEM --------------------//
	printf("\n\nDigite a mensagem para ser descriptografada:");
	gets(mensagem);
	//--------------------------------------------------------//	
	
	//-------------------- DIGITAR CHAVE ---------------------//	
	while(chave<1 || chave>140){
	printf("\n\nDigite a chave que foi utilizada (<=140):");
		scanf("%d", &chave);
		setbuf(stdin,NULL);
	}
	//--------------------------------------------------------//
	
	//------------------- DESCRIPTOGRAFAR -------------------//
	tamanho_mensagem=strlen(mensagem);
	for (cont=0; cont<tamanho_mensagem;cont++)
		mensagem[cont] = mensagem [cont]-chave;
	//--------------------------------------------------------//
		
	printf("\n\nMensagem desriptografada: %s", mensagem);
	
	chave=0;
	printf("\n\nPressione Enter para voltar ao menu principal");
	scanf("%c",&voltar);
	
}
//--------------------------------------------------------------

//----------------------- CREDITOS -----------------------------
void creditos(){
	printf("##############################################\n");
	printf("################   CREDITOS   ################\n");
	printf("##############################################\n\n");
				printf("\tRafael Simionato\n\tRA:C40DCC3\n\n");

				printf("Pressione Enter para voltar ao menu principal ...");
				scanf("%c",&voltar);
				setbuf(stdin,NULL);
}
//---------------------------------------------------------------

//------------------- MENU DO PROGRAMA --------------------------
void menu(){
	int opcao;
	
	while(1){
	system("cls");
	// Informações
	printf("##############################################\n");
	printf("##############################################\n");
	printf("########## PROGRAMA DE CRIPTOGRAFIA ##########\n");
	printf("##########   CIENCIA DA COMPUTACAO  ##########\n");
	printf("##########     APS - 2 SEMESTRE     ##########\n");
	printf("##############################################\n");
	printf("##############################################\n\n");
	
	// Escolha de opções
	printf("Escolha a opcao desejada:\n\n");
	printf("1 - Criptografar mensagem\n");
	printf("2 - Descriptografar mensagem\n");
	printf("3 - Creditos\n");
	printf("4 - Sair\n");
	printf("Opcao:");
	scanf("%d",&opcao);
	setbuf(stdin,NULL);
		
	switch (opcao){
		
		// OPCAO CRIPTOGRAFAR
		case 1:
		system("cls");
		criptografia();
		break;
			
			// OPCAO DESCRIPTOGRAFAR
			case 2:
			system("cls");
			descriptografia();
			break;
				
				// OPCAO CREDITOS
				case 3:
				system("cls");
				creditos();
				break;
					
					// OPCAO SAIR
					case 4:
					printf("Saindo do programa ...");
					exit(0);
					break;
						
						// Opcao invalida
						default:
						printf("Opcao invalida\n");
						break;	
	}
}
}
//-----------------------------------------------------------

int main(int argc, char *argv[]) {
	
	menu();
	
	

	system("pause");
	return 0;
}
