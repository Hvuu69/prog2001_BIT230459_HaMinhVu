#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <ostream>
#include <stdio.h>
#include <bits/locale_classes.h>
using namespace std;

//30
// int () {
//     int num1, num2;
//
//     printf("Enter two numbers: ");
//     scanf("%d%d", &num1, &num2);
//
//     printf("addition: %d\n", num1 + num2);
//     printf("subtraction: %d\n", num1 - num2);
//     printf("multiplication: %d\n", num1 * num2);
//     printf("division: %d\n", num1 / num2);
//     printf("Modulus:%d", num1 % num2);
//     return 0;
// }
// 31
// int main() {
//     int a,b;
//
//     printf("enter 2 numbers: ");
//     scanf("%d%d",&a,&b);
//
//     if (a > b)
//         printf("%d a bigger b %d\n", a,b);
//     else if (a < b)
//         printf("%d a smaller b %d\n", a, b);
//     else
//         printf("%d a equal b %d\n", a, b);
//     return 0;
// }
// //32
// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     if (num >= 10 && num <= 50)
//     printf("The number is between 0 and 50");
//     else
//         printf("The number is not in the range");
// }
// //33
//  int main() {
//      int num = 10;
//
//      printf("Intial vaule: %d\n",num);
//
//      num += 5;
//      printf("after += 5: %d\n",num);
//
//      num -= 3;
//      printf("after -= 3: %d\n",num);
//
//      num *= 2;
//      printf("after *= 2: %d\n",num);
//
//      num /= 4;
//      printf("after /= 4: %d\n",num);
//
//      return 0;
//  }

// //35
// int main() {
//     printf("somethjng");
//     return 0;
// }
// //36
// #include <stdlib.h>
//
// int main() {
//     int number = atoi("123");
//     printf("converted number = %d", number);
//     return 0;
// }
//37

#include <math.h>
//
// int main() {
//     double x = 16.0;
//     printf("square root of %.1f is %.1f", x, sqrt(x));
//     printf("pow %.1f is %1f", x pow(x, 2));
//     return 0;
// }

//39
// #include <time.h>
// int main() {
//     time_t current_time;
//     time(&current_time);
//     printf("Current_time: %s", ctime(&current_time));
//     return 0;
// }




// ======================== chapter 3==========================

// // 5
// int main() {
//     int x = 10;
//     //outter
//     {
//         int y = 20;
//         {    //inner block
//
//             int z = 30;
//             printf("inside inner block: x = %d, y = %d, z = %d\n", x, y, z);
//         }
//         printf("outside all block: x = %d\n", x);
//         return 0;
//     }
// }
// 11
// int globalVar = 585;
// void display() {
//     printf("Bien global = %d\n", globalVar);
// }
// int main() {
//     display();
// }
// // 12
// void increment() {
//     static  int  counter = 0;
//     counter++;
//     printf("couter = %d\n", counter);
// }
// int main() {
//     increment();
//     increment();
//     increment();
// }
