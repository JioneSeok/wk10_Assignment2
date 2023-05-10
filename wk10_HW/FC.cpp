#include "FC.h"

float FC::getC() {
	return ((f - 32.0) * 5. / 9.);
}
float FC::getF() {
	return (c * 9. / 5. + 32.0);
}