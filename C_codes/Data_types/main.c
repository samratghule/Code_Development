#include <stdio.h>
#include <stdlib.h>

int main()
{


    printf("Size of integer:        %d\n", sizeof(int));
    printf("Size of character:      %d\n",sizeof(char));
    printf("Size of float:          %d\n",sizeof(float));

    printf("Size of unsigned int:   %d\n",sizeof(unsigned int));
    printf("Size of signed int:     %d\n",sizeof(signed int));
    printf("Size of short int:      %d\n",sizeof(short int));
    printf("Size of long int:       %d\n",sizeof(long int));
    printf("Size of long long int:  %d\n",sizeof(long long int));
    printf("Size of double:         %d\n",sizeof(double));

    return 0;
}
/**
Size of integer:        4
Size of character:      1
Size of float:          4
Size of unsigned int:   4
Size of signed int:     4
Size of short int:      2
Size of long int:       4
Size of long long int:  8
*/
