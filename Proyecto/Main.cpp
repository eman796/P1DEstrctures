#include "ListaP.h" // se incluye la lista del Proyecto
#include <iostream> //entrada y salida
using namespace std; //cout,cin,enddl omitir std::

// se usa el int main para iniciar el procceso
int main ()
{
	Lista lista;
	int valor;
	int opcion;
	system("color f4");
		// while sirve con como un bucle
	while(opcion!=6){
		system("cls"); // se usa para limpiar la pantalla
		// se usan los cout para crear un menu 
		cout <<"\t\tProyecto"<<endl;
		cout<<"\t1.Agregar un valor al Inicio"<<endl; 
		cout<<"\t2.Agregar un valor al Final"<<endl;
		cout<<"\t3.Eliminar un valor al Inicio"<<endl;
		cout<<"\t4.Eliminar un valor al Final"<<endl;
		cout<<"\t5.Mostrar"<<endl;
		cout<<"\t6.Salir"<<endl;
		cout<<"\tElija una opcion \n";
		// se usa un cin para pedir un dato
		cin>> opcion;
			// switch sirve como un selector de opciones que serian en el los casos
		switch (opcion){
		    system("cls");
	
			case 1:
				
				system("cls");
				lista.OBD();
				lista.agregarInicio();// se llama un metodo dentro de la lista que hace referencia a la listaTarea que tiene el metodo
				system("pause");	
			break; // se usa para dar pausas
	
			case 2:
				system("cls");
				lista.OBD();
				lista.agregarFinal(); 
				system("pause");
			break;
	
			case 3:
				system("cls");
				cout<<"\n\tEliminar un valor al Inicio"<<endl;
				lista.eliminarInicio();
				system("pause");
			break;
	
			case 4:
				system("cls");
				cout<<"\n\tEliminar un valor al Final"<<endl;
				lista.EliminarFinal();
				system("pause");
			break;
	
			case 5:
				system("cls");
				cout<<"\n\tMostrar lista"<<endl;
				lista.MostrarP();
				lista.Mostrar();
				system("pause");
				
			break;
	
			case 6:
				system("cls");
				cout<<"\n\tSalir"<<endl;
				system("pause");
			break;
				
				default:
					system("cls");
					cout<<"Elija  uno de los casos que hay en la lista de opciones"<<endl;
					system("pause");
					break;
	    }
	}	
	return(0); 
}
