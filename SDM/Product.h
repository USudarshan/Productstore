#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
using namespace std;
class Product

{
	public:
		int id;
		string title;
		string description;
		double price;
			
		Product();
		Product(int id, string title,string descrption,double price);	
		void displaydetails(int id, string title,string descrption,double price);
};

#endif
