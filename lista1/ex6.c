#include <stdio.h>
#include <math.h>
int main(){
    float a, b, c, x1, x2;
    double delta;
    
    scanf("%f %f %f", &a, &b, &c);
    
    delta = b*b - 4*a*c;
    x1 = (-b - sqrt(delta))/(2*a);
    x2 = (-b + sqrt(delta))/(2*a);
    
    if(delta > 0){
    if(x1 < x2) {
        printf("RAIZES DISTINTAS\n");
        
        printf("X1 = %.2f\n", x1);
        printf("X2 = %.2f\n", x2);
        return 0;
    }
    
       else{ 
        printf("RAIZES DISTINTAS\n");
        
        printf("X1 = %.2f\n", x2);
        printf("X2 = %.2f\n", x1);
        
        return 0;
    }
    }
    if(delta == 0){
        printf("RAIZ UNICA\n");
        
        x1 = (-b/(2*a));
        
        printf("X1 = %.2f\n", x1);
        
        return 0;
    }
    
    if(delta < 0){
        printf("RAIZES IMAGINARIAS\n");
        return 0;
    }
    return 0;
}
