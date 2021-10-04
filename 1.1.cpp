#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() 
{
	string mail = "adres";
	string haslo = "haslo";
	string folderkont = "Konta";
	
	size_t zawiera;
	
	
	cout << "Podaj swoj adres mailowy:"<< endl;
	cin >> mail;	

	while (zawiera=mail.find("@") != true){
		cout << "Niepoprawny e-mail, prosze uzyc '@'" << endl;
		
	}

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



