#ifndef CONFIG_H_
#define CONFIG_H_

namespace config
{
	const int kPortCount = 16;
	//const int kQueueNumber = 8;
	const int kQueueLength = 100000;
	const int kDefaultCellSize = 64;

	extern double Rate;
	extern long sim_duration;

	enum QueuingType {	kInputQueuing, kOutputQueuing, kVirtualOutputQueuing}; // type of corssbar queuing model
	enum TrafficModel {	kBernoulli, kOnOff};
};

#endif