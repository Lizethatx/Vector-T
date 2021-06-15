#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<string> cadenas;
	
	string opc;
	
	while (true)
	{
		cout << "1) Agregar final" << endl;
		cout << "2) Mostrar" << endl;
		cout << "3) Inicializar" << endl;
		cout << "4) Frente" << endl;
		cout << "5) Ultimo" << endl;
		cout << "6) Ordenar" << endl;
		cout << "7) Insertar"<< endl;
		cout << "8) Eliminar"<< endl;
		cout << "9) Eliminar ultimo"<< endl;
		cout <<"0) Salir" << endl;
		getline(cin, opc);
		
		if (opc == "1"){
			string cadena;
			cout << "Ingrese una cadena de caracteres: ";
			getline(cin, cadena); 
			
			cadenas.push_back(cadena);
		}
		else if (opc == "2"){
			for(size_t i = 0; i < cadenas.size(); i++){
				
				cout << cadenas[i] << ", ";
			}
			cout << endl;
		}
		else if (opc == "3"){
			size_t n;
			string cadena;
			cout << "Tamano: ";
			cin >> n; cin.ignore();
			cout << "Ingrese una cadena de caracteres: ";
			getline(cin,cadena); 
			
			cadenas = vector<string>(n, cadena);
				
		}
		else if (opc == "4"){
			if(cadenas.empty()){
				cout << "vector vacio"<<endl;
			}
			else{
				cout << cadenas.front() << endl;
			}
		}
		else if (opc == "5"){
			if(cadenas.empty()){
				cout << "vector vacio"<<endl;
			}
			else{
				cout << cadenas.back() << endl;
			}
		}
		else if (opc == "6"){
			
			sort(cadenas.begin(), cadenas.end());
		}
		else if (opc == "7"){
			size_t p;
			string cadena;
			cout <<"posicion: ";
			cin>> p; cin.ignore();
			cout<<"Ingrese la cadena: ";
			getline(cin, cadena);
			
			if (p >= cadenas.size()){
				cout <<"posicion no valida"<< endl;
			}
			else{
				cadenas.insert(cadenas.begin()+p, cadena);
			}
		}
		else if (opc == "8"){
			size_t p;
			cout <<"posicion: ";
			cin>> p; cin.ignore();
			
			if (p >= cadenas.size()){
				cout <<"posicion no valida"<< endl;
			}
			else{
				cadenas.erase(cadenas.begin()+p);
			}
		}
		else if (opc == "9"){
			if (cadenas.empty()){
				cout << "vector vacio"<< endl;
			}
			else{
				cadenas.pop_back();
			}
		}
		else if (opc == "0"){
			break;
		}
	}
	
	return 0;
}
