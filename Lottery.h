/*
 * Lottery.h
 *
 *  Created on: 13 Jul 2018
 *      Author: alex
 */

#ifndef SRC_LOTTERY_H_
#define SRC_LOTTERY_H_
#include <string>
#include <sstream>
#include <cstdlib>
#include <time.h>
using namespace std;
namespace lotto {

class Lottery
{
	protected:
		int ticketSize, maxNum;
		int* generateNumbers();
	public:
		Lottery(int,int);
	virtual ~Lottery();
	virtual string printTicket();
};

} /* namespace lotto */

#endif /* SRC_LOTTERY_H_ */
