#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class cParser
{
public:
	cParser(string plik); //konstruktor
	~cParser(void); //destruktor
private:
	void readFile(); //wczytanie pliku
	void writeDane(); //wypisanie zawartosci pliku
	void parse(); //glowna funkcja odpowiadajaca za parsowanie
	void znacznikuj(string tresc); //'ogwiazdkowywuje' taga
	
	
	string dane; //zawartosc pliku html
	int fileLength; //dlugosc stringa DANE
	string parseResult;
	string fileName; //nazwa pliku
	ofstream plikOut; //do zapisywania wyniku do pliku
};
