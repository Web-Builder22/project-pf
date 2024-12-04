#include<stdio.h>

int main() {
    int total_voters;
    
    // Friendly welcome message
    printf("\n\t\tWelcome to the Electronic Voting System!\n");
    printf("--------------------------------------------------------------\n\n");
    printf("Your voice matters! Let's decide the best programming language.\n");
    printf("--------------------------------------------------------------\n\n");

    // Get the total number of voters
    printf("Enter the total number of voters: ");
    scanf("%d", &total_voters);

    // Variables to store vote counts
    int cpp_votes = 0, c_votes = 0, python_votes = 0, php_votes = 0;

    int vote; // Variable to hold the user's choice
    for (int i = 1; i <= total_voters; i++) {
        // Prompt for each voter's choice
        printf("\nVoter %d, please choose from the options below:\n", i);
        printf("1. C++\n2. C\n3. Python\n4. PHP\nYour choice: ");
        scanf("%d", &vote);

        // Process the vote
        switch (vote) {
            case 1:
                cpp_votes++;
                printf("You voted for C++! Great choice!\n");
                break;
            case 2:
                c_votes++;
                printf("You voted for C! A classic!\n");
                break;
            case 3:
                python_votes++;
                printf("You voted for Python! Popular pick!\n");
                break;
            case 4:
                php_votes++;
                printf("You voted for PHP! Old but gold!\n");
                break;
            default:
                printf("Invalid vote. Please enter a number between 1 and 4.\n");
                i--; // Repeat the vote for invalid input
                break;
        }
    }

    // Calculate percentages
    float cpp_percentage = (float)cpp_votes / total_voters * 100;
    float c_percentage = (float)c_votes / total_voters * 100;
    float python_percentage = (float)python_votes / total_voters * 100;
    float php_percentage = (float)php_votes / total_voters * 100;

    // Display the results
    printf("\n\nElection Results:\n");
    printf("--------------------------------------------------------------\n");
    printf("C++: %.2f%% of votes (%d votes)\n", cpp_percentage, cpp_votes);
    printf("C: %.2f%% of votes (%d votes)\n", c_percentage, c_votes);
    printf("Python: %.2f%% of votes (%d votes)\n", python_percentage, python_votes);
    printf("PHP: %.2f%% of votes (%d votes)\n", php_percentage, php_votes);
    printf("--------------------------------------------------------------\n");

    // Closing message
    printf("Thank you for participating in this voting process!\n");
    printf("Your choice will help shape the programming community. Goodbye!\n");

    return 0;
}
