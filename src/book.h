/*
 * book.h
 *
 *  Created on: Jan 9, 2012
 *      Author: lmfaila
 */

#ifndef BOOK_H_
#define BOOK_H_

#include "countries.h"
#include "item.h"

class book : public item {
public:
	book(countries *Countries);
	virtual ~book();
private:
	countries *postagePricesAndVATsPerCountry;
};


#endif /* BOOK_H_ */
