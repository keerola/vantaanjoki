/*
 * item.h
 *
 *  Created on: Jan 9, 2012
 *      Author: lmfeeka
 */

#ifndef ITEM_H_
#define ITEM_H_
using namespace std;
#include <cstdlib>
#include <string>
#include "countries.h"

#include <iostream>

class item {
public:
	item();
	virtual ~item();
	string getName ();
	double getPrice ();
	double getPostalFee ();
	int getStockStatus ();
	string getItemType ();
	//country getCountry (string country);
	countries::priceVat& isCountry (string countryName); //in the table? return val, else null, in countries !!
	double getVAT (string country);
	double getPostagePrice (string country);
	void removeCountry (string name);
	void setters();//for all setters for all but item type ( various); //TODO!!!!!!

private:
	string name;
	double price;
	double postalFee;
	int stockAmount;
	string type;
};

#endif /* ITEM_H_ */
