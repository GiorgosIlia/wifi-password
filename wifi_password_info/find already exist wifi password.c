#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void find(char name[]);

int main()
{
    char name[100];

    printf("WiFi Password Finder\n");

    find(name);

    printf("\nYour WiFi information has been saved!\n");

    // Pause before exiting
    system("pause");
    return 0;
}

void find(char name[])
{
    char cmd[512];

    // Display available WiFi profiles
    system("netsh wlan show profile");

    printf("Please enter the name of the WiFi network: ");
    gets(name);

    while (strlen(name) == 0)
    {
        printf("\nPlease provide a valid network name: ");
        gets(name);
    }

    sprintf(cmd, "NETSH WLAN SHOW PROFILE \"%s\" KEY=CLEAR | clip", name);
    system(cmd);

    printf("\nRetrieving WiFi information for '%s'...\n", name);

    // Check if the clipboard contains data
    if (system("powershell -command Get-Clipboard > password_info.txt") == 0)
    {
        printf("Password information saved to 'password_info.txt'.\n");
    }
    else
    {
        printf("Failed to retrieve password information.\n");
    }
}
