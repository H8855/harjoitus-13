#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char etu[40], suku[20];

	cout << "Anna etunimi: ";
	cin.get(etu, 20);
	cin.ignore(200, '\n');
	cout << "Anna sukunimi: ";
	cin.get(suku, 20);
	cin.ignore(200, '\n');
	strcat_s(etu, " ");
	strcat_s(etu, suku);
	cout << "Nimesi oli: " << etu << "\n";
	return 0;
}