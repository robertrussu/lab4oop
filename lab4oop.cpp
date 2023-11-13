#include "includes.h"

int main( ) {
	Product mx5( "Mazda MX5", 22 ), rx8( "Mazda RX8", 35 ), mz3( "Mazda 3", 29 );
	rx8.SetSale( true );

	Category cars( "Vehicles" );
	cars.AddProduct( &mx5 );
	cars.AddProduct( &rx8 );
	cars.AddProduct( &mz3 );

	Product pad( "Brake pad set", 3), rotor( "Brake rotor set", 5), filter( "Oil filter", 2 );
	filter.SetSale( true );

	Category parts( "Spare parts" );
	parts.AddProduct( &pad );
	parts.AddProduct( &rotor );
	parts.AddProduct( &filter );

	OnlineShop dealership( "Mazda Craiova" );
	dealership.AddCategory( &cars );
	dealership.AddCategory( &parts );

	dealership.PrintProducts();

	std::cout << "----------" << std::endl;

	dealership.FindProduct( "Mazda RX8" );

	cars.RemoveProduct( "Mazda RX8" );

	dealership.FindProduct( "Mazda RX8" );
}