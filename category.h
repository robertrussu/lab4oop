#pragma once
class Category {
private:
	std::string m_name;
	std::vector<Product*> m_products;
public:
	Category( std::string name = "" );

	std::string GetName( );
	std::vector<Product*> GetProducts( );

	void AddProduct( Product* product );
	void RemoveProduct( std::string name );
	Product* FindProduct( std::string name );
	void PrintProducts( );
};

