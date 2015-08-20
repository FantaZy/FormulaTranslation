#include "frequency.h"
#include <math.h>




cplx multiplyComplex(cplx first, cplx scnd)
{
	//(2+3i)*(5+2i) = 4 + 19i
	cplx result;
	result.real = first.real*scnd.real + first.imag*scnd.imag*(-1);
	result.imag = first.real*scnd.imag + first.imag*scnd.real;
	return result;

}
cplx addComplex(cplx first, cplx scnd)
{
	cplx result;
	result.real = first.real + scnd.real;
	result.imag = first.imag + scnd.imag;
	return result;

}
cplx divide(cplx first, cplx scnd)
{
	cplx numerator;
	cplx denominator;
	cplx tmp = scnd;
	cplx result;
	tmp.imag *= (-1);
	denominator = multiplyComplex(scnd, tmp);
	numerator = multiplyComplex(first, tmp);
	denominator.real = 1 / denominator.real;
	result = multiplyComplex(denominator,  numerator);
	return result;
}


cplx calculateFrequency(double angFreq)
{
	cplx numerator;
	cplx denominator;	
	cplx tmp, input, first,scnd,third,fourth,result;
	input.imag = angFreq;
	input.real = 2.0;
	tmp.real = 0.0;
	tmp.imag = 200.0;

	first.imag = 0.1*angFreq;
	first.real = 1.0;

	scnd.imag = 0.3*angFreq;
	scnd.real = 1.0;

	third.imag = 0.6*angFreq;
	third.real = 1.0;

	fourth.imag = 0.8*angFreq;
	fourth.real = 1.0;
	numerator = multiplyComplex(tmp, input);
	tmp.real = angFreq*angFreq*angFreq;
	tmp.imag = 0.0;

	cplx tmp11;
	cplx tmp22;
	cplx tmp33;
	tmp11 = multiplyComplex(first, scnd);//ok
	tmp22 = multiplyComplex(third, fourth);
	tmp33 = multiplyComplex(tmp11, tmp22);
	denominator = multiplyComplex(tmp, tmp33);
	//denominator = multiplyComplex(tmp, multiplyComplex(multiplyComplex(first, scnd), multiplyComplex(third, fourth)));
	result = divide(numerator, denominator);
	return result;
	
	
}