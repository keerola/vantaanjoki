/*
 * order.h
 *
 *  Created on: Jan 9, 2012
 *      Author: lmfeeka
 */

#ifndef ORDER_H_
#define ORDER_H_
#include <iostream>
#include <vector>

class order {
public:
	order();
	virtual ~order();
	bool isPossibleToShip ();
	void collectShipPrint ();
	std::vector<std::string> listOfItems();
	void printOrder ();
	int orderNo;
	std::string customer;
	std::string address;
};

#endif /* ORDER_H_ */
