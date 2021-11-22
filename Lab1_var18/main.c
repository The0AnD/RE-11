#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void my_interface();

int main(){
   int variant, X, Y;
   double X1, X2, delta;
   unsigned int N;

    printf("\tWrite 1 or 2 to choose variant.\n");
    scanf("\t%d", &variant);
    printf("\tYou chose variant: %d.\n", variant);

       switch (variant)
        {
            case 1: printf("\tNow you need to write 3 options: first argument, last argument and number of table points.\n");
                    scanf("\t%lf", &X1);
                    scanf("\t%lf", &X2);
                    scanf("\t%u", &N);
                    printf("\tFirst argument:%.lf, Last argument:%.lf, Number of table points:%d.\n", X1, X2, N);
                    my_interface();
                        for(int i = 0; i<N; i++){
                            X=X1*(i+1);
                            Y=X*3;
                            printf("\t|          %d            |            %d              |            %d              |\n", i+1, X, Y );
                            printf("\t+-----------------------+---------------------------+---------------------------+\n");
                        }
                break;
            case 2: printf("\tNow you need to write 3 options: first argument, argument change step.\n");
                    scanf("%lf", &X1);
                    scanf("%lf", &X2);
                    scanf("%lf", &delta);
                    printf("\tFirst argument:%.lf, Last argument:%.lf, Argument change step:%lf.\n", X1, X2, delta);
                    my_interface();
                        for(int i = 0; i<X2; i++){
                            X=X1*(i+1);
                            Y=X*3;
                            printf("\t|          %d            |            %d              |            %d              |\n", i+1, X, Y );
                            printf("\t+-----------------------+---------------------------+---------------------------+\n");
                            X1=X1+delta;
                        }
                break;
            default: printf("\tError: there is not variant %d.\n", variant);
            return(0);
        }
    return 0;
}















void my_interface ()
{
    printf("\t+-----------------------+---------------------------+---------------------------+\n");
    printf("\t|           n           |             x             |            F(x)           |\n");
    printf("\t+-----------------------+---------------------------+---------------------------+\n");
}
