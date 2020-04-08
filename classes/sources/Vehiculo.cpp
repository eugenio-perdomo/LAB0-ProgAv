

// -------------------------- Constructor --------------------------//
Vehiculo::Vehiculo(int nroSerie, float porcentajeBateria, float precioBase)
{
	this->nroSerie=nroSerie;
	this->porcentajeBateria=porcentajeBateria;
	this->precioBase=precioBase;
}


// ------ Getters ---------//
int Vehiculo::getNroSerie()
{
	return this->nroSerie;
}

float Vehiculo::getPorcentajeBateria()
{
	return this->porcentajeBateria;
}

float Vehiculo::getPrecioBase()
{
	return this->precioBase;
}


// ---------------- Setters --------------- //
void Vehiculo::setNroSerie(int nroSerie)
{
	this->nroSerie=nroSerie;
}

void Vehiculo::setPorcentajeBateria(float porcentajeBateria)
{
	this->porcentajeBateria=porcentajeBateria;
}

void Vehiculo::setPrecioBase(float precioBase)
{
	this->precioBase=precioBase;
}


// ------ Destructor -------//
Vehiculo::~Vehiculo();


virtual float Vehiculo::DarPrecioViaje(int duracion, int distancia){


}