
#define nx 64

#include <stdio.h> 
#include <omp.h> 
int main(void) 
{ 
  int i,j, a[nx], new_nx; 
    j = omp_get_num_procs();  

  int aaa = 111;
  aaa = 531;

  new_nx = ((int)(nx/j)+1)*j;
  #pragma omp parallel for ordered num_threads(j)
  for(i=0;i<new_nx;i++){ 
   if(i<nx){
    a[i]=0; 
    #pragma omp ordered 
    printf(" i=%d thread_num=%d\n",i,omp_get_thread_num()); 
    }
   } 


} 
