/**************************************************
/       Parser plikow html			   /
/ @Author Pawlak Patryk		          	   /
/ Programowe Srodowisko Multimediow i WWW          /
/ UTP EiT semestr 5, 2010/11                       /
/**************************************************/


#include <iostream>
#include <string>
#include "cParser.h"
#include "conio.h"
using namespace std;
using std::string;
void main(){
	string plik;
	cout<<"Podaj nazwe pliku ktory chcesz przeanalizowac: (np. 'cx.html')"<<endl;
	cin>>plik;
	
	cParser obiekt(plik);
	cout<<"--------------"<<endl;
	cout<<"Wyniki sa takze w pliku 'parseResult.txt.'";

	getch();

}
