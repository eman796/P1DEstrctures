#include <iostream>//Incluimos la libreria para Sacar y que entren datos
#include <string>// incluimos la libreris String
using namespace std;//Ponemos esto para qu8e no tengamos que estar poniendo "std::cout" o "std::cin" cada que queramos sacar o ingresar información
// se crea una clase tipo lista 
class Lista{
	public:
		void OBD();// OBD es igual a Obtener datos
	 	Lista();//constructor
		~Lista();//destructor
		int valor;
		string datos;
		void agregarInicio();
		void agregarFinal();
		void eliminarInicio();
		void EliminarFinal();
		void Mostrar();
		void MostrarP();
};

	Lista::Lista()//constructor
	{

	};
	Lista::~Lista()//destructor
	{
	
	};

	
	
struct Nodo{; //almacena varios valores diferentes, un nodo es un espacio de almacenamiento

	// establecemos varios atributos unas de tipo texto(char) y otras de tipo entero(int)
	int info;
	string info2;
	string nombre;
	string City;
	int Edad;
	string Ocupacion;

	struct Nodo *siguiente;	//puntero a otra estructura de tipo siguiente
};
  struct Nodo *PRS,*PI,*PA, *PA2,*PA3,*PF;// PA es igual a puntero Auxiliar,PI es igual a puntero inicial,PF es igual a puntero Final,PRS es igual a persona

void Lista::OBD(){
	
	if(PRS== NULL){//Si no hay personas:
		PRS=new(Nodo);
		cout<<"\tBienvenido al agregar"<< endl;
    	cout<<"\tEscriba su nombre completo"<< endl;
    	cin.ignore(); // Limpia los buffers
    	getline(cin, PRS->nombre);//Lee un flujo de entrada para almacenar su valor en un string. En este caso, ese String se guarda en nombre de la estructura PRS
    	cout<<"\tEscriba su edad"<< endl;
    	cin>> PRS->Edad;
    	cout<<"\tEscriba su ocupacion"<< endl;
    	cin.ignore();
    	getline(cin, PRS->Ocupacion);
    	cout<<"\tEscriba el nombre de su ciudad"<< endl;
    	cin.ignore();
    	getline(cin, PRS->City);
    	PRS->info2 = datos;
    	PF=PRS;
	}
	PRS->siguiente=NULL;//El siguiente nodo personas será nulo
}

void Lista::agregarInicio(){ // Definición del método agregarInicio() para la clase Lista
    if(PI==NULL){ // Si el puntero PI (probablemente el inicio de la lista) es NULL, es decir, si la lista está vacía
        PI=new(Nodo); // Se crea un nuevo nodo y se asigna a PI
        cout<<"\tElija el numero que desea insertar al inicio "; // Se solicita al usuario que inserte un valor
        cin>> valor; // Se lee el valor ingresado por el usuario
        PI->info=valor; // Se asigna el valor ingresado al campo 'info' del nodo
        PF=PI; // Se hace que PF (probablemente el final de la lista) apunte al mismo nodo que PI
        //solo hay 1 un nodo
    }else{
        PA=new(Nodo); // Se crea un nuevo nodo y se asigna a PA (probablemente un puntero auxiliar)
        cout<<"\tElija el numero que desea insertar al inicio "; // Se solicita al usuario que inserte un valor
        cin>> valor; // Se lee el valor ingresado por el usuario
        PA->info = valor; // Se asigna el valor ingresado al campo 'info' del nodo
        PA->siguiente=PI; // Se hace que el campo 'siguiente' del nuevo nodo apunte al nodo que era el inicio de la lista
        PI=PA; // Se hace que PI apunte al nuevo nodo, que ahora es el inicio de la lista
    }
    PF->siguiente=NULL; // Se hace que el campo 'siguiente' del último nodo sea NULL, indicando el final de la lista
};

void Lista::agregarFinal(){ // Definición del método agregarFinal() para la clase Lista
    if(PI==NULL){ // Si el puntero PI (probablemente el inicio de la lista) es NULL, es decir, si la lista está vacía
        PI=new(Nodo); // Se crea un nuevo nodo y se asigna a PI
        cout<<"\tInserte "; // Se solicita al usuario que inserte un valor
        cin>> valor; // Se lee el valor ingresado por el usuario
        PI->info=valor; // Se asigna el valor ingresado al campo 'info' del nodo
        PF=PI; // Se hace que PF (probablemente el final de la lista) apunte al mismo nodo que PI

        //solo hay 1 un nodo
    }else{
        // hay 2 nodo, se agrega un nodo al final de la lista
        PA=new(Nodo); // Se crea un nuevo nodo y se asigna a PA (probablemente un puntero auxiliar)
        cout<<"\tElija el numero que desea insertar al final"; // Se solicita al usuario que inserte un valor
        cin>> valor; // Se lee el valor ingresado por el usuario
        PA->info = valor; // Se asigna el valor ingresado al campo 'info' del nodo
        PF->siguiente=PA; // Se hace que el campo 'siguiente' del nodo apuntado por PF apunte al nuevo nodo
        PF=PA; // Se hace que PF apunte al nuevo nodo

    }
    PF->siguiente=NULL; // Se hace que el campo 'siguiente' del último nodo sea NULL, indicando el final de la lista
};

void Lista::eliminarInicio()
{
	if(PI==NULL)//Si el primer nodo esta vacio, pasa algo. en este caso, imprimer que no hay datos .
	{
		cout<<"No hay datos en la lista";
	}else
	{
		PA=PI;//Puntero Auxiliar toma el valor de Puntero Iniclal
		while(PA != NULL)//Mientras Puntero Auxiliar no sea nulo y tenga valor
		{
			if(PA == PI)//Si el valor del puntero auxiliar es el del puntero inicial
			{
				PA=PI->siguiente;
				cout<<"Se va eliminar el primer dato de la lista"<< PI->info;
				delete PI;//Elimina el Puntero Inicial
				PI=PA;//El puntero inicial toma el del auxiliar
				return;
			}
		}	
		PA=PA->siguiente;
	};
}

void Lista::EliminarFinal(){
		PA=PI;//Puntero Auxiiiar toma el valor del primero
		while(PA != NULL)//Mientras el puntero auxiliar sea nulo
		{
			if(PA == PF)//Si el Puntero auxiliar es igual al  final
			{
				if(PA==PI){//Si el Auxiliar es igual al Inicial
				cout<<"Se va elimiar el siguiente dato" << PF->info ;
				delete PI;//Elimina el Inicial
				PI = NULL;//el puntero inicial toma el valor nulo
				PF = NULL;//El puntero final toma el mismo valor
				}else{
				cout<<"valor de la ultima posicion eliminado"  << PF->info;
				delete PF;//Elimian el puntero Final
				PF=PA2;//El puntero final toma el valor del segundo puntero auxiliar
				PF->siguiente=NULL;//El siguiente puntero final toma el valor nulo
			}
			return;
			}
			PA2=PA;	//El segundo puntero auxiliar toma el valor del primer auxiliar
	        PA=PA->siguiente;//El valor del puntero auxiliar toma el valor el siguiente puntero auxiliar
	    }
	}		



void Lista::Mostrar(){	//Enseña todo lo que hay
	if(PI == NULL)// Si no hay datos en el puntero Inicial
	{
		cout<<"No hay datos en la lista de los numeros";
	} else {
		PA=PI;// Puntero Auxiliar toma el valor del Inicial
 		while(PA!=NULL)// Mientras el puntero inicial no sea nulo, muestra los valores
		{
			cout<<"["<<PA->info<<"]\n";
			PA=PA->siguiente;//Puntero auxiliar toma el valor del siguiente puntero auxiliar
		}
	}
}
void Lista::MostrarP()// se crea un mostrar para mostrar los datos de la persona
{
	if(PRS==NULL)//Si no hay datos en Persona. imprime de que no hay ningun dato
	{
		cout<<"No hay datos en la lista de los numeros";
	}else {
        PA3 = PRS;
        while (PA3 != NULL)//Mientras el tercer puntero auxiliar tenga datos y no esté vacio
        {
            cout << "El nombre de la persona es: " << PA3->nombre << endl;
            cout << "La edad de la persona es: " << PA3->Edad << endl;
            cout << "La ciudad de la persona es: " << PA3->City << endl;
            cout << "La ocupacion de la persona es: " << PA3->Ocupacion << endl;
            cout << "***************************" << endl;
            PA3 = PA3->siguiente;
        }
    }
}