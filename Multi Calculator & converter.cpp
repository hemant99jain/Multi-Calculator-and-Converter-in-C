#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<conio.h>
double scientific_calculator();
double si();
double ci();
double temperature();
float gst();
double unit();
float currency();
float seller();
float buyer();
void cls();
int main()
{

	int choice;
	double a,b;
	do
	{
    printf("\n\n");
	printf("\n         ********** Welcome to Multi-Calculator & Converter *********\n\n");
	printf("        What do you Want to Do??\n\n");
	printf("    [1] Scientific Calculator              [2] Temperature \n\n");
	printf("    [3] Simple Interest                    [4] Compound Interest \n\n");
	printf("    [5] GST Calculator                     [6] Unit Converter \n\n");
	printf("    [7] Currency Converter                 [8] Exit\n\n");
	scanf("%d",&choice);
	system("cls");
	switch(choice)
	{
		case 1:
		{
			scientific_calculator();
			break;
     	}
		case 2:
		{
			temperature();
			break;
       	}
	    case 3:
		{
			si();
			break;
        }
		case 4:
		{
			ci();
			break;
		}
		case 5:
		{
			gst();
			break;
		}
		case 6:
		{
		 	unit();
			break;
		}
		case 7:
		{
			currency();
			break;
		}
		case 8:
        {
             break;
        }
        default:
        printf("Enter Valid Choice\n");
	}

}while(choice!=8);
}
double scientific_calculator()  //scientific calculator
{

	int choices,internal,inter;
	double a,b,c;
    while(choices!=7)
    {
     printf("\n\n");
	printf("                        Enter your choices\n\n");
	printf("            [1] Arithmetic                [2] Trigonometric\n\n");
    printf("            [3] Logarithmic               [4] Power\n\n");
    printf("            [5] Factorial                 [6] Square Roots\n\n ");
    printf("                            [7] Exit\n\n ");
	scanf("%d",&choices);
	system("cls");

	switch(choices)
		{
		case 1:                        // Arithmetic operation
		{
		      while(internal!=5)
            {
             printf("\n\n");
			printf("                 Enter your Choice\n\n");
			printf("       [1] Addition                     [2] Subtraction\n\n");
			printf("       [3] Multiplication               [4] Division\n\n");
			printf("                          [5] Exit\n\n");
			scanf("%d",&internal);
			system("cls");
			switch(internal)
				{
				case 1:
				{
                    int n, sum = 0, c, value;                //  Enter more than 2 digit for multiple addition
                     printf("\n\n");
                    printf("    Enter the number of Digits you want to add.\n");
                    scanf("%d", &n);

                    printf("     Enter %d integers\n",n);

                    for (c = 1; c <= n; c++)
                    {
                        scanf("%d",&value);
                        sum = sum + value;
                    }

                    printf("  Sum of entered integers = %d\n",sum);
                    break;
                }
				case 2:                                     //  Enter more than 2 digit for multiple subtraction
				{
                    int n, sub = 0, c, val;
                     printf("\n\n");
                    printf("    Enter the number of integers you want to Subtract\n");
                    scanf("%d", &n);

                    printf("    Enter %d integers\n",n);

                    for (c = 1; c <= n; c++)
                    {
                        scanf("%d",&val);
                        sub = sub - val;
                    }

                    printf("    Subtraction of entered integers = %d\n",sub);
                    break;
                }
				case 3:                                     // Multiplication
				{
				     printf("\n\n");
					printf("    Enter two values\n");
					scanf("%lf %lf",&a,&b);
					double c=a*b;
					printf("    Your result of multiplication is %lf\n",c);
					break;
				}
				case 4:                                   // Division
				{
                     printf("\n\n");
					printf("    Enter divident\n");
					scanf("%lf",&a);
					printf("    Enter divisor\n");
					scanf("%lf",&b);
					if(b==0)
						{
							printf("    Enter another value of divisor\n\n\n");
							printf("    Enter divisor\n");
							scanf("%lf",&b);
						}

					double c=a/b;
					printf("    Your result of division is %lf\n",c);
					break;
					}
                    default:
                    printf("    Enter Valid Choice\n");
				}
			}

		break;
		}
		case 2:                               // Trigonometric Operation
                {
                while(inter!=7)
                {
                     printf("\n\n");
				printf("             Enter your Choice\n\n");
				printf("     [1] Sinx                   [4] cotx\n\n");
				printf("     [2] Cosx                   [5] Secx\n\n");
				printf("     [3] Tanx                   [6] Cosecx\n\n");
				printf("                [7] Exit\n\n");
				scanf("%d",&inter);
				system("cls");
				switch(inter)
					{
						case 1:             
							{
								double x;
                                printf("\n\n");
								printf("  Enter the value of x\n");
								scanf("%lf",&x);
								x=(x*3.14)/180;
								double p = sin(x);
								printf("  Result=%lf\n\n",p);
								break;
							}
						case 2:
							{
								double x;
								printf("\n\n");
								printf("  Enter the value of x\n");
								scanf("%lf",&x);
								x=(x*3.14)/180;
								double p = cos(x);
								printf("  Result=%lf\n\n",p);
								break;
							}
						case 3:
							{
								double x;
								printf("\n\n");
								printf("  Enter the value of x\n");
								scanf("%lf",&x);
								x=(x*3.14)/180;
								double p = tan(x);
								printf("  Result=%lf\n\n",p);
								break;
							}
						case 4:
							{
								double x;
								printf("\n\n");
								printf("  Enter the value of x\n");
								scanf("%lf",&x);
								x=(x*3.14)/180;
								double p = 1/tan(x);
								printf("  Result=%lf\n\n",p);
								break;
							}
						case 5:
							{
								double x;
								printf("\n\n");
								printf("  Enter the value of x\n");
								scanf("%lf",&x);
								x=(x*3.14)/180;
								double p = 1/cos(x);
								printf("  Result=%lf\n\n",p);
								break;
							}
						case 6:
							{
								double x;
								printf("\n\n");
								printf("  Enter the value of x\n");
								scanf("%lf",&x);
								x=(x*3.14)/180;
								double p = 1/sin(x);
								printf("  Result=%lf\n\n",p);
								break;
							}
                        default:
                        printf("  Enter Valid Choice\n");
                        }
                    }
                }
            case 3:                 // Natural Log
                {
                      double m,n;
                    printf("\n\n");
                    printf("    Enter a number to calculate it's natural log (base is e)\n");
                    scanf("%lf", &n);

                    m = log(n);

                    printf("  Natural log= %lf\n",m);
                }
            case 4:               // Exponential Operation
                { 
                        printf("\n\n");
                        double base, exponent;
                        double result = 1;

                        printf("  Enter a base number: ");
                        scanf("%lf", &base);

                        printf("  Enter an exponent: ");
                        scanf("%lf", &exponent);

                        while (exponent != 0)
                        {
                        result *= base;
                        --exponent;
                        }
                        printf("  Answer = %lf", result);
                        return 0;
                }
            case 5:             // Factorial
                {
                    printf("\n\n");
                    double i,f=1,num;

                    printf("  Enter a number: \n");
                    scanf("%lf",&num);

                    for(i=1;i<=num;i++)
                    f=f*i;

                    printf("  Factorial of %lf is: %lf\n",num,f);
                    return 0;

                }
            case 6:           // Square Root
                {
                    printf("\n\n");
                    double num, root;
                    printf("  Enter any number to find square root: ");
                    scanf("%lf", &num);
                    root = sqrt(num);
                    printf("  Square root of %.2lf = %.2lf", num, root);

                    return 0;
                }
            default:
            printf("  Enter Valid Choice\n");
        }
}
}
       
double si()                 // Simple Interest
{
    printf("\n\n");
	double p,r,t;
	printf("    Enter the principal value\n\n");
	scanf("%lf",&p);
	printf("    Enter the value of rate\n");
	scanf("%lf",&r);
	printf("    Enter the time in months\n");
	scanf("%lf",&t);
	double si=(p*r*t)/(12*100);
	printf("    Your simple interest is %lf\n",si);
	printf("    Your Total amount is %lf\n",p+si);
}
double ci()              // Compound Interest
{
    printf("\n\n");
	double p,r,t;
	printf("    Enter the principal value\n");
	scanf("%lf",&p);
	printf("    Enter the value of rate\n");
	scanf("%lf",&r);
	printf("    Enter the time in months\n");
	scanf("%lf",&t);
	t=t/12;
	double ci = p*(pow((1 + r/100),t));
    printf("    Compound Interest = %lf",ci);
}
double temperature()      // Temperature Converter
{
    printf("\n\n");
	int choic;
	double x,y;
	while(choic!=5)
    {
	printf("        What conversion do you want to do?\n\n");
	printf("       [1] Celsius to Fahrenheit\n\n");
	printf("       [2] Fahrenheit to Celsius\n\n");
	printf("       [3] Kelvin to Celsius\n\n");
	printf("       [4] Celsius to Kelvin\n\n");
	printf("       [5] Exit");
	scanf("%d",&choic);
	system("cls");
	switch(choic)
	{
	case 1:
		{
		    printf("\n\n");
			printf(   "Enter the Temperature in Celsius\n");
			scanf("%lf",&x);
			y=x*9/5+32;
			printf(   "Temperature in Fahrenheit=%lf F\n",y);
			break;
		}
	case 2:
		{
		    printf("\n\n");
			printf(  "Enter the Temperature in Fahrenheit\n");
			scanf("%lf",&x);
			y= (x-32) * 5/9;
			printf(  "Temperature in celsius=%lf C\n",y);
			break;
		}
	case 3:
		{
		    printf("\n\n");
			printf(  "Enter the Temperature in Kelvin\n");
			scanf("%lf",&x);
			y= x-273;
			printf(  "Temperature in celsius=%lf C\n",y);
			break;
		}

	case 4:
		{
		    printf("\n\n");
			printf(  "Enter the Temperature in Celsius\n");
			scanf("%lf",&x);
			y= x+273;
			printf(  "Temperature in Kelvin=%lf C\n",y);
			break;
		}
    default:
    printf(    "Enter Valid Choice\n");
	}
}
}
float gst()                    //  GST CALCULATOR
{

	int ch,a;
	float x,y,z;
	while(a!=3)
    {
	printf("\n\n              ******GST CALCULATOR*******\n\n\n");
	printf("[1]  As a Seller               [2]As a Buyer             [3]Exit\n\n");
	scanf("%d",&a);
	system("cls");
	switch(a)
	{
	    case 1:
	    {
	        seller();
	        break;
	    }
	    case 2:
	    {
	        buyer();
	        break;

        }
        default:
		printf("\n    Enter Valid Choice...\n");
}
}
}
double unit()                       // UNIT CONVERTER
{
       int choice,l,m,a,b;
       double x,y;

printf("\n\n\n");
    printf("     [1] for LENGTH                            [2] for MASS        \n\n");
    printf("                         enter your choice\n\n");
scanf("%d",&choice);
system("cls");
     switch(choice)
       {


case 1:
    printf("     [1] for KILOMETRE km                     [2] for METRE m\n\n");
    printf("     [3] for CENTIMETRE cm                    [4] for MILLIMETRE mm\n\n");
    printf("     [5] for MILE mi                          [6] for FOOT ft\n\n");
    printf("     [7] for INCH in                          [8] for YARD yd\n\n");
    printf("                          select your choice\n\n");
      scanf("%d",&l);
      system("cls");

         switch(l)

          {
       case 1:                  
    printf("    [1] to convert into METRE m             [2] to convert into CENTIMETRE cm\n\n");
    printf("    [3] to convert into MILLIMETRE mm       [4] to convert into MILE mi\n\n");
    printf("    [5] to convert into FOOT ft             [6] to convert into INCH in\n\n");
    printf("    [7] to convert into YARD yd\n\n");
    printf("                       what you want?\n\n");
           scanf("%d",&a);
           system("cls");
                switch(a)
              {

               case 1:
               printf("enter the value in km\n");
               scanf("%lf",&x);
               y=x*1000;
               printf("the value is = %lf m\n\n",y);
               break;

               case 2:
                printf("enter the value in km\n");
               scanf("%lf",&x);
               y=x*100000;
               printf("the value is = %lf cm\n",y);
               break;

               case 3:
                printf("enter the value in km\n");
               scanf("%lf",&x);
               y=x*1000000;
               printf("the value is = %lf mm\n",y);
               break;

               case 4:
                printf("enter the value in km\n");
               scanf("%lf",&x);
               y=x*0.62137;
               printf("the value is = %lf mi\n",y);
               break;

               case 5:
                printf("enter the value in km\n");
               scanf("%lf",&x);
               y=x*3280.84;
               printf("the value is = %lf ft\n",y);
               break;

               case 6:
                printf("enter the value in km\n");
               scanf("%lf",&x);
               y=x*39,370.0787;
               printf("the value is = %lf in\n",y);
               break;

               case 7:
               printf("enter the value in km\n");
               scanf("%lf",&x);
               y=1093.6133;
               printf("the value is = %lf yd\n",y);
               break;


               default:
                printf(" Enter valid choice\n");
              }
              break;

      case 2:                    

           printf("[1] to convert into KILOMETRE Km        [2] to convert into CENTIMETRE cm\n\n");
           printf("[3] to convert into MILLIMETRE mm       [4] to convert into MILE mi\n\n");
           printf("[5] to convert into FOOT ft             [6] to convert into INCH in\n\n");
           printf("[7] to convert into YARD yd\n\n");
           printf("                        what you want?\n");
           scanf("%d",&a);
           system("cls");
              switch(a)
              {

               case 1:
               printf("enter the value in m\n");
               scanf("%lf",&x);
               y=x*0.001;
               printf("the value is = %lf km\n",y);
               break;

               case 2:
                printf("enter the value in m\n");
               scanf("%lf",&x);
               y=x*100;
               printf("the value is = %lf cm\n",y);
               break;

               case 3:
                printf("enter the value in m\n");
               scanf("%lf",&x);
               y=x*1000;
               printf("the value is = %lf mm\n",y);
               break;

               case 4:
                printf("enter the value in m\n");
               scanf("%lf",&x);
               y=x*0.00062137;
               printf("the value is = %lf mi\n",y);
               break;

               case 5:
                printf("enter the value in m\n");
               scanf("%lf",&x);
               y=x*3.28084;               
               printf("the value is = %lf ft\n",y);
               break;

               case 6:
                printf("enter the value in m\n");
               scanf("%lf",&x);
               y=x*39.3700787;
               printf("the value is = %lf in\n",y);
               break;

               case 7:
               printf("enter the value in m\n");
               scanf("%lf",&x);
               y=x*1.0936133;
               printf("the value is = %lf yd\n",y);
               break;

               default:
                printf(" Enter valid choice\n");
              }
              break;

        case 3: 

           printf("[1] to convert into KILOMETRE Km        [2] to convert into METRE m\n\n");
           printf("[3] to convert into MILLIMETRE mm       [4] to convert into MILE mi\n\n");
           printf("[5] to convert into FOOT ft             [6] to convert into INCH in\n\n");
           printf("[7] to convert into YARD yd\n\n");
           printf("                     what you want?\n");
           scanf("%d",&a);
           system("cls");
              switch(a)
              {

               case 1:
               printf("enter the value in cm\n");
               scanf("%lf",&x);
               y=x*0.00001;
               printf("the value is = %lf km\n",y);
               break;

               case 2:
                printf("enter the value in cm\n");
               scanf("%lf",&x);
               y=x*0.01;
               printf("the value is = %lf m\n",y);
               break;

               case 3:
                printf("enter the value in cm\n");
               scanf("%lf",&x);
               y=x*10;
               printf("the value is = %lf mm\n",y);
               break;

               case 4:
                printf("enter the value in cm\n");
               scanf("%lf",&x);
               y=x*0.0000062137;
               printf("the value is = %lf mi\n",y);
               break;

               case 5:
                printf("enter the value in cm\n");
               scanf("%lf",&x);
               y=x*0.032808399;
               printf("the value is = %lf ft\n",y);
               break;

               case 6:
                printf("enter the value in cm\n");
               scanf("%lf",&x);
               y=x*0.393700787;
               printf("the value is = %lf in\n",y);
               break;

               case 7:
               printf("enter the value in cm\n");
               scanf("%lf",&x);
               y=0.010936133;
               printf("the value is = %lf yd\n",y);
               break;

               default:
                printf(" Enter valid choice\n");
              }
              break;

              case 4:


           printf("[1] to convert into KILOMETRE Km        [2] to convert into METRE m\n\n");
           printf("[3] to convert into CENTIMETRE cm       [4] to convert into MILE mi\n\n");
           printf("[5] to convert into FOOT ft             [6] to convert into INCH in\n\n");
           printf("[7] to convert into YARD yd\n\n");
           printf("                        what you want?\n");
           scanf("%d",&a);
           system("cls");
              switch(a)
              {

               case 1:
               printf("enter the value in mm\n");
               scanf("%lf",&x);
               y=x*0.000001;
               printf("the value is = %lf km\n",y);
               break;

               case 2:
                printf("enter the value in mm\n");
               scanf("%lf",&x);
               y=x*0.001;
               printf("the value is = %lf m\n",y);
               break;

               case 3:
                printf("enter the value in mm\n");
               scanf("%lf",&x);
               y=x*0.1;
               printf("the value is = %lf cm\n",y);
               break;

               case 4:
                printf("enter the value in mm\n");
               scanf("%lf",&x);
               y=x*0.00000062137;
               printf("the value is = %lf mi\n",y);
               break;

               case 5:
                printf("enter the value in mm\n");
               scanf("%lf",&x);
               y=x*0.0032808399;
               printf("the value is = %lf ft\n",y);
               break;

               case 6:
                printf("enter the value in mm\n");
               scanf("%lf",&x);
               y=x*0.0393700787;
               printf("the value is = %lf in\n",y);
               break;

               case 7:
               printf("enter the value in mm\n");
               scanf("%lf",&x);
               y=0.0010936133;
               printf("the value is = %lf yd\n",y);
               break;

               default:
                printf(" Enter valid choice\n");
              }
              break;

               case 5:

             printf("[1] to convert into KILOMETRE Km        [2] to convert into METRE m\n\n");
             printf("[3] to convert into CENTIMETRE cm       [4] to convert into MILLIMETRE mm\n\n");
             printf("[5] to convert into FOOT ft             [6] to convert into INCH in\n\n");
             printf("[7] to convert into YARD yd\n\n");
             printf("                         what you want?\n");
             scanf("%d",&a);
             system("cls");

              switch(a)
              {

               case 1:
               printf("enter the value in mi\n");
               scanf("%lf",&x);
               y=x*1.609344;
               printf("the value is = %lf km\n",y);
               break;

               case 2:
                printf("enter the value in mi\n");
               scanf("%lf",&x);
               y=x*1609.344;
               printf("the value is = %lf m\n",y);
               break;

               case 3:
                printf("enter the value in mi\n");
               scanf("%lf",&x);
               y=x*160934.4;
               printf("the value is = %lf cm\n",y);
               break;

               case 4:
                printf("enter the value in mi\n");
               scanf("%lf",&x);
               y=x*1609344;
               printf("the value is = %lf mm\n",y);
               break;

               case 5:
                printf("enter the value in mi\n");
               scanf("%lf",&x);
               y=x*5280;
               printf("the value is = %lf ft\n",y);
               break;

               case 6:
                printf("enter the value in mi\n");
               scanf("%lf",&x);
               y=x*63360;
               printf("the value is = %lf in\n",y);
               break;

               case 7:
               printf("enter the value in mi\n");
               scanf("%lf",&x);
               y=1760;
               printf("the value is = %lf yd\n",y);
               break;

               default:
                printf(" Enter valid choice\n");
              }
              break;

        case 6:

             printf("[1] to convert into KILOMETRE Km        [2] to convert into METRE m\n\n");
             printf("[3] to convert into CENTIMETRE cm       [4] to convert into MILLIMETRE mm\n\n");
             printf("[5] to convert into MILE mi             [6] to convert into INCH in\n\n");
             printf("[7] to convert into YARD yd\n\n");
             printf("                        what you want?\n");
             scanf("%d",&a);
             system("cls");

          switch(a)
          {


               case 1:
               printf("enter the value in ft\n");
               scanf("%lf",&x);
               y=x*0.0003048;
               printf("the value is = %lf km\n",y);
               break;

               case 2:
                printf("enter the value in ft\n");
               scanf("%lf",&x);
               y=x*0.3048;
               printf("the value is = %lf m\n",y);
               break;

               case 3:
                printf("enter the value in ft\n");
               scanf("%lf",&x);
               y=x*30.48;
               printf("the value is = %lf cm\n",y);
               break;

               case 4:
                printf("enter the value in ft\n");
               scanf("%lf",&x);
               y=x*304.8;
               printf("the value is = %lf mm\n",y);
               break;

               case 5:
                printf("enter the value in ft\n");
               scanf("%lf",&x);
               y=x*0.00018939;
               printf("the value is = %lf mi\n",y);
               break;

               case 6:
                printf("enter the value in ft\n");
               scanf("%lf",&x);
               y=x*12;
               printf("the value is = %lf in\n",y);
               break;

               case 7:
               printf("enter the value in ft\n");
               scanf("%lf",&x);
               y=0.33333;
               printf("the value is = %lf yd\n",y);
               break;

               default:
                printf(" Enter valid choice\n");
              }
              break;


       case 7:

             printf("[1] to convert into KILOMETRE Km        [2] to convert into METRE m\n\n");
             printf("[3] to convert into CENTIMETRE cm       [4] to convert into MILLIMETRE mm\n\n");
             printf("[5] to convert into MILE mi             [6] to convert into FOOT ft\n\n");
             printf("[7] to convert into YARD yd\n\n");
             printf("                         what you want?\n");
             scanf("%d",&a);
             system("cls");
             switch(a)
              {

               case 1:
               printf("enter the value in in\n");
               scanf("%lf",&x);
               y=x*0.000025;
               printf("the value is = %lf km\n",y);
               break;

               case 2:
                printf("enter the value in in\n");
               scanf("%lf",&x);
               y=x*0.0254;
               printf("the value is = %lf m\n",y);
               break;

               case 3:
                printf("enter the value in in\n");
               scanf("%lf",&x);
               y=x*2.54;
               printf("the value is = %lf cm\n",y);
               break;

               case 4:
                printf("enter the value in in\n");
               scanf("%lf",&x);
               y=x*25.4;
               printf("the value is = %lf mm\n",y);
               break;

               case 5:
                printf("enter the value in in\n");
               scanf("%lf",&x);
               y=x*0.0000157828283;
               printf("the value is = %lf mi\n",y);
               break;

               case 6:
                printf("enter the value in in\n");
               scanf("%lf",&x);
               y=x*0.0833333;
               printf("the value is = %lf ft\n",y);
               break;

               case 7:
               printf("enter the value in in\n");
               scanf("%lf",&x);
               y=0.027777;
               printf("the value is = %lf yd\n",y);
               break;

               default:
                printf(" Enter valid choice\n");
              }
              break;

     case 8:

             printf("[1] to convert into KILOMETRE Km        [2] to convert into METRE m\n\n");
             printf("[3] to convert into CENTIMETRE cm       [4] to convert into MILLIMETRE mm\n\n");
             printf("[5] to convert into MILE mi             [6] to convert into FOOT ft\n\n");
             printf("[7] to convert into INCH in\n\n");
             printf("                        what you want?\n");
             scanf("%d",&a);
             system("cls");
             switch(a)
              {

               case 1:
               printf("enter the value in yd\n");
               scanf("%lf",&x);
               y=x*0.0009144;
               printf("the value is = %lf km\n",y);
               break;

               case 2:
                printf("enter the value in yd\n");
               scanf("%lf",&x);
               y=x*0.9144;
               printf("the value is = %lf m\n",y);
               break;

               case 3:
                printf("enter the value in yd\n");
               scanf("%lf",&x);
               y=x*91.44;
               printf("the value is = %lf cm\n",y);
               break;

               case 4:
                printf("enter the value in yd\n");
               scanf("%lf",&x);
               y=x*914.4;
               printf("the value is = %lf mm\n",y);
               break;

               case 5:
                printf("enter the value in yd\n");
               scanf("%lf",&x);
               y=x*0.0005681;
               printf("the value is = %lf mi\n",y);
               break;

               case 6:
                printf("enter the value in yd\n");
               scanf("%lf",&x);
               y=x*3;
               printf("the value is = %lf ft\n",y);
               break;

               case 7:
               printf("enter the value in yd\n");
               scanf("%lf",&x);
               y=36;
               printf("the value is = %lf in\n",y);
               break;

               default:
                printf(" Enter valid choice\n");
              }
              break;
     }
     break;

 case 2:                 // Mass Converter
     {
     printf("     [1] for KILOGRAM kg                     [2] for GRAM g\n\n");
     printf("     [3] for MILLIGRAM mg                    [4] for TON t\n\n");
     printf("     [5] for QUINTAL q                       [6] for POUND lb\n\n");
     printf("     [7] for OUNCE oz\n\n");
     printf("                          select your choice\n\n");
      scanf("%d",&m);
      system("cls");

                switch(m)
                {
                  case 1:
                 printf("    [1] to convert into GRAM g             [2] to convert into MILLIGRAM mg\n\n");
                 printf("    [3] to convert into TON t              [4] to convert into QUINTAL q \n\n");
                 printf("    [5] to convert into POUND lb           [6] to convert into OUNCE oz\n\n");
                 printf("                              what you want?\n");
                  scanf("%d",&b);
                  system("cls");

                  switch(b)
                  {
               case 1:
               printf("enter the value in kg\n");
               scanf("%lf",&x);
               y=x*1000;
               printf("the value is = %lf g\n\n",y);
               break;

               case 2:
                printf("enter the value in kg\n");
               scanf("%lf",&x);
               y=x*1000000;
               printf("the value is = %lf mg\n",y);
               break;

               case 3:
                printf("enter the value in kg\n");
               scanf("%lf",&x);
               y=x*0.001;
               printf("the value is = %lf t\n",y);
               break;

               case 4:
                printf("enter the value in kg\n");
               scanf("%lf",&x);
               y=x*0.01;
               printf("the value is = %lf q\n",y);
               break;

               case 5:
                printf("enter the value in kg\n");
               scanf("%lf",&x);
               y=x*2.20462262;
               printf("the value is = %lf lb\n",y);
               break;

               case 6:
                printf("enter the value in kg\n");
               scanf("%lf",&x);
               y=x*35.2734;
               printf("the value is = %lf oz\n",y);
               break;

               default:
                printf(" enter valid choice\n");
                  }
                  break;

               case 2:
                 printf("    [1] to convert into KILOGRAM kg        [2] to convert into MILLIGRAM mg\n\n");
                 printf("    [3] to convert into TON t              [4] to convert into QUINTAL q \n\n");
                 printf("    [5] to convert into POUND lb           [6] to convert into OUNCE oz\n\n");
                 printf("                              what you want?\n");
                  scanf("%d",&b);
                  system("cls");

                  switch(b)
                  {
               case 1:
               printf("enter the value in g\n");
               scanf("%lf",&x);
               y=x*0.001;
               printf("the value is = %lf kg\n\n",y);
               break;

               case 2:
                printf("enter the value in g\n");
               scanf("%lf",&x);
               y=x*1000;
               printf("the value is = %lf mg\n",y);
               break;

               case 3:
                printf("enter the value in g\n");
               scanf("%lf",&x);
               y=x*0.000001;
               printf("the value is = %lf t\n",y);
               break;

               case 4:
                printf("enter the value in g\n");
               scanf("%lf",&x);
               y=x*0.00001;
               printf("the value is = %lf q\n",y);
               break;

               case 5:
                printf("enter the value in g\n");
               scanf("%lf",&x);
               y=x*0.0022046;
               printf("the value is = %lf lb\n",y);
               break;

               case 6:
                printf("enter the value in g\n");
               scanf("%lf",&x);
               y=x*0.0352734;
               printf("the value is = %lf oz\n",y);
               break;

               default:
                printf(" enter valid choice\n");
                  }
                  break;

                  case 3:
                 printf("    [1] to convert into KILOGRAM kg        [2] to convert into GRAM g\n\n");
                 printf("    [3] to convert into TON t              [4] to convert into QUINTAL q \n\n");
                 printf("    [5] to convert into POUND lb           [6] to convert into OUNCE oz\n\n");
                 printf("                              what you want?\n");
                  scanf("%d",&b);
                  system("cls");

                  switch(b)
                  {
               case 1:
               printf("enter the value in mg\n");
               scanf("%lf",&x);
               y=x*0.000001;
               printf("the value is = %lf kg\n\n",y);
               break;

               case 2:
                printf("enter the value in mg\n");
               scanf("%lf",&x);
               y=x*0.001;
               printf("the value is = %lf g\n",y);
               break;

               case 3:
                printf("enter the value in mg\n");
               scanf("%lf",&x);
               y=x*0.000000001;
               printf("the value is = %lf t\n",y);
               break;

               case 4:
                printf("enter the value in mg\n");
               scanf("%lf",&x);
               y=x*0.00000001;
               printf("the value is = %lf q\n",y);
               break;

               case 5:
                printf("enter the value in mg\n");
               scanf("%lf",&x);
               y=x*0.00000220462;
               printf("the value is = %lf lb\n",y);
               break;

               case 6:
                printf("enter the value in mg\n");
               scanf("%lf",&x);
               y=x*0.000035274;
               printf("the value is = %lf oz\n",y);
               break;

               default:
                printf(" enter valid choice\n");
                  }
                  break;

                  case 4:
                 printf("    [1] to convert into KILOGRAM kg        [2] to convert into GRAM g\n\n");
                 printf("    [3] to convert into MILLIGRAM mg       [4] to convert into QUINTAL q \n\n");
                 printf("    [5] to convert into POUND lb           [6] to convert into OUNCE oz\n\n");
                 printf("                              what you want?\n");
                  scanf("%d",&b);
                  system("cls");

                  switch(b)
                  {
               case 1:
               printf("enter the value in t\n");
               scanf("%lf",&x);
               y=x*1000;
               printf("the value is = %lf kg\n\n",y);
               break;

               case 2:
                printf("enter the value in t\n");
               scanf("%lf",&x);
               y=x*1000000;
               printf("the value is = %lf g\n",y);
               break;

               case 3:
                printf("enter the value in t\n");
               scanf("%lf",&x);
               y=x*1000000000;
               printf("the value is = %lf mg\n",y);
               break;

               case 4:
                printf("enter the value in t\n");
               scanf("%lf",&x);
               y=x*10;
               printf("the value is = %lf q\n",y);
               break;

               case 5:
                printf("enter the value in t\n");
               scanf("%lf",&x);
               y=x*2204.622;
               printf("the value is = %lf lb\n",y);
               break;

               case 6:
                printf("enter the value in t\n");
               scanf("%lf",&x);
               y=x*35273.96;
               printf("the value is = %lf oz\n",y);
               break;

               default:
                printf(" enter valid choice\n");
                  }
                  break;

                    case 5:
                 printf("    [1] to convert into KILOGRAM kg        [2] to convert into GRAM g\n\n");
                 printf("    [3] to convert into MILLIGRAM mg       [4] to convert into TON t \n\n");
                 printf("    [5] to convert into POUND lb           [6] to convert into OUNCE oz\n\n");
                 printf("                              what you want?\n");
                  scanf("%d",&b);
                  system("cls");

                  switch(b)
                  {
               case 1:
               printf("enter the value in q\n");
               scanf("%lf",&x);
               y=x*100;
               printf("the value is = %lf kg\n",y);
               break;

               case 2:
                printf("enter the value in q\n");
               scanf("%lf",&x);
               y=x*100000;
               printf("the value is = %lf g\n",y);
               break;

               case 3:
                printf("enter the value in q\n");
               scanf("%lf",&x);
               y=x*100000000;
               printf("the value is = %lf mg\n",y);
               break;

               case 4:
                printf("enter the value in q\n");
               scanf("%lf",&x);
               y=x*0.1;
               printf("the value is = %lf t\n",y);
               break;

               case 5:
                printf("enter the value in q\n");
               scanf("%lf",&x);
               y=x*220.4622;
               printf("the value is = %lf lb\n",y);
               break;

               case 6:
                printf("enter the value in q\n");
               scanf("%lf",&x);
               y=x*3527.396;
               printf("the value is = %lf oz\n",y);
               break;

               default:
                printf(" enter valid choice\n");
                  }
                  break;

                  case 6:
                 printf("    [1] to convert into KILOGRAM kg        [2] to convert into GRAM g\n\n");
                 printf("    [3] to convert into MILLIGRAM mg       [4] to convert into TON t \n\n");
                 printf("    [5] to convert into QUINTAL q          [6] to convert into OUNCE oz\n\n");
                 printf("                              what you want?\n");
                  scanf("%d",&b);
                  system("cls");

                  switch(b)
                  {
               case 1:
               printf("enter the value in lb\n");
               scanf("%lf",&x);
               y=x*0.45359;
               printf("the value is = %lf kg\n",y);
               break;

               case 2:
                printf("enter the value in lb\n");
               scanf("%lf",&x);
               y=x*453.59237;
               printf("the value is = %lf g\n",y);
               break;

               case 3:
                printf("enter the value in lb\n");
               scanf("%lf",&x);
               y=x*453,592.37;
               printf("the value is = %lf mg\n",y);
               break;

               case 4:
                printf("enter the value in lb\n");
               scanf("%lf",&x);
               y=x*0.00045359;
               printf("the value is = %lf t\n",y);
               break;

               case 5:
                printf("enter the value in lb\n");
               scanf("%lf",&x);
               y=x*.0045359;
               printf("the value is = %lf q\n",y);
               break;

               case 6:
                printf("enter the value in lb\n");
               scanf("%lf",&x);
               y=x*16;
               printf("the value is = %lf oz\n",y);
               break;

               default:
                printf(" enter valid choice\n");
                  }
                  break;

                   case 7:
                 printf("    [1] to convert into KILOGRAM kg        [2] to convert into GRAM g\n\n");
                 printf("    [3] to convert into MILLIGRAM mg       [4] to convert into TON t \n\n");
                 printf("    [5] to convert into QUINTAL q          [6] to convert into pound lb\n\n");
                 printf("                              what you want?\n");
                  scanf("%d",&b);
                  system("cls");

                  switch(b)
                  {
               case 1:
               printf("enter the value in oz\n");
               scanf("%lf",&x);
               y=x*0.028349;
               printf("the value is = %lf kg\n",y);
               break;

               case 2:
                printf("enter the value in oz\n");
               scanf("%lf",&x);
               y=x*28.349;
               printf("the value is = %lf g\n",y);
               break;

               case 3:
                printf("enter the value in oz\n");
               scanf("%lf",&x);
               y=x*28349.5231;
               printf("the value is = %lf mg\n",y);
               break;

               case 4:
                printf("enter the value in oz\n");
               scanf("%lf",&x);
               y=x*0.0000283495;
               printf("the value is = %lf t\n",y);
               break;

               case 5:
                printf("enter the value in oz\n");
               scanf("%lf",&x);
               y=x*0.000283495;
               printf("the value is = %lf q\n",y);
               break;

               case 6:
                printf("enter the value in oz\n");
               scanf("%lf",&x);
               y=x*0.0624999;
               printf("the value is = %lf lb\n",y);
               break;

                default:
                printf(" enter valid choice\n");
                  }
                  break;
            }
            break;
            default:
            	printf("    Enter Valid Choice\n");
     }
     break;

       }
}
float currency()           // Currency Converter
{
     int a,b;
      float x,y;
    printf(" \n\n              What do you want to convert?\n\n");
    printf("               [1] US Dollar       [2] Euro \n\n" );
    printf("               [3] Japanese Yen    [4] British Pound \n\n");
    printf("               [5] Indian Rupee    [6] UAE Dirham \n\n");
    scanf("%d",&a);
    system("cls");
   switch(a)
   {
    case 1:

    printf("          In which currency you want to convert your US Dollar?\n\n");
    printf("              [1] Euro             [2] Japanese Yen \n\n" );
    printf("              [3] British Pound    [4] Indian Rupee \n\n");
    printf("              [5] UAE Dirham\n\n");
    scanf("%d",&b);
    system("cls");
      switch(b)
      {
       case 1:
       printf("        Enter the currency in USD\n");
       scanf("%f",&x);
       y=x*0.8615;
       printf("\n");
       printf("        The currency in Euro is  %f EUR\n\n",y);
       break;

        case 2:
       printf("        Enter the currency in USD\n");
       scanf("%f",&x);
       y=x*113.67;
       printf("\n");
       printf("        The currency in Japanese Yen is  %f JPY\n\n",y);
       break;

        case 3:
       printf("        Enter the currency in USD\n");
       scanf("%f",&x);
       y=x*.07621;
       printf("\n");
       printf("        The currency in British Pound is  %f GBP\n\n",y);
       break;

       case 4:
       printf("        Enter the currency in USD\n");
       scanf("%f",&x);
       y=x*65.035;
       printf("\n");
       printf("        The currency in  Indian Rupee is  %f INR\n\n",y);
       break;

       case 5:
       printf("        Enter the currency in USD\n");
       scanf("%f",&x);
       y=x*3.6721;
       printf("\n");
       printf("        The currency in UAE Dirham is  %f AED\n\n",y);
       break;

       default:
       printf("        Choice valid currency\n\n");
       break;
      }
     break;

      case 2:

    printf("          In which currency you want to convert your Euro ?\n\n");
    printf("              [1] US Dollar            [2] Japanese Yen\n\n" );
    printf("              [3] British Pound        [4] Indian Rupee \n\n");
    printf("              [5] UAE Dirham\n\n");
    scanf("%d",&b);
    system("cls");
      switch(b)
      {
       case 1:
       printf("        Enter the currency in EUR\n");
       scanf("%f",&x);
       y=x*1.1608;
       printf("\n");
       printf("        The currency in US Dollar  is  %f USD\n\n",y);
       break;

        case 2:
       printf("        Enter the currency in EUR\n");
       scanf("%f",&x);
       y=x*131.9481;
       printf("\n");
       printf("        The currency in Japanese Yen is  %f JPY\n\n",y);
       break;

        case 3:
       printf("        Enter the currency in EUR\n");
       scanf("%f",&x);
       y=x*0.8846;
       printf("\n");
       printf("        The currency in British Pound is  %f GBP\n\n",y);
       break;

       case 4:
       printf("        Enter the currency in EUR\n");
       scanf("%f",&x);
       y=x*75.4926;
       printf("\n");
       printf("        The currency in  Indian Rupee is  %f INR\n\n",y);
       break;

       case 5:
       printf("        Enter the currency in EUR\n");
       scanf("%f",&x);
       y=x*4.2626;
       printf("\n");
       printf("        The currency in UAE Dirham is  %f AED\n\n",y);
       break;

       default:
       printf("        Choice valid currency\n\n");
       break;
      }
     break;

      case 3:

    printf("          In which currency you want to convert your Japanese Yen?\n\n");
    printf("              [1] US Dollar            [2] Euro\n\n" );
    printf("              [3] British Pound        [4] Indian Rupee \n\n");
    printf("              [5] UAE Dirham\n\n");
    scanf("%d",&b);
    system("cls");
      switch(b)
      {
       case 1:
       printf("        Enter the currency in JPY\n");
       scanf("%f",&x);
       y=x*0.0088;
       printf("\n");
       printf("        The currency in  US Dollar is  %f USD\n\n",y);
       break;

        case 2:
       printf("        Enter the currency in JPY\n");
       scanf("%f",&x);
       y=x*0.0076;
       printf("\n");
       printf("        The currency in Euro is  %f EUR\n\n",y);
       break;

        case 3:
       printf("        Enter the currency in JPY\n");
       scanf("%f",&x);
       y=x*0.0067;
       printf("\n");
       printf("        The currency in British Pound is  %f GBP\n\n",y);
       break;

       case 4:
       printf("        Enter the currency in JPY\n");
       scanf("%f",&x);
       y=x*0.5728;
       printf("\n");
       printf("        The currency in Indian Rupee  is  %f INR\n\n",y);
       break;

       case 5:
       printf("        Enter the currency in JPY\n");
       scanf("%f",&x);
       y=x*0.0324;
       printf("\n");
       printf("        The currency in UAE Dirham is  %f AED\n\n",y);
       break;

       default:
       printf("        Choice valid currency\n\n");
       break;
      }
     break;

      case 4:

    printf("          In which currency you want to convert your British Pound ?\n\n");
    printf("              [1] US Dollar            [2] Euro\n\n" );
    printf("              [3] Japanese Yen         [4] Indian Rupee \n\n");
    printf("              [5] UAE Dirham\n\n");
    scanf("%d",&b);
    system("cls");
      switch(b)
      {
       case 1:
       printf("        Enter the currency in GBP\n");
       scanf("%f",&x);
       y=x*1.3197;
       printf("\n");
       printf("        The currency in  US Dollar is  %f USD\n\n",y);
       break;

        case 2:
       printf("        Enter the currency in GBP\n");
       scanf("%f",&x);
       y=x*1.1344;
       printf("\n");
       printf("        The currency in Euro is  %f EUR\n\n",y);
       break;

        case 3:
       printf("        Enter the currency in GBP\n");
       scanf("%f",&x);
       y=x*149.3636;
       printf("\n");
       printf("        The currency in Japanese Yen  is  %f JPY\n\n",y);
       break;

       case 4:
       printf("        Enter the currency in GBP\n");
       scanf("%f",&x);
       y=x*85.5562;
       printf("\n");
       printf("        The currency in Indian Rupee is  %f INR\n\n",y);
       break;

       case 5:
       printf("        Enter the currency in GBP\n");
       scanf("%f",&x);
       y=x*4.8463;
       printf("\n");
       printf("        The currency in UAE Dirham is  %f AED\n\n",y);
       break;

       default:
       printf("        Choice valid currency\n\n");
       break;
      }
     break;

       case 5:

    printf("          In which currency you want to convert your Indian Rupee ?\n\n");
    printf("              [1] US Dollar            [2] Euro\n\n" );
    printf("              [3] Japanese Yen         [4] British Pound \n\n");
    printf("              [5] UAE Dirham\n\n");
    scanf("%d",&b);
    system("cls");
      switch(b)
      {
       case 1:
       printf("        Enter the currency in INR\n");
       scanf("%f",&x);
       y=x*0.0154;
       printf("\n");
       printf("        The currency in  US Dollar is  %f USD\n\n",y);
       break;

        case 2:
       printf("        Enter the currency in INR\n");
       scanf("%f",&x);
       y=x*0.0133;
       printf("\n");
       printf("        The currency in Euro is  %f EUR\n\n",y);
       break;

        case 3:
       printf("        Enter the currency in INR\n");
       scanf("%f",&x);
       y=x*1.7458;
       printf("\n");
       printf("        The currency in Japanese Yen  is  %f JPY\n\n",y);
       break;

       case 4:
       printf("        Enter the currency in INR\n");
       scanf("%f",&x);
       y=x*0.0117;
       printf("\n");
       printf("        The currency in British Pound is  %f GBP\n\n",y);
       break;

       case 5:
       printf("        Enter the currency in INR\n");
       scanf("%f",&x);
       y=x*0.0566;
       printf("\n");
       printf("        The currency in UAE Dirham is  %f AED\n\n",y);
       break;

       default:
       printf("        Choice valid currency\n\n");
       break;
      }
     break;

     case 6:

    printf("          In which currency you want to convert your UAE Dirham ?\n\n");
    printf("              [1] US Dollar            [2] Euro\n\n" );
    printf("              [3] Japanese Yen         [4] British Pound \n\n");
    printf("              [5] Indian Rupee\n\n");
    scanf("%d",&b);
    system("cls");
      switch(b)
      {
       case 1:
       printf("        Enter the currency in AED\n");
       scanf("%f",&x);
       y=x*0.2723;
       printf("\n");
       printf("        The currency in  US Dollar is  %f USD\n\n",y);
       break;

        case 2:
       printf("        Enter the currency in AED\n");
       scanf("%f",&x);
       y=x*0.2341;
       printf("\n");
       printf("        The currency in Euro is  %f EUR\n\n",y);
       break;

        case 3:
       printf("        Enter the currency in AED\n");
       scanf("%f",&x);
       y=x*30.8199;
       printf("\n");
       printf("        The currency in Japanese Yen is  %f JPY\n\n",y);
       break;

       case 4:
       printf("        Enter the currency in AED\n");
       scanf("%f",&x);
       y=x*0.2063;
       printf("\n");
       printf("        The currency in British Pound is  %f GBP\n\n",y);
       break;

       case 5:
       printf("        Enter the currency in AED\n");
       scanf("%f",&x);
       y=x*17.6538;
       printf("\n");
       printf("        The currency in Indian Rupee  is  %f INR\n\n",y);
       break;

       default:
       printf("        Choice valid currency\n\n");
       break;
      }
     break;

       default:
        printf("enter valid choice\n\n");
   }

}
float seller()                  //  GST For Seller
{

    int ch;
	float x,y,z;
    float sum=0,gst=0;


	printf("\n\n                      ******GST CALCULATOR*******\n\n\n");
	printf("[1]Milk  [2]Meat  [3]Natural Honey  [4]Vegetables  [5]Fruits \n\n");
	printf("[6]Diamonds  [7]Precious Stones  [8]Synthetic or Reconstructed Stones\n\n");
	printf("[9]Fish   [10]Graphite  [11]Chalk  [12]Broomstick  [13]pencil  [14]Eraser\n\n");
	printf("[15] Clothes  [16]Wheel Chairs   [17]Watches  [18]Calculators  [19]Books\n\n");
	printf("[20]Leather  [21]bicycle  [22]Tractors  [23]Sports Goods  [24]Phones  [25]Pens\n\n");
	printf("[26]Software  [27]Camera  [28]Speakers  [29]CCTV  [30]Optical Fibre\n\n");
	printf("[31]Motorcycles  [32]ATM  [33]Deodorants  [34]Automobiles  [35]Washing Machine\n\n");
	printf("[36] Total   [37] Exit\n\n");
    while(ch!=37)
    {

	scanf("%d",&ch);

	switch(ch)
		{
		case 1:
		{
			printf("    Milk   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
            y= 0*x ;
			printf("\nGST of Milk=%.2f\n\n",y);
			z=x+y;
			printf("Price of Product=%.2f\n",z);
			sum=sum+z;
			gst=gst+y;
            break;
		}
		case 2:
		{
			printf("    Meat   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
            y= 0*x ;
			printf("\nGST of Meat=%.2f\n\n",y);
			z=x+y;
			printf("Price of Product=%.2f\n",z);
			sum=sum+z;
			gst=gst+y;
            break;
		}
		case 3:
		{
			printf("    Natural Honey   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
            y= 0*x ;
			printf("\nGST of Natural Honey=%.2f\n\n",y);
			z=x+y;
			printf("Price of Product=%.2f\n",z);
			sum=sum+z;
			gst=gst+y;
            break;
		}
		case 4:
		{
			printf("    Vegetables   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
            y= 0*x ;
			printf("\nGST of Vegetables=%.2f\n\n",y);
			z=x+y;
			printf("Price of Product=%.2f\n",z);
			sum=sum+z;
			gst=gst+y;
            break;
		}
		case 5:
		{
			printf("    Fruits   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
            y= 0*x ;
			printf("\nGST of Fruits=%.2f\n\n",y);
			z=x+y;
			printf("Price of Product=%.2f\n",z);
			sum=sum+z;
			gst=gst+y;
            break;
		}
		case 6:
		{
			printf("    Diamonds   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
            y= 0.0025*x ;
			printf("\nGST of Diamonds=%.2f\n\n",y);
			z=x+y;
			printf("Price of Product=%.2f\n",z);
			sum=sum+z;
			gst=gst+y;
            break;
		}
		case 7:
		{
			printf("    Precious Stones   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
            y= 0.0025*x ;
			printf("\nGST of Precious Stones=%.2f\n\n",y);
			z=x+y;
			printf("Price of Product=%.2f\n",z);
			sum=sum+z;
			gst=gst+y;
            break;
		}
		case 8:
		{
			printf("    Synthetic or Reconstructed Stones   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
            y= 0.0025*x ;
			printf("\nGST of Synthetic or Reconstructed Stones=%.2f\n\n",y);
			z=x+y;
			printf("Price of Product=%.2f\n",z);
			sum=sum+z;
			gst=gst+y;
            break;
		}
		case 9:
		{
			printf("    Fish    \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
            y= 0.03*x ;
			printf("\nGST of Fish=%.2f\n\n",y);
			z=x+y;
			printf("Price of Product=%.2f\n",z);
			sum=sum+z;gst=gst+y;
			gst=gst+y;
            break;
		}
		case 10:
		{
			printf("    Graphite   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
            y= 0.03*x ;
			printf("\nGST of Graphite=%.2f\n\n",y);
			z=x+y;
			printf("Price of Product=%.2f\n",z);
			sum=sum+z;
			gst=gst+y;
            break;
		}
		case 11:
		{
			printf("    Chalk   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
            y= 0.03*x ;
			printf("\nGST of Chalk=%.2f\n\n",y);
			z=x+y;
			printf("Price of Product=%.2f\n",z);
			sum=sum+z;
			gst=gst+y;
            break;
		}
		case 12:
		{
			printf("    Broomstick   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
            y= 0.03*x ;
			printf("\nGST of Broomstick=%.2f\n\n",y);
			z=x+y;
			printf("Price of Product=%.2f\n",z);
			sum=sum+z;
			gst=gst+y;
            break;
		}
		case 13:
		{
			printf("    Pencil   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
            y= 0.03*x ;
			printf("\nGST of Pencil=%.2f\n\n",y);
			z=x+y;
			printf("Price of Product=%.2f\n",z);
			sum=sum+z;
			gst=gst+y;
            break;
		}
		case 14:
		{
			printf("    Eraser   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
            y= 0.03*x ;
			printf("\nGST of Eraser=%.2f\n\n",y);
			z=x+y;
			printf("Price of Product=%.2f\n",z);
			sum=sum+z;
			gst=gst+y;
            break;
		}
		case 15:
		{
			printf("    Clothes   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
            y= 0.05*x ;
			printf("\nGST of Clothes=%.2f\n\n",y);
			z=x+y;
			printf("Price of Product=%.2f\n",z);
			sum=sum+z;
			gst=gst+y;
            break;
		}
		case 16:
		{
			printf("    Wheel Chairs   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
            y= 0.05*x ;
			printf("\nGST of Wheel Chairs=%.2f\n\n",y);
			z=x+y;
			printf("Price of Product=%.2f\n",z);
			sum=sum+z;
			gst=gst+y;
            break;
		}
		case 17:
		{
			printf("    Watches   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
            y= 0.05*x ;
			printf("\nGST of Watches=%.2f\n\n",y);
			z=x+y;
			printf("Price of Product=%.2f\n",z);
			sum=sum+z;
			gst=gst+y;
            break;
		}
		case 18:
		{
			printf("    Calculators   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
            y= 0.05*x ;
			printf("\nGST of Calculators=%.2f\n\n",y);
			z=x+y;
			printf("Price of Product=%.2f\n",z);
			sum=sum+z;
			gst=gst+y;
            break;
		}
		case 19:
		{
			printf("    Books   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
            y= 0.05*x ;
			printf("\nGST of Books=%.2f\n\n",y);
			z=x+y;
			printf("Price of Product=%.2f\n",z);
			sum=sum+z;
			gst=gst+y;
            break;
		}
		case 20:
		{
			printf("    Leather   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
            y= 0.12*x ;
			printf("\nGST of Leather=%.2f\n\n",y);
			z=x+y;
			printf("Price of Product=%.2f\n",z);
			sum=sum+z;
			gst=gst+y;
            break;
		}
		case 21:
		{
			printf("    Bicycle   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
            y= 0.12*x ;
			printf("\nGST of Bicycle=%.2f\n\n",y);
			z=x+y;
			printf("Price of Product=%.2f\n",z);
			sum=sum+z;
			gst=gst+y;
            break;
		}
		case 22:
		{
			printf("    Tractors   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
            y= 0.12*x ;
			printf("\nGST of Tractors=%.2f\n\n",y);
			z=x+y;
			printf("Price of Product=%.2f\n",z);
			sum=sum+z;
			gst=gst+y;
            break;
		}
		case 23:
		{
			printf("    Sports Goods   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
            y= 0.12*x ;
			printf("\nGST of Sports Goods=%.2f\n\n",y);
			z=x+y;
			printf("Price of Product=%.2f\n",z);
			sum=sum+z;
			gst=gst+y;
            break;
		}
		case 24:
		{
			printf("    Phones   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
            y= 0.12*x ;
			printf("\nGST of Phones=%.2f\n\n",y);
			z=x+y;
			printf("Price of Product=%.2f\n",z);
			sum=sum+z;
			gst=gst+y;
            break;
		}
		case 25:
		{
			printf("    Pens   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
            y= 0.12*x ;
			printf("\nGST of Pens=%.2f\n\n",y);
			z=x+y;
			printf("Price of Product=%.2f\n",z);
			sum=sum+z;
			gst=gst+y;
            break;
		}
		case 26:
		{
			printf("    Software   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
            y= 0.18*x ;
			printf("\nGST of Software=%.2f\n\n",y);
			z=x+y;
			printf("Price of Product=%.2f\n",z);
			sum=sum+z;
			gst=gst+y;
			break;
		}
		case 27:
		{
			printf("    Camera   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
            y= 0.18*x ;
			printf("\nGST of Camera=%.2f\n\n",y);
			z=x+y;
			printf("Price of Product=%.2f\n",z);
			sum=sum+z;
			gst=gst+y;
            break;
		}
		case 28:
		{
			printf("    Speakers   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
            y= 0.18*x ;
			printf("\nGST of Speakers=%.2f\n\n",y);
			z=x+y;
			printf("Price of Product=%.2f\n",z);
			sum=sum+z;
			gst=gst+y;
            break;
		}
		case 29:
		{
			printf("    CCTV   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
            y= 0.18*x ;
			printf("\nGST of CCTV=%.2f\n\n",y);
			z=x+y;
			printf("Price of Product=%.2f\n",z);
			sum=sum+z;
			gst=gst+y;
            break;
		}
		case 30:
		{
			printf("    Optical Fibre   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
            y= 0.18*x ;
			printf("\nGST of Optical Fibre=%.2f\n\n",y);
			z=x+y;
			printf("Price of Product=%.2f\n",z);
			sum=sum+z;
			gst=gst+y;
            break;
		}
		case 31:
		{
			printf("    Motorcycles   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
            y= 0.28*x ;
			printf("\nGST of Motorcycles=%.2f\n\n",y);
			z=x+y;
			printf("Price of Product=%.2f\n",z);
			sum=sum+z;
			gst=gst+y;
            break;
		}
		case 32:
		{
			printf("    ATM   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
            y= 0.28*x ;
			printf("\nGST of ATM=%.2f\n\n",y);
			z=x+y;
			printf("Price of Product=%.2f\n",z);
			sum=sum+z;
			gst=gst+y;
            break;
		}
		case 33:
		{
			printf("    Deodorants   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
            y= 0.28*x ;
			printf("\nGST of Deodorants=%.2f\n\n",y);
			z=x+y;
			printf("Price of Product=%.2f\n",z);
			sum=sum+z;
			gst=gst+y;
            break;
		}
		case 34:
		{
			printf("    Automobiles   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
            y= 0.28*x ;
			printf("\nGST of Automobiles=%.2f\n\n",y);
			z=x+y;
			printf("Price of Product=%.2f\n",z);
			sum=sum+z;
			gst=gst+y;
            break;
		}
		case 35:
		{
			printf("    Washing Machine   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
            y= 0.28*x ;
			printf("\nGST of Washing Machine=%.2f\n\n",y);
			z=x+y;
			printf("Price of Product=%.2f\n",z);
			sum=sum+z;
			gst=gst+y;
            break;
		}
		case 36:
            {
                printf("\n                Total Payable amount is %.2f\n\n",sum);
                printf("                  Total GST=%.2f\n\n",gst);
                break;
            }
        default:
		printf("\n    Enter Valid Choice...\n");
		}
    }
}
float buyer()                // GST for Buyer
{
    int ch;
	float x,y,z;
	printf("\n\n                      ******GST CALCULATOR*******\n\n\n");
	printf("[1]Milk  [2]Meat  [3]Natural Honey  [4]Vegetables  [5]Fruits \n\n");
	printf("[6]Diamonds  [7]Precious Stones  [8]Synthetic or Reconstructed Stones\n\n");
	printf("[9]Fish   [10]Graphite  [11]Chalk  [12]Broomstick  [13]pencil  [14]Eraser\n\n");
	printf("[15] Clothes  [16]Wheel Chairs   [17]Watches  [18]Calculators  [19]Books\n\n");
	printf("[20]Leather  [21]bicycle  [22]Tractors  [23]Sports Goods  [24]Phones  [25]Pens\n\n");
	printf("[26]Software  [27]Camera  [28]Speakers  [29]CCTV  [30]Optical Fibre\n\n");
	printf("[31]Motorcycles  [32]ATM  [33]Deodorants  [34]Automobiles  [35]Washing Machine\n\n");
	printf("[36] Exit\n\n");
    while(ch!=36)
    {	
	scanf("%d",&ch);

	switch(ch)
	{
		case 1:
		{
			printf("    Milk   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
			z=x;
			printf("Actual Value of Product=%f\n",z);
			y=x-z;
			printf("\nGST of Milk=%f\n\n",y);
			break;
		}
		case 2:
		{
			printf("    Meat   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
			z=x;
			printf("Actual Value of Product=%f\n",z);
			y=x-z;
			printf("\nGST of Meat=%f\n\n",y);
			break;
		}
		case 3:
		{
			printf("    Natural Honey   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
			z=x;
			printf("Actual Value of Product=%f\n",z);
			y=x-z;
			printf("\nGST of Natural Honey=%f\n\n",y);
			break;
		}
		case 4:
		{
			printf("    Vegetables   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
			z=x;
			printf("Actual Value of Product=%f\n",z);
			y=x-z;
			printf("\nGST of Vegetables=%f\n\n",y);
			break;
		}
		case 5:
		{
			printf("    Fruits   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
			z=x;
			printf("Actual Value of Product=%f\n",z);
			y=x-z;
			printf("\nGST of fruits=%f\n\n",y);
			break;
		}
		case 6:
		{
			printf("    Diamonds   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
			z=x/(.0025+1);
			printf("Actual Value of Product=%f\n",z);
			y=x-z;
			printf("\nGST of Diamond=%f\n\n",y);
			break;
		}
		case 7:
		{
			printf("    Precious Stones   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
			z=x/(.0025+1);
			printf("Actual Value of Product=%f\n",z);
			y=x-z;
			printf("\nGST of Precious Stones=%f\n\n",y);
			break;
		}
		case 8:
		{
			printf("    Synthetic or Reconstructed Stones   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
			z=x/(.0025+1);
			printf("Actual Value of Product=%f\n",z);
			y=x-z;
			printf("\nGST of Synthetic or Reconstructed Stones=%f\n\n",y);
			break;
		}
		case 9:
		{
			printf("    Fish    \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
			z=x/(.03+1);
			printf("Actual Value of Product=%f\n",z);
			y=x-z;
			printf("\nGST of Fish=%f\n\n",y);
			break;
		}
		case 10:
		{
			printf("    Graphite   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
			z=x/(.03+1);
			printf("Actual Value of Product=%f\n",z);
			y=x-z;
			printf("\nGST of Graphite=%f\n\n",y);
			break;
		}
		case 11:
		{
			printf("    Chalk   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
			z=x/(.03+1);
			printf("Actual Value of Product=%f\n",z);
			y=x-z;
			printf("\nGST of Chalk=%f\n\n",y);
			break;
		}
		case 12:
		{
			printf("    Broomstick   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
			z=x/(.03+1);
			printf("Actual Value of Product=%f\n",z);
			y=x-z;
			printf("\nGST of Broomstick=%f\n\n",y);
			break;
		}
		case 13:
		{
			printf("    Pencil   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
			z=x/(.03+1);
			printf("Actual Value of Product=%f\n",z);
			y=x-z;
			printf("\nGST of Pencil=%f\n\n",y);
			break;
		}
		case 14:
		{
			printf("    Eraser   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
			z=x/(.03+1);
			printf("Actual Value of Product=%f\n",z);
			y=x-z;
			printf("\nGST of Eraser=%f\n\n",y);
			break;
		}
		case 15:
		{
			printf("    Clothes   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
			z=x/(.05+1);
			printf("Actual Value of Product=%f\n",z);
			y=x-z;
			printf("\nGST of Clothes=%f\n\n",y);
			break;
		}
		case 16:
		{
			printf("    Wheel Chairs   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
			z=x/(.05+1);
			printf("Actual Value of Product=%f\n",z);
			y=x-z;
			printf("\nGST of Wheel chair=%f\n\n",y);
			break;
		}
		case 17:
		{
			printf("    Watches   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
			z=x/(.05+1);
			printf("Actual Value of Product=%f\n",z);
			y=x-z;
			printf("\nGST of Watches=%f\n\n",y);
			break;
		}
		case 18:
		{
			printf("    Calculators   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
			z=x/(.05+1);
			printf("Actual Value of Product=%f\n",z);
			y=x-z;
			printf("\nGST of Calculators=%f\n\n",y);
			break;
		}
		case 19:
		{
			printf("    Books   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
			z=x/(.05+1);
			printf("Actual Value of Product=%f\n",z);
			y=x-z;
			printf("\nGST of Books=%f\n\n",y);
			break;
		}
		case 20:
		{
			printf("    Leather   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
			z=x/(.12+1);
			printf("Actual Value of Product=%f\n",z);
			y=x-z;
			printf("\nGST of Leather=%f\n\n",y);
			break;
		}
		case 21:
		{
			printf("    Bicycle   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
			z=x/(.12+1);
			printf("Actual Value of Product=%f\n",z);
			y=x-z;
			printf("\nGST of Bicycle=%f\n\n",y);
			break;
		}
		case 22:
		{
			printf("    Tractors   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
			z=x/(.12+1);
			printf("Actual Value of Product=%f\n",z);
			y=x-z;
			printf("\nGST of Tractors=%f\n\n",y);
			break;
		}
		case 23:
		{
			printf("    Sports Goods   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
			z=x/(.12+1);
			printf("Actual Value of Product=%f\n",z);
			y=x-z;
			printf("\nGST of Sports Goods=%f\n\n",y);
			break;
		}
		case 24:
		{
			printf("    Phones   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
			z=x/(.12+1);
			printf("Actual Value of Product=%f\n",z);
			y=x-z;
			printf("\nGST of phones=%f\n\n",y);
			break;
		}
		case 25:
		{
			printf("    Pens   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
			z=x/(.12+1);
			printf("Actual Value of Product=%f\n",z);
			y=x-z;
			printf("\nGST of Pens=%f\n\n",y);
			break;
		}
		case 26:
		{
			printf("    Software   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
			z=x/(.18+1);
			printf("Actual Value of Product=%f\n",z);
			y=x-z;
			printf("\nGST of Software=%f\n\n",y);
			break;
		}
		case 27:
		{
			printf("    Camera   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
			z=x/(.18+1);
			printf("Actual Value of Product=%f\n",z);
			y=x-z;
			printf("\nGST of Camera=%f\n\n",y);
			break;
		}
		case 28:
		{
			printf("    Speakers   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
			z=x/(.18+1);
			printf("Actual Value of Product=%f\n",z);
			y=x-z;
			printf("\nGST of Speakers=%f\n\n",y);
			break;
		}
		case 29:
		{
			printf("    CCTV   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
			z=x/(.18+1);
			printf("Actual Value of Product=%f\n",z);
			y=x-z;
			printf("\nGST of CCTV=%f\n\n",y);
			break;
		}
		case 30:
		{
			printf("    Optical Fibre   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
			z=x/(.18+1);
			printf("Actual Value of Product=%f\n",z);
			y=x-z;
			printf("\nGST of Optical Fibre=%f\n\n",y);
			break;
		}
		case 31:
		{
			printf("    Motorcycles   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
			z=x/(.28+1);
			printf("Actual Value of Product=%f\n",z);
			y=x-z;
			printf("\nGST of Motorcycles=%f\n\n",y);
			break;
		}
		case 32:
		{
			printf("    ATM   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
			z=x/(.28+1);
			printf("Actual Value of Product=%f\n",z);
			y=x-z;
			printf("\nGST of ATM=%f\n\n",y);
			break;
		}
		case 33:
		{
			printf("    Deodorants   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
			z=x/(.28+1);
			printf("Actual Value of Product=%f\n",z);
			y=x-z;
			printf("\nGST of Deodorants=%f\n\n",y);
			break;
		}
		case 34:
		{
			printf("    Automobiles   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
			z=x/(.28+1);
			printf("Actual Value of Product=%f\n",z);
			y=x-z;
			printf("\nGST of Automobiles=%f\n\n",y);
			break;
		}
		case 35:
		{
			printf("    Washing Machine   \n\n");
			printf("Enter the Price\n\n");
			scanf("%f",&x);
			z=x/(.28+1);
			printf("Actual Value of Product=%f\n",z);
			y=x-z;
			printf("\nGST of Washing Machine=%f\n\n",y);
			break;
		}
		default:
		printf("\n    Enter Valid Choice...\n");

	}
}
}



