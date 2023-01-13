#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

double AM(const double x[], int n){
    double sum = 0;
    double am;
    for(int i=0; i<n; i++){
        sum += x[i];
    }
    am= sum/n;
    return am;

}

double SD(const double x[], int n){
    double sum=0;
    double sd;
    for(int i=0; i<n; i++){
        sum += pow(x[i],2);
    }
        sd = sqrt((sum/n)-(pow(AM(x,n),2)) );
        return  sd;
}

double GM(const double x[], int n){
    double sum=0;
    for(int i=0; i<n; i++){
    sum += log(x[i]);
}
    return exp(sum/n);
}
double HM(const double x[],int n){
     double sum=0;
    for(int i=0; i<n; i++){
    sum += 1/x[i];
}
    return n/sum;

}

double Max(const double x[],int n){
     double max= x[0];
    for(int i=0; i<n; i++){
    if(x[i]>max) max=x[i];
}
    return max;

}
double Min(const double x[],int n){
     double min= x[0];
    for(int i=0; i<n; i++){
    if(x[i]<min) min=x[i];
}
    return min;

}
void stat(const double A[],int n ,double B[]){
    B[0]= AM(A, n);
    B[1]= SD(A, n);
    B[2]= GM(A, n);
    B[3]= HM(A, n);
    B[4]= Max(A, n);
    B[5]= Min(A, n);

}
