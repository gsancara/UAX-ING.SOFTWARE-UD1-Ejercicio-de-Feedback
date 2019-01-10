#include "Coche.h"
#include "Cliente.h"
class Concesionario
{
private:
std::vector< Coche* > _stock;
std::vector< Coche* > _repairing;
public:
Concesionario(void);
~Concesionario(void);
/*!
\brief Añade un nuevo coche al inventario
@returns false si el coche ya estaba en el inventario o en el
taller
*/
bool addCarToStock( Coche* car );
/*!
\brief Vende un coche del inventario al usuario y lo añade a
su lista de coches
Tras ejecutar esta función se quita el coche del inventario
@returns false si el coche no está en inventario o el cliente
no puede pagarlo
*/
bool sellCar( Cliente* client, std::string license );
/*!
\brief Toma un coche averiado del cliente y lo añade al taller
@returns false si el cliente no tiene ese coche o el coche no
está averiado
*/
bool checkCarInGarage( Cliente* client, std::string license );
/*!
\brief Toma un coche listo del taller y se lo devuelve al
cliente
@returns false si el coche no está en el taller y en estado de
listo
*/
bool retrieveCarFromGarage( Cliente* cliente, std::string license );
};
