/*
 * order.h
 *
 *  Created on: Jan 9, 2012
 *      Author: lmfeeka
 */

#ifndef ORDER_H_
#define ORDER_H_

class order {
	int orderNo;
	string customer;
	string address;
public:
	order();
	virtual ~order();
	bool isPossibleToShip ();
	void collectShipPrint ();
	item& getItemstoBeOrdered (); //listOfItems
	void printOrder ();
};

#endif /* ORDER_H_ */
