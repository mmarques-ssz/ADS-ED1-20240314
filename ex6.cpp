#include <iostream>
#include <windows.h> 
#include <locale.h>
using namespace std;

void gotoxy ( short x, short y )
{
  COORD coord = {x, y};
  SetConsoleCursorPosition ( GetStdHandle ( STD_OUTPUT_HANDLE ), coord );
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	
	string msg = "Amanhã será sexta-feira. Sexta é véspera de fim de semana!";
	string msgU = "";
	string msgL = "";
	
	for (char c: msg) {

        msgU+=toupper(c);
        msgL+=tolower(c);
    }
 
    gotoxy(10,10);   
    cout << msg << endl;
    gotoxy(10,12);
    cout << msgU << endl;
    gotoxy(10,14);
    cout << msgL << endl;
    
    int pos1 = msgU.find("SEXTA");
    int pos2 = msgU.rfind("SEXTA");
    int pos3 = msgU.find("SEXTA", 20);

    cout << pos1 << endl;
    cout << pos2 << endl;
    cout << pos3 << endl;
    
    	
	return 0;
}

