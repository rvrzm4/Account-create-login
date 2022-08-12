#include <iostream>
#include <fstream>

using namespace std;

void PswrdValidation(string pswrd);
void AccountCreator();
void LogIn(string user, string pswrd);

int temp;



int main() {
	cout << "wybieranie operacji:" << endl;
		cout << "1: Tworzenie konta" << endl;
		cout << "2: Logowanie" << endl;
		cout << "     Exit" << endl;
		cin >> temp;

		switch (temp){
		case 1: 
			system("cls");
			AccountCreator();
			break;

		case 2:

			break;

		default:
			exit(0);
			
			break;
		}

}


void PswrdValidation(string data) {
	int repeat_x = data.length();
	char valid_char[100];
	for ( int i = 0; i <= repeat_x; i++) {
		valid_char[i] = data[data.length() - i];
	}
	



}

void AccountCreator() {
	string username, password, account_name = "example";
				
	cout << "Podaj nazwe konta i haslo" << endl << endl;
	cout << "nazwa konta:  "; cin >> username; cout << endl;
	cout << "haslo powinno zawierac:  " << endl << "duza litere" << endl << "mala litere" << endl << "liczbe" << endl << "znak szczegolny" << endl << "osiem znakow" << endl << endl;
		cout << "haslo:  "; cin >> password;
		PswrdValidation(password);
		

	fstream file;
	file.open("accounts/" + account_name + ".txt", ios::out);
	file << username << endl;
	file << password << endl;
	file.close();
}

void LogIn(string user, string password) {
	
}