#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() 
{
	string mail = "adres";
	string haslo = "haslo";
	string folderkont = "Konta";
	
	cout << "Podaj swoj adres mailowy:"<< endl;
	cin >> mail;
	
	cout << "Podaj swoje haslo:"<< endl;
	cin >> haslo;
	
	string nazwapliku = folderkont+"/"+mail+".txt";
	
	fstream konto;
	konto.open(nazwapliku.c_str(), ios::out);
	if (konto.is_open()){
		konto << "Adres mailowy uzytkownika:"<< endl;
		konto << mail << endl << endl;
		konto << "Haslo uzytkownika:"<<endl;
		konto << haslo;
	}
	
}



