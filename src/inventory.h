/*
 * inventory.h
 *
 *  Created on: Jan 9, 2012
 *      Author: lmfeeka
 */

#ifndef INVENTORY_H_
#define INVENTORY_H_

class inventory {
public:
	inventory();
	virtual ~inventory();
	void printAllOrdersInStock ();
	void printAllOfOrdersNotInStock ();
	void printFullStockStatus ();
	void printOrder (int orderNo);
	Item query (string item.name);
	Order query (int OrderNo);
	void addItem (Item item);
	Item getItem (string name);
	 removeItem ( name:string);
	void setPostagePrice (string country,
	                  string itemType);
	void setVAT (string country,
	         string itemType);
	void setPrice (double item.price,
	           string item.name);
	void setStockAmount (int amount,
	                 string item.name);
};

#endif /* INVENTORY_H_ */
