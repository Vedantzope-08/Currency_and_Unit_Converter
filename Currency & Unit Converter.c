#include <stdio.h>
#include<stdlib.h>

int main()
{
   int choose,z;
   printf("\n\t\t\t\t\t\t\t**Welcome to Converter**\n\n");
   printf("\t\t\t\t\t\t\tEnter 1 for Currency Converter\n");
   printf("\t\t\t\t\t\t\tEnter 2 for Unit Converter\n\n");
   
   printf("\t\t\t\t\t\t\tYou have Entred ");
   scanf("%d",&choose); 
   system("clear");
   
   
   if(choose==1){
        
        printf("\n\t\t\t\t\t\t\tWelcome To Currency Converter\n\n");
        

    int choose;

    float rupees,dollar,euro,pound,rial,dinar,renminbi,yen;
     
     printf("\n\t\t\t\t\t\t\tchoose 1 for Doller\n");
     printf("\t\t\t\t\t\t\tchoose 2 for Euro\n");
     printf("\t\t\t\t\t\t\tchoose 3 for Pound\n");
     printf("\t\t\t\t\t\t\tchoose 4 for Rial\n");
     printf("\t\t\t\t\t\t\tchoose 5 for Dinar\n");
     printf("\t\t\t\t\t\t\tchoose 6 for Renminbi\n");
     printf("\t\t\t\t\t\t\tchoose 7 for Yen\n\n\n");
     printf("\t\t\t\t\t\t\tYou have Choosen ");
     scanf("%d",&choose); 
     system("clear");
    if (choose==1)
{
    printf("Enter the amount in Dollar you want to convert into Rupeess:- ");
    scanf("%f",&dollar);

    rupees=dollar *75.92; //Currency of USA
    system("clear\n\n");
    
    printf("\n\n\t\t\t\t\t\t\tthe value is %f\n ", rupees);
    printf("\t\t\t\t\t\t\t   !!Thank You!!\n");

}   
    else if (choose==2)
{
    printf("Enter the amount in Euro you want to convert into Rupeess:- ");
    scanf("%f",&euro);

    rupees=euro *84.05; //Currency of Europe
    system("clear");
    
    printf("\n\n\t\t\t\t\t\t\tthe value is %f\n", rupees);
    printf("\t\t\t\t\t\t\t   !!Thank You!!");

}
    else if (choose==3)
{
    printf("Enter the amount in Pound you want to convert into Rupeess:- ");
    scanf("%f",&pound);

    rupees=pound *99.75; //Currency of Britian
    system("clear");
    printf("\n\n\t\t\t\t\t\t\tthe value is %f\n", rupees);
    printf("\t\t\t\t\t\t\t   !!Thank You!!");

}
    else if (choose==4)
{
    printf("Enter the amount in Rial you want to convert into Rupeess:- ");
    scanf("%f",&rial);

    rupees=rial *197.22; //Currency of Saudia Arabia
    system("clear");
    printf("\n\n\t\t\t\t\t\t\tthe value is %f\n", rupees);
    printf("\t\t\t\t\t\t\t   !!Thank You!!");

}
    else if (choose==5)
{
    printf("Enter the amount in Dinar you want to convert into Rupeess:- ");
    scanf("%f",&dinar);

     rupees=dinar *249.80; //Currency of Kuwait
     system("clear");
    printf("\n\n\t\t\t\t\t\t\tthe value is %f\n", rupees);
    printf("\t\t\t\t\t\t\t   !!Thank You!!");

}
    else if (choose==6)
{
    printf("Enter the amount in Renminbi you want to convert into Rupeess:- ");
    scanf("%f",&renminbi);

    rupees=renminbi *11.95; //Currency of China
    system("clear");
    printf("\n\n\t\t\t\t\t\t\tthe value is %f\n", rupees);
    printf("\t\t\t\t\t\t\t   !!Thank You!!");

}
    else if (choose==7)
{
    printf("Enter the amount in Yen you want to convert into Rupeess:- ");
    scanf("%f",&yen);

     rupees=yen *0.62; //Currency of Japan
     system("clear");
    printf("\n\n\t\t\t\t\t\t\tthe value is %f\n", rupees);
    printf("\t\t\t\t\t\t\t   !!Thank You!!");

}
    else{
    printf("\t\t\t\t\t\t\t   !!Thank You!!\n");
} 
    
    
   }else if(choose==2){
       
       int choose;
       
       printf("\n\t\t\t\t\t\t\tEnter 1 for Temperature Converter\n");
        printf("\t\t\t\t\t\t\tEnter 2 for Unit Converter\n\n");
        printf("\t\t\t\t\t\t\tYou have Entred ");
        scanf("%d",&choose);
        system("clear");
        
        if(choose==1){
            
             printf("\n\t\t\t\t\t\t\tWelcome To Temperature Converter\n\n");
    int choose;
    float c,k,f;
    
    printf("\t\t\t\t\t\t\tEnter 1 for Celcius to Farenhait\n");
    printf("\t\t\t\t\t\t\tEnter 2 for Celcius to Kelvin\n");
    printf("\t\t\t\t\t\t\tEnter 3 for Farenhait to Celcius\n");
    printf("\t\t\t\t\t\t\tEnter 4 for  Kelvin to Celcius\n");
    printf("\t\t\t\t\t\t\tEnter 5 for Kelvin to  Farenhait\n"); 
    printf("\t\t\t\t\t\t\tEnter 6 for Farenhait to  Kelvin\n\n");
    printf("\t\t\t\t\t\t\tYou have Entred ");
    
    scanf("%d",&choose); 
    system("clear");
    if (choose==1)
{
    printf("Enter the Temperature in Celcius you want to convert into Ferenhait:- ");
    scanf("%f",&c);

    f=c  *9/5 + 32;
    system("clear");
    
    printf("\n\n\t\t\t\t\t\t\tthe value is %f\n ", f);
    printf("\t\t\t\t\t\t\t   !!Thank You!!\n");

}
    else if (choose==2)
{
    printf("Enter the Temperature in Celcius you want to convert into Kelvin:- ");
    scanf("%f",&c);

    k=c + 273; 
    system("clear");
    printf("\n\n\t\t\t\t\t\t\tthe value is %f\n ", k);
    printf("\t\t\t\t\t\t\t   !!Thank You!!");

}
    else if (choose==3)
{
    printf("Enter the Temperature in Ferenhait you want to convert into Celcius:- ");
    scanf("%f",&f);

    c=(f -32) * 5/9;
    system("clear");
    printf("\n\n\t\t\t\t\t\t\tthe value is %f\n ", c);
    printf("\t\t\t\t\t\t\t   !!Thank You!!");

}
    else if (choose==4)
{
    printf("Enter the Temperature in Kelvin you want to convert into Celcius:- ");
    scanf("%f",&k);

    c=k-273.15;
    system("clear");
    printf("\n\n\t\t\t\t\t\t\tthe value is %f\n ", c);
    printf("\t\t\t\t\t\t\t   !!Thank You!!");

}
    else if (choose==5)
{
   printf("Enter the Temperature in Kelvin you want to convert into Ferenhait:- ");
    scanf("%f",&k);

    f=(k-273.15)*9/5 + 32; 
    system("clear");
    printf("\n\n\t\t\t\t\t\t\tthe value is %f\n ", f);
    printf("\t\t\t\t\t\t\t   !!Thank You!!");

}
    else if (choose==6)
{
   printf("Enter the Temperature in Ferenhait you want to convert into Kelvin:- ");
    scanf("%f",&f);

    k=(f-32)*5/9 + 273.15;
    system("clear");
    printf("\n\n\t\t\t\t\t\t\tthe value is %f\n ", k);
    printf("\t\t\t\t\t\t\t   !!Thank You!!");

}
    else{
    printf("\t\t\t\t\t\t\t   !!Thank You!!");
}
        }else if(choose==2){
            
           


    printf("\n\t\t\t\t\t\t\tWelcome To Quantity Converter\n\n");
    int choose;
     int k,h;
     float M,g,d,D,c,m;
    
    printf("\t\t\t\t\t\t\tEnter 1 for Kilo to Gega\n");
    printf("\t\t\t\t\t\t\tEnter 2 for Kilo to Mega\n");
    printf("\t\t\t\t\t\t\tEnter 3 for Kilo to Hecto\n");
    printf("\t\t\t\t\t\t\tEnter 4 for  Kilo to Deka\n");
    printf("\t\t\t\t\t\t\tEnter 5 for Kilo to  Deci\n"); 
    printf("\t\t\t\t\t\t\tEnter 6 for Kilo to  Cent\n");
    printf("\t\t\t\t\t\t\tEnter 7 for Kilo to  Mili\n\n");
    printf("\t\t\t\t\t\t\tYou have Entred ");
    
    scanf("%d",&choose); 
    system("clear");
    if (choose==1)
{
    printf("Enter the  Quantity in Kilo you want to convert into Gega:- ");
    scanf("%d",&k);

    g=k*0.000001; 
    system("clear");
    printf("\n\n\t\t\t\t\t\t\tthe value is %f\n ", g);
    printf("\t\t\t\t\t\t\t   !!Thank You!!");

}
    else  if (choose==2)
{
   printf("Enter the  Quantity in Kilo you want to convert into Mega:- ");
    scanf("%d",&k);

    M=k*0.01; 
    system("clear");
    printf("\n\n\t\t\t\t\t\t\tthe value is %f\n ", M);
    printf("\t\t\t\t\t\t\t   !!Thank You!!");

}
    else if (choose==3)
{
    printf("Enter the  Quantity in Kilo you want to convert into Hecto:- ");
    scanf("%d",&k);

    h=k*10; 
    system("clear");
    printf("\n\n\t\t\t\t\t\t\tthe value is %d\n ", h);
    printf("\t\t\t\t\t\t\t   !!Thank You!!");

}
    else if (choose==4)
{
    printf("Enter the  Quantity in Kilo you want to convert into Deka:- ");
    scanf("%d",&k);

    d=k*100; 
    system("clear");
    printf("\n\n\t\t\t\t\t\t\tthe value is %f\n ", d);
    printf("\t\t\t\t\t\t\t   !!Thank You!!");

}
    else if (choose==5)
{
   printf("Enter the  Quantity in Kilo you want to convert into Deci:- ");
    scanf("%d",&k);

    D=k*10000;
    system("clear");
    printf("\n\n\t\t\t\t\t\t\tthe value is %f\n ", D);
    printf("\t\t\t\t\t\t\t   !!Thank You!!");

}
    else if (choose==6)
{
   printf("Enter the  Quantity in Kilo you want to convert into Centi:- ");
    scanf("%d",&k);

    c=k*100000; 
    system("clear");
    printf("\n\n\t\t\t\t\t\t\tthe value is %f\n ", c);
    printf("\t\t\t\t\t\t\t   !!Thank You!!");
}
    else if (choose==7)
{
   printf("Enter the  Quantity in Kilo you want to convert into Mili:- ");
    scanf("%d",&k);

    m=k*1000000;
    system("clear");
    printf("\n\n\t\t\t\t\t\t\tthe value is %f\n ", m);
    printf("\t\t\t\t\t\t\t   !!Thank You!!");

}
    else  {
    printf("\t\t\t\t\t\t\t   !!Thank You!!");
}
        }
}
      }

