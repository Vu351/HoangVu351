#include <iostream>

int factorial(int num = 0) {
    if (num > 0)
    {
        for (int i = 1; i <= num; i++)
            num *= i;
    }
    else {
        return 0;
    }
}


void task_1()
{
    std::cout << "task 1\n";

    int num;
    std::cout << "Vvedite cifry: ";
    std::cin >> num;

    for (int i = 0; i <= num; i++) {
        for (int k = 0; k <= i; k++) {
            std::cout << k;
        }
        std::cout << '\n';
    }
    std::cout << '\n';
}

void task_2() {
    std::cout << "task 2\n";

    int n, k;
    std::cout << "Enter n%k: ";
    std::cin >> n >> k;

    if (k <= n) {
        std::cout << "Answer: " << float(factorial(n) / (factorial(n - k) * factorial(k))) << "\n\n";
    }
    else {
        std::cout << "N cant smaller than K\n\n";
    }

}

void task_3() {
    std::cout << "task 3\n";
    std::cout << "Enter number :";
    int symm = 0, num, sch = 0, check = 0;
    std::cin >> num;
    while (num != 0)
    {
        sch++;
        symm += num;
        do
        {
            std::cout << "\nstop press 0\ncontinue press 1\n";
            std::cin >> check;
            if (check == 0)
            {
                goto k;
            }
            else
            {
                std::cout << "Enter the next number :";
                std::cin >> num;
            }
        } while (check != 0 && check != 1);
    }
k:;
    std::cout << "Answer: " << double(symm) / sch << "\n\n";
}

int main() {
    int num;
    bool run = true;

    while (run) {
        std::cout << "Menu\n";
        std::cout << "choose the number of task: ";
        std::cin >> num;
        std::cout << "\n";

        switch (num)
        {
        case 1:
            task_1();
            break;

        case 2:
            task_2();
            break;

        case 3:
            task_3();
            break;

        case 4:
            run = false;
            break;
        }
    }
}

