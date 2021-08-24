#include <stdio.h>
#include <string.h>

// Function to encrypt the string
void encrypt(char message_array[])
{
    char if_even = '$', if_odd = '@';
    int repeat, ascii ,i,j;

    for (i = 0; (i<100 && message_array[i]!='\0') ; i++) {
        ascii = message_array[i];
        if(ascii >= 97)
        {
            repeat = ascii - 96;
        }
        else
        {
            repeat = ascii - 64;
        }

        for (j = 0; j < repeat; j++) {
            if (i % 2 == 0)
                printf("%c", if_odd);
            else
                printf("%c", if_even);
        }
    }
}
void decrypt(char message_array[])
{
    char if_even = '$', if_odd = '@';
    int repeat, ascii ,i,j;

    for (i = 0; (i<100 && message_array[i]!='\0'); i++) {
        ascii = message_array[i];
        if(ascii >= 97)
        {
            repeat = ascii - 96;
        }
        else
        {
            repeat = ascii - 64;
        }
        if (i % 2 == 0)
            printf("%c", message_array[i]);
        else
            printf("%c", message_array[i]);
        }
}
////choose what do you want to do with string which you entered
int print_menue()
{
  int option;
  printf("\n\nPlease choose what do you want to do\n\n");
  printf("Choose [1] to Encryption message array\n");
  printf("Choose [2] to Decryption message array\n");
  printf("Choose [0] to Exit from the program\n");
  scanf("%d", &option);
  return option;
}
void main()
{
  char message_array [100];
  int option = -1;
  printf("Please enter message array: ");
  gets(message_array);



//choose what do you want to do with string which you entered
  while(option!=0)
  {
      option = print_menue();
      if(option == 1)
      {
          encrypt(message_array);
      }
      else if(option == 2)
      {
          decrypt(message_array);
      }
      else if(option == 0)
      {
          printf("Exit");
      }
      else
      {
          printf("\nEnter correct option\n");
      }
  }

}


