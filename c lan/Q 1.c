# include <stdio.h>

int main(){

  int month;

   printf("Give a number : ");

   scanf("%d",&month);

   switch(month){

    case 1:

        printf("january");
        break;

    case 2:

        printf("february");
        break;

    case 3:

        printf("march");
        break;

    case 4:

        printf("april");
        break;

    case 5:

        printf("may");
        break;

    case 6:

        printf("jun");
        break;

    case 7:

        printf("july");
        break;

    case 8:

        printf("august");
        break;

    case 9:

        printf("september");
        break;

    case 10:

        printf("october");
        break;

    case 11:

        printf("november");
        break;

    case 12:

        printf("december");
        break;



    default:
        printf("No month found");

   }

return 0;

}

