#include "includes.h"

OnlineShop::OnlineShop( std::string name  ) {
	m_name = name;
	m_categories.clear( );
	//m_products.clear( );
}
std::string OnlineShop::GetName( ) {
	return m_name;
}
std::vector<Category*> OnlineShop::GetCategories( ) {
	return m_categories;
}

void OnlineShop::AddCategory( Category* category ) {
	m_categories.push_back( category );
	// auto produts = category->GetProducts( );
	// m_products.insert( m_products.end( ), produts.begin( ), produts.end( ) );
}

void OnlineShop::PrintProducts( ) {
	for ( auto category : m_categories )
		category->PrintProducts( );
	// for ( auto product : m_products )
	//	 product->Print( );
}

Product* OnlineShop::FindProduct( std::string name ) {
	for ( auto category : m_categories ) {
		if ( auto product = category->FindProduct( name ); product ){
			std::cout << "found ";
			product->Print( );
			return product;
		}
	}

	std::cout << name << " not found :(" << std::endl;
	return nullptr;
}
