/* Author : MOJI
Winter 2015/16
Home Work 3
pseudo-random numbers
16.11.2015
*/

#include <cmath>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void f(double* x, int N){
  for(int i = 0; i < N; i++){
    x[i] = (rand() % 100) / 100.0 ;
  }
}


void variance(double& m, double& v, int N, double* x){
  m = 0.0;
  v = 0.0;
  for(int i = 0; i < N; i++){
    m += (1.0 / N) * x[i];
  }
    for(int i = 0; i < N; i++){
    v += (1.0 / N) * (x[i] - m) * (x[i] - m);
  }
}


int main(){
   const int N = 100;
   double p[N];
   double mean, var;
   
   srand(time(NULL));
   f(p , N);
   variance(mean, var, N, p);

   cout << "Mean = " << mean << endl;
   cout << "Variance = " << var << endl;

   return 0;
}
