#include <string>
#include "stdlib.h"

#include "../includes/waiter.h"
#include "../includes/externs.h"

using namespace std;

	//ID is just a number used to identify this particular baker
	//(used with PRINT statements)
	//filename is what waiter reads in orders from
Waiter::Waiter(int id,std::string filename):id(id),myIO(filename){
}

Waiter::~Waiter()
{
}

	//gets next Order(s) from file_IO
	//if return == SUCCESS then anOrder
	//contains new order
	//otherwise return contains error
int Waiter::getNext(ORDER &anOrder){
	if(this->myIO.getNext(anOrder) != SUCCESS){
		return SUCCESS;
	}
	return FAIL;
}


	//contains a loop that will get orders from filename one at a time
	//then puts them in order_in_Q then signals baker(s) using cv_order_inQ
	//so they can be consumed by baker(s)
	//when finished exits loop and signals baker(s) using cv_order_inQ that
	//it is done using b_WaiterIsFinished
void Waiter::beWaiter() {
	ORDER order;
	while(myIO.getNext(order)){
		//do SOmething
	}

}

