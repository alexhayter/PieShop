/*
 * LotteryFactory.h
 *
 *  Created on: 13 Jul 2018
 *      Author: alex
 */

#ifndef SRC_LOTTERYFACTORY_H_
#define SRC_LOTTERYFACTORY_H_
#include "Lottery.h"
namespace lotto {

class LotteryFactory {
public:
	enum State { California, Florida };
	static LotteryFactory* getInstance();
	Lottery* getLottery(State);
private:
	LotteryFactory();
};

} /* namespace lotto */

#endif /* SRC_LOTTERYFACTORY_H_ */
