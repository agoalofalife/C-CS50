#include <cs50.h>
#include <stdio.h>
#include <stdio.h>
#include <string.h>



int toCents (float amount)
{
return 1000*amount / 10;
}


int main(void)
{
     int value[]       = {25, 10, 5, 1};
     float  price ;
     int count = 0;
     int index = 0;

      printf("O hai! How much change is owed? \n");
      price = GetFloat();

      while(price < 0 ) {
         printf("O hai! How much change is owed? \n");
         price = GetFloat();
    }

      price = toCents(price);


        while(true){

          if ( value[index] <= price ) {

              price = price - value[index] ;
              count = count + 1;
          } else{
              index = index + 1;

          }

            if  (price == 0){
                break;

            }

        }

        printf("%d\n", count);
}


