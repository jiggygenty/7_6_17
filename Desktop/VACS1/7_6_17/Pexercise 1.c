#include<stdio.h>
#include<math.h>

int main()
{
    double tau=0, theta0=.1, dtau=1.1, omega=2.0, beta=1.0;
    int size=4*M_PI/dtau,i;
    double theta[size], eta[size];
    theta[0]=.1;
    eta[0]=0;

    for(i=0; i<size; i++)
    {
        theta[i+1]=theta[i]+dtau*eta[i];
        eta[i+1]=eta[i]+(dtau*(-1-(beta*cos(omega*tau)))*sin(theta[i+1]));
        tau+=dtau;
        printf("Theta: %f  Eta: %f\n", theta[i], eta[i]);
    }


    return 0;
}
