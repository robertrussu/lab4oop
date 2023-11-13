#pragma once
class OnlineShop {
private:
	std::string m_name;
	std::vector<Category*> m_categories;
	//std::vector<Product*> m_products;
public:
	OnlineShop( std::string name = "" );
	std::string GetName( );
	std::vector<Category*> GetCategories( );

	void AddCategory( Category* category );
	void PrintProducts( );
	Product* FindProduct( std::string name );
};