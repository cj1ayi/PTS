#include <stdio.h>

void mouseBattle(int rHP, int mATK) 
{
    int hits = 0;
    printf("Maushold used Population Bomb!\n");

    for (int i = mATK; i > 0 && hits < 10; i--) 
    {
        if (mATK % i == 0) 
        { // Check if 'i' is a factor
            rHP -= i;
            hits++;

            if (rHP < 0) rHP = 0;
            
            printf("It hit %d time(s)! The opposing Rattata has %d HP left.\n", hits, rHP);


            if (rHP <= 0) 
            {
                printf("The opposing Rattata has fainted!\n");
                return;
            }
        }
    }

    // If Rattata still has HP left after the loop
    if (rHP > 0) 
        printf("Uh oh, the Rattata still lives with %d HP!\n", rHP);
}

int main()
{
    int rHP, mATK;
    printf("Input Rattata's HP: ");
    scanf("%d", &rHP);
    printf("Input Maushold's ATK: ");
    scanf("%d", &mATK);

    mouseBattle(rHP, mATK);
    return 0;
}