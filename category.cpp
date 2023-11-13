#include "includes.h"

Category::Category( std::string name ) {
	m_name = name;
	m_products.clear( );
}

std::string Category::GetName( ) {
	return m_name;
}
std::vector<Product*> Category::GetProducts( ) {
	return m_products;
}

void Category::AddProduct( Product* product ) {
	m_products.push_back( product );
}

void Category::RemoveProduct( std::string name ) {
	if ( auto it = std::find_if(
		m_products.begin( ), m_products.end( ),
		[ name ] ( Product* product ) { return product->GetName( ) == name; } ); it != m_products.end( ) ){
		std::cout << "removed "; ( *it )->Print( );
		m_products.erase( it );
	}
}

Product* Category::FindProduct( std::string name ) {
	if ( auto it = std::find_if(
		m_products.begin( ), m_products.end( ),
		[ name ] ( Product* product ) { return product->GetName( ) == name; } ); it != m_products.end( ) )
		return *it;

	return nullptr;
}

void Category::PrintProducts( ) {
	for ( auto product : m_products )
		product->Print( );
}
