//attempt1
#include "simpio.h"
#include "stdio.h"
#include "genlib.h"
#include <stdlib.h>




char find(char cmd[],char name[]);

int main()
{
    char cmd[512];
    char name[100];


    char response[3];
    find(cmd,name);


printf("\nYour WiFi information saved !\n");

system("pause");
}

char find(char cmd[],char name[])
{

    system("netsh wlan show profile");
    printf("please enter one wifi name from above : ");
    gets(name);


   while (strlen(name) == 0)
        {
            printf("\nPlease give a name: ");
            gets(name);
        }
   if(strlen(name) != 0)
   {
        sprintf(cmd,"NETSH WLAN SHOW PROFILE \"%s\" KEY=CLEAR ",name);
        system(cmd);
        sprintf(cmd,"NETSH WLAN SHOW PROFILE \"%s\" KEY=CLEAR |clip",name);
        system(cmd);
        system("powershell -command Get-Clipboard > password_info.txt");
   }

}
