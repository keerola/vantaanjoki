/*
 * countries.h
 *
 *  Created on: Jan 9, 2012
 *      Author: lmfeeka
 */

#ifndef COUNTRIES_H_
#define COUNTRIES_H_

class countries {
public:
	countries();
	virtual ~countries();
	void updateVat (double country);
	void updatePostagePrice (double country);
	double getVAT (string country);
	double getPostagePrice (string country);
private:
	MapOfCountrynamesAndDoublesAndDoubles postagePricesVATs;
};

#endif /* COUNTRIES_H_ */
