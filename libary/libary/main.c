#include <stdio.h>
#include <string.h>
#include <stdlib.h> // For system()

// Function prototypes
void showAboutMe();
void showPortfolio();
void listPhoneNumbers();
void listProjects();

// Main program
int main() {
    char input[50];

    printf("Welcome to Sourav Kaushik's Digital Library!\n");
    printf("Type 'help' to see the available options or 'exit' to quit.\n");

    while (1) {
        printf("\nEnter your query: ");
        scanf("%s", input);

        if (strcmp(input, "Sourav") == 0) {
            showAboutMe();
        } else if (strcmp(input, "portfolio") == 0) {
            showPortfolio();
        } else if (strcmp(input, "phone") == 0) {
            listPhoneNumbers();
        } else if (strcmp(input, "projects") == 0) {
            listProjects();
        } else if (strcmp(input, "help") == 0) {
            printf("Available commands:\n");
            printf("1. Sourav - Get details about Sourav Kaushik.\n");
            printf("2. portfolio - Show Sourav's professional portfolio.\n");
            printf("3. phone - List important contact numbers.\n");
            printf("4. projects - Display Sourav's project list.\n");
        } else if (strcmp(input, "exit") == 0) {
            printf("Exiting the system. Goodbye!\n");
            break;
        } else {
            printf("Invalid input. Type 'help' for options.\n");
        }
    }

    return 0;
}

// Function to display about me section
void showAboutMe() {
    printf("\nAbout Sourav Kaushik:\n");
    printf("Sourav Kaushik is a Certified Ethical Hacker (CEH) and Flutter Developer.\n");
    printf("He is passionate about cybersecurity, ethical hacking, and mobile app development.\n");
    printf("He is currently pursuing a Bachelor of Computer Applications (BCA) and works at Envor Studios.\n");
    printf("In addition, he researches modern IT advancements and reverse engineering.\n");
}

// Updated function to show the portfolio and redirect to your website
void showPortfolio() {
    printf("\nProfessional Portfolio:\n");
    printf("Position: Flutter App Developer, Ethical Hacker (CEH)\n");
    printf("Company: Envor Studios\n");
    printf("Current Projects: EPI UPI App, Wallhaven Wallpaper App, '10Bit One Zero Bit' Malware Project\n");
    printf("Skills: Flutter, C, Cybersecurity, Reverse Engineering, Vulnerability Assessment\n");
    printf("Certifications: CEH from EC-Council\n");
    printf("Other Research: AXV Modern File Storage, SARVOTTAM Vulnerability Report\n");
    
    // Redirecting to the website
    printf("\nVisit my full portfolio at: https://your-portfolio-website.com\n");
    printf("Opening your portfolio in the default browser...\n");

    #ifdef _WIN32
        system("start https://souravkaushik-dev.github.io/Portfolio/");
    #elif __APPLE__
        system("open https://souravkaushik-dev.github.io/Portfolio/");
    #elif __linux__
        system("xdg-open https://souravkaushik-dev.github.io/Portfolio/");
    #endif
}

// Function to list phone numbers
void listPhoneNumbers() {
    printf("\nContact Numbers:\n");
    printf("1. Professional Contact: 987-654-3210\n");
    printf("2. Office: 123-456-7890\n");
    printf("Note: Placeholder numbers for now.\n");
}

// Function to list types of projects
void listProjects() {
    printf("\nAvailable Projects:\n");
    printf("1. EPI UPI App - A fast and secure UPI app with a minimal UI.\n");
    printf("2. Wallhaven Wallpaper App - Integrating Wallhaven API for dynamic wallpaper selection.\n");
    printf("3. '10Bit One Zero Bit' Malware Project - A multi-stage malware project exploring network-to-network communication.\n");
    printf("4. EDOT (Exploration and Dissection of Technology) - Personal reverse engineering and security analysis project.\n");
}

