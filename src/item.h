/*
 * item.h
 *
 *  Created on: Jan 9, 2012
 *      Author: lmfeeka
 */

#ifndef ITEM_H_
#define ITEM_H_

#include <iostream>

class item {
public:
	item();
	virtual ~item();
	std::string getName ();
	double getPrice ();
	double getPostalFee ();
	int getStockStatus ();
	std::string getItemType ();
//	country getCountry (std::string country);
	double getVAT (std::string country);
	double getPostagePrice (std::string country);
	void removeCountry (std::string name);
//	void for all setters for all but item type ( various);
private:
	std::string name;
	double price;
	double postalFee;
	int stockAmount;
	std::string type;
};

#endif /* ITEM_H_ */
