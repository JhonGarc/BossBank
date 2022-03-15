#include <iostream>

class Persona
{
private:
    string nombre, edad, fechaNacimiento, direccion, telefono, tipoCuenta, tipoDocumento, documento;
    // faltan los vectores de TarjetaCredito y Celular

public:
    Persona()
    {
        nombre = edad = fechaNacimiento = direccion = telefono = tipoCuenta = tipoDocumento = documento = "";
    }
    Persona(string nombre, string edad, string fechaNacimiento, string direccion, string telefono, string tipoCuenta, string tipoDocumento, string documento)
    {
        this->nombre = nombre;
        this->edad = edad;
        this->fechaNacimiento = fechaNacimiento;
        this->direccion = direccion;
        this->telefono = telefono;
        this->tipoCuenta = tipoCuenta;
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
    void setTipoCuenta(string tipoCuenta)
    {
        this-> tipoCuenta = tipoCuenta;
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
    string getTipoCuenta()
    {
        return tipoCuenta;
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
class Recibos
{
private:
    string estrato = "";
    string codigoRecibo = "";
    //falta la composicion persona
public:
    Recibos()
    {
        estrato, codigoRecibo = "";
    }
    Recibos(string estrato, string codigoRecibo)
    {
        this-> estrato = estrato;
        this-> codigoRecibo = codigoRecibo;
    }
    void setEstrato(string estrato)
    {
        this-> estrato = estrato;
    }
    void setCodigoRecibo(string codigoRecibo)
    {
        this-> codigoRecibo = codigoRecibo;
    }
    string getEstrato()
    {
        return estrato;
    }
    string getCodigoRecibo()
    {
        return codigoRecibo;
    }
    virtual string empresa() = 0;
    // falta el float valorRecibo
};
class InternetHogar: public Recibos
{
    private:
    float precio = 0.0;
    public:
    InternetHogar(): Recibos()
    {
        precio = 0,0;
    }
    InternetHogar(float precio) : Recibos()
    {
        this->precio = precio;
    }
    void setPrecio(float precio)
    {
        this-> precio = precio;
    }
    float getPrecio()
    {
        return precio;
    }
    string empresa() override
    {
        return "Internet";
    }
    //falta el valorRecibo que heredo
};
class Luz: public Recibos
{
    private:
    float precio = 0.0;
    public:
    Luz(): Recibos()
    {
        precio = 0,0;
    }
    Luz(float precio) : Recibos()
    {
        this->precio = precio;
    }
    void setPrecio(float precio)
    {
        this-> precio = precio;
    }
    float getPrecio()
    {
        return precio;
    }
    string empresa() override
    {
        return "Luz";
    }
    //falta el valorRecibo que heredo
};
class Gas: public Recibos
{
    private:
    float precio = 0.0;
    public:
    Gas(): Recibos()
    {
        precio = 0,0;
    }
    Gas(float precio) : Recibos()
    {
        this->precio = precio;
    }
    void setPrecio(float precio)
    {
        this-> precio = precio;
    }
    float getPrecio()
    {
        return precio;
    }
    string empresa() override
    {
        return "Gas";
    }
    //falta el valorRecibo que heredo
};
class Agua: public Recibos
{
    private:
    float precio = 0.0;
    public:
    Agua(): Recibos()
    {
        precio = 0,0;
    }
    Agua(float precio) : Recibos()
    {
        this->precio = precio;
    }
    void setPrecio(float precio)
    {
        this-> precio = precio;
    }
    float getPrecio()
    {
        return precio;
    }
    string empresa() override
    {
        return "Agua";
    }
    //falta el valorRecibo que heredo
};
class GastosAdicionales: public Persona
{

};
class Transporte:  public GastosAdicionales
{

};
class Vehiculo: public Transporte
{
    private:
    string placa = "";
    // faltan el nombre: persona y el telefono
    public:
    Vehiculo()
    {
        placa: "";
    }
    Vehiculo(string placa)
    {
        this->placa = placa;
    }
    void setPlaca(string placa)
    {
        this-> placa = placa;
    }
    string getPlaca()
    {
        return placa;
    }
    //falta el calcular precio y marca(): string
};
class Carro: public Vehiculo
{

};
class Moto: public Vehiculo
{

};
class Tecnomecanica//hacer la composicion
{

};
class Soat// hacer la composicion
{

};
class Entretenimiento: public GastosAdicionales
{
    private:
    public:
};
class Plataformas: public Entretenimiento
{
    private:
    float precio = 0.0;
    //falta nombre: persona
    public:
    Plataformas(): Entretenimiento()
    {
        precio = 0.0;
    }
    Plataformas(float precio): Entretenimiento()
    {
        this-> precio = precio;
    }
    void setPrecio(float precio)
    {
        this-> precio = precio;
    }
    float getPrecio()
    {
        return precio;
    }
    virtual float CarlcularPrecio() = 0;
    virtual string TipoPlataforma() = 0;
    //falta plataforma activa(): true
};
class Musica: public Plataformas
{

};
class Spotify: public Musica
{

};
class Streaming: public Plataformas
{
// colocar el calclar precio
};
class HBO: public Streaming
{

};
class Disney: public Streaming
{

};
class Netflix: public Streaming
{

};//en las tres hay que hacer lo de referenciaSuscripcion





using namespace std;

int main()
{

    return 0;
}