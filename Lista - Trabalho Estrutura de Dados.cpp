#include <iostream>
#include <cstdlib>
#include <locale.h>

using namespace std;

//Declara��o de Vari�veis.
int lista[10] = {1,};
int num_menu;

//Declara��o dos Prot�tipos das Fun��es Gr�ficas de Menu.
void separador ();
void backmenu ();

//Declara��o dos 4 Prot�tipos das Fun��es.
int inserir (int lista[10]);
int excluir (int lista[10]);
void consulta (int lista[10]);
void imprimir_valor (int lista[10]);
void organiza_valor (int lista[10]);

void separador(){
	cout << "\n_________________________________________________________________________________________________________________" << endl;
	cout << "\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>     Lista do Raiol      <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
	cout << "_________________________________________________________________________________________________________________" << endl;
}

//Fun��o Principal (Main).
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	system("cls");
	separador();
	cout << "\n1. Inserir. \n2. Consultar Espa�o. \n3. Excluir. \n4. Imprimir. \n5. Sair." << endl;
	cout << "\nDigite a op��o desejada: ";
	cin >> num_menu;
	
	if(num_menu==1){
		inserir(lista);
	}
	if(num_menu==2){
		consulta(lista);	
	}
	if(num_menu==3){
		excluir(lista);
	}
	if(num_menu==4){
		imprimir_valor(lista);
	}
	if(num_menu==5){
		exit(0);
	}
	
}

//Fun��o para Inserir.
int inserir( int lista[10]){
	
	system("cls");
	separador();

	int i;
	int select_insert;
	int indice_numero;
	int valor;
	
	cout << "\n1. Inserir:" << endl << endl;
	cout << "Digite '1' para inserir o valor em um espa�o de sua escolha. \nDigite '2' para inserir os valores respectivamente." << endl << endl;
	cout << "Digita a op��o desejada: ";
	cin >> select_insert;
		
		switch(select_insert){
			case 1:
				system("cls");
				separador();
				
				cout << "\n1.1 Inserir o valor no espa�o de sua escolha:" << endl << endl;
				cout << "\nDigite o �ndice(1-10) em que deseja inserir o n�mero: ";
				cin >> indice_numero;
				cout << "\nDigite o valor que deseja inserir: ";
				cin >> valor; 
					for(int i=1; i<=10; i++){
						if(indice_numero==i){
							lista[i]=valor;
							cout << "\a\nValor inserido com sucesso!" << endl << endl;
							system("pause");
							backmenu();
						}
				}
				system("pause");
				backmenu();
				break;
				
			case 2: 
				system("cls");
				separador();
				
				cout << "\n1.2 Inserir Respectivamente:" << endl << endl;
					for(int i=1; i<=10; i++ ){
						cout << "\nDigite o n�mero " << i << "� n�mero: ";
						cin >> lista[i];
					}
				cout << "\n\n";
				system("pause"); 
				backmenu(); 
				break;
			default: 
				cout << "\a\nOp��o Inv�lida!" << endl << endl;
				system("pause");
				backmenu();
	}
	system("cls");
	main();
}

//Fun��o para Consulta.
void consulta(int lista[10]){
	
	system("cls");
	separador();
	int i=0; 
	int vetorvazio;
	cout << "\n2. Consultar Espa�o:" << endl <<endl;
		for(i=1; i<=10; i++){
			if(lista[i]==0){
				vetorvazio = lista[i];
				cout << "Espa�o " << i << ": Vazio." << endl;
			}else{
				cout << "Espa�o " << i << ": Ocupado." << endl;
			}
		}
		cout << "\n\n";		
	system("pause");
	backmenu();
}

//Fun��o para Excluir.
int excluir (int lista[10]){
	
	system("cls");
	separador();

	//Imprimi os valores dispon�veis para exclus�o.
	int valores=0;
	cout << "Valores da lista:" << endl << endl; 
	for(int i=1; i<=10; i++){
		valores = lista[i];
		cout << i << "� Valor: " << valores << endl;
		}
		cout << "\n";
	
	//C�digo para executar e exclus�o do valor.
	int i;
	int delete_list; 
	cout << "\n3. Excluir:" << endl;
	cout << "\nDigite a posi��o do numero dentro da lista para excluir: ";
	cin >> delete_list;
		
		for(int i=1; i<=10; i++){			
			if(delete_list==i){
				if(lista[i]!=0){
				lista[i]=0;
				cout << "\a\nN�mero exclu�do com sucesso!" << endl << endl;
				organiza_valor(lista);
				}else{
					cout << "\a\nN�o � poss�vel excluir, visto que o espa�o j� est� vazio!" << endl << endl;
				}
		}		
	}
	
	system("pause");
	system("cls");
	backmenu();
}

//Fun��o para Imprimir os Valores.
void imprimir_valor(int lista[10]){
	system("cls");
	separador();
	
	int valores=0;
	cout << "\n4. Imprimir Valores:" << endl << endl; 
	for(int i=1; i<=10; i++){
		valores = lista[i];
		cout << i << "� Valor: " << valores << endl;
		}
		cout << "\n\n";
		system("pause");
		system("cls");
		backmenu();
	}

void backmenu(){
	
	system("cls");
	separador();
	int homepage;
	cout << "Desejas voltar ao menu principal: \n1. Sim \n2. N�o" << endl;
	cout << "\nDigite a op��o desejada: ";
	cin >> homepage;
	
	switch(homepage){
		case 1:
			main();
		default:
			exit(0);
	}
}

//Fun��o para Organizar a lista.
void organiza_valor(int lista[10]){
	for(int i=1; i <= 10; i++){
		if(lista[i] == 0){
			if(lista[i+1] == 0){
				break;
			}else{
				lista[i] = lista[i+1];
				lista[i+1] = 0;
			}
		}
	}
}
