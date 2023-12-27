#include <iostream>
#include <limits>
#include <iomanip>
#include <cmath>

void program30()
{
    int n;
    std::cout << "\nThe program that outputs various shapes of a given size";
    std::cout << "\nEnter the size of the shapes: ";
    if (!(std::cin >> n))
    {
        std::cerr << "\nInput error!!!" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (n < 1)
    {
        std::cerr << "\nInput error!!!" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (std::cin.peek() != '\n')
    {
        std::cerr << "\nInput error!!!" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    for (int i = 0; i < n; i++) //квадрат
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";

    for (int i = 0; i < n; i++) //треуг. с прям. угл. слева внизу
    {
        for (int j = 0; j < i + 1; j++)
        {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";

    for (int i = 0; i < n; i++) //треуг. с прямым углом слева сверху
    {
        for (int j = i + 1; j < n + 1; j++)
        {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    for (int i = 0; i < n; i++) //треуг. прав. верх. угол
    {
        for (int j = 0; j < n; j++)
        {
            if (i <= j)
            {
                std::cout << "* ";
            }
            else
                std::cout << "  ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    for (int i = 0; i < n; i++) //треуг. прав. нижн. угол
    {
        for (int j = 0; j < n; j++)
        {
            if ((i + j) >= n - 1)
            {
                std::cout << "* ";
            }
            else
                std::cout << "  ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    for (int i = 0; i < n; i++) //полый квадрат
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
            {
                std::cout << "* ";
            }
            else
                std::cout << "  ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    for (int i = 0; i < n * 2 - 1; i++) //ромб
    {
        for (int j = 0; j < n * 2 - 1; j++)
        {
            if ((i + j <= n - 2) || (j >= i + n) || (i >= j + n) || (i + j > n * 3 - 3))
            {
                std::cout << "  ";
            }
            else
                std::cout << "* ";
        }
        std::cout << "\n";
    }
}
void program31()
{
    int a, a1, b, c, k;
    std::cout << "\nThe program that displays a call schedule on the screen";
    std::cout << "\nEnter the start time of the school day (hours and minutes): ";
    if (!(std::cin >> a >> a1))
    {
        std::cerr << "\nInput error!!!" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if ((a < 0 || a > 23) || (a1 < 0 || a1 > 59))
    {
        std::cerr << "\nInput error!!!" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    std::cout << "\nEnter the duration of the class in minutes: ";
    if (!(std::cin >> b))
    {
        std::cerr << "\nInput error!!!" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (b < 0)
    {
        std::cerr << "\nInput error!!!" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    std::cout << "\nEnter the duration of the break: ";
    if (!(std::cin >> c))
    {
        std::cerr << "\nInpur error!!!" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (c < 0)
    {
        std::cerr << "\nInput error!!!" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    std::cout << "\nEnter the amount of classes: ";
    if (!(std::cin >> k))
    {
        std::cerr << "\nInpur error!!!" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (k < 0)
    {
        std::cerr << "\nInput error!!!" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (std::cin.peek() != '\n')
    {
        std::cerr << "\nInput error!!!" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    for (int i = 0; i < k; i++)
    {
        if (a1 < 10)
        {
            std::cout << a % 24 << ":0" << a1 << "-";
        }
        else
            std::cout << a % 24 << ":" << a1 << "-";
        a += b / 60;
        a1 += b % 60;
        if (a1 >= 60)
        {
            a1 %= 60;
            a += 1;
        }
        if (a1 < 10)
        {
            std::cout << a % 24 << ":0" << a1;
        }
        else
            std::cout << a % 24 << ":" << a1;
        a1 += c;
        if (a1 >= 60)
        {
            a1 %= 60;
            a += 1;
        }
        std::cout << "\n";
    }
}
void program32()
{
    int n, flag;
    std::cout << "\nThe program outputs all prime numbers that are less than the specified n";
    std::cout << "\nEnter the natural number n: ";
    if (!(std::cin >> n))
    {
        std::cerr << "\nInput error!!!" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (n <= 0)
    {
        std::cerr << "\nInput error!!!" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (std::cin.peek() != '\n')
    {
        std::cerr << "\nInput error!!!" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (n == 1 || n == 2)
    {
        std::cout << "\nThere are no primes less than " << n;
    }
    else
    {
        std::cout << "\nAll primes are less than the specified number: ";
        for (int i = 2; i < n; i++)
        {
            flag = 0;
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                std::cout << i << " ";
            }
        }
    }
}

void program33()
{
    int n;
    double x, S = 0, rez = 1;
    std::cout << "\nThe program finds the sum of the series";
    std::cout << "\nEnter the natural number n: ";
    if (!(std::cin >> n))
    {
        std::cerr << "\nInput error!!!" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (n < 1)
    {
        std::cerr << "\nInput error!!!" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    std::cout << "Enter a valid number x: ";
    if (!(std::cin >> x))
    {
        std::cerr << "\nInput error!!!" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (x < 0)
    {
        std::cerr << "\nInput error!!!" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (std::cin.peek() != '\n')
    {
        std::cerr << "\nInput error!!!" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        rez *= i;
        if (i % 2 == 0)
        {
            rez *= -1;
        }
        else
        {
            S += (pow(x, i) / rez);
            std::cout << "\nS = " << pow(x, i) << " / " << rez;
        }
    }
    std::cout << "\nSum of the series: " << S;
}

void program34()
{
    int k, f, f1, f2;
    std::cout << "\nThe program outputs the first k terms of the Fibonacci series";
    std::cout << "\nEnter the number of members of the Fibonacci series: ";
    if (!(std::cin >> k))
    {
        std::cerr << "\nInput error!!!" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (k < 0)
    {
        std::cerr << "\nInput error!!!" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (std::cin.peek() != '\n')
    {
        std::cerr << "\nInput error!!!" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    f1 = 1;
    f2 = 1;
    if (k == 1)
    {
        std::cout << f1;
    }
    else if (k == 2)
    {
        std::cout << f1 << " " << f2;
    }
    else if (k > 2)
    {
        std::cout << f1 << " " << f2 << " ";
        for (int i = 1; i <= k - 2; i++)
        {
            f = f1 + f2;
            f1 = f2;
            f2 = f;
            std::cout << f << " ";
        }
    }
}
void program35()
{
    int n, k;
    std::cout << "\nThe program guesses a number from 1 to 1000";
    n = 1 + rand() % 1000;
    std::cout << "\nGuess a number in 10 attempts";
    for (int i = 1; i <= 10; i++)
    {
        std::cout << "\nAttempt number " << i;
        std::cout << "\nEnter a number from 1 to 1000: ";
        if (!(std::cin >> k))
        {
            std::cerr << "\nInput error!!!" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return;
        }
        if (k < 1 || k > 1000)
        {
            std::cerr << "\nInput error!!!" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return;
        }
        if (std::cin.peek() != '\n')
        {
            std::cerr << "\nInput error!!!" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return;
        }
        if (k == n)
        {
            std::cout << "\nYou guessed the hidden number!"; break;
        }
        else if (i == 10)
        {
            std::cout << "\nYou did not guess the hidden number! Failed";
            std::cout << "\nThe right number is " << n;  break;
        }
        else if (k < n)
        {
            std::cout << "\nThe hidden number is bigger";
            std::cout << "\nYou have " << 10 - i << " attempts left";
        }
        else
        {
            std::cout << "\nThe hidden number is less";
            std::cout << "\nYou have " << 10 - i << " attempts left";
        }
    }
}
void program36()
{
    int n, n1, n2, k = 0;
    std::cout << "\nA program that outputs 10 random examples from the multiplication table";
    for (int i = 0; i < 10; i++)
    {
        n1 = rand() % 10 + 1;
        n2 = rand() % 10 + 1;
        std::cout << "\nEnter the answer to the mathematical example";
        std::cout << "\n" << n1 << " * " << n2 << " = ";
        if (!(std::cin >> n))
        {
            std::cerr << "\nInput error!!!" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return;
        }
        if (n < 1)
        {
            std::cerr << "\nInput error!!!" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return;
        }
        if (std::cin.peek() != '\n')
        {
            std::cerr << "\nInput error!!!" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return;
        }
        if (n1 * n2 == n)
        {
            k++;
        }
    }
    if (k == 10)
    {
        std::cout << "\nExcellent";
    }
    else if (k == 9)
    {
        std::cout << "\nWell";
    }
    else if (k == 8 || k == 7)
    {
        std::cout << "\nSatisfactory";
    }
    else
        std::cout << "\nUnsatisfactory";
}
void program37()
{
    int n, a;
    std::cout << "\nThe program converts a natural number to the Roman numeral system";
    std::cout << "\nEnter a natural number from 1 to 3999: ";
    if (!(std::cin >> n))
    {
        std::cerr << "\nInput error!!!" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (n < 1 || n > 3999)
    {
        std::cerr << "\nInput error!!!" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (std::cin.peek() != '\n')
    {
        std::cerr << "\nInput error!!!" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    a = n;
    a = a / 1000;
    if (a > 0)
    {
        switch (a)
        {
        case 1: std::cout << "M"; break;
        case 2: std::cout << "MM"; break;
        case 3: std::cout << "MMM"; break;
        }
    }
    a = n;
    a = a / 100 % 10;
    if (a > 0)
    {
        switch (a)
        {
        case 1: std::cout << "C"; break;
        case 2: std::cout << "CC"; break;
        case 3: std::cout << "CCC"; break;
        case 4: std::cout << "CD"; break;
        case 5: std::cout << "D"; break;
        case 6: std::cout << "DC"; break;
        case 7: std::cout << "DCC"; break;
        case 8: std::cout << "DCCC"; break;
        case 9: std::cout << "CM"; break;
        }
    }
    a = n;
    a = a / 10 % 10;
    if (a > 0)
    {
        switch (a)
        {
        case 1: std::cout << "X"; break;
        case 2: std::cout << "XX"; break;
        case 3: std::cout << "XXX"; break;
        case 4: std::cout << "XL"; break;
        case 5: std::cout << "L"; break;
        case 6: std::cout << "LX"; break;
        case 7: std::cout << "LXX"; break;
        case 8: std::cout << "LXXX"; break;
        case 9: std::cout << "XC"; break;
        }
    }
    a = n;
    a = a % 10;
    if (a > 0)
    {
        switch (a)
        {
        case 1: std::cout << "I"; break;
        case 2: std::cout << "II"; break;
        case 3: std::cout << "III"; break;
        case 4: std::cout << "IV"; break;
        case 5: std::cout << "V"; break;
        case 6: std::cout << "VI"; break;
        case 7: std::cout << "VII"; break;
        case 8: std::cout << "VIII"; break;
        case 9: std::cout << "IX"; break;
        }
    }
}
void program38()
{
    std::cout << "\t|1 \t2 \t3 \t4 \t5 \t6 \t7 \t8 \t9 \t10";
    std::cout << "\n________|__________________________________________________________________________";
    std::cout << "\n";
    for (int i = 1; i <= 10; i++)
    {
        std::cout << i << "\t|";
        for (int j = 1; j <= 10; j++)
        {
            std::cout << i * j << "\t";
        }
        std::cout << "\n";
    }
    getchar();
}
void program39()
{
    double miles = 1, km = 1;
    int k;
    std::cout << "\nEnter k: ";
    if (!(std::cin >> k))
    {
        std::cerr << "\nInput error!!!" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (k < 1)
    {
        std::cerr << "\nInput error!!!" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (std::cin.peek() != '\n')
    {
        std::cerr << "\nInput error!!!" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    std::cout << "\n_______________________";
    std::cout << "\n|   miles    |    km   |";
    std::cout << "\n_______________________";
    for (int i = 1; i <= k; i++)
    {
        if (i / 1.6093 < miles)
        {
            std::cout << "\n" << i / 1.6093 << "\t" << i;
        }
        else
        {
            if (miles * 1.6093 <= k)
            {
                std::cout << "\n" << miles << "\t" << miles * 1.6093;
                if (i <= k)
                {
                    std::cout << "\n" << i / 1.6093 << "\t" << i;
                    miles++;
                }
            }
        }
    }
    getchar();
}


int main()
{
    int a = 1;
    do {
        //program30();
        //program31();
        //program32();
        //program33();
        //program34();
        //program35();
        //program36();
        //program37();
        //program38();
        program39();
        //std::cout << "\nOne more? (1 - yes, 0 - no): ";
        std::cout << '\n';
    } while (a == 1);
    return 0;
}