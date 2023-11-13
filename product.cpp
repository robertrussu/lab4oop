#include "includes.h"

Product::Product( std::string name, int price ) {
	m_name = name;
	m_price = price;
	m_sale = false;
}

std::string Product::GetName( ) {
	return m_name;
}
int Product::GetPrice( ) {
	return m_price;
}
int Product::GetSale( ) {
	return m_sale;
}

void Product::SetPrice( int price ) {
	m_price = price;
}
void Product::SetSale( bool sale ) {
	m_sale = sale;
}

void Product::Print( ) {
	std::cout << m_name << ": " << m_price << ( m_sale ? " SALE!!!" : "" ) << std::endl;
}
