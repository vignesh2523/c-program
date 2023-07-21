#include <stdio.h>
#include <stdlib.h>

void findTheWinnerOfTheSlidesAndLadders(int numberOfPlayers, char playersList[], char startingPlayer, int diceCount, int diceValues[]) {
    int num_cells = 25;
    int playerPositions[numberOfPlayers];
    for (int i = 0; i < numberOfPlayers; i++) {
        playerPositions[i] = 0;
    }

    // Assign starting player index
    int startingPlayerIndex = -1;
    for (int i = 0; i < numberOfPlayers; i++) {
        if (playersList[i] == startingPlayer) {
            startingPlayerIndex = i;
            break;
        }
    }

    int currentPlayerIndex = startingPlayerIndex;
    while (1) {
        // Get the current player's position
        int currentPosition = playerPositions[currentPlayerIndex];

        // Roll the dice
        int diceValue = diceValues[--diceCount];

        // Check if the player is idle
        if (currentPosition >= num_cells) {
            break;
        }

        // Move the player forward based on the dice value
        if (diceValue == 1 || diceValue == 5) {
            playerPositions[currentPlayerIndex] += diceValue;
        } else {
            currentPlayerIndex = (currentPlayerIndex + 1) % numberOfPlayers;
        }

        // Check if the player's position exceeds the board limit
        if (playerPositions[currentPlayerIndex] > num_cells) {
            playerPositions[currentPlayerIndex] = num_cells;
        }

        // Check for slide or ladder positions
        switch (playerPositions[currentPlayerIndex]) {
            case 3: playerPositions[currentPlayerIndex] = 22; break;   // Slide from 3 to 22
            case 5: playerPositions[currentPlayerIndex] = 8; break;    // Ladder from 5 to 8
            case 11: playerPositions[currentPlayerIndex] = 26; break;  // Slide from 11 to 26
            case 17: playerPositions[currentPlayerIndex] = 4; break;   // Slide from 17 to 4
            case 19: playerPositions[currentPlayerIndex] = 7; break;   // Ladder from 19 to 7
            case 20: playerPositions[currentPlayerIndex] = 28; break;  // Slide from 20 to 28
            case 21: playerPositions[currentPlayerIndex] = 9; break;   // Slide from 21 to 9
            case 27: playerPositions[currentPlayerIndex] = 1; break;   // Slide from 27 to 1
        }

        // Move to the next player if the dice count is zero
        if (diceCount == 0) {
            currentPlayerIndex = (currentPlayerIndex + 1) % numberOfPlayers;
        }
    }

    // Determine the loser based on the player positions
    int loserIndex = 0;
    int minPosition = playerPositions[0];
    for (int i = 1; i < numberOfPlayers; i++) {
        if (playerPositions[i] < minPosition) {
            minPosition = playerPositions[i];
            loserIndex = i;
        }
    }

    printf("Loser of the game: %c\n", playersList[loserIndex]);
}

int main() {
    int numberOfPlayers, diceCount;
    char startingPlayer;
    scanf("%d", &numberOfPlayers);
    char playersList[numberOfPlayers];
    for (int i = 0; i < numberOfPlayers; i++) {
        scanf(" %c", &playersList[i]);
    }

    scanf(" %c", &startingPlayer);
    scanf("%d", &diceCount);
    int diceValues[diceCount];
    for (int i = 0; i < diceCount; i++) {
        scanf("%d", &diceValues[i]);
    }

    findTheWinnerOfTheSlidesAndLadders(numberOfPlayers, playersList, startingPlayer, diceCount, diceValues);

    return 0;
}
