#include <stdio.h>

int calculateChecksum(int transactionID)
{
    int digitSum;

    if (transactionID < 10)
    {
        return transactionID;
    }

    digitSum = (transactionID % 10) + calculateChecksum(transactionID/ 10);

    if (digitSum < 10)
    {
        return digitSum;
    }

    return calculateChecksum(digitSum);
}

int main()
{
    int transactionID;

    printf("Enter transaction ID: ");
    scanf("%d", &transactionID);

    if (transactionID< 0)
    {
        transactionID = -transactionID;
    }

    printf("Checksum = %d\n", calculateChecksum(transactionID));

    return 0;
}
