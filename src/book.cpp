/*
 * book.cpp
 *
 *  Created on: Jan 9, 2012
 *      Author: lmfaila
 */

#include "book.h"

//book::book(countries *Countries):item(){ // default constructor of item invoked prior
book::book(countries *Countries){ // default constructor of item invoked prior as default

	postagePricesAndVATsPerCountry = Countries;

}

book::~book() {
	// TODO Auto-generated destructor stub
}
