#include <string.h>
#include <vector>
#include "Coche.h"
class Cliente
{
private:
std::string _name;
std::vector< Coche* > _cars;
unsigned int _money;
public:
Cliente( std::string name );
// getters & setters
std::string getName();
void addMoney( unsigned int amount );
void expendMoney( unsigned int amount );
unsigned int getMoneyAmount();
/*!
\brief Añade un nuevo coche
@returns true si se añade correctamente, false si el coche ya
estaba añadido
*/
bool addCar( Coche* car );
/*!
\brief Elimina un coche del parque del cliente
@returns true si se Elimina correctamente, false si no estaba
en la lista
*/
4
bool removeCar( std::string license );
/*!
\brief Busca un coche en el parque del cliente
@returns el coche en cuestión, NULL si no lo encuentra
*/
Coche* searchCar( std::string license );
virtual ~Cliente(void);
};
