#include "Igel.h"

#include <iostream>

using namespace std;

bool Igel::ziehe(int felder)
{
	if (felder == 7)								//Ereignis 1
	{
		salat += letzterZug;
		return(true);
	}

	if (felder == 9)								//Ereignis 3
	{
		position -= 3;
		if (position < 0)
			position = 0;
		return(true);
	}

	if (warten == 1)
	{
		getSalat();
		warten = 0;
	}

	if (salat == 0)
	{
		warten = 1;
		cout << "wartet.";
		return(false);
	}

	if (salat >= felder)
	{
		position += felder;
		salat -= felder;
		letzterZug = felder;
		cout << "wuerfelt eine: " << felder;
			
		return(true);
	}
		cout << "wuerfelt eine: " << felder;
		cout << " -NICHT GENUEGEND SALAT FUER DIESEN WURF.";
		letzterZug = 0;

	return(false);
}

int Igel::getPosition()
{
	return(position);
}

int Igel::getSalat()
{
	if(salat==0)
	salat = 10;
	 
	return(salat);
}

int Igel::getVorrat()
{
	if (warten == 1)
		cout << "hat Salat gefunden!";
	else {
		if (salat > 0)
			cout << "besitzt noch " << salat << " Salat(e).";
		else
			cout << "hat seinen Salatvorrat aufgebraucht. Er muss eine Runde WARTEN, um neuen zu holen.";
	}
	return(salat);
}

Igel::Igel()
{
}
Igel::~Igel()
{
}
