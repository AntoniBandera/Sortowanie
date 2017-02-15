#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int i, zarodek, ile;
    time_t tt;
    zarodek = time(&tt);
    scanf("%d", &ile);
    srand(zarodek);   // za zarodek wstawiamy pobrany czas w sekundach
    for(i= 1; i<= ile; ++i)
    printf("%d ", rand()%ile);

    return 0;
}
