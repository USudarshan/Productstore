#include "Product.h"



			
	Product::Product(){
			cout<< "this is default constructor";
		}
	Product::Product(int id, string title,string descrption,double price)
		{
			this->id=id;
			this->title=title;
			this->description=description;
			this->price=price;
		
		
		}
		
		
	 void Product::displaydetails(int id, string title,string descrption,double price){
		cout<< "The product details are :";
		cout<< "Id :"<<id;
		cout<< "Title :"<<title;
		cout<< "description :"<<description;
		cout<< "price :"<<price;
}
	

