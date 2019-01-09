/*!
\brief Busca un coche en el parque del cliente
@returns el coche en cuestión, NULL si no lo encuentra
*/
Coche* searchCar( std::string license )
6
{
std::vector< Coche* >::iterator search_pos = _cars.begin();
while( search_pos != _cars.end() )
{
if( (*search_pos)->getLicense() == license ) // encontrado!
return &*search_pos;
search_pos++;
}
return NULL;
}
/*!
\brief Elimina un coche del parque del cliente
@returns true si se Elimina correctamente, false si no estaba en la
lista
*/
bool removeCar( std::string license )
{
Coche* borrable = NULL;
if( ( borrable = searchCar( car->getLicense() ) ) != NULL )
{
// el coche está en la lista, lo borro
std::vector< Coche* >::iterator position = std::find(
_cars.begin(), _cars.end(), borrable );
_cars.erase( position );
return true;
}
// no se encontró el coche
return false;
}
/*!
\brief Añade un nuevo coche
@returns true si se añade correctamente, false si el coche ya estaba
añadido
*/
bool addCar( Coche* car )
{
if( searchCar( car->getLicense() ) == NULL )
{
// el coche no está en la lista, lo añado
_cars.push_back( car );
return true;
}
// el coche ya estaba en la lista
return false;
}
