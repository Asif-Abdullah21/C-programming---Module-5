// // cf problem
// //I. Welcome for you with Conditions 

// #include<stdio.h>
// int main()
// {
//     int a,b;
//     scanf("%d %d",&a,&b);

//     if(a>=b) printf("Yes\n");
//     else printf("No\n");

//     return 0;
// }

// cf problem
// J. Multiples

// #include<stdio.h>
// int main()
// {
//     int a,b;
//     scanf("%d %d",&a,&b);

//     if(a%b==0 || b%a==0)  printf("Multiples\n");
//     else printf("No Multiples\n");

//     return 0;
// }

// cf problem
// N. Char

// #include<stdio.h>
// int main()
// {
//     char c;
//     scanf("%c",&c);

//     if(c>='a' && c<='z') printf("%c",c-32);
//     else if(c>='A' && c<='Z') printf("%c",c+32);

//     return 0;
// }

//P - First digit !

// #include<stdio.h>
// int main()
// {
//     int n,rem;
//     scanf("%d",&n);

//     while (n>=10)
//     {
//         n /=10;
//     }

//     if(n%2==0) printf("EVEN\n");
//     else printf("ODD\n");
    

//     return 0;
// }

// -----------

#include<stdio.h>
int main()
{
    int n,rem;
    scanf("%d",&n);

    while (n>0)
    {
        rem = n%10;
        n /=10;
    }

    if(rem%2==0) printf("EVEN\n");
    else printf("ODD\n");
    

    return 0;
}