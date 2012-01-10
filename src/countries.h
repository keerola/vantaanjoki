/*
 * countries.h
 *
 *  Created on: Jan 9, 2012
 *      Author: lmfeeka
 *
 *      Comment: This is inherited in an item type
 */

#ifndef COUNTRIES_H_
#define COUNTRIES_H_

using namespace std;
#include <cstdlib>
#include <string>
#include <vector>

#include <map>

class countries {
public:
	typedef pair<double,double> priceVat;
private:
	typedef vector<priceVat> priceVats;
	map<string,priceVat*> postagePricesVATs; //MapOfCountrynamesAndDoublesAndDoubles
	//OBS! the next does build, but "info: instantiated from here"
	//map<string,priceVats*,less<string>,std::allocator<string>()> postagePricesVATs;
public:
	countries();
	countries(string, double, double);
	virtual ~countries();
	void updateVat (string countryName, double vat);
	void updatePostagePrice (string countryName, double pprice);
	void addCountry (string countryName, double pprice, double vat);
	void removeCountry (string countryName);
	priceVat& isCountry (string countryName);  //is it in the table, return val, else null
	double getVAT (string countryName);
	double getPostagePrice (string countryName);

};

#endif /* COUNTRIES_H_ */
