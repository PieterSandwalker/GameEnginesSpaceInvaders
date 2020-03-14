#pragma once
#include "Timeline.hpp"
class Localtime :
	public Timeline
{

	private:
		int start_time;
		double time_factor;
		Timeline* anchor;
		bool pause;

	public:
		explicit Localtime(Timeline* anchor);
		int getTime();
		int restart();
		void changeFactor();

};

