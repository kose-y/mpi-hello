#include <stdio.h>
#include <mpi.h>
int main(int argc, char ** argv) {
  int a, rank, namelen, size;
  char name [MPI_MAX_PROCESSOR_NAME];
  MPI_Init(&argc, &argv);
  MPI_Comm_size(MPI_COMM_WORLD, &size);
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);
  MPI_Get_processor_name(name, &namelen);
  printf("Hello world from rank %d running on %s!\n", rank, name);
  if (rank==0)
    printf("MPI World size = %d\n", size);
  MPI_Finalize();
}
