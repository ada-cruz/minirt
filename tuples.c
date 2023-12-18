# include <stdio.h>
# include <math.h>
# define EPSILON 0.0001

typedef struct s_coordinates
{
	double x;
	double y;
	double z;
	double w;
}	t_coordinates;

int	are_equals(double a, double b)
{
	if (fabs(a - b) < EPSILON)
		return (1);
	return (0);
}

int are_equals_tuple(t_coordinates a, t_coordinates b)
{
	if (are_equals(a.x, b.x) && are_equals(a.y, b.y) \
		&& are_equals(a.z, b.z) && are_equals(a.w, b.w))
		return (1);
	else
		return (0);
}

t_coordinates adding_tuples(t_coordinates a, t_coordinates b)
{
	t_coordinates new_tuple;

	new_tuple.x = a.x + b.x;
	new_tuple.y = a.y + b.y;
	new_tuple.z = a.z + b.z;
	new_tuple.w = a.w + b.w;
	return (new_tuple);
}

t_coordinates subtract_tuples(t_coordinates a, t_coordinates b)
{
	t_coordinates new_tuple;

	new_tuple.x = a.x - b.x;
	new_tuple.y = a.y - b.y;
	new_tuple.z = a.z - b.z;
	new_tuple.w = a.w - b.w;
	return (new_tuple);
}

t_coordinates negate_tuples(t_coordinates a)
{
	t_coordinates new_tuple;
	new_tuple.x = -1 * a.x;
	new_tuple.y = -1 * a.y;
	new_tuple.z = -1 * a.z;
	new_tuple.w = -1 * a.w;
	printf("o valor de x %f\n", new_tuple.x);
	printf("o valor de x %f\n", new_tuple.y);
	printf("o valor de x %f\n", new_tuple.z);
	printf("o valor de x %f\n", new_tuple.w);
	return (new_tuple);
}

int main(void)
{
	double x;
	double y;
	double z;
	double w;
	double ww;
	double xx;
	double yy;
	double zz;
	
	
	x = 1.0;
	y = -2.0;
	z = 3.0;
	w = -4.0;
	xx = 5.0;
	yy = 6.0;
	zz = 7.0;
	ww = 0.0;
	
	negate_tuples((t_coordinates){x, y, z, w});
	// if (!are_equals_tuple((t_coordinates){x, y, z, w}, (t_coordinates){xx, yy, zz, ww}))
	// 	printf("as tuplas não são iguais");
	// else
	// 	printf("elas são iguais");
	// if (!are_equals())
	// 	printf("os pontos não são iguais");
}