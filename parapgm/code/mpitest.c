#include<mpi.h>
#include<stdio.h>
#include <math.h>

int main(argc,argv)

int argc;
char *argv[];
{
 int myid,numprocs;
 int namelen;
 char processor_name[MPI_MAX_PROCESSOR_NAME];

 MPI_Init(&argc,&argv);
 MPI_Comm_rank(MPI_COMM_WORLD,&myid);
 MPI_Comm_rank(MPI_COMM_WORLD,&numprocs);
 MPI_Get_processor_name(processor_name,&namelen);

 printf("Hello World   process %d of %d on %s\n",myid,numprocs,processor_name);

 MPI_Finalize();
 return 0;

}
