/*
 * countries.h
 *
 *  Created on: Jan 9, 2012
 *      Author: lmfeeka
 */

#ifndef COUNTRIES_H_
#define COUNTRIES_H_
#include <iostream>
#include <map>

class countries {
public:
	countries();
	virtual ~countries();
	void updateVat (double country);
	void updatePostagePrice (double country);
	double getVAT (std::string country);
	double getPostagePrice (std::string country);
//private:
	std::map<std::string, double, double> postagePricesVATs;
};

#endif /* COUNTRIES_H_ */
