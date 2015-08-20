
#include <math.h>

typedef struct complexNumber
{
	double real, imag;
}cplx;
cplx calculateFrequency(double angFreq);
cplx multiplyComplex(cplx first, cplx scnd);
cplx addComplex(cplx first, cplx scnd);
cplx divide(cplx first, cplx scnd);