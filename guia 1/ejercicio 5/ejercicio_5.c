/*5. Ingresar la edad y sueldo de los empleados de una empresa hasta que ambas sean
cero. Calcular y mostrar:
    a) El promedio de edad de los que ganan mC!s de $10000
    b) El sueldo de aquellas personas mayores a 58 aC1os, sabiendo que
    cobran un plus del 5% de su sueldo.
    c) El porcentaje de empleados cuyo sueldo es menor a 15000, que estC!
    entre 15000 y 20000, y mayor a 20000.*/


#include <stdio.h>

int
main ()
{
  int edad, i = 0, suma = 0, promedio = 0, cont1 = 0, cont2 = 0, cont3 = 0, j = 0;
  float sueldo;


  printf ("Ingrese la edad del empleado: ");
  scanf ("%i", &edad);

  printf ("Ingrese el sueldo del empleado: ");
  scanf ("%f", &sueldo);

  if (edad > 58)
    {
      sueldo *= 1.05;
    }

  if (sueldo > 10000)
    {
      suma += edad;
      j++;
    }

  printf ("EMPLEADO: %i - EDAD: %i - SUELDO: $%.2f\n", i, edad, sueldo);

  while (edad != 0 && sueldo != 0)
    {

      i++;

      if (sueldo < 15000)
	{
	  cont1++;
	}
      else if (sueldo >= 15000 && sueldo <= 20000)
	{
	  cont2++;
	}
      else
	{
	  cont3++;
	}

      printf ("Ingrese la edad del empleado: ");
      scanf ("%i", &edad);
      printf ("Ingrese el sueldo del empleado: ");
      scanf ("%f", &sueldo);

      if (edad > 58)
	{
	  sueldo *= 1.05;
	}

      if (sueldo > 10000)
	{
	  suma += edad;
	  j++;
	}

      printf ("EMPLEADO: %i - EDAD: %i - SUELDO: $%.2f\n", i, edad, sueldo);
    };

  promedio = suma / j;
  printf
    ("*********************************************************************************\n");
  printf
    ("El promedio de edad de los empleados que ganan mas de $10000 es: %i\n",
     promedio);
  printf
    ("*********************************************************************************\n");
  printf ("Porcentaje de empleados que ganan menos de $15000: %i\n",
	  (cont1 * 100) / i);
  printf ("Porcentaje de empleados que ganan entre $15000 y $20000: %i\n",
	  (cont2 * 100) / i);
  printf ("Porcentaje de empleados que ganan mas de $20000: %i\n",
	  (cont3 * 100) / i);

  return 0;
}
