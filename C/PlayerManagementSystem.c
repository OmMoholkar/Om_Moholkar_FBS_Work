#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Player{
    int jersy;
    char name[40];
    int runs;
    int wickets;
    int matches;
} Player;

void prefetch(Player *players);
void displayAll(Player *players, int size);
Player* addPlayer(Player *players, int *size);
void searchPlayer(Player *players, int *size);
int searchJersey(Player* players, int *size);
void displayPlayer(Player *players, int index);
int playerExists(Player *players, int size, int jersy);
int* searchName(Player *players, int *sizeAdd);
Player* removePlayer(Player *players, int *size);

void main(){

    int size = 5;
    Player *players = malloc(size * sizeof(Player));

    if(players == NULL){
        printf("Initial memory allocation failed!\n");
        return;
    }

    prefetch(players);

    while(1){
        int choice;

        printf("\n1. Add Player");
        printf("\n2. Remove Player");
        printf("\n3. Search Player");
        printf("\n4. Update Player");
        printf("\n5. Display Top 3 Players");
        printf("\n6. Display Sorted Players");
        printf("\n7. Display All Players");
        printf("\n8. Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                players = addPlayer(players, &size);
                break;

            case 2:
                removePlayer(players, &size);
                break;

            case 3:
                searchPlayer(players, &size);
                break;

            case 4:
                // updatePlayer();
                break;

            case 5:
                // topThree();
                break;

            case 6:
                // sortPlayers();
                break;

            case 7:
                displayAll(players, size);
                break;

            case 8:
                free(players);
                return;

            default:
                printf("Invalid choice!\n");
        }
    }
}

Player* addPlayer(Player *players, int *sizeAdd){

    int jersy;
    printf("\nEnter Jersey Number: ");
    scanf("%d", &jersy);

    if(playerExists(players, *sizeAdd, jersy)){  //allows only unique players to be added
        printf("\nPlayer already exist\n");
        return players;
    }

    Player *temp = realloc(players, (*sizeAdd + 1) * sizeof(Player));
    if(temp == NULL){
        printf("Memory reallocation failed!\n");
        return players;
    }

    players = temp;
    players[*sizeAdd].jersy = jersy;
    
    printf("Enter Player Name: ");
    // scanf("%s", players[*size].name);
    scanf(" %39[^\n]", players[*sizeAdd].name);  // created custom format spcifier for Full Names.
    printf("Enter Runs: ");
    scanf("%d", &players[*sizeAdd].runs);
    printf("Enter Wickets: ");
    scanf("%d", &players[*sizeAdd].wickets);
    printf("Enter Matches: ");
    scanf("%d", &players[*sizeAdd].matches);

    (*sizeAdd)++;

    return players;
}

int playerExists(Player *players, int size, int jersy){ //checks for uniqueness of jersy number
    for(int i=0; i<size; i++){
        if(players[i].jersy==jersy)
            return 1;
    }
    return 0;
}

Player* removePlayer(Player *players, int *size){
    int index = searchJersey(players, size);
    if(playerExists(players,*size,players[index].jersy)){
        displayPlayer(players,index);
        printf("\nPlayer removed\n");
        for(int i=index; i<*size-1; i++){
            players[i] = players[i+1];
        }
        Player *temp = realloc(players, (*size - 1) * sizeof(Player));
        players = temp;
        (*size)--;
    }
    else
        printf("\nPlayer Not Found\n");
    return players;
}

void searchPlayer(Player *players, int *sizeAdd){
    while(1){
        int choice;
        printf("\nSearch By: ");
        printf("\n1. Jesrey No ");
        printf("\n2. Name ");  
        printf("\n3. <- Back ");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);
        int index = -1;
        switch (choice)
        {
        case 1:{
            index = searchJersey(players, sizeAdd);
            if(index!=-1)
                displayPlayer(players, index);
            else
                printf("\nPlayer Not Found\n");
            break;
        }
        case 2:{
            int* results = searchName(players, sizeAdd);
            if(results[0]!=-1){
                int i=0;
                while(results[i]!=-1){
                    displayPlayer(players, results[i]);
                    i++;
                }
            }
            else
                printf("\nPlayer Not found\n");
            break;
        }
        case 3:
            return;
        default:
            printf("\nInvalid choice!\n");
        }
    }
}

int searchJersey(Player* players, int *sizeAdd){
    int jersyNo;
    printf("\nEnter Jersy Number: ");
    scanf("%d", &jersyNo);
    for(int i=0; i<*sizeAdd; i++){
        if(players[i].jersy==jersyNo)
            return i;
    }
    return -1;
}

int* searchName(Player *players, int *sizeAdd){
    int* results = malloc(*sizeAdd * sizeof(int));
    int pos = 0;
    char name[40];
    printf("Enter Player Name: ");
    scanf(" %39[^\n]", name);
    for(int i=0; i<*sizeAdd; i++){
        if(strstr(players[i].name, name) != NULL){
            results[pos++] = i;
        }
    }
    results[pos] = -1;
    return results;
}

// make new array for sorted players and use displayAll to print them.

void displayPlayer(Player *players, int index){  
    printf("\n------------------------");
    printf("\nJersey  : %d", players[index].jersy);
    printf("\nName    : %s", players[index].name);
    printf("\nRuns    : %d", players[index].runs);
    printf("\nWickets : %d", players[index].wickets);
    printf("\nMatches : %d\n", players[index].matches);
}

void displayAll(Player *players, int size){  //Change this into tabular form

    if(size == 0){
        printf("No players available.\n");
        return;
    }

    for(int i = 0; i < size; i++){
        printf("\n------------------------");
        printf("\nJersey  : %d", players[i].jersy);
        printf("\nName    : %s", players[i].name);
        printf("\nRuns    : %d", players[i].runs);
        printf("\nWickets : %d", players[i].wickets);
        printf("\nMatches : %d\n", players[i].matches);
    }
}

void prefetch(Player *players){

    players[0] = (Player){18,"Virat Kohli",12898,4,274};
    players[1] = (Player){45,"Rohit Sharma",10709,8,243};
    players[2] = (Player){7,"MS Dhoni",10599,1,350};
    players[3] = (Player){10,"Sachin Tendulkar",18426,154,463};
    players[4] = (Player){33,"Hardik Pandya",1769,73,86};
}