#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	float salariomin, valor, valorfinal;
	cout << "Digite o valor do Salario Minimo: ";
	cin >> salariomin;
	cout << "Digite o valor para saber quantos salarios equivalem: ";
	cin >> valor;
	valorfinal = (valor/salariomin);
	cout << "\n\aR$ " << valor << " representa " << valorfinal << " salarios minimos. \n" << endl;
	system("pause");
}
