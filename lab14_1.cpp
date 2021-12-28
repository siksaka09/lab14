#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6] ;
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double A[],int N ,double B[]){
    double sumnumber =0,standard=0,geometric=1,HM=0,Max=0,Min=A[0];
    for(int i = 0;i< N;i++){ 
        sumnumber += A[i];
        
    }
    B[0] = sumnumber/(double)N;
    float mean = sumnumber/(float)N;
    for(int i =0;i<N;i++){
        standard += pow(((float)A[i]-mean),2);
        HM += 1/A[i];
        geometric *= A[i];

    }
    for(int i =0;i<N;i++){
        
    }

    for(int i = 0;i<N;i++){
        if(Min>A[i])Min = A[i];
        if(Max<A[i])Max = A[i];

    }
    B[1] = sqrt(standard/(N));
    B[2] = pow(geometric,(double)1/N);
    B[3] = N/HM;
    B[4] = Max;
    B[5] = Min;
}
