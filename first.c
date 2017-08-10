#include <stdio.h>
void test_even(int x);

void test_even(int val)
{

  if (val%2 == 0)
{
   printf("%d is even",val);
}

else
{
printf("%d is not even",val);
}

}







int main()

{

printf ("hello\n");
test_even(8);

return 0;
}