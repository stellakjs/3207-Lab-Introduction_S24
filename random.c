#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{

    return 0;
}

char randchar()
{
    srand((unsigned)time(NULL));
    char randc = 'A' + (rand() % 26);
    return randc;
}
