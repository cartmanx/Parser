#include "cParser.h"
#include <iostream>
#include <fstream>
#include <string> 


using namespace std;
/*---------------CONSTRUCTOR------------------------*/
cParser::cParser(string plik)
{
	fileName=plik;
	readFile();
	plikOut.open("parseResult.txt",ios::out);
	parse();
}
/*----------------CONSTRUCTOR - END--------------------------------*/


/*----------------DESTRUCTOR--------------------------------*/
cParser::~cParser(void)
{
}
/*----------------DESTRUCTOR - END--------------------------------*/


/*----------------READFILE--------------------------------*/
void cParser::readFile(){
	string temp = " ";
    fstream odczyt;
    odczyt.open( fileName, ios::in );
    if( odczyt.good() )
    {
        getline( odczyt, temp, '~' );
        odczyt.close();
    } else cout << "Nie uda³o siê otworzyæ pliku" << endl;
   
    dane = temp;
    fileLength=dane.length();
}
/*---------------READFILE - END---------------------------------*/


/*---------------WRITEDANE---------------------------------*/
void cParser::writeDane(){
	cout<<dane;
}
/*---------------WRITEDANE - END---------------------------------*/


/*---------------ZNACZNIKUJ---------------------------------*/
void cParser::znacznikuj(string tresc){
	string gwiazdki(tresc.length() + 7, '*');
	cout<<endl<<endl;
	cout<<gwiazdki << '\n'
		<<gwiazdki <<"\r"
		<<"** "<<tresc<<'>'<<" **\n"
		<<gwiazdki<<endl;
	cout<<endl<<endl;

	plikOut<<endl;
	plikOut<<gwiazdki << '\n'
		
		<<"** "<<tresc<<'>'<<" **\n"
		<<gwiazdki<<endl;
	plikOut<<endl;
}
/*--------------ZNACZNIKUJ - END----------------------------------*/


/*--------------PARSE----------------------------------*/
void cParser::parse(){

	int i=0; //przeszukiwanie pliku html
	int j=0; //do tagow
	int licznik=0;
	
	for(i=0; i<fileLength; i++){
			if(dane[i]=='<' && dane[i+1]!=(char)(32) ){
				for(j=0 ;dane[i]!='>';i++,j++){			
					// 
				}
				znacznikuj(dane.substr(i-j,j));
			}else
			{
				cout<<dane[i];
				plikOut<<dane[i];
				if(dane[i+1]=='<'){
					cout<<endl;
					plikOut<<endl;
				}
			}
	}
	
}
/*--------------PARSE - END----------------------------------*/