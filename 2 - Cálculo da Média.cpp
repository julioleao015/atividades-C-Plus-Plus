#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	float num1, num2, media;
	cout << "Digite a nota da Av1: ";
	cin >> num1;
	cout << "Digite a nota da Av2: ";
	cin >> num2;
	media = (num1 + num2) / 2;
	cout << "\aMedia: " << media << "\n";
	if(media>=6)
	cout << "\aParabens, voce esta aprovado!\n";
	else
	cout << "\aInfelizmente, voce esta reprovado.\n";
	system("pause");
}
