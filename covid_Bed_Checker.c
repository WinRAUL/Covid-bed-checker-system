#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int choice,option,str[1000];
    char key[]="123";           //this key will be cross checked with user input
    while(1){
        printf("\t\t******************************************\n\t\tUttarakhand Covid Bed Availability Checker\n\t\t******************************************\n\t\t1:Check Beds Availibility\n\t\t2:Update Bed count Info(Authenticated person only)\n\t\t3:EXIT\n\t\t\tEnter Choice: ");
        scanf("%d",&choice);
    switch(choice){
        case 1: system("cls");
                printf("\t\tChoose district to check availability of bed...\n");
                do{
                printf("1>Almora\t2>Bageshwar\t3>Chamoli\t4>Champawat\n5>Dehradun\t6>Haridwar\t7>Nainital\t8>Pauri Garhwal\n9>Pithoragarh\t10>Rudraprayag\t11>Tehri Garhwal\t12>Udham Singh Nagar\n13>Uttarkashi\t\t0> EXIT\n\tEnter Option: ");
                scanf("%d",&option);
                FILE *fp=NULL;
                    switch(option){
                        case 0: system("cls");              break;
                        case 1: printf("\nAlmora");
                        fp=fopen("Almora.txt","r");         break;
                        case 2: printf("\nBageshwar");
                        fp=fopen("Bageshwar.txt","r");      break;
                        case 3: printf("\nChamoli");
                        fp=fopen("Chamoli.txt","r");        break;
                        case 4: printf("\nChampawat");
                        fp=fopen("Champawat.txt","r");      break;
                        case 5: printf("\nDehradun");
                        fp=fopen("Dehradun.txt","r");       break;
                        case 6: printf("\nHaridwar");
                        fp=fopen("Haridwar.txt","r");       break;
                        case 7: printf("\nNainital");
                        fp=fopen("Nainital.txt","r");       break;
                        case 8: printf("\nPauri Garhwal");
                        fp=fopen("Pauri Garhwal.txt","r");  break;
                        case 9: printf("\nPithoragarh");
                        fp=fopen("Pithoragarh.txt","r");        break;
                        case 10: printf("\nRudraprayag");
                        fp=fopen("Rudraprayag.txt","r");        break;
                        case 11: printf("\nTehri Garhwal");
                        fp=fopen("Tehri Garhwal.txt","r");      break;
                        case 12: printf("\nUdham Singh Nagar");
                        fp=fopen("Udham Singh Nagar.txt","r");  break;
                        case 13: printf("\nUttarkashi");
                        fp=fopen("Uttarkashi.txt","r");         break;
                        default: printf("\nInvalid Option(inside switch default)\n");
                    }
                    if(option!=0){
                        fscanf(fp,"%[^EOF]s",str);
                         printf("\n%s",str);
                         fclose(fp);
                    printf("\n\n");}
                }while(option!=0);
                break;
        case 2: system("cls");
                printf("Enter Authentiication key: \n");    char auth[10];    scanf("%s",&auth);     system("cls");
        if(strcmp(key,auth)==0){
                printf("Verified!.........Select district to edit data\n");
                do{
                printf("1>Almora\t2>Bageshwar\t3>Chamoli\t4>Champawat\n5>Dehradun\t6>Haridwar\t7>Nainital\t8>Pauri Garhwal\n9>Pithoragarh\t10>Rudraprayag\t11>Tehri Garhwal\t12>Udham Singh Nagar\n13>Uttarkashi\t\t0> EXIT\n\tEnter Option: ");
                scanf("%d",&option);
                FILE *fp=NULL;
                    switch(option){
                        case 0: system("cls");             break;
                        case 1: printf("\nAlmora");
                        fp=fopen("Almora.txt","w");        break;
                        case 2: printf("\nBageshwar");
                        fp=fopen("Bageshwar.txt","w");        break;
                        case 3: printf("\nChamoli");
                        fp=fopen("Chamoli.txt","w");        break;
                        case 4: printf("\nChampawat");
                        fp=fopen("Champawat.txt","w");        break;
                        case 5: printf("\nDehradun");
                        fp=fopen("Dehradun.txt","w");        break;
                        case 6: printf("\nHaridwar");
                        fp=fopen("Haridwar.txt","w");        break;
                        case 7: printf("\nNainital");
                        fp=fopen("Nainital.txt","w");        break;
                        case 8: printf("\nPauri Garhwal");
                        fp=fopen("Pauri Garhwal.txt","w");        break;
                        case 9: printf("\nPithoragarh");
                        fp=fopen("Pithoragarh.txt","w");        break;
                        case 10: printf("\nRudraprayag");
                        fp=fopen("Rudraprayag.txt","w");        break;
                        case 11: printf("\nTehri Garhwal");
                        fp=fopen("Tehri Garhwal.txt","w");        break;
                        case 12: printf("\nUdham Singh Nagar");
                        fp=fopen("Udham Singh Nagar.txt","w");        break;
                        case 13: printf("\nUttarkashi");
                        fp=fopen("Uttarkashi.txt","w");        break;
                        default: printf("\nInvalid Option(inside switch default)\n");        break;
                    }
                    if(option!=0){
                            char data[100];   printf("\nPress CTRL + C to stop writing......Enter New Data:\n\n");   scanf("%[^EOF]s",data);
                                fprintf(fp,data);
                        printf("\nData Entered Successfully!\n");
                        fclose(fp); printf("\n\n");}
                }while (option!=0);
        }else
            printf("\nAuthentication Revoked!! Invalid key\n\n");   break;

        case 3: system("cls");
                printf("Exited..."); exit(0);
        default: printf("Invalid input\n"); break;
    }}
}