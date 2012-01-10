/*
 * inventory.h
 *
 *  Created on: Jan 9, 2012
 *      Author: lmfeeka
 */

#ifndef INVENTORY_H_
#define INVENTORY_H_
#include "book.h"
#include "item.h"
#include "order.h"

class inventory {

public:
	//these list of countries is referred by all of this item type in the constr
    book     *pricesAndVATsForBook; // incl. countries
	//record *pricesAndVATsForRecord;
	//audioCassette  *pricesAndVATsForAudio;
	//videoCassette  *pricesAndVATsForVideo;
	inventory();
	virtual ~inventory();
	void printAllOrdersInStock ();
	void printAllOfOrdersNotInStock ();
	void printFullStockStatus ();
	void printOrder (int orderNo);

	item query (string itemName);
	order query (int OrderNo);
	void addItem (item Item);
	item getItem (string name);
	void removeItem ( string name);

	void setPostagePrice (string country,
	                  string itemType);
	void setVAT (string country,
	         string itemType);
	void setPrice (double itemPrice,
	           string itemName);
	void setStockAmount (int amount, string itemName);
};

#endif /* INVENTORY_H_ */
