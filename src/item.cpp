/*
 * item.cpp
 *
 *  Created on: Jan 9, 2012
 *      Author: lmfeeka
 */

#include "item.h"
#include "countries.h"

item::item() {
	// TODO Auto-generated constructor stub

}

item::~item() {
	// TODO Auto-generated destructor stub
}

string
item::getName() {
	return this->name;
}

double
item::getPrice () {
	return this->price;
}

double
item::getPostalFee () {
	return this->postalFee;
}

int
item::getStockStatus () {
	return this->stockAmount;
}

string
item::getItemType () {
	return this->type;
}
//	country getCountry (string country);
double
item::getVAT (string country) {
	return 0.0;
}

double
item::getPostagePrice (string country) {
/*	map<postagePricesVAT>::iterator it;
	if(!(postagePricesVAT.empty())) {
		  for ( it=postagePricesVAT.begin() ; it < postagePricesVAT.end(); it++ ){
			if(it->first == country.c_str()) {
				return it->second;
			}
		  }

    }*/
	return 0.0;
}

void removeCountry (string name);

