#include "Trabajador.h"  

using namespace VotacionElectronicaModel;

Trabajador::Trabajador(String^ idTrabajador, String^nombre, String^apellido, String^ codigo, String^correo, String^contrase�a, String^flagVoto)
{
	
	this->idTrabajador = idTrabajador;
	this-> nombre=nombre;
	this-> apellido=apellido;
	this-> codigo=codigo;
	this-> correo =correo;
	this-> contrase�a=contrase�a;
	this-> flagVoto=flagVoto;
}

Trabajador::Trabajador(String^ nombre, String^apellido, String^codigo, String^contrase�a)
{
	this->nombre = nombre;
	this->apellido = apellido;
	this->codigo = codigo;
	this->contrase�a = contrase�a;
}
