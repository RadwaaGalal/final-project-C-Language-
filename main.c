#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//function Encryption using ASCII code
void Encryption(char message_array [])
{
    int i=0;
    for(i =0 ; (i<100 && message_array[i]!='\0') ; i++)
    {
        message_array[i] = message_array[i] + 3;
    }
    printf("\nEncrypted message is: %s\n", message_array);

}
//function Decryption using ASCII code
void Decryption(char message_array [])
{
    int i=0;
    for(i =0 ; (i<100 && message_array[i]!='\0') ; i++)
    {
        message_array[i] = message_array[i] - 3;
    }
    printf("\nDecrypted message is: %s\n", message_array);
}
////choose what do you want to do with string which you entered
int print_menue()
{
  int option;
  printf("\nPlease choose what do you want to do\n\n");
  printf("Choose [1] to Encryption message array\n");
  printf("Choose [2] to Decryption message array\n");
  printf("Choose [0] to Exit from the program\n");
  scanf("%d", &option);
  return option;
}
int main()
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
          Encryption(message_array);
      }
      else if(option == 2)
      {
          Decryption(message_array);
      }
  }

}
