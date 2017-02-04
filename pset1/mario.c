#include <cs50.h>
#include <stdio.h>
#include <stdio.h>
#include <string.h>



int main(void)
{
    int  count      = -1;
    char hash[3]    = "##";
    char newHash[3] = "#";
    char space[2]   = " ";
    char result[24] = "";

    while(count < 0 || count > 23) {
         printf("Height: ");
         count = GetInt();
    }


    if  (count > 0) {


        //set levels

        for (int level = 0; level < count; ++level)
        {

             int int_space = count - level;

              // add space
              for (int strSign = 1; strSign < int_space; ++strSign)
              {
                  strcat(result, space);

              }

               strcat(result,hash);

                // add hash
                if( level > 0) {
                      for (int countHash = 0; countHash < level; countHash++)
                      {
                        strcat(result,newHash);

                      }

                    }


         printf("%s\n", result);

         result[0] = 0;
        }

    }

    }
