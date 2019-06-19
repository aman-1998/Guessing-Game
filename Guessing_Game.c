#include<stdio.h>
#include<stdlib.h>
int main()
{
    int random_no,guessed,a,b,count=1,ch;
    printf("Enter starting and ending no. ");
    scanf("%d %d",&a,&b);
    srand(time(NULL));
    random_no=a+(rand()%(b-a+1));
    while(1)
    {
        printf("Guess any no. between %d and %d : ",a,b);
        scanf("%d",&guessed);
        if(guessed==random_no)
        {
            printf("\nCongrats! You have guessed the correct answer in %d time\n",count);
            system("PAUSE");
            system("CLS");
            while(1)
            {
                printf("Enter:-\n1.To play again\n2.Exit\n");
                printf("Enter your choice: ");
                scanf("%d",&ch);
                if(ch==1)
                {
                    count=1;
                    random_no=a+(rand()%(b-a+1));
                    system("CLS");
                    break;
                }
                else if(ch!=2)
                {
                    printf("\nInvalid Choice\n");
                    system("PAUSE");
                    system("CLS");
                }
                else
                    exit(0);
            }

        }
        else if(guessed<random_no)
        {
            printf("\nOops! Wrong answer\nGuessed no. is less than the secret no.\n");
            count++;
        }
        else
        {
            printf("\nOops! Wrong answer\nGuessed no. is greater than the secret no.\n");
            count++;
        }
    }
}
