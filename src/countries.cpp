/*
 * countries.cpp
 *
 *  Created on: Jan 9, 2012
 *      Author: lmfeeka
 */

#include "countries.h"

countries::countries() {
	// TODO Auto-generated constructor stub

}
countries::countries(string countryName, double pprice, double vat) {
	addCountry(countryName, pprice, vat);
}

countries::~countries() {
	// TODO Auto-generated destructor stub
}

void
countries::addCountry (string countryName, double pprice, double vat ){
    priceVat *lp_priceVat = new priceVat(pprice,vat); //meneekohan tama perille?
    // in case the countryName is not there as a key, it will be inserted w lv_priceVat
    postagePricesVATs[countryName] = lp_priceVat; //ss296&7
}
void
countries::removeCountry (string countryName){
	//TODO!
	//do the destruction of the priceVat too, since done with new!!
}

//is it in the table
countries::priceVat&
countries::isCountry (string countryName){
    priceVat *val = postagePricesVATs[countryName];
	//countries::priceVat val = postagePricesVATs.find(countryName); //nok
    //if (val== postagePricesVATs.end()) return null;                //nok
    return *val; //TODO? nainkohan tama menee?
}

double
countries::getVAT (string countryName){
    priceVat *lp_priceVat = postagePricesVATs[countryName];
    return lp_priceVat->first; //<priceVat.first, priceVat.second>
}

double
countries::getPostagePrice (string countryName){
    priceVat *lp_priceVat = postagePricesVATs[countryName];
    return lp_priceVat->second; //<priceVat.first, priceVat.second>
}

void
countries::updateVat (string countryName, double vat){
    priceVat lv_priceVat(getPostagePrice(countryName), vat);
//    priceVat *lp_priceVat = postagePricesVATs[countryName];
//    lp_priceVat = &lv_priceVat;
    //TODO? and where does the previous pointed mem go? freeing needed?
}
void
countries::updatePostagePrice (string countryName, double pprice){
    priceVat lv_priceVat(pprice, getVAT(countryName));
    //priceVat *lp_priceVat = postagePricesVATs[countryName];
    //lp_priceVat = &lv_priceVat;
    postagePricesVATs[countryName] = &lv_priceVat;
    //TODO? and where does the previous pointed mem go? freeing needed?

}
std::string 
countries::getCountry() {
	return this->countryName;
}


