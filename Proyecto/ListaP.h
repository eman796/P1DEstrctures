#include <iostream>
#include <string>
using namespace std;
// se crea una clase tipo lista 
class Lista
{
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

	
	
struct Nodo //almacena varios valores diferentes, un nodo es un espacio de almacenamiento
{
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

void Lista::OBD()
{
	
	if(PRS== NULL){
		PRS=new(Nodo);
		cout<<"\tBienvenido al agregar"<< endl;
    	cout<<"\tEscriba su nombre completo"<< endl;
    	cin.ignore(); // Limpia los buffers
    	getline(cin, PRS->nombre);
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
	PRS->siguiente=NULL;
}

 void Lista::agregarInicio()
{
	
	 if(PI==NULL) // se verifica que exista un nodo
	{
		// si esta vacia que cree un nuevo nodo
		PI=new(Nodo); 
		cout<<"\tElija el numero que desea insertar al inicio ";
		cin>> valor;
		PI->info=valor;
		PF=PI;
		
		//solo hay 1 un nodo
	}else{
		// hay 2 nodos, si la lista no esta bacia crea un nuevo nodo
		PA=new(Nodo);
		cout<<"\tElija el numero que desea insertar al inicio ";
		cin>> valor;
		PA->info = valor;
		PA->siguiente=PI;
		PI=PA;
		
		
	}
	PF->siguiente=NULL;
	
	
	
};
 void Lista::agregarFinal()
{
	if(PI==NULL)
	{
		PI=new(Nodo);
		cout<<"\tElija el numero que desea insertar al final ";
		cin>> valor;
		PI->info=valor;
		PF=PI;
		
		//solo hay 1 un nodo
	}else{
		// hay 2 nodo, se agrega un nodo al final de la lista 
		PA=new(Nodo);
		cout<<"\tElija el numero que desea insertar al final";
		cin>> valor;
		PA->info = valor;
		PF->siguiente=PA;
		PF=PA; 
	
		
		
		
	}
	PF->siguiente=NULL;
	
	
	
};


void Lista::eliminarInicio()
{
	if(PI==NULL)
	{
		cout<<"No hay datos en la lista";
	}else
	{
		PA=PI;
		while(PA != NULL)
		{
			if(PA == PI)
			{
				PA=PI->siguiente;
				cout<<"Se va eliminar el primer dato de la lista"<< PI->info;
				delete PI;
				PI=PA;
				return;
			}
		}	
		PA=PA->siguiente;
	};
}

void Lista::EliminarFinal()
{
  

		PA=PI;
		while(PA != NULL)
		{
			if(PA == PF)
			{
				if(PA==PI){
				cout<<"Se va elimiar el siguiente dato" << PF->info ;
				delete PI;
				PI = NULL;
				PF = NULL;
				}else{
				cout<<"valor de la ultima posicion eliminado"  << PF->info;
				delete PF;
				PF=PA2;
				PF->siguiente=NULL;
			}
			return;
			}
			PA2=PA;	
	        PA=PA->siguiente;
	    }
	}		



void Lista::Mostrar()	
{
	if(PI == NULL)
	{
		cout<<"No hay datos en la lista de los numeros";
	} else {
		PA=PI;
		
 		while(PA!=NULL)
		{
		
			cout<<"["<<PA->info<<"]\n";
			PA=PA->siguiente;
			
			 
		}
	}
	
}
void Lista::MostrarP()// se crea un mostrar para mostrar los datos de la persona
{
	if(PRS==NULL)
	{
		cout<<"No hay datos en la lista de los numeros";
	}else{
		PA3=PRS;
		while(PA3!=NULL)
		{
			cout<<"El nombre de la persona es: " <<PA3->nombre <<endl;
			cout<<"La edad de la persona es: " <<PA3->Edad <<endl;
			cout<<"La ciudad de la persona es: " <<PA3->City <<endl;
			cout<<"La ocupacion de la persona es: " <<PA3->Ocupacion <<endl;
			cout<<"***************************" <<endl;
			PA3=PA3->siguiente;			
		}
	
	}	
	
}
	
