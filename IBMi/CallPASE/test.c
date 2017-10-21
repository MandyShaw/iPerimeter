/* Example PASE Call */
/* Mandy Shaw, 17 Jan 2014 */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int TestFunction(int, char *, int, char *, char *, int *);

int TestFunction(int p1, char *inp2, int p3, char *inp4, char *outp5,
                 int *outp6)
{
printf("TestFunction: returns -99\n");
printf("Parameter 1 %d\n",p1);
printf("Parameter 2 input %s\n",inp2);
printf("Parameter 3 %d\n",p3);
printf("Parameter 4 input %s\n",inp4);
strcpy(outp5,"Here is the output from the test function");
printf("Output parameter 5 set to %s\n",outp5);
outp6[0] = 4321;
printf("Output parameter 6 set to %d\n",outp6[0]);
return -99;
}
