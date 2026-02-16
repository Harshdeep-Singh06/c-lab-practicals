// #include <stdio.h>

// int main() {
//     int a, b;
//     char op;

//     printf("Enter first number: ");
//     scanf("%d", &a);

//     printf("Enter operator (+ - * /): ");
//     scanf(" %c", &op); 

//     printf("Enter second number: ");
//     scanf("%d", &b);

//     switch (op) {
//         case '+':
//             printf("Result = %d", a + b);
//             break;

//         case '-':
//             printf("Result = %d", a - b);
//             break;

//         case '*':
//             printf("Result = %d", a * b);
//             break;

//         case '/':
//             if (b != 0)
//                 printf("Result = %d", a / b);
//             else
//                 printf("Cannot divide by zero");
//             break;

//         default:
//             printf("Invalid operator");
//     }

//     return 0;
// int main()
// {
//     int x;
//     int temp = 0;
//     scanf("%d", &x);
//     if (x == 0 || x==1)
//     {
//         printf("Not Prime");
//     }
//     for (int i = 2; i<x; i++)
//     {
//         if (x%i == 0)
//         {
//             temp = 1;
//             break;
//         }
//         else{
//             temp = 0;
//         }
//     }
    
//     if (temp == 0)
//     {
//         printf("Prime Number");
//     }

//     else
//     {
//         printf("Not Prime");
//     }
//      return 0;
// }

// #include <stdio.h>

// int main() {
//     int n, rev = 0;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     while (n != 0) {
//         rev = rev * 10 + (n % 10);
//         n = n / 10;
//     }

//     printf("Reversed number = %d", rev);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n, sum = 0;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     while (n != 0) {
//         sum = sum + (n % 10); 
//         n = n / 10;            
//     }

//     printf("Sum of digits = %d", sum);

//     return 0;
// }
// #include <stdio.h>

// int main() {
//     for(int i = 0; i < 5; i++) {
//         for(int j = 0; j < 5; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     for(int i = 0; i < 5; i++) {
//         for(int j = 0; j < i + 1 ; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     for(int i = 0; i < 5; i++) {
//         for(int j = 0; j < 5-i ; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n-i-1; j++)
//         {
//             printf(" ");
//         }
//         for (int k = 0; k <= i ; k++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             printf(" ");
//         }
//         for (int k = 0; k < n-i ; k++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//    for(int i = 1; i<=5; i++){
//     for(int j = 1;j<=5-i;j++){
//         printf(" ");
//     }
//     for(int k=1; k<=(2*i-1);k++){
//         printf("*");
//     }
//     printf("\n");
//    }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     for(int i = 5; i >= 1; i--) {

//         for(int j = 1; j <= 5 - i; j++) {
//             printf(" ");
//         }

//         for(int k = 1; k <= (2*i - 1); k++) {
//             printf("*");
//         }

//         printf("\n");
//     }

//     return 0;
// }


// #include <stdio.h>

// int main() {

//     for(int i = 1; i <= 5; i++) {

//         for(int j = 1; j <= 5 - i; j++) {
//             printf(" ");
//         }

//         for(int k = 1; k <= (2*i - 1); k++) {
//             printf("*");
//         }

//         printf("\n");
//     }

   
//     for(int i = 4; i >= 1; i--) {

//         for(int j = 1; j <= 5 - i; j++) {
//             printf(" ");
//         }

//         for(int k = 1; k <= (2*i - 1); k++) {
//             printf("*");
//         }

//         printf("\n");
//     }

//     return 0;
// }



