/******************
Name:
ID:
Assignment:
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {

  // What bit
  printf("\nWhat bit:\n");
  int num, position;
  printf("Please enter a number: \n");
  scanf("%d", &num);
  printf("Plase enter a position:");
  scanf("%d", &position);
  printf("The position of number %d on position %d is: %d\n", num, position, (number >> position) & 1);


  /*Scan two integers (representing number and a position)
Print the bit in this position. */

  // Set bit

  printf("\nSet bit:\n");
  int num, position;
  printf("Please enter a number:\n");
  scanf("%d",&num);
  printf("Please enter a position:\n");
  scanf("%d",&position);
  printf("turn on: %d\n", num | (1 << position));
  printf("turn off: %d\n", num & ~(1 << position));

  /*Scan two integers (representing number and a position)
Make sure the bit in this position is "on" (equal to 1)
Print the output
Now make sure it's "off" (equal to 0)
Print the output */

  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */

  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */

  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */

  printf("Bye!\n");

  return 0;
}
