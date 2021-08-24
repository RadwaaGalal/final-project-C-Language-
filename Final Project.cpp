
#include<stdio.h>
#include<stdlib.h>
 
char Massage_array[50], character;
int count;
 
void getmessage()
{ 
      printf("Enter your Massage :\t");
      scanf("%[^\n]s", Massage_array);
}
 

 
void encryption()
{
      for(count = 0; Massage_array[count] != '\0'; count++)
      {
             character = Massage_array[count];
            if(character >= 'a' && character <= 'z')
            {
                  character = character + 5;
                  if(character > 'z')
                  {
                        character = character - 'z' + 'a' - 1;
                  }
                  Massage_array[count] = character;
            }
            else if(character >= 'A' && character <= 'Z')
            {
                  character = character + 5;
                  if(character > 'Z')
                  {
                        character = character - 'Z' + 'A' - 1;
                  }
                  Massage_array[count] = character;
            }
      }
      printf("\nEncrypted Message:\t%s\n", Massage_array);
}
 
void decryption()
{
      for(count = 0; Massage_array[count] != '\0'; count++)
      {
            character = Massage_array[count];
            if(character >= 'a' && character <= 'z')
            {
                  character = character - 5;
                  if(character < 'a')
                  {
                        character = character + 'z' - 'a' + 1;
                  }
                  Massage_array[count] = character;
            }
            else if(character >= 'A' && character <= 'Z')
            {
                  character = character - 5;
                  if(character < 'A')
                  {
                        character = character + 'Z' - 'A' + 1;
                  }
                  Massage_array[count] = character;
            }
      }
      printf("\nDecrypted Message:\t%s\n", Massage_array);
}
 
int main()
{
      int choice;
      getmessage();
      while(1)
      {
            printf("\n1. Encryption\n2. Decryption\n3. Exit\n");
            printf("\nEnter You Choice:\t");
            scanf("%d", &choice);
            switch(choice)
            {
                  case 1: encryption();
                          break;
                  case 2: decryption();
                          break;
                  case 3: exit(0);
                  default: printf("\nPlease select a correct option:\n");
            }
      }
      printf("\n");
      return 0;
  }
