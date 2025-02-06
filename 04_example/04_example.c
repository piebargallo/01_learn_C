/* Algorisme:
	const
		N: integer = 18;
	end const

	type
		tSex = {MAN, WOMAN}
	end type
	
	var
		age: integer;
		sex: tSex;
		salary: real;
	end var */

/* Definició de constants */
#define N 18

/* Definició de tipus */
typedef enum { MAN, WOMAN } tSex;

/* Declaració de variables */
int age;
tSex sex;
float salary;
