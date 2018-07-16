/*
 * MegaLottery.cpp
 *
 *  Created on: 13 Jul 2018
 *      Author: alex
 */

#include "MegaLottery.h"
using namespace std;
namespace lotto {

MegaLottery::MegaLottery(int ticketSize, int maxNum, int maxMegaNum) :
		Lottery(ticketSize,maxNum)
{
	this->maxMegaNum = maxMegaNum;
}
MegaLottery::~MegaLottery() { }

string MegaLottery::MegaLottery::printTicket() {
		ostringstream tick;
		tick << Lottery::printTicket() << " Mega: ";
		int mega = 1 + rand() % this->maxMegaNum;
		tick << mega;
		return tick.str();
}

} /* namespace lotto */
