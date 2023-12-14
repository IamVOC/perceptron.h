#include <math.h>

double act_sigmoid(double x)
{
	return(1./1.+exp(-x));
}

double act_sigmoid_der(double x)
{
	return(exp(x)/pow(exp(x) + 1., 2));
}

double act_tanh(double x)
{
	return((exp(x)-exp(-x))/(exp(x)+exp(-x)));
}

double act_tanh_der(double x)
{
	return(4*exp(2*x)/pow(exp(2*x) + 1, 2));
}

double act_relu(double x)
{
	if(x>0)
	{
		return(x);
	}
	return(0.);
}

double act_relu_der(double x)
{
	if(x>0)
	{
		return(1);
	}
	return(0.);
}
