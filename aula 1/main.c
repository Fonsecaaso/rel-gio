#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{   int hora, minuto, segundo;
    hora=minuto=segundo=0;

    printf("\n \n \n \n");

    while (1)
        {


         printf("\r %2d h %2d m %2d s;", hora, minuto, segundo);

         segundo++;
         if(segundo==60)
            {segundo=0;
             minuto++;
            }

         if(minuto==60)
            {minuto=0;
             hora++;
            }

         if(hora==24)
            {hora=0;
            }

         Sleep(1000);

        }
    return 0;
}
