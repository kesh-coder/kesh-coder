#include <stdio.h> 

        int main( void ) {
            
            int i, fibonacci[ 20 ];
            
            fibonacci[ 0 ] = 0;
            fibonacci[ 1 ] = 1;
            
            for( i = 2; i < 20; i++ )
                fibonacci[ i ] = fibonacci[ i - 2 ] + fibonacci[ i - 1 ];
                
            for( i = 0; i < 20; i++ )
                printf( "Fibonacci[ %d ] = %f\n", i, fibonacci[ i ] );
            
        }
