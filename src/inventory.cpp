/*
 * inventory.cpp
 *
 *  Created on: Jan 9, 2012
 *      Author: lmfeeka
 */

#include "inventory.h"

inventory::inventory() {
//private:
//	typedef vector<item> items;
//	typedef pair<items, countries> itemDatas;
//public:
//	map<string,itemDatas*> itemInventory; //elem: <"book", ...>

	itemDatas *lp_itemDatasB = new itemDatas(); //meneekohan tama perille?
	itemDatas *lp_itemDatasR = new itemDatas();
	itemDatas *lp_itemDatasV = new itemDatas();
	itemDatas *lp_itemDatasA = new itemDatas();
    // in case the itemtype is not there as a key, it will be inserted
	itemInventory["book"]          = lp_itemDatasB;
	itemInventory["record"]        = lp_itemDatasR;
	itemInventory["videoCassette"] = lp_itemDatasV;
	itemInventory["audioCassette"] = lp_itemDatasA;
}

inventory::~inventory() {
	// TODO Auto-generated destructor stub
}


void
inventory::addItem (item Item){
	(itemInventory[Item.getItemType()]) -> first[Item.getName()]=Item;
}

item
inventory::getItem (string name, string type){
    return itemInventory[type]->first[name];

}

void
inventory::printAllOrdersInStock (){

}

void
inventory::printAllOfOrdersNotInStock (){

}

void
inventory::printFullStockStatus (){

}

void
inventory::printOrder (int orderNo){

}

item&
inventory::query (string itemName){

	//TODO instead of true, do map<..>iterator and find (compare to end...)
	if (true) return (itemInventory["book"]->first[itemName]);
	if (false) return (itemInventory["record"]->first[itemName]);
	if (false) return (itemInventory["videoCassette"]->first[itemName]);
	if (false) return (itemInventory["audioCassette"]->first[itemName]);

	item *it= new item();
    return *it;
}

order
inventory::query (int OrderNo){
   order Order;
   return Order;
}


void
inventory::removeItem ( string name){

}

void
inventory::setPostagePrice (string country, string itemType){

}

void
inventory::setVAT (string country, string itemType){

}

void
inventory::setPrice (double itemPrice, string itemName){

}
void
inventory::setStockAmount (int amount, string itemName){

}


//testataan
void vantaanjokiTest(inventory *testiMaa) {

    string maa_1 = "suomi";
    string kirja_1 = "Poija Mappanen: Maija Poppanen";

    //item Item(kirja_1);

	//addItem (item Item);
    //cout << kirja_1 >>´<<"=="<< Item.name
    //order Order = query (til_1); //order query (int OrderNo);
	//item getItem (string name);
    //item Item = query (kirja_1);
	//removeItem ( kirja_1);

	//setPostagePrice (maa_1, "book");
	//void setVAT (maa_1, "book");
	//setPrice (10.6, kirja_1);//void setPrice (double itemPrice, string itemName);
	//setStockAmount (1, kirja_1); //setStockAmount (int amount, string itemName);

	//printAllOrdersInStock ();
	//printAllOfOrdersNotInStock ();
	//printFullStockStatus ();
	//printOrder (int orderNo);

}

/*int main(void) {
	inventory *teostenHautausmaa;
	vantaanjokiTest(teostenHautausmaa);
	return 0;
}*/
