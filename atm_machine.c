#include <stdio.h>

unsigned long amount = 1500, deposit, withdraw;
int option, pincode, A, pin;
char transaction = 'y';    //made by Talha

void main()
{     printf("FIRST YOU HAVE TO SET PIN NUMBER FOR YOUR ACCOUNT: \n");
      scanf("%d", &pin);

  while (pincode != pin)
  {

    printf("ENTER YOUR SECRET ACCOUNT PIN NUMBER:");

    scanf("%d", & pincode);

    if (pincode != pin)

      printf("  YOUR PASSWORD IS WRONG ! \n PLEASE ENTER VALID PASSWORD! \a\n");
  }

  do

  {

    printf("\n###########--Welcome to our PADMA Bank ATM Service--###########\n");

    printf("1. Check Your Balance \n");

    printf("2. Withdraw Your Balance\n");

    printf("3. Deposit Your  Balance\n");

    printf("4. Now  Quit\n");

    printf("###########################################################\n\n");

    printf("Enter your option : ");

    scanf("%d", & option);

    switch (option)
    {

    case 1:

      printf("\n YOUR BALANCE IS RIGHT NOW TK : %lu ", amount);

      break;

    case 2:

      printf("\n ENTER THE BALANCE TO WITHDRAW: ");

      scanf("%lu", & withdraw);

      if (withdraw % 100 != 0)

      {

        printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");

      } else if (withdraw > (amount - 500))
      {

        printf("\n INSUFFICENT BALANCE ! PLEASE PUT BALANE ON YOUR ACCOUNT AND TRY AGAIN");
      } else

      {

        amount = amount - withdraw;

        printf("\n\n PLEASE COLLECT CASH");

        printf("\n YOUR CURRENT BALANCE IS %lu", amount);
      }

      break;

    case 3:

      printf("\n ENTER THE AMOUNT TO DEPOSIT THE BALANCE");

      scanf("%lu", & deposit);

      amount = amount + deposit;

      printf("YOUR BALANCE IS %lu", amount);

      break;

    case 4:

      printf("\n THANK YOU MUCH FOR USING PADMA  Bank ATM");

      break;

    default:

      printf("\n OPPS! INVALID CHOICE");
    }

    printf("\n\n\n Would YOU Like TO HAVE ANOTHER TRANSCATION?(y/n): \n");

    fflush(stdin);

    scanf("%c", & transaction);

    if (transaction == 'n' || transaction == 'N')

      A = 1;

  } while (!A);

  printf("\n\n THANKS FOR USING PADMA Bank ATM SERVICE");

}

