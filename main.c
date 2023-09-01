#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define INFO "\e[32m[*]"
#define ERR "\e[31m[-]"
#define WARN "\e[33m[!]"
#define END "\e[0m"

#define PI 3.14159265359f

double pow(double value, double power) {
    float result = 1.0f;
    for (size_t i=0; i<power; i++) {
        result *= value;
    }
    return result;
}

int basic_input_output() {
    int number = 0;
    printf("%s Enter a Number: %s", INFO, END);
    scanf("%d", &number);
    printf("%s You Have Entered: %d AS NUMBER%s\n", INFO, number, END);
    return 0;
}

int basic_calculator() {
    float opreand0, operand1 = 0;
    printf("%s Enter Two operand Separated By Space: %s", INFO, END);
    scanf("%f %f", &opreand0, &operand1);
    printf("%s SUM: %.2f Unit%s\n", INFO, opreand0+operand1, END);
    printf("%s SUB: %.2f Unit%s\n", INFO, opreand0-operand1, END);
    printf("%s MUL: %.2f Unit%s\n", INFO, opreand0*operand1, END);
    printf("%s DIV: %.2f Unit%s\n", INFO, opreand0/operand1, END);
    printf("%s MOD: %0.2d Unit%s\n", INFO, (int)opreand0%(int)operand1, END);
    return 0;
}

int basic_temperature_conversion() {
    float temperature = 0.0f;
    printf("%s Enter Temperature in °C: %s", INFO, END);
    scanf("%f", &temperature);
    temperature = ((temperature*9.0f)+160.0f)/5.0f;
    printf("%s The Temperature in °F: %0.2f%s\n", INFO, temperature, END);
    return 0;
}

int basic_isosceles_area() {
    float area, eq, ineq = {0};
    printf("%s Enter The Value of Equal and Inequal Hand: %s", INFO, END);
    scanf("%f %f", &eq, &ineq);
    area = (ineq/4.0f)*(sqrtf(4.0f*eq*eq-ineq*ineq));
    printf("%s The Area Of Isosceles Triangle: %0.2f Unit%s\n", INFO, area, END);
    return 0;
}

int basic_triangle_area_by_hand() {
    float area, s, a, b, c;
    printf("%s Enter The Value of a, b & c Hand: %s", INFO, END);
    scanf("%f %f %f", &a, &b, &c);
    s = (a+b+c)/2.0f;
    area = sqrtf(s*(s-a)*(s-b)*(s-c));
    printf("%s The Area Of Inequal Triangle: %0.2f Unit%s\n", INFO, area, END);
    return 0;
}

int basic_triangle_area() {
    float area, b, h;
    printf("%s Enter The Value of Base and Height: %s", INFO, END);
    scanf("%f %f", &b, &h);
    area = 0.5f*b*h;
    printf("%s The Area Of Equal Triangle: %0.2f Unit%s\n", INFO, area, END);
    return 0;
}

int basic_circle_area() {
    float area, r;
    printf("%s Enter The Value of Radius: %s", INFO, END);
    scanf("%f", &r);
    area = PI*r*r;
    printf("%s The Area Of Circle: %0.2f Unit%s\n", INFO, area, END);
    return 0;
}

int basic_even_odd_check() {
    float num = {0};
    printf("%s Enter The Number to Check: %s", INFO, END);
    scanf("%f", &num);
    if (num == 0.0f) {
        printf("%s Number is ZERO%s Unit\n", ERR, END);
    }
    else if ((int)num%2 == 0) {
        printf("%s Number is EVEN%s Unit\n", INFO, END);
    }
    else {
        printf("%s Number is ODD%s Unit\n", INFO, END);
    }
    return 0;
}

int basic_largest_three_number() {
    float a, b, c = {0};
    printf("%s Enter Three Number to Compare: %s", INFO, END);
    scanf("%f %f %f", &a, &b, &c);

    if (a>b&&a>c) {
        printf("%s The Largest Number: %0.2f Unit%s\n", INFO, a, END);
    }
    else if (b>a&&b>c) {
        printf("%s The Largest Number: %0.2f Unit%s\n", INFO, b, END);
    }
    else if (c>a&&c>b) {
        printf("%s The Largest Number: %0.2f Unit%s\n", INFO, c, END);
    }
    else {
        printf("%s Something Went Wrong%s\n", ERR, END);
    }
    return 0;
}

int basic_largest_n_number() {
    int num = 0;
    printf("%s Enter Number of Term to Compare: %s", INFO, END);
    scanf("%d", &num);
    float numbers[num];
    for (int i=0; i<num; i++) {
        printf("%s Enter Term One By One: %s", INFO, END);
        scanf("%f", &numbers[i]);
    }
    float max = numbers[0];
    for (int i=0; i<num; i++) {
        if (numbers[i]>max) {
            max = numbers[i];
        }
    }
    printf("%s The Largest of n Number: %0.2f Unit%s\n", INFO, max, END);
    return 0;
}

int basic_natural_number_series_sum() {
    int sum, number = 0;
    printf("%s Enter The Number of Term to SUM: %s", INFO, END);
    scanf("%d", &number);
    sum = (number*(number+1))/2;
    printf("%s 1+2+3+4+5+6+...+n=%d%s\n", INFO, sum, END);
    return 0;
}

int basic_odd_number_series_sum() {
    int sum, number = 0;
    printf("%s Enter The Number of Term to SUM: %s", INFO, END);
    scanf("%d", &number);
    sum = number*number;
    printf("%s 1+3+5+7+...+n=%d%s\n", INFO, sum, END);
    return 0;
}

int basic_square_root() {
    float num = 0.0f;
    printf("%s Enter The Term to Square-Root: %s", INFO, END);
    scanf("%f", &num);
    printf("%s The Square-Root of The Term:%0.2f Unit%s\n", INFO, sqrt(num), END);
    return 0;
}

int basic_power() {
    float base, sup = {0};
    printf("%s Enter The Base: %s", INFO, END);
    scanf("%f", &base);
    printf("%s Enter The Power Raise To: %s", INFO, END);
    scanf("%f", &sup);
    printf("%s The Base %0.2f Raise To The Power %0.2f:%0.2f%s\n", INFO, base, sup, pow(base, sup), END);
    return 0;
}

int basic_absolute_value() {
    float value = {0};
    printf("%s Enter The Value: %s", INFO, END);
    scanf("%f", &value);
    printf("%s The Absolute Value:%0.2f Unit%s\n", INFO, fabs(value), END);
    return 0;
}

int basic_factorial() {
    float num = 0.0f;
    printf("%s Enter Number of Term to Find Factorial: %s", INFO, END);
    scanf("%f", &num);
    float factorial = 1.0f;
    for (float i=1.0f; i<=num; i++) {
        factorial *= i;
    }
    printf("%s The Factorial:%0.2f Unit%s\n", INFO, factorial, END);
    return 0;
}

int basic_prime_number() {
    int minimum, maximum = {0};
    printf("%s Enter Number of Term as Minimum and Maximum: %s", INFO, END);
    scanf("%d %d", &minimum, &maximum);
    while (minimum<=maximum) {
        int count = 0;
        int i = 2;
        while (i<minimum/2) {
            if (minimum%i==0) {
                count++;
                break;
            }
            i++;
        }
        if (count == 0 && minimum != 1) {
            printf("%d, ", minimum);
        }
        minimum++;
    }
    printf("\n");
    return 0;
}

int basic_fibonacci_number() {
    int number = {0};
    printf("%s Enter Number of Term: %s", INFO, END);
    scanf("%d", &number);
    int t1 = 0, t2 = 1;
    int next = t1 + t2;
    printf("%s %d, %d, ", INFO, t1, t2);
    for (int i=3; i<number; i++) {
        printf("%d, ", next);
        t1 = t2;
        t2 = next;
        next = t1 + t2;
    }
    printf("\n");
    return 0;
}

int basic_uppercase_lowercase() {
    char ch = {0};
    printf("%s Enter The Character: %s", INFO, END);
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("%s The Character is UPPERCASE%s\n", INFO, END);
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("%s The Character is LOWERCASE%s\n", INFO, END);
    }
    else {
        printf("%s The Character is Not a Alphabet%s\n", ERR, END);
    }
    return 0;
}

int basic_leap_year() {
    int number = {0};
    printf("%s Enter Number of Year: %s", INFO, END);
    scanf("%d", &number);
    if ((number%4==0&&number%100!=0)||(number%400==0)) {
        printf("%s Leap Year%s\n", INFO, END);
    }
    else {
        printf("%s Not Leap Year%s\n", ERR, END);
    }
    return 0;
}

int basic_greatest_common_divisor() {
    int gcd, x, p, q = {0};
    printf("%s Enter Two Integer Number: %s", INFO, END);
    scanf("%d %d", &p, &q);
    if (p<q) x = p;
    else x = q;
    for(x;x>=1;x--) {
        if (p%x==0&&q%x==0) {
            gcd=x;
            break;
        }
    }
    printf("%s %d and %d GCD = %d Unit%s\n", INFO, p, q, gcd, END);
    return 0;
}

int basic_least_common_multiple() {
    int lcm, p, q = {0};
    printf("%s Enter Two Integer Number: %s", INFO, END);
    scanf("%d %d", &p, &q);
    if (p>q) lcm = p;
    else lcm = q;
    while (1) {
        if (lcm%p==0&&lcm%q==0) {
            printf("%s %d and %d LCM = %d Unit%s\n", INFO, p, q, lcm, END);
            break;
        }
        else lcm++;
    }
    return 0;
}

int basic_swap_number() {
    printf("%s Enter Two Number: %s", INFO, END);
    int A, B = {0};
    scanf("%d %d", &A, &B);
    A = A^B;
    B = A^B;
    A = A^B;
    printf("%s Two Swapped Number:%d and %d Unit%s\n", INFO, A, B, END);
    return 0;
}

int basic_number_finding_in_array() {
    int num = {0};
    printf("%s Enter Number of Term to Fill In: %s", INFO, END);
    scanf("%d", &num);
    float Numbers[num];
    for (int i=0; i<num; i++) {
        printf("%s Enter Term One By One: %s", INFO, END);
        scanf("%f", &Numbers[i]);
    }
    printf("%s Enter Number of Term to Find: %s", INFO, END);
    scanf("%d", &num);
    for (int i=0; i<(int)num; i++) {
        if (Numbers[i] == num) {
            printf("%s Your Desired Number Found: %0.2f Unit\n", INFO, Numbers[i]);
            break;

        }
        else if (Numbers[i] != num) {
            printf("%s Your Desired Number %0.2f Not Found\n", ERR, (double)num);
            break;
        }
    }
    return 0;
}

int basic_library_function() {
    printf("%s library function programme%s\n", INFO, END);
    return 0;
}

int basic_clear_screen() {
    system("clear");
    return 0;
}

int main(void) {
printf("%s_____ _          ___                                  _   %s\n", ERR, END);
printf("%s|_   _| |_  ___  | __| _ __ _ _ __  _____ __ _____ _ _| |__%s\n", ERR, END);
printf("%s  | | | ' \\/ -_) | _| '_/ _` | '  \\/ -_) V  V / _ \\ '_| / /%s\n", ERR, END);
printf("%s|_| |_||_\\___| |_||_| \\__,_|_|_|_\\___|\\_/\\_/\\___/_| |_\\_\\\\%s\n", ERR, END);
                                                            

int input = {0};
while (true) {
    printf("\n\n\n");
    printf("%s 01. I/O Programme %s\n", INFO, END);
    printf("%s 02. Calculator Programme %s\n", INFO, END);
    printf("%s 03. °C to °F Programme %s\n", INFO, END);
    printf("%s 04. Isoscele Triangle Area %s\n", INFO, END);
    printf("%s 05. Inequal Triangle Area %s\n", INFO, END);
    printf("%s 06. Equal Triangle Area %s\n", INFO, END);
    printf("%s 07. Circle Area Programme %s\n", INFO, END);
    printf("%s 08. Even/Odd Programme %s\n", INFO, END);
    printf("%s 09. Largest Number Among Three %s\n", INFO, END);
    printf("%s 10. Largest Number Among N %s\n", INFO, END);
    printf("%s 11. Natural Number Series(SUM) %s\n", INFO, END);
    printf("%s 12. Odd Number Series(SUM) %s\n", INFO, END);
    printf("%s 13. Square Root Programme %s\n", INFO, END);
    printf("%s 14. Power Finding Programme %s\n", INFO, END);
    printf("%s 15. Absolute Value Programme %s\n", INFO, END);
    printf("%s 16. Factorial Finding Programme %s\n", INFO, END);
    printf("%s 17. Prime Number Series %s\n", INFO, END);
    printf("%s 18. Fibonacci Number Series %s\n", INFO, END);
    printf("%s 19. UPPERCASE/LOWERCASE Programme %s\n", INFO, END);
    printf("%s 20. Leap Year Programme %s\n", INFO, END);
    printf("%s 21. Finding Greatest Common Divisor %s\n", INFO, END);
    printf("%s 22. Finding Least Common Multiple %s\n", INFO, END);
    printf("%s 23. Swap Number Programme %s\n", INFO, END);
    printf("%s 24. Finding Number Within Array %s\n", INFO, END);
    printf("%s 25. Library Function Programme %s\n", INFO, END);
    printf("%s 26. Hey! Say, CLEAR SCREEN %s\n", INFO, END);
    printf("%s 27. Hey! Say, Good Bye %s\n", INFO, END);

    printf("\n\n\n%s Enter Your Choice: %s", INFO, END);
    scanf("%d", &input);

    switch (input) {
        case 1:
            basic_input_output();
            break;
        case 2:
            basic_calculator();
            break;
        case 3:
            basic_temperature_conversion();
            break;
        case 4:
            basic_isosceles_area();
            break;
        case 5:
            basic_triangle_area_by_hand();
            break;
        case 6:
            basic_triangle_area();
            break;
        case 7:
            basic_circle_area();
            break;
        case 8:
            basic_even_odd_check();
            break;
        case 9:
            basic_largest_three_number();
            break;
        case 10:
            basic_largest_n_number();
            break;
        case 11:
            basic_natural_number_series_sum();
            break;
        case 12:
            basic_odd_number_series_sum();
            break;
        case 13:
            basic_square_root();
            break;
        case 14:
            basic_power();
            break;
        case 15:
            basic_absolute_value();
            break;
        case 16:
            basic_factorial();
            break;
        case 17:
            basic_prime_number();
            break;
        case 18:
            basic_fibonacci_number();
            break;
        case 19:
            basic_uppercase_lowercase();
            break;
        case 20:
            basic_leap_year();
            break;
        case 21:
            basic_greatest_common_divisor();
            break;
        case 22:
            basic_least_common_multiple();
            break;
        case 23:
            basic_swap_number();
            break;
        case 24:
            basic_number_finding_in_array();
            break;
        case 25:
            basic_library_function();
            break;
        case 26:
            basic_clear_screen();
            break;
        case 27:
            exit(0);
            break;
        default:
            printf("%s (WRONG-COMMAND):%s %s Something Went Wrong!%s\n",INFO, END, ERR, END);
    }
}
    return 0;
}

#if 0
    printf("%s diplay text programme\n", INFO);
    int count = {0};
    printf("%s Enter The Number Of Count: ", INFO);
    scanf("%d", &count);
    char buffer[50] = {0};
    printf("%s Enter The Text to Display: ", INFO);
    scanf("%[\n]", buffer);
    for(int i=0; i<count; i++) {
        printf("%s You Entered: %s AS TEXT\n", INFO, buffer);
    }
    printf("%s diplay text programme Finished\n", WARN);
    fflush(stdin);
#endif
