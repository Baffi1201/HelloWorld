#include "Trabajador.h"  

using namespace VotacionElectronicaModel;

Trabajador::Trabajador(String^ idTrabajador, String^nombre, String^apellido, String^ codigo, String^correo, String^contraseņa, String^flagVoto)
{
	
	this->idTrabajador = idTrabajador;
	this-> nombre=nombre;
	this-> apellido=apellido;
	this-> codigo=codigo;
	this-> correo =correo;
	this-> contraseņa=contraseņa;
	this-> flagVoto=flagVoto;
}

Trabajador::Trabajador(String^ nombre, String^apellido, String^codigo, String^contraseņa)
{
	this->nombre = nombre;
	this->apellido = apellido;
	this->codigo = codigo;
	this->contraseņa = contraseņa;
}
