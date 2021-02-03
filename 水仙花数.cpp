#include<stdio.h> 

/*
int narcissistic( int number );
void PrintN( int m, int n );

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}

int narcissistic( int number){
    int number1,number2,number3;
    number1=number2=number3=number;
    int N,V;
    int VM=1;
    int sum=0;
    int i,j,z;
    while(number!=0){
        number/=10;
        N++;
    }
    for(i=0;i<N;i++){
        number1/=10;
        V=number2%10;
        number2=number1;
        for(j=0;j<N;j++){
            VM*=V;
        }
        sum+=VM;
        VM=1;
    }
    if(sum==number3){
        z=1;
    }else{
        z=0;
    }
    return z;
}

void PrintN(int m,int n){
    int i;
    for(i=m+1;i<n;i++){
        if(narcissistic(i)==1){
            printf("%d\n",i);
        }
    }
}
*/
int narcissistic( int number);
int main()
{
   
   int pr;
   scanf("%d",&pr);
   if(narcissistic(pr)==1){
   	printf("%d",pr);
   }
   return 0;
}

int narcissistic( int number){
    int number1,number2,number3;
    number1=number2=number3=number;
    int N,V;
    int VM=1;
    int sum=0;
    int i,j,z;
    while(number!=0){
        number/=10;
        N++;
    }
    for(i=0;i<N;i++){
        number1/=10;
        V=number2%10;
        number2=number1;
        for(j=0;j<N;j++){
            VM*=V;
        }
        sum+=VM;
        VM=1;
    }
    if(sum==number3){
        z=1;
    }else{
        z=0;
    }
    return z;
   }
