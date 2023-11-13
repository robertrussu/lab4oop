#pragma once

class Product {
private:
	std::string m_name;
	int m_price;
	bool m_sale;
public:
	Product( std::string name = "", int price = 1 );

	std::string GetName( );
	int GetPrice( );
	int GetSale( );
	void SetPrice( int price );
	void SetSale( bool sale );

	void Print( );
};