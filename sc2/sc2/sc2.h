#include<stdio.h>
#include<time.h>

# define SC_L 10
# define SC_SC 100
# define SC_alpha 0.20

int SC_t;
int SC_S0[SC_L+1][SC_L+1];
int SC_Sf[SC_L+1][SC_L+1];

clock_t SC_starttime,SC_endtime;

void SC_input(){

  scanf("%d",&SC_t);
  for(int i=1; i<= SC_L; i++){
    for(int j=1; j<= SC_L; j++){
      scanf("%d",&SC_S0[i][j]);
    };
  };

  SC_starttime=clock();
  
}

void SC_output(){

  SC_endtime=clock();

  for(int i=1; i<= SC_L; i++){
    for(int j=1; j<= SC_L; j++){
      printf("%d\n",SC_Sf[i][j]);
    };
  };

  printf("# elapsed time (sec) = %f \n", (double) (SC_endtime-SC_starttime)/CLOCKS_PER_SEC);
  
}








