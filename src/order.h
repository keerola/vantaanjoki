/*
 * order.h
 *
 *  Created on: Jan 9, 2012
 *      Author: lmfeeka
 */

#ifndef ORDER_H_
#define ORDER_H_

class order {
public:
	order();
	virtual ~order();
	boolean isPossibleToShip ();
	 collectShipPrint ();
	listOfItems getItemstoBeOrdered ();
	 printOrder ();
	int orderNo;
	string customer;
	string address;
};

#endif /* ORDER_H_ */
