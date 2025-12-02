#include "math_lib.h"
#include <cmath>
#include <algorithm>

namespace MathLib
{
 // Реалізація функції для обчислення факторіалу
    long long factorial(int n)
    {
        // Перевірка на від'ємне число
        if (n < 0)
        {
            throw std::invalid_argument("Factorial is not defined for negative numbers.");
        }

        // Базовий випадок: 0! = 1
        if (n == 0)
        {
            return 1;
        }

        long long result = 1;
        // Ітеративно обчислюємо факторіал
        for (int i = 1; i <= n; ++i)
        {
            result *= i;
        }
        
        return result;
    }

    bool isEqual(double a, double b, double tolerance)
    {
        return abs(a - b) <= tolerance;
    }

    bool isPrime(int n)
    {
        if (n <= 1)
            return false;
        
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
                return false;        
        }
        return true;
    }

    int leastCommonMultiple(int a, int b)
    {
        int lcm = 1;
        int maxNum = std::max(a, b);
        for (int i = maxNum; i <= a * b; i += maxNum)
        {
            if (i % a == 0 && i % b == 0)
            {
                lcm = i;
                break;
            }
        }
        return lcm;
    }

    int GCD(int a, int b)
    {
		if (b == 0) return a;
		return GCD(b, a % b);
	}
}

