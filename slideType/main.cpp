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


//===============================Câu lệnh điều kiện rẽ nhánh =====================================

// //6
//     int main() {
//         int a = 10;
//     if (a == 0)
//         printf("a = k\n");
//     else
//         printf("a khac k\n");
//
//         if (a == 0) {
//             printf("a = k\n");
//             a = 2912;
//         }
//         else
//             printf("a khac k\n");
// }

//9
// int main() {
//     float delta;
//     scanf("%f", &delta);
//     if (delta < 0 )
//         printf("pt vo nghiem\n");
//     if (delta == 0)
//         printf("pt co nghiem kep\n");
//     if (delta > 0)
//         printf("pt co 2 nghiem\n");
//
//     if (delta < 0)
//         printf("pt vo nghiem\n");
//     else
//         if (delta == 0)
//         printf("pt co nghiem kep\n");
//         else
//             printf("pt co 2 nghiem\n");
//
// }


// Hàm Đệ Quy

// int factorial(int n) {
//     if (n == 0 )
//         return 1;
//     else
//         return n * factorial(n - 1);
// }
// int main() {
//     printf("5! = %d", factorial(5));
//     return 0;
// }

// Ham callback

// int add(int a, int b) {
//     return a + b;
// }
// int sub(int a, int b) {
//     return a - b;
// }
// int calu(int a, int b, int (*operation)(int, int)) {
//     return  operation(a,b);
// }
// int main() {
//     int result1 = calu(5, 3, add);
//     int result2 = calu(5, 4, sub);
//
//     printf("ADD: %d\n", result1);
//     printf("SUB: %d\n", result2);
//
//     return 0;
//}

// ham static
// static void ell0() {
//     printf("hello from static function\n");
// }
// int main() {
//     ell0();
//     return 0;
// }

// mieu ta ve ham trong c

#include <stdio.h>
// prototype
// int max(int a, int b);
//
// int main() {
//     int m = max(10, 20);
//     printf("Max = %d", m);
//     return 0;
// }
//
// // definition
// int max(int a, int b) {
//     return (a > b) ? a : b;
// }

//Mieu ta truyen tham so trong c
#include <stdio.h>
//
// void change(int x) {
//     x = 100;
// }
//
// int main() {
//     int a = 10;
//     change(a);
//     printf("a = %d", a); // vẫn là 10
//     return 0;
// }


// ma tran chuyen vi
