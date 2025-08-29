#include<stdio.h>
#include<string.h>
int main(){
    
    //%d
    int a=-123456;  //integer
    //%i
    unsigned int b=123456;  //only positive integer

    //%hi
    short c=-123;  //for small integer only
    //%hu
    unsigned short d=123;  //only positive 

    //%li
    long e=-1234567890;  //larger integer
    //%lu
    unsigned long f=1234567890;   //only positive 
    
    //%lli
    long long g=-1234567890123;    //very large integer
    //%llu
    unsigned long long h=1234567890123;  //positive very large integer

    //%c
    char i='Z';   //char is used to store characters
    //%s
    char j[]="shiva";

    //default  precision is 6 unless specified for all below
     
    //%f
    float k=1.0001; //decimal values
   // %lf
    double l=123456.0000000001;  //large deciaml values
    //%Lf
    long double m=1234567890.000000000000001;  //very large decimal values

    printf("%d\n",a);
    printf("%i\n",b);

    printf("%hi\n",c);
    printf("%hu\n",d);

    printf("%li\n",e);
    printf("%lu\n",f);

    printf("%lli\n",g);
    printf("%llu\n",h);

    printf("%c\n",i);
    printf("%s\n",j);

    printf("%f\n",k);
    printf("%lf\n",l);
    printf("%Lf\n",m);

   
    char p='s';
    printf("%c\n",p);

}
