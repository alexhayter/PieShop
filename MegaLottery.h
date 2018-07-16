/*
 * MegaLottery.h
 *
 *  Created on: 13 Jul 2018
 *      Author: alex
 */

#ifndef SRC_MEGALOTTERY_H_
#define SRC_MEGALOTTERY_H_

#include "Lottery.h"

namespace lotto {

class MegaLottery: public lotto::Lottery {
	protected:
		int maxMegaNum;
public:
	MegaLottery(int,int,int);
	virtual ~MegaLottery();
	string printTicket();
};

} /* namespace lotto */

#endif /* SRC_MEGALOTTERY_H_ */
