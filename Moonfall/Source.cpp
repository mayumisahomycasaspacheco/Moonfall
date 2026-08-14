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

//Pantalla de carga
void dibujar_nave(int x, int y)
{
	Console::SetCursorPosition(x, y);
	cout << "  +-+----.__       ";
	Console::SetCursorPosition(x, y + 1);
	cout << " __//||[ |_ `-._ ";
	Console::SetCursorPosition(x, y + 2);
	cout << " \\__\\`'|    `----\\";
	Console::SetCursorPosition(x, y + 3);
	cout << "  /_|---|___-------> ";
	Console::SetCursorPosition(x, y + 4);
	cout << " |__|___|_____.---'  ";
}

void pantalla_de_carga()
{
	for (int x = 0; x <= 64; x += 2)
	{
		Console::Clear();

		Console::SetCursorPosition(2, 0);
		cout << ".";
		Console::SetCursorPosition(10, 1);
		cout << "*";
		Console::SetCursorPosition(18, 0);
		cout << ".";
		Console::SetCursorPosition(26, 1);
		cout << "*";
		Console::SetCursorPosition(35, 0);
		cout << ".";
		Console::SetCursorPosition(45, 1);
		cout << "*";
		Console::SetCursorPosition(55, 0);
		cout << ".";
		Console::SetCursorPosition(65, 1);
		cout << "*";
		Console::SetCursorPosition(75, 0);
		cout << ".";

		Console::SetCursorPosition(3, 16);
		cout << ".";
		Console::SetCursorPosition(12, 17);
		cout << "*";
		Console::SetCursorPosition(22, 18);
		cout << ".";
		Console::SetCursorPosition(32, 16);
		cout << "*";
		Console::SetCursorPosition(42, 17);
		cout << ".";
		Console::SetCursorPosition(52, 18);
		cout << "*";
		Console::SetCursorPosition(62, 16);
		cout << ".";
		Console::SetCursorPosition(72, 17);
		cout << "*";

		Console::SetCursorPosition(78, 2);
		cout << "*";
		Console::SetCursorPosition(0, 17);
		cout << ".";
		Console::SetCursorPosition(78, 18);
		cout << ".";
		Console::SetCursorPosition(1, 9);
		cout << "*";

		Console::SetCursorPosition(0, 3);
		cout << "Preparando mision Artemis II...";

		Console::SetCursorPosition(0, 5);
		if (x < 64 * 0.3)
		{
			cout << "Verificando sistemas...";
		}

		else if (x < 64 * 0.7)
		{
			cout << "Calculando Trayectoria...";
		}

		else
		{
			cout << "Preparando rescate...";
		}

		dibujar_nave(x, 10);

	}
}

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

void meteroritos(int x, int y)
{
	if (y <= 0)
	{
		Console::SetCursorPosition(x, y);
		cout << "  ";
	}

	y = y + 1;

	if (y >= 30)
	{
		y = 0;
		x = (rand() % 100) + 30;
	}

	if (y >= 0)
	{
		Console::SetCursorPosition(x, y);
		cout << "()";
	}
}

int main()
{

	_getch();
	return 0;
}