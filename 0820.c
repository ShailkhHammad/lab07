#include <stdio.h>
int task01()
{
    int arr[5];
    int temp = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("\n enter a number: ");
        scanf("%d", &arr[i]);
    }

    temp = arr[4];
    for (int i = 3; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[0] = temp;

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}

int task02()
{
    int num[10];
    int numToFind, count = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("\nenter a number: ");
        scanf("%d", &num[i]);
    }

    printf("\n enter a num to find: ");
    scanf("%d", &numToFind);

    for (int i = 0; i < 10; i++)
    {
        if (numToFind == num[i])
        {
            count++;
        }
    }

    printf("the %d is found %d times ", numToFind, count);
    return 0;
}

int task03()
{

    int marks;
    int passStudents[10], failStudents[10];
    int passCount = 0, failCount = 0;
    int sumPass = 0, sumFail = 0;

    printf("Enter student marks one by one (enter -1 to stop):\n");

    while (1)
    {
        scanf("%d", &marks);

        if (marks == -1)
        {
            break;
        }

        if (marks >= 5)
        {
            passStudents[passCount++] = marks;
            sumPass += marks;
        }
        else
        {
            failStudents[failCount++] = marks;
            sumFail += marks;
        }
    }

    if (passCount > 0)
    {
        printf("Average marks of Pass Students: %.2f\n", (float)sumPass / passCount);
    }
    else
    {
        printf("No Pass Students.\n");
    }

    if (failCount > 0)
    {
        printf("Average marks of Fail Students: %.2f\n", (float)sumFail / failCount);
    }
    else
    {
        printf("No Fail Students.\n");
    }

    return 0;
}

int task05()
{
    int smallest = 1000, largest = 0;
    int num[10] = {0};
    for (int i = 0; i < 10; i++)
    {
        printf("\n  enter  number:");
        scanf("%d", &num[i]);
        if (num[i] < smallest)
        {
            smallest = num[i];
        }

        if (num[i] > largest)
        {
            largest = num[i];
        }
    }
}

int task07()
{
    int arr[10], dup[101] = {0};
    for (int i = 0; i < 10; i++)
    {
        printf("\n enter a number");
        scanf("%d", arr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (dup[arr[i]] == 0)
        {
            dup[arr[i]] = 1;
        }
        else
        {
            arr[i] = -1;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d", arr[i]);
    }
}
int main()
{

    task01();
    task02();
    task03();
    return 0;
}
