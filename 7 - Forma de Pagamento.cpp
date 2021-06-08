#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	float valor_produto;
	int forma_pagamento;
	cout << "Digite o valor do produto: R$ ";
	cin >> valor_produto;
	cout << "Digite a forma de pagamento: ";
	cout << "\n1 - A vista.";
	cout << "\n2 - Cartao(debito).";
	cout << "\n3 - Cartao Parcelado 2x.";
	cout << "\n4 - Cartao Parcelado 3x."<<"\n";
	cin >> forma_pagamento;
	switch(forma_pagamento){
		case 1: cout << "\n\aValor a Vista: R$ " << valor_produto - (valor_produto*10/100);break;
		case 2: cout << "\n\aValor no Cartao: R$ " << valor_produto - (valor_produto*5/100);break;
		case 3: cout << "\n\aValor Parcelado 2x: R$ " << valor_produto;break;
		case 4: cout << "\n\aValor Parcelado 3x: R$ " << valor_produto + (valor_produto*10/100);break;
		default: cout << "\n\aForma de Pagamento Invalida.";break;
	}
	system("pause > null");
}
