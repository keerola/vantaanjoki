/*
 * item.h
 *
 *  Created on: Jan 9, 2012
 *      Author: lmfeeka
 */

#ifndef ITEM_H_
#define ITEM_H_

class item {
public:
	item();
	virtual ~item();
	double getName ();
	double getPrice ();
	double getPostalFee ();
	int getStockStatus ();
	string getItemType ();
	country getCountry (string country);
	double getVAT (string country);
	double getPostagePrice (string country);
	removeCountry (string name);
	void for all setters for all but item type ( various);
private:
	string name;
	double price;
	double postalFee;
	int stockAmount;
};

#endif /* ITEM_H_ */
