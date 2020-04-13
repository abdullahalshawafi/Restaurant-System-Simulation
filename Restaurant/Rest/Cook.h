#pragma once
#include "..\Defs.h"
#include "Order.h"

class Order;

class Cook
{
	int ID;				  //Each cook has its own ID
	ORD_TYPE type;		  //for each order type there is a corresponding type (VIP, Normal, Vegan)
	int speed;			  //dishes it can prepare in one clock tick (in one timestep)
	int BreakDuration;    //No. of time steps that a cook stay in break
	int CurrOrd;		  //No. of the orders that have been assigned to the cook
	bool InBreak;		  //Is the cook in a break or not
	Order* AssignedOrder; //Pointer to the assigned order
	static int OrdToBreak;	//How many orders does a cook serve before a break
public:
	Cook();

	void SetID(int);
	int GetID() const;

	void SetType(ORD_TYPE);
	ORD_TYPE GetType() const;

	void SetSpeed(int);
	int GetSpeed() const;

	void SetBreakDuration(int);
	int GetBreakDuration() const;

	void SetCurrOrd(int);
	int GetCurrOrd() const;

	void SetInBreak(bool);
	bool GetInBreak() const;

	void SetAssignedOrder(Order*);
	Order* GetAssignedOrder() const;

	static void SetOrdToBreak(int);
	static int GetOrdToBreak();

	virtual ~Cook();
};