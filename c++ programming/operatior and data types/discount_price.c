#include <stdio.h>
#include <math.h>
double isarmstrong(double amt,double disc){
    double disc_amt;
    disc_amt=amt-(amt*disc);
    return disc_amt;
}
int main() {
    double amt;
    scanf("%lf",&amt);
    if (amt>5000){
        printf("Discounted amount: %.2llf",isarmstrong(amt,0.20));
    }
    else if (amt>2000 && amt<=5000){
        printf("Discounted amount: %.2lf",isarmstrong(amt,0.15));
    }
    else if (amt>1000 && amt<=2000){
        printf("Discounted amount: %.2lf",isarmstrong(amt,0.10));
    }
    return 0;
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       