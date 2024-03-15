#include <iostream>
#include <fstream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	
	ifstream arq("lista1.txt");

    if (arq.is_open()) {

        string linha;
        while (! arq.eof()) {
        	getline(arq, linha);
            cout << linha << endl;
        }

        arq.close();
    } else {
        cout << "Erro ao abrir o arquivo";
    }
	
	return 0;
}