#include <stdio.h>

void main()
{
    int n,num;
    printf("Enter a number :");
    scanf("%d",&num);
    printf("\nPRESS 1 to find Factorial of %d ",num);
    printf("\nPRESS 2 to Check if %d is Armstrong ",num);
    printf("\nPRESS 3 to Check if %d is Palindrome",num);
    printf("\nPRESS 4 to Check if %d is Strong",num);
    printf("\nPRESS 5 to Check if %d is Perfect",num);
    printf("\nPRESS 6 to Exit\n",num);
    scanf("%d", &n);
    int i=num;
    long f=1;
    int m=num,d,sum=0,rev=0;
    switch (n)
    {
        case 1:

                while(i>0)
                {
                    f *= i;
                    i--;
                }
            printf("Factorial of %d is %d",num,f);
            break;

        case 2:

            do
            {
                d = m%10;
                sum = sum+d*d*d;
                m = m/10;
            }
            while(m!=0);

            if (sum == num)
            {
                printf("Armstrong number");
            }
            else
            {
                printf("Not a Armstrong number");
            }
            break;

        case 3:

            do
            {
                d = m%10;
                rev = rev*10+d;
                m = m/10;
            }
            while(m!=0);
            if (rev == num)
            {
                printf("Palindrome number");
            }
            else
            {
                printf("Not a Palindrome number");
            }
            break;

        case 4 :

            while(m!=0)
            {
                i=1,f=1;
                d = m%10;
                while(i<=d)
                {
                    f = f*i;
                    i++;
                }
                sum += f;
                m = m/10;
            }


            if (sum == num)
            {
                printf("%d is strong number",num);
            }
            else
            {
                printf("Not a strong number");
            }


            break;

        case 5 :

            for(i=1;i<num;i++)
            {
                if (num%i==0)
                {
                    sum = sum+i;
                }
            }


        if (sum == num)
        {
            printf("Perfect number");
        }
        else
        {
            printf("Not a Perfect number");
        }

        break;

        case 6:
            break;


        default:
            printf("Enter the number in the range (1-6)");

    }
}
