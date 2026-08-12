#include<iostream>
#include<conio.h>
#include<Windows.h>

using namespace std;
using namespace System;

//Teclas de control
#define UP 'w'
#define DOWN 's'
#define LEFT 'a'
#define RIGHT 'd'

//Personas
void dibujar_persona(int x, int y)
{
	Console::SetCursorPosition(x, y);
	cout << " o ";
	Console::SetCursorPosition(x, y + 1);
	cout << "/|\\";
	Console::SetCursorPosition(x, y + 2);
	cout << "/ \\";
}

void borrar_persona(int x, int y)
{
	Console::SetCursorPosition(x, y);
	cout << "    ";
	Console::SetCursorPosition(x, y + 1);
	cout << "    ";
	Console::SetCursorPosition(x, y + 2);
	cout << "    ";
}

//Estructura de la Nave
struct Nave
{
	string nombre;
	int velocidad;
	int vidas;
	int personas;
	int personas_recatadas;
};

//Nave
void borrar_nave(int x, int y)
{
	Console::SetCursorPosition(x, y);
	for (int i = 0; i < 5; i++)
	{
		Console::SetCursorPosition(x, y + i);
		cout << "                              ";
	}
}

void dibujar_nave(int x, int y, char direccion)
{
	if (direccion == RIGHT)
	{
		Console::SetCursorPosition(x, y);
		cout << "  +-+----.__         ";
		Console::SetCursorPosition(x, y + 1);
		cout << " __//||[ |_ `-._     ";
		Console::SetCursorPosition(x, y + 2);
		cout << " \\__\\`'|    `----\\";
		Console::SetCursorPosition(x, y + 3);
		cout << "  /_|---|___-------> ";
		Console::SetCursorPosition(x, y + 4);
		cout << " |__|___|_____.---'  ";
	}

	else if (direccion == LEFT)
	{
		Console::SetCursorPosition(x, y);
		cout << "       __-----+-+ ";
		Console::SetCursorPosition(x, y + 1);
		cout << "   _.-` _| ]||\\__\\ ";
		Console::SetCursorPosition(x, y + 2);
		cout << "  /----`    |'`/__/";
		Console::SetCursorPosition(x, y + 3);
		cout << " <-------___|---|_\\ ";
		Console::SetCursorPosition(x, y + 4);
		cout << " '---._____|___|__|";
	}
}

void desplazamiento_nave(int x, int y, char direccion, char tecla)
{
	if (tecla == UP)
	{
		y = y - 1;
	}

	else if (tecla == DOWN)
	{
		y = y + 1;
	}

	else if (tecla == RIGHT)
	{
		x = x + 1;
		direccion = RIGHT;
	}

	else if (tecla == LEFT)
	{
		x = x - 1;
		direccion = LEFT;
	}
}

int main()
{

	_getch();
	return 0;
}