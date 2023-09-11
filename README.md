# WiFi Password Finder

This C program allows you to retrieve and save WiFi information, including the password, for a specific network on your Windows computer. It utilizes the Windows command line utility `netsh` to display available WiFi profiles and retrieve the password for a selected network.

## How to Use

1. Compile and run the program.
2. The program will display a list of available WiFi profiles.
3. Enter the name of the WiFi network for which you want to retrieve the password. Make sure to enter the exact name from the list.

   **Note:** If the name contains spaces or special characters, ensure they are entered correctly.

4. The program will then fetch and display the WiFi profile details, including the password.

5. The WiFi profile details, including the password, will be saved in a file named `password_info.txt` in the same directory where the program is located.

## Code Explanation

- The `find` function is responsible for executing `netsh` commands to list WiFi profiles, retrieve the selected profile's password, and save it to a file.

- The `main` function initializes the necessary variables and calls the `find` function to fetch and save the WiFi information.

- After running the program, the WiFi profile details, including the password, will be saved in a file named `password_info.txt` in the same directory where the program is located.

## Important Notes

- Ensure that you run this program with appropriate permissions, as retrieving WiFi passwords may require administrative privileges on some systems.

- Use this program responsibly and only on networks for which you have the authorization to access the password.

- Be cautious when handling passwords and ensure that they are stored securely.

Feel free to use, modify, and distribute this program as needed for your WiFi management tasks.
