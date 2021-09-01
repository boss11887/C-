#include "C:\Program Files (x86)\Microsoft SDKs\MPI\Include\mpi.h"
#include "mpi.h"
#include <stdio.h>

int main( int argc,char *argv[]){

    MPI_Init(&argc, &argv);
    printf("Hello, world!");
    MPI_Finalize();


return 0;}
#include "/usr/include/mpi/mpi.h"
