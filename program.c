#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define N 10

int main(){
system ("chcp 65001");
int x[N], y[N], i, n;
double distance;

puts("Введіть кількість точок для масиву N ( не більше 10 )");
scanf("%d", &n);

puts("Введіть значення для x та y =");
puts("Увага! Тільки цілі числа!");
for(i=0; i<n; i+=1){
    scanf("%d%d",&x[i],&y[i]);
}

for(i=0; i<n-1; i+=1){
    int x_calculated = x[i+1]-x[i];
    int y_calculated = y[i+1]-y[i];

    #include"formul.txt"
    printf("Відстань між сусідніми точками (%d i %d): %.2lf\n", i+1, i+2, distance);
}

return 0;
}