#include<stdio.h>
int main()
{
    float a;
    scanf("%f",&a);
    if(a<=199)
    {
        printf("Units Consumed: %.0f
",a);
        printf("Cost per Unit: %.2f
",1.20);
        printf("Bill: %.2f
",a*1.20);
        printf("Surcharge: %.2f
",0.00);
        printf("Total Amount: %.2f
",a*1.20);
    }
    else if(a>=200 && a<400)
    {
        printf("Units Consumed: %.0f
",a);
        printf("Cost per Unit: %.2f
",1.40);
        printf("Bill: %.2f
",a*1.40);
        printf("Surcharge: %.2f
",0.00);
        printf("Total Amount: %.2f
",a*1.40);
    }
    else if(a>=400 && a<600)
    {
        printf("Units Consumed: %.0f
",a);
        printf("Cost per Unit: %.2f
",1.60);
        printf("Bill: %.2f
",a*1.60);
        printf("Surcharge: %.2f
",a*1.60*0.15);
        printf("Total Amount: %.2f
",(a*1.60)+(a*1.60*0.15));
    }
    else if(a>=600 && a<800)
    {
        printf("Units Consumed: %.0f
",a);
        printf("Cost per Unit: %.2f
",1.80);
        printf("Bill: %.2f
",a*1.80);
        printf("Surcharge: %.2f
",a*1.80*0.15);
        printf("Total Amount: %.2f
",(a*1.80)+(a*1.80*0.15));
    }
    else
    {
        printf("Units Consumed: %.0f
",a);
        printf("Cost per Unit: %.2f
",2.00);
        printf("Bill: %.2f
",a*2.00);
        printf("Surcharge: %.2f
",a*2.00*0.15);
        printf("Total Amount: %.2f
",(a*2.00)+(a*2.00*0.15));
    }
}