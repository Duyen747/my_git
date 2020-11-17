// lap trinh lai cac toan tu
#ifndef _FIGURES_IO_H
#define _FIGURES_IO_H

#include "Figure.h"
#include <iostream>
using namespace std;

istream& operator >> (istream& inDevice, Circle& cir);
ostream& operator << (ostream& outDevice, Circle& cir);

#endif

