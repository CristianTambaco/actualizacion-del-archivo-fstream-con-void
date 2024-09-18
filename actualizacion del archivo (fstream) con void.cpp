#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void actualizar2(string ruta, string info1){

	fstream archivo(ruta, ios::in | ios::out);
	if (archivo.is_open()) {
		archivo.seekp(0, ios::end);
		archivo << info1;		
		archivo.close(); 
		cout<<"archivo actualizado exitosamente";		
	} else {
		cerr <<"Error al actualizar el archivo" << endl;
	}
}
	
int main() {
	actualizar2("C:\\Users\\PROGRAMACION\\Desktop\\archivo1.txt", "\nEn noviembre\n Regreso a clases"); //cambiar palabra: PROGRAMACION   y crear el archivo1.txt en el escritorio
	return 0;
}

//compilator options: language standart "GNU C++11"
//Dev-C++ 5.5.3
