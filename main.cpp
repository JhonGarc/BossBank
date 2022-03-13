#include <iostream>

class Persona
{
private:
    string nombre, edad, fechaNacimiento, direccion, telefono, tipoDocumento, documento;

public:
    Persona()
    {
        nombre = edad = fechaNacimiento = direccion = telefono = tipoDocumento = documento = "";
    }
    Persona(string nombre, string edad, string fechaNacimiento, string direccion, string telefono, string tipoDocumento, string documento)
    {
        this->nombre = nombre;
        this->edad = edad;
        this->fechaNacimiento = fechaNacimiento;
        this->direccion = direccion;
        this->telefono = telefono;
        this->tipoDocumento = tipoDocumento;
        this->documento = documento;
    }

    void setNombre(string nombre)
    {
        this->nombre = nombre;
    }
    void setEdad(string edad)
    {
        this->edad = edad;
    }
    void setFechaNacimiento(string setFechaNacimiento)
    {
        this->fechaNacimiento = fechaNacimiento;
    }
    void setDireccion(string direccion)
    {
        this->direccion = direccion;
    }
    void setTelefono(string telefono)
    {
        this->telefono = telefono;
    }
    void setTipoDocumento(string tipoDocumento)
    {
        this->tipoDocumento = tipoDocumento;
    }
    void setDocumento(string documento)
    {
        this->documento = documento;
    }
    string getNombre()
    {
        return nombre;
    }
    string getEdad()
    {
        return edad;
    }
    string getFechaNacimiento()
    {
        return fechaNacimiento;
    }
    string getDireccion()
    {
        return direccion;
    }
    string getTelefono()
    {
        return telefono;
    }
    string getTipoDocumento()
    {
        return tipoDocumento;
    }
    string getDocumento()
    {
        return documento;
    }
};

using namespace std;

int main()
{

    return 0;
}