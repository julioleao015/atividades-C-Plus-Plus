#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int n1, n2;
	cout << "Digite um numero inteiro: ";
	cin >> n1;
	cout << "\nDigite outro numero inteiro: ";
	cin >> n2;
	if(n1>n2) {
	cout << "\n" << n1 << " e maior que " << n2 << "\n";
	}else if(n1<n2) {
	cout << "\n" << n2 << " e maior que " << n1 << "\n";
	}else {
	cout << "\n" << n1 << " e igual a " << n2 << "\n";
	}
	system("pause");
}
