//// Railway Reservation System :- By BHAVYA

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//Initializing variables and defining global variables

int sJpr=10,sMum=15,sChe=8,sPat=20,sKol=4;     // Total Number of seats available in respective trains ex.( Jpr = Jaipur )
int p =1;                                      // pnr initializing

struct pass{                                   // defining structure "pass" that contains passenger data
  char name[100];
  int tn;
  float charges;
} pa;

struct trains                                // defining structure "trains" that contains these variables
{
    int trno;
    char start[20];
    char stop[20];
    float fare;
}

//CREATING FILE THAT CONTAINS TRAIN DATA
s[5]={{1000,"Delhi","Jaipur",500.0},{1001,"Delhi","Mumbai",1000.0},{1002,"Delhi","Chennai",2000.0},{1003,"Delhi","Patna",1500.0},{1004,"Delhi","Kolkata",2500.0}};
  FILE *f1;
  FILE *f2;
    
//======================================Functions===============================//

//DETAILS OF ALL TRAIN AT ENQUIRY WINDOW
void enquiry(void);

//RESERVATION WINDOW 
void reserve(void);

//TICKET CANCELLATION
void cancel(void);

//CHARGES ACCORDING TO TRAINS
float charge(int,int);

//TICKET PRINTING
void ticket(char name[],int,int,float);

//TRAIN DATA
void train(int);

int main()
{
//LABELLING TRAINS DATA 
f1=fopen("Trains.txt","w");
if(f1==NULL)
{
    printf("Error");
    return 0;
}
fprintf(f1,"\tTrainno.");        // labelling file f1 that contains train data
fprintf(f1,"\tSource");
fprintf(f1,"\t\tDestination");
fprintf(f1,"\tCharge per person\n");
fclose(f1);
f1=fopen("Trains.txt","a");
int i;
for(i=0;i<5;i++)
fprintf(f1,"\n\t%d\t\t%s\t\t%s\t\t%.2f\n",s[i].trno,s[i].start,s[i].stop,s[i].fare);     // appending train data to file f1
fclose(f1);
    printf("\t\t====================================================\n");                   // welcome message for user
	printf("\t\t|                                                   |\n");
	printf("\t\t|        -----------------------------------        |\n");
	printf("\t\t|         RAILWAY TICKET RESERVATION SYSTEM         |\n");
	printf("\t\t|        -----------------------------------        |\n");
	printf("\t\t|              For Migrant Labourers                |\n");
	printf("\t\t|                                                   |\n");
	printf("\t\t|                                                   |\n");
	printf("\t\t|         ---------- DEVELOPED BY ----------        |\n");
	printf("\t\t|                  BHAVYA SHANDILYA                 |\n");
	printf("\t\t|                                                   |\n");
	printf("\t\t=====================================================\n\n\n");

// Creating menu driven enquiry, booking, cancellation windows
	start:
    printf("\n=================================\n");                   
	printf("    RAILWAY RESERVATION SYSTEM   ");
	printf("\n----------------------------------");
	printf("\n 1>>   ENQUIRY WINDOW ");
	printf("\n----------------------------------");
	printf("\n 2>>   BOOKING WINDOW ");
	printf("\n----------------------------------");
	printf("\n 3>>   CANCELLATION  ");
	printf("\n----------------------------------");
	printf("\n 4>>   EXIT     ");
	printf("\n==================================");
	printf("\n\n-->");
    int ch;
    printf("\nEnter your choice:  ");
    scanf("%d",&ch);
    
    // directing system to specific task according to user's choice
    switch(ch)
    {
        case 1:
        enquiry();
        break;
        case 2:
        reserve();
        break;
        case 3:
        cancel();
        break;
        case 4:
        return 0;
        default:
        printf("\nInvalid choice");
    }
    int opt;
        printf("\n\nPress 0 to go back to main menu: ");
        scanf("%d", &opt);
        if(opt == 0)
        goto start;
    return 0;
}

//======================== PROGRAMMING ALL THE FUNCTIONS ========================

//ENQUIRY FUNCTION
void enquiry(void)
{
    f1=fopen("Trains.txt","r");        // fetching trains data to be displayed on the screen
    char c;char sc[20],dc[20];
    while((c=fgetc(f1))!=EOF)
    printf("%c",c);
    go:
    printf("\n\nEnter source city: ");        // taking input from user for source city
    scanf("%s",sc);
    if((strcmp(sc,"Delhi"))==0||(strcmp(sc,"delhi"))==0)
    {
    	start:
        printf("\nEnter destination city: ");           // taking input for destination city and displaying number of seats left in that train
        scanf("%s",dc);
        if((strcmp(dc,"Jaipur"))==0||(strcmp(dc,"jaipur"))==0)
         printf("\nSeats available are : %d ",sJpr);
        else if((strcmp(dc,"Mumbai"))==0||(strcmp(dc,"mumbai"))==0)
         printf("\nSeats available are : %d ",sMum);
        else if((strcmp(dc,"Chennai"))==0||(strcmp(dc,"chennai"))==0)
         printf("\nSeats available are : %d ",sChe);
        else if((strcmp(dc,"Patna"))==0||(strcmp(dc,"patna"))==0)
          printf("\nSeats available are : %d ",sPat);
          else if((strcmp(dc,"Kolkata"))==0||(strcmp(dc,"kolkata"))==0)
           printf("\nSeats available are : %d ",sKol);
          else
          {
              printf("\n\ninvalid option\n");           // displaying invalid message
              goto start;
          }
    fclose(f1);

    }
	else
	{
		printf("\nNo trains available");
    goto go;
	}

}

//RESERVATION FUNCTION
void reserve(void)
{
    system("clear");
    f2=fopen("Tickets.txt","a");               // opening tickets.txt that will contain data of booked tickets
    int st;float charges;
    f1=fopen("Trains.txt","r");
    char c;char sc[20],dc[20];
    while((c=fgetc(f1))!=EOF)
    printf("%c",c);
    printf("\nPlease enter your name : ");        // Asking for name and train number
    scanf("%s",pa.name);
    st = 1;
    once:
    printf("\n\nEnter train no.");
    scanf("%d",&pa.tn);
    

    if(pa.tn==1000){              // decreasing number of seats left after reservation
    if(sJpr<=0){
      printf("\nNo seats availabale");
      return;
    }
  }
    if(pa.tn==1001){              // decreasing number of seats left after reservation
    if(sMum<=0){
      printf("\no seats availabale");
      return;
    }
  }
    if(pa.tn==1002){              // decreasing number of seats left after reservation
    if(sChe<=0){
      printf("\nNo seats availabale");
      return;
    }
  }
    if(pa.tn==1003){              // decreasing number of seats left after reservation
    if(sPat<=0){
      printf("\nNo seats availabale");
      return;
    }
  }
    if(pa.tn==1004){              // decreasing number of seats left after reservation
    if(sKol<=0){
      printf("\nNo seats availabale");
      return;
    }
  }
   
  if(pa.tn>=1000 && pa.tn<=1004)                  // printing ticket 
    {
        pa.charges=charge(pa.tn,st);
        ticket(pa.name,st,pa.tn,pa.charges);
    }
    else
    {
        printf("\nInvalid Train no. Please Enter again\n");
        goto once;

    }
    printf("\n\nPress '1' to confirm ticket : ");          // confirmation for ticket
    int cf;
    scanf("%d",&cf);
    if(cf==1)
{
    fprintf(f2,"\t%d\t\t\t%s\t\t\t%d\t\t\t%d\t\t\t%.2f\n",p,pa.name,pa.tn,st,pa.charges);
    p++;
    if(pa.tn==1000)              // decreasing number of seats left after reservation
    sJpr--;
    if(pa.tn==1001)
    sMum--;
    if(pa.tn==1002)
    sChe--;
    if(pa.tn==1003)
    sPat--;
    if(pa.tn==1004)
    sKol--;
    printf("\n=======================================");
    printf("\n\n     RESERVATION SUCCESSFUL       ");
    printf("\n---------------------------------------");
    printf("\n\n           THANK YOU              ");
    printf("\n---------------------------------------");
}
    else
    printf("\nReservation not done, ** press any key to go back to main menu **");

fclose(f2);
}

//CHARGES DEPENDING ON TRAINS AND NUMBER OF SEATS 
float charge(int tn,int st)
{
    if(tn==1000)                // charge depending on number of seats and train nu.
    return (500.0*st);
    if(tn==1001)
    return (1000.0*st);
    if(tn==1002)
    return (2000.0*st);
    if(tn==1003)
    return (1500.0*st);
    if(tn==1004)
    return (2500.0*st);
}

//TICKET PRINTING FUNCTION
void ticket(char name[],int st,int tn,float charges)            // printing tickets
{
    printf("\n====================================");
    printf("\n\n\t TICKET INFORMATION               ");
    printf("\n------------------------------------");
    printf("\nName\t\t\t : %s",name);
    printf("\nSeats Booked\t\t : %d",st);
    printf("\nTrain Number\t\t : %d",pa.tn);
    printf("\nSource City\t\t : Delhi");
    train(tn);
    printf("\nPNR Number\t\t : %d",p);
    printf("\nCharges\t\t\t : %f",pa.charges);
}

//TRAINS
void train(int tn)               // information of destination cities of respective trains
{
if(tn==1000)
printf("\nDestination City\t : Jaipur");
if(tn==1001)
printf("\nDestination City\t : Mumbai");
if(tn==1002)
printf("\nDestination City\t : Chennai");
if(tn==1003)
printf("\nDestination City\t : Patna");
if(tn==1004)
printf("\nDestination City\t : Kolkata");
}

//TICKET CANCELLATION FUNCTION
void cancel(void)
{
  char s[100];                                   // cancel function and variablles 
  int c_pnr = 1;
  int p_cancel;
  int tn;
  int st=1;
  f2=fopen("Tickets.txt","r+");
  if(f2==NULL)
  {
    printf("unable to open file\n");
  }
  on:
  printf("\nenter train number in which you want to cancel your ticket : ");
  scanf("%d",&tn);
  if ((tn>=1000) && (tn<=1004))               // checking for valid train number
  {
   ok:	
   printf("\nenter pnr no you want to cancel : ");
   scanf("%d",&p_cancel);
   if ((p_cancel>0) && (p_cancel<p))
   {
    FILE *f_cancel;
    f_cancel = fopen("temp.txt","w+");           // creating a temporary file 

    while(fgets(s,99,f2) != NULL)                 
   {                  
     if(c_pnr != p_cancel)
       fputs(s,f_cancel);
     else
       fprintf(f_cancel,"\t\t\t\tticket with pnr number : %d cancelled\t\t\t", p_cancel);
       c_pnr++;
   }
  
    remove("Tickets.txt");                  // removing old file and renaming new one.
    rename("temp.txt","Tickets.txt");

    fclose(f2);
    fclose(f_cancel);
    switch(tn)                       // increasing number of seats in repective train and displaying the refunded 50% amount.
   {
     case 1000:
     sJpr=sJpr+st;
     printf("your refund amount is 250 rupees\n");
     break;
     case 1001:
     sMum=sMum+st;
     printf("your refund amount is 500 rupees\n");
     break;
     case 1002:
     sChe=sChe+st;
     printf("your refund amount is 1000 rupees\n");
     break;
     case 1003:
     sPat=sPat+st;
     printf("your refund amount is 750 rupees\n");
     break;
     case 1004:
     sKol=sKol+st;
     printf("your refund amount is 1250 rupees\n");
     break;
     default:
     break;
   }

   printf("\nYour Ticket is cancelled successfully\n");                 // thank you 
   printf("\n------------THANK YOU----------------");
 }   
   else
   {
  	 printf("please enter a valid pnr\n");
  	 goto ok;
   }}
  else
  {
  	printf("please enter a valid train number\n");
  	goto on;
  }
}
  

