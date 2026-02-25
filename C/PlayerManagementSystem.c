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
void searchName(Player *players, int *sizeAdd);
Player* removePlayer(Player *players, int *size);
Player* updatePlayer(Player *players, int *size);
Player* sort(Player *players, int *size, int flag);
Player* sortPlayers(Player *players, int *size);
void swap(Player *a, Player *b);
void topThree(Player *players, int *size);

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
        // scanf("%d", &choice);
        if(scanf("%d", &choice) != 1){
            printf("\nInvalid input! Enter a number only.\n");
            while(getchar() != '\n');  // clear buffer
            continue;
        }

        switch(choice){
            case 1:
                addPlayer(players, &size);
                break;

            case 2:
                removePlayer(players, &size);
                break;

            case 3:
                searchPlayer(players, &size);
                break;

            case 4:
                updatePlayer(players, &size);
                break;

            case 5:
                topThree(players, &size);
                break;

            case 6:
                sortPlayers(players, &size);
                break;

            case 7:
                displayAll(players, size);
                break;

            case 8:
                free(players);
                return;

            default:
                printf("\nInvalid choice!\n");
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
        char decision;
        printf("\n\nAre you sure you want to remove this player ? (y/n): ");
        scanf(" %c", &decision);
        if(decision == 'y'){
            printf("\nPlayer removed\n");
            for(int i=index; i<*size-1; i++){
                players[i] = players[i+1];
            }
            Player *temp = realloc(players, (*size - 1) * sizeof(Player));
            players = temp;
            (*size)--;
        } 
    }
    else
        printf("\nPlayer Not Found\n");
    return players;
}

Player* updatePlayer(Player *players, int *size){
    int index = searchJersey(players, size);
    if(playerExists(players,*size,players[index].jersy)){
        displayPlayer(players,index);
        int choice;
        while(1){
            printf("\nWhat do you want to update?");
            printf("\n1. Runs");
            printf("\n2. Wickets");
            printf("\n3. Matches");
            printf("\n4. <- Back");
            printf("\nEnter Choice: ");
            if(scanf("%d", &choice) != 1){
                printf("\nInvalid input! Enter a number only.\n");
                while(getchar() != '\n');  // clear buffer
                continue;
            }   
            switch(choice){
                case 1:
                    printf("\nEnter New Runs: ");
                    scanf("%d", &players[index].runs);
                    break;
                case 2:
                    printf("\nEnter New Wickets: ");
                    scanf("%d", &players[index].wickets);
                    break;
                case 3:
                    printf("\nEnter New Matches: ");
                    scanf("%d", &players[index].matches);
                    break;
                case 4: 
                    return players;
                default:
                    printf("\nInvalid Choice");
            }
        }
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
        if(scanf("%d", &choice) != 1){
            printf("\nInvalid input! Enter a number only.\n");
            while(getchar() != '\n');  // clear buffer
            continue;
        }
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
            searchName(players, sizeAdd);
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

void searchName(Player *players, int *sizeAdd){
    int pos = 0;
    char name[40];
    Player *results = malloc(*sizeAdd * sizeof(Player));
    printf("Enter Player Name: ");
    scanf(" %39[^\n]", name);
    for(int i=0; i<*sizeAdd; i++){
        if(strstr(players[i].name, name) != NULL){
            results[pos++] = players[i];
        }
    }
    if(pos > 0)
        displayAll(results, pos);
    else
        printf("\nPlayer Not found\n");
    free(results);
}

Player* sortPlayers(Player *players, int *size){
    while(1){
        int choice;
        printf("\nSort By");
        printf("\n1. Runs");
        printf("\n2. Wickets");
        printf("\n3. Matches");
        printf("\n4. <- Back");
        printf("\nEnter choice: ");
        if(scanf("%d", &choice) != 1){  //Check for int input
            printf("\nInvalid input! Enter a number only.\n");
            while(getchar() != '\n');  // clear buffer
            continue;
        }

        switch(choice){
            case 1:{
                Player *res = sort(players, size, 1);
                displayAll(res,*size);
                break;
            }
            case 2:{
                Player *res = sort(players, size, 2);
                displayAll(res,*size);
                break;
            }
            case 3:{
                Player *res = sort(players, size, 3);
                displayAll(res,*size);
                break;
            }
            case 4:
                return players;
            default:
                printf("\nInvalid Choice\n");
        }
    }
}

Player* sort(Player *players, int *size, int flag){
    Player *result = malloc(*size * sizeof(Player));
    result = players;
    int choice;
    printf("\nOrder: ");
    printf("\n1. Ascending");
    printf("\n2. Descending");
    printf("\nEnter choice: ");
        if(scanf("%d", &choice) != 1){  //Check for int input
            printf("\nInvalid input! Enter a number only.\n");
            while(getchar() != '\n');  // clear buffer
        }
    for(int i=0; i<*size; i++){
        for(int j=i+1; j<*size; j++){
            if(choice == 1){
                switch(flag){
                case 1:
                    if(result[i].runs>result[j].runs)
                        swap(&result[i], &result[j]);
                    break;
                case 2:
                    if(result[i].wickets>result[j].wickets)
                        swap(&result[i], &result[j]);
                    break;
                case 3:
                    if(result[i].matches>result[j].matches)
                        swap(&result[i], &result[j]);
                    break;
                }
            }
            else{
                switch(flag){
                case 1:
                    if(result[i].runs<result[j].runs)
                        swap(&result[i], &result[j]);
                    break;
                case 2:
                    if(result[i].wickets<result[j].wickets)
                        swap(&result[i], &result[j]);
                    break;
                case 3:
                    if(result[i].matches<result[j].matches)
                        swap(&result[i], &result[j]);
                    break;
                }
            }
        }
    }
    return result;
    free(result);
}

void swap(Player *a, Player *b){
    Player temp = *a;
    *a = *b;
    *b = temp;
}

void topThree(Player *players, int *size){
    while(1){
        int choice;
        printf("\nTop 3 By");
        printf("\n1. Runs");
        printf("\n2. Wickets");
        printf("\n3. Matches");
        printf("\n4. <- Back");
        printf("\nEnter choice: ");
        if(scanf("%d", &choice) != 1){  //Check for int input
            printf("\nInvalid input! Enter a number only.\n");
            while(getchar() != '\n');  // clear buffer
            continue;
        }

        switch(choice){
            case 1:{
                Player *res = sort(players, size, 1);
                displayAll(res,3);
                break;
            }
            case 2:{
                Player *res = sort(players, size, 2);
                displayAll(res,3);
                break;
            }
            case 3:{
                Player *res = sort(players, size, 3);
                displayAll(res,3);
                break;
            }
            case 4:
                return;
            default:
                printf("\nInvalid Choice\n");
        }
    }
}

void displayPlayer(Player *players, int index){

    printf("\n================================================================================\n");
    printf("| %-8s | %-20s | %-8s | %-8s | %-8s |\n",
           "Jersey", "Name", "Runs", "Wickets", "Matches");
    printf("================================================================================\n");

    printf("| %-8d | %-20s | %-8d | %-8d | %-8d |\n",
           players[index].jersy,
           players[index].name,
           players[index].runs,
           players[index].wickets,
           players[index].matches);

    printf("================================================================================\n");
}


void displayAll(Player *players, int size){

    if(size == 0){
        printf("\nNo players available.\n");
        return;
    }

    printf("\n================================================================================\n");
    printf("| %-8s | %-20s | %-8s | %-8s | %-8s |\n",
           "Jersey", "Name", "Runs", "Wickets", "Matches");
    printf("================================================================================\n");

    for(int i = 0; i < size; i++){
        printf("| %-8d | %-20s | %-8d | %-8d | %-8d |\n",
               players[i].jersy,
               players[i].name,
               players[i].runs,
               players[i].wickets,
               players[i].matches);
    }

    printf("================================================================================\n");
}


void prefetch(Player *players){

    players[0] = (Player){18,"Virat Kohli",12898,4,274};
    players[1] = (Player){45,"Rohit Sharma",10709,8,243};
    players[2] = (Player){7,"MS Dhoni",10599,1,350};
    players[3] = (Player){10,"Sachin Tendulkar",18426,154,463};
    players[4] = (Player){33,"Hardik Pandya",1769,73,86};
}