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
// clase tarjeta de credito

class Recibos {
   private:
    string estrato;
    string codigoRecibo; //falta persona Personas
  public:

    Recibos() {
        estrato = codigoRecibo = "";
    }
     Recibos(string estrato, string codigoRecibo) {
         this->estrato = estrato;
         this->codigoRecibo = codigoRecibo;
     }
    virtual string nombreEmpresa () = 0;
    float valorRecibo(float valorPagar) {
        return valorPagar;
    }

    void setEstrato(string estrato) {
        this->estrato = estrato;
    }
    void setCodigoRecibo(string codigoRecibo) {
        this->codigoRecibo = codigoRecibo;
    }

    string getEstrato() {
        return estrato;
    }
    string codigoRecibo() {
        return codigoRecibo;
    }   
};

class InternetHogar:public Recibos {
    private:
    float precio;
    public:

    InternetHogar():Recibos() {
        precio = 0.0;
    }
    InternetHogar(float precio,string estrato, string codigoRecibo ):Recibos(estrato, codigoRecibo) {
        this->precio = precio;
    }
    string empresa() {
        string empresaServicio = "Claro Hogar";
        return empresaServicio;
    }
    float valorRecibo() {
        float n = 0.0;
        return n;
    }
    void setPrecio(float precio) {
        this->precio = precio;
    }
    float getPrecio() {
        return precio;
    }

};


class Luz:public Recibos {
    private:
    float precio;
    public:
    Luz():Recibos() {
        precio = 0.0;
    }

    Luz(float precio,string estrato, string codigoRecibo):Recibos(estrato, codigoRecibo) {
        this->precio = precio;
    }

    void setPrecio(float precio) {
        this->precio = precio;
    }

    float getPrecio() {
        return precio;
    }
};




class TarjetaCredito

{
private:
    string clave, numTarjeta, fechaVencimiento;
    // Persona nombre, tipoDocumento;-> hace falta la asociacion de la clase persona
public:
    TarjetaCredito()
    {
        clave = numTarjeta = fechaVencimiento = "";
        // nombre = tipoDocumento = ""; -> hace falta la asociacion de la clase persona
    }
    TarjetaCredito(string clave, string numTarjeta, string fechaVencimiento)
    {
        this->clave = clave;
        this->numTarjeta = numTarjeta;
        this->fechaVencimiento = fechaVencimiento;
    }
    void setClave(string clave)
    {
        this->clave = clave;
    }
    void setNumTarjeta(string numTarjeta)
    {
        this->numTarjeta = numTarjeta;
    }
    void setFechaVencimiento(string fechaVencimiento)
    {
        this->fechaVencimiento = fechaVencimiento;
    }
    string getClave()
    {
        return clave;
    }
    string getNumTarjeta()
    {
        return numTarjeta;
    }
    string getFechaVencimiento()
    {
        return fechaVencimiento;
    }
};
class Banco
{
private:
    string vidaCrediticia;
    // aca falta hacer la asociacion de la clase persona
public:
    Banco()
    {
        vidaCrediticia = "";
    }
    Banco(string vidaCrediticia)
    {
        this->vidaCrediticia = vidaCrediticia;
    }

    void setVidaCrediticia(string setVidaCrediticia)
    {
        this->vidaCrediticia = vidaCrediticia;
    }

    string getVidaCrediticia()
    {
        return vidaCrediticia;
    }
};
class Bancolombia : public Banco
{
private:
    string subsidios;

public:
    Bancolombia() : Banco()
    {
        subsidios = "";
    }
    Bancolombia(string subdsidios, string vidaCrediticia) : Banco(vidaCrediticia)
    {
        this->subsidios = subsidios;
    }

    void setSubsidios(string subsidios)
    {
        this->subsidios = subsidios;
    }

    string getSubsidios()
    {
        return subsidios;
    }
};
class Davivienda : public Banco
{

public:
    Davivienda() : Banco()
    {
    }
};
class CajaSocial : public Banco
{

public:
    CajaSocial() : Banco()
    {
    }
};
class Occidente : public Banco
{

public:
    Occidente() : Banco()
    {
    }
};
class Falabella : public Banco
{

public:
    Falabella() : Banco()
    {
    }
};
class Bogota : public Banco
{

public:
    Bogota() : Banco()
    {
    }
};
class Colpatria : public Banco
{

public:
    Colpatria() : Banco()
    {
    }
};
class Popular : public Banco
{

public:
    Popular() : Banco()
    {
    }
};
class Agrario : public Banco
{
private:
    string propiedadesAgricolas;

public:
    Agrario() : Banco()
    {
        propiedadesAgricolas = "";
    }
    Agrario(string propiedadesAgricolas, string vidaCrediticia) : Banco(vidaCrediticia)
    {
        this->propiedadesAgricolas = propiedadesAgricolas;
    }

    void setPropiedadesAgricolas(string propiedadesAgricolas)
    {
        this->propiedadesAgricolas = propiedadesAgricolas;
    }

    string getPropieadadesAgricolas()
    {
        return propiedadesAgricolas;
    }
};
class BBVA : public Banco
{
private:
    string pension;

public:
    BBVA() : Banco()
    {
        pension = "";
    }
    BBVA(string pension, string vidaCrediticia) : Banco(vidaCrediticia)
    {
        this->pension = pension;
    }

    void setPension(string pension)
    {
        this->pension = pension;
    }
    string getPension()
    {
        return pension;
    }
};


using namespace std;

int main()
{

    return 0;
}