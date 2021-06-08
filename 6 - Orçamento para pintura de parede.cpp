#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	float altura, largura, area_parede, quantidade_tinta, valor_tinta;
	cout << "Digite a altura da parede: ";
	cin >> altura;
	cout << "Digite a largura da parede: ";
	cin >> largura;
	area_parede = largura*altura;
	quantidade_tinta = area_parede/2;
	valor_tinta = quantidade_tinta*8.50;
	cout << "\nA area da parede e: " << area_parede << "m2." << endl;
	cout << "\nA quantidade de tinta necessaria sera de: " << quantidade_tinta << " litros." << endl;
	cout << "\nO valor gasto com tinta sera de: R$" << valor_tinta << endl;
	system("pause");	 
}
