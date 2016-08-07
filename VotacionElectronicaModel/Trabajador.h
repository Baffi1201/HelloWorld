#pragma once

using namespace System;

namespace VotacionElectronicaModel 
{
	public ref class Trabajador  
	{
	public:

		String^ idTrabajador;
		String^ nombre;
		String^ apellido;
		String^ codigo;
		String^ correo;
		String^ contrase�a;
		String^ flagVoto;

	public: 

		//Trabajador();  
		Trabajador(String^ idTrabajador, String^nombre, String^apellido, String^ codigo,String^correo,String^contrase�a, String^flagVoto);
		Trabajador(String^ nombre, String^apellido, String^codigo, String^contrase�a);
	};


}