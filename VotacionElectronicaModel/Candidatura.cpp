#include "Candidatura.h"  

using namespace VotacionElectronicaModel;

Candidatura::Candidatura(String^ idCandidato, int numVotos, String^ idTrabajador, String^nombre, String^apellido, String^ codigo, String^correo, String^contrase�a, String^flagVoto, Cargo^objCargo) : Trabajador(idTrabajador, nombre, apellido, codigo, correo, contrase�a, flagVoto)
{
	this->idCandidato = idCandidato;
	this->numVotos = numVotos;
	this->objCargo = objCargo;

}

