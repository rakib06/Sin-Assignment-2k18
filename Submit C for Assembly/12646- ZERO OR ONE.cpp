#include<stdio.h>


int main(){



    int A, B, C;
    while( scanf("%d%d%d", &A, &B, &C) == 3 ){

        if( !( A ^ B ) && !( A ^ C ) )
            putchar('*');
        else{
            if( A ^ B ){
                if( B ^ C )
                    putchar('B');
                else
                    putchar('A');
            }
            else
                putchar('C');
        }
        putchar('\n');
    }


    return 0;
}
