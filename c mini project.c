

#include<stdio.h>
int ret=1050;
void clearScreen() {
    printf("\033[2J\033[1;1H");
}


void displaymenu(){
    printf("\n\t\t\t\t\t\t\t* * * * * * * * * * *\n");
    printf("\t\t\t\t\t\t\t* Skyster Aerospace *\n");
    printf("\t\t\t\t\t\t\t* * * * * * * * * * *\n\n");
    printf("\t 1.Flight details\n");
    printf("\t 2.Reservation\n");
    printf("\t 3.Cancellation\n");
}


void reservation(){
    clearScreen();
    char name[20];
    int age;
    int passnum;
    int mobnum;
    int Aadnum;
    char add[100];
    printf("Enter Passport details\n");
    printf("Enter your name: ");
    scanf(" %[^\n]s",&name);
    printf("Enter your age:");
    scanf("%d",&age);
    printf("Enter your Passport number:");
    scanf("%d",&passnum);
    printf("Enter your mobile number:");
    scanf("%d",&mobnum);
    printf("Enter your Aadhar number:");
    scanf("%d",&Aadnum);
}



int delhi()
{
    clearScreen();
  printf("\nFlight timing available to our Delhi airport is :\n ");
  printf("Enter the month number you want to travel in flight:");
  int month;
  scanf("%d",&month);
  int date;
  switch(month)
  {
  case 1:
      printf("The timing of flight available available to this airport is\n");
      printf("\t\t Time  \t\t Flight \n");
      printf("\t\t01-01-2023 \t AirAsia\n");
      printf("\t\t03-01-2023 \t Indigo\n");
      printf("\t\t05-01-2023 \t GoFirst\n");
      printf("\t\t08-01-2023 \t SpiceJet\n");
      printf("\t\t10-01-2023 \t AirIndiaExpress\n");
      printf("\t\t13-01-2023 \t AirAsia\n");
      printf("\t\t16-01-2023 \t JetAirways\n");
      printf("\t\t19-01-2023 \t GoAir\n");
      printf("\t\t21-01-2023 \t GoFirst\n");
      printf("\t\t26-01-2023 \t JetAirways\n");
      printf("\t\t29-01-2023 \t SpiceJet\n\n\n");
      printf("Enter the date you want to travel in flight:");
      scanf("%d",&date);
      if (date==1||date==13)
      {
          printf("You choosed AirAsia Flight\n");
          printf("The class of flight available in this date is:\n");
          printf("\t\t  First Class\n");
          printf("\t\t  Business Class\n");
          printf("\t\t  Economy Class\n");
          printf("Did you want to book the tickets in this day : press 1 for 'yes' 0 for'no'\n");
          int possibilty;
          scanf("%d",&possibilty);
          if(possibilty==1)
          {
              return possibilty;
          }
          else
          {
               return ret;
          }
      }
      else if(date==3)
      {
          printf("You choosed Indigo Flight\n");
          printf("The class of flight available in this date is:\n");
          printf("\t\t  Business Class\n");
          printf("\t\t  Premium Economy Class\n");
          printf("\t\t  Economy Class\n");
          printf("Did you want to book the tickets in this day : press 1 for 'yes' 0 for'no'\n");
          int possibilty;
          scanf("%d",&possibilty);
          if(possibilty==1)
          {
              return possibilty;
          }
          else
          {
               return ret;
          }
      }
      else if(date==5||date==21)
      {
          printf("You choosed GoFirst Flight\n");
          printf("The class of flight available in this date is:\n");
          printf("\t\t  First Class\n");
          printf("\t\t  Business Class\n");
          printf("\t\t  Premium Economy Class\n");
          printf("Did you want to book the tickets in this day : press 1 for 'yes' 0 for'no'\n");
          int possibilty;
          scanf("%d",&possibilty);
          if(possibilty==1)
          {
              return possibilty;
          }
          else
          {
               return ret;
          }
      }
      else if(date==8||date==29)
      {
          printf("You choosed SpiceJet Flight\n");
          printf("The class of flight available in this date is:\n");
          printf("\t\t  First Class\n");
          printf("\t\t  Premium Economy Class\n");
          printf("\t\t  Economy Class\n");
          printf("Did you want to book the tickets in this day : press 1 for 'yes' 0 for'no'\n");
          int possibilty;
          scanf("%d",&possibilty);
          if(possibilty==1)
          {
              return possibilty;
          }
          else
          {
               return ret;
          }
      }
      else if(date==10)
      {
          printf("You choosed AirIndiaExpress Flight\n");
          printf("The class of flight available in this date is:\n");
          printf("\t\t First Class\n");
          printf("\t\t  Business Class\n");
          printf("\t\t  Economy Class\n");
          printf("Did you want to book the tickets in this day : press 1 for 'yes' 0 for'no'\n");
          int possibilty;
          scanf("%d",&possibilty);
          if(possibilty==1)
          {
              return possibilty;
          }
          else
          {
               return ret;
          }
      }
      else if(date==16||date==26)
      {
          printf("You choosed JetAirways Flight\n");
          printf("The class of flight available in this date is:\n");
          printf("\t\t  First Class\n");
          printf("\t\t  Business Class\n");
          printf("\t\t  Premium Economy Class\n");
          printf("Did you want to book the tickets in this day : press 1 for 'yes' 0 for'no'\n");
          int possibilty;
          scanf("%d",&possibilty);
          if(possibilty==1)
          {
              return possibilty;
          }
          else
          {

               return ret;
          }
      }
      else if(date==19)
      {
          printf("You choosed GoAir Flight\n");
          printf("The class of flight available in this date is:\n");
          printf("\t\t First Class\n");
          printf("\t\t  Business Class\n");
          printf("\t\t  Economy Class\n");
          printf("Did you want to book the tickets in this day : press 1 for 'yes' 0 for'no'\n");
          int possibilty;
          scanf("%d",&possibilty);
          if(possibilty==1)
          {
              return possibilty;
          }
          else
          {

               return ret;
          }
      }
      break;


  case 2:
      printf("The timing of flight available available to this airport is\n");
      printf("\t\t Time  \t\t Flight \n");
      printf("\t\t02-02-2023 \t AirAsia\n");
      printf("\t\t04-02-2023 \t Indigo\n");
      printf("\t\t06-02-2023 \t GoFirst\n");
      printf("\t\t08-02-2023 \t SpiceJet\n");
      printf("\t\t10-02-2023 \t AirIndiaExpress\n");
      printf("\t\t13-02-2023 \t AirAsia\n");
      printf("\t\t17-02-2023 \t JetAirways\n");
      printf("\t\t20-02-2023 \t GoAir\n");
      printf("\t\t23-02-2023 \t GoFirst\n");
      printf("\t\t26-02-2023 \t JetAirways\n");
      printf("\t\t28-02-2023 \t SpiceJet\n\n\n");
      printf("Enter the date you want to travel in flight:");
      scanf("%d",&date);
      if (date==2||date==13)
      {
          printf("You choosed AirAsia Flight\n");
          printf("The class of flight available in this date is:\n");
          printf("\t\t  First Class\n");
          printf("\t\t  Business Class\n");
          printf("\t\t  Economy Class\n");
          printf("Did you want to book the tickets in this day : press 1 for 'yes' 0 for'no'\n");
          int possibilty;
          scanf("%d",&possibilty);
          if(possibilty==1)
          {
              return possibilty;
          }
          else
          {
               return ret;
          }
      }
      else if(date==4)
      {
          printf("You choosed Indigo Flight\n");
          printf("The class of flight available in this date is:\n");
          printf("\t\t  Business Class\n");
          printf("\t\t  Premium Economy Class\n");
          printf("\t\t  Economy Class\n");
          printf("Did you want to book the tickets in this day : press 1 for 'yes' 0 for'no'\n");
          int possibilty;
          scanf("%d",&possibilty);
          if(possibilty==1)
          {
              return possibilty;
          }
          else
          {
               return ret;
          }
      }
      else if(date==6||date==23)
      {
          printf("You choosed GoFirst Flight\n");
          printf("The class of flight available in this date is:\n");
          printf("\t\t  First Class\n");
          printf("\t\t  Business Class\n");
          printf("\t\t  Premium Economy Class\n");
          printf("Did you want to book the tickets in this day : press 1 for 'yes' 0 for'no'\n");
          int possibilty;
          scanf("%d",&possibilty);
          if(possibilty==1)
          {
              return possibilty;
          }
          else
          {
               return ret;
          }
      }
      else if(date==8||date==28)
      {
          printf("You choosed SpiceJet Flight\n");
          printf("The class of flight available in this date is:\n");
          printf("\t\t  First Class\n");
          printf("\t\t  Premium Economy Class\n");
          printf("\t\t  Economy Class\n");
          printf("Did you want to book the tickets in this day : press 1 for 'yes' 0 for'no'\n");
          int possibilty;
          scanf("%d",&possibilty);
          if(possibilty==1)
          {
              return possibilty;
          }
          else
          {
               return ret;
          }
      }
      else if(date==10)
      {
          printf("You choosed AirIndiaExpress Flight\n");
          printf("The class of flight available in this date is:\n");
          printf("\t\t First Class\n");
          printf("\t\t  Business Class\n");
          printf("\t\t  Economy Class\n");
          printf("Did you want to book the tickets in this day : press 1 for 'yes' 0 for'no'\n");
          int possibilty;
          scanf("%d",&possibilty);
          if(possibilty==1)
          {
              return possibilty;
          }
          else
          {
               return ret;
          }
      }
      else if(date==17||date==26)
      {
          printf("You choosed JetAirways Flight\n");
          printf("The class of flight available in this date is:\n");
          printf("\t\t  First Class\n");
          printf("\t\t  Business Class\n");
          printf("\t\t  Premium Economy Class\n");
          printf("Did you want to book the tickets in this day : press 1 for 'yes' 0 for'no'\n");
          int possibilty;
          scanf("%d",&possibilty);
          if(possibilty==1)
          {
              return possibilty;
          }
          else
          {

               return ret;
          }
      }
      else if(date==20)
      {
          printf("You choosed GoAir Flight\n");
          printf("The class of flight available in this date is:\n");
          printf("\t\t First Class\n");
          printf("\t\t Premium Class\n");
          printf("\t\t  Economy Class\n");
          printf("Did you want to book the tickets in this day : press 1 for 'yes' 0 for'no'\n");
          int possibilty;
          scanf("%d",&possibilty);
          if(possibilty==1)
          {
              return possibilty;
          }
          else
          {

               return ret;
          }
      }
      break;
  case 3:
      printf("The timing of flight available available to this airport is\n");
      printf("\t\t Time  \t\t Flight \n");
      printf("\t\t01-03-2023 \t AirAsia\n");
      printf("\t\t04-03-2023 \t Indigo\n");
      printf("\t\t07-03-2023 \t GoFirst\n");
      printf("\t\t08-03-2023 \t SpiceJet\n");
      printf("\t\t11-03-2023 \t AirIndiaExpress\n");
      printf("\t\t14-03-2023 \t Indigo\n");
      printf("\t\t17-03-2023 \t AirAsia\n");
      printf("\t\t19-03-2023 \t GoAir\n");
      printf("\t\t22-03-2023 \t GoFirst\n");
      printf("\t\t25-03-2023 \t SpiceJet\n");
      printf("\t\t28-03-2023 \t JetAirways\n\n\n");
      printf("Enter the date you want to travel in flight:");
      scanf("%d",&date);
      if(date==1||date==17)
      {
          printf("You choosed AirAsia Flight\n");
          printf("The class of flight available in this date is:\n");
          printf("\t\t First Class\n");
          printf("\t\t  Premium Class\n");
          printf("\t\t  Economy Class\n");
          printf("Did you want to book the tickets in this day : press 1 for 'yes' 0 for'no'\n");
          int possibilty;
          scanf("%d",&possibilty);
          if(possibilty==1)
          {
              return possibilty;
          }
          else
          {

               return ret;
          }

      }
      else if(date==4||date==14)
      {
          printf("You choosed Indigo Flight\n");
          printf("The class of flight available in this date is:\n");
          printf("\t\t  First Class\n");
          printf("\t\t  Business Class\n");
          printf("\t\t  Premium Class\n");
          printf("Did you want to book the tickets in this day : press 1 for 'yes' 0 for'no'\n");
          int possibilty;
          scanf("%d",&possibilty);
          if(possibilty==1)
          {
              return possibilty;
          }
          else
          {

               return ret;
          }
      }
      else if(date==7||date==22)
      {
          printf("You choosed GoFirst Flight\n");
          printf("The class of flight available in this date is:\n");
          printf("\t\t First Class\n");
          printf("\t\t  Business Class\n");
          printf("\t\t  Economy Class\n");
          printf("Did you want to book the tickets in this day : press 1 for 'yes' 0 for'no'\n");
          int possibilty;
          scanf("%d",&possibilty);
          if(possibilty==1)
          {
              return possibilty;
          }
          else
          {

               return ret;
          }
      }
      break;
  case 4:
      printf("The timing of flight available available to this airport is\n");
      printf("\t\t Time  \t\t Flight \n");
      printf("\t\t03-04-2023 \t AirAsia\n");
      printf("\t\t05-04-2023 \t Indigo\n");
      printf("\t\t08-04-2023 \t GoFirst\n");
      printf("\t\t10-04-2023 \t SpiceJet\n");
      printf("\t\t14-04-2023 \t AirIndiaExpress\n");
      printf("\t\t18-04-2023 \t Indigo\n");
      printf("\t\t20-04-2023 \t AirAsia\n");
      printf("\t\t23-04-2023 \t GoAsia\n");
      printf("\t\t26-04-2023 \t GoFirst\n");
      printf("\t\t29-04-2023 \t SpiceJet\n");
      printf("\t\t30-04-2023 \t JetAirways\n\n\n");
      printf("Enter the date you want to travel in flight:");
      scanf("%d",&date);
      if(date==3||date==20)
      {
          printf("You choosed AirAsia Flight\n");
          printf("The class of flight available in this date is:\n");
          printf("\t\t First Class\n");
          printf("\t\t  Business Class\n");
          printf("\t\t  Economy Class\n");
          printf("Did you want to book the tickets in this day : press 1 for 'yes' 0 for'no'\n");
          int possibilty;
          scanf("%d",&possibilty);
          if(possibilty==1)
          {
              return possibilty;
          }
          else
          {

               return ret;
          }
      }
      else if(date==5||date==18)
      {
          printf("You choosed  Indigo Flight\n");
          printf("The class of flight available in this date is:\n");
          printf("\t\t First Class\n");
          printf("\t\t  Business Class\n");
          printf("\t\t  Premium Economy Class\n");
          printf("Did you want to book the tickets in this day : press 1 for 'yes' 0 for'no'\n");
          int possibilty;
          scanf("%d",&possibilty);
          if(possibilty==1)
          {
              return possibilty;
          }
          else
          {

               return ret;
          }


      }
      else if(date==8||date==26)
      {
          printf("You choosed GoFirst Flight\n");
          printf("The class of flight available in this date is:\n");
          printf("\t\t First Class\n");
          printf("\t\t  Business Class\n");
          printf("\t\t  Economy Class\n");
          printf("Did you want to book the tickets in this day : press 1 for 'yes' 0 for'no'\n");
          int possibilty;
          scanf("%d",&possibilty);
          if(possibilty==1)
          {
              return possibilty;
          }
          else
          {

               return ret;
          }
      }
      else if(date==10||date==29)
      {
          printf("You choosed SpiceJet Flight\n");
          printf("The class of flight available in this date is:\n");
          printf("\t\t  Business Class\n");
          printf("\t\t  Economy Class\n");
          printf("Did you want to book the tickets in this day : press 1 for 'yes' 0 for'no'\n");
          int possibilty;
          scanf("%d",&possibilty);
          if(possibilty==1)
          {
              return possibilty;
          }
          else
          {

               return ret;
          }
      }
      else if(date==14)
      {
          printf("You choosed AirIndiaExpress Flight\n");
          printf("The class of flight available in this date is:\n");
          printf("\t\t First Class\n");
          printf("\t\t  Business Class\n");
          printf("\t\t  Premium Economy Class\n");
          printf("\t\t   Economy Class\n");
          printf("Did you want to book the tickets in this day : press 1 for 'yes' 0 for'no'\n");
          int possibilty;
          scanf("%d",&possibilty);
          if(possibilty==1)
          {
              return possibilty;
          }
          else
          {

               return ret;
          }
      }
      else if(date==23)
      {
          printf("You choosed GoAsia Flight\n");
          printf("The class of flight available in this date is:\n");
          printf("\t\t  First Class\n");
          printf("\t\t  Premium Economy Class\n");
          printf("\t\t  Economy Class\n");
          printf("Did you want to book the tickets in this day : press 1 for 'yes' 0 for'no'\n");
          int possibilty;
          scanf("%d",&possibilty);
          if(possibilty==1)
          {
              return possibilty;
          }
          else
          {

               return ret;
          }
      }
      else if(date==30)
      {
          printf("You choosed JetAirways Flight\n");
          printf("The class of flight available in this date is:\n");
          printf("\t\t  Business Class\n");
          printf("\t\t  Premium Economy Class\n");
          printf("\t\t  Economy Class\n");
          printf("Did you want to book the tickets in this day : press 1 for 'yes' 0 for'no'\n");
          int possibilty;
          scanf("%d",&possibilty);
          if(possibilty==1)
          {
              return possibilty;
          }
          else
          {

               return ret;
          }
      }
      break;
  case 5:
      printf("The timing of flight available available to this airport is\n");
      printf("\t\t Time  \t\t Flight \n");
      printf("\t\t03-05-2023 \t AirAsia\n");
      printf("\t\t07-05-2023 \t SpiceJet\n");
      printf("\t\t10-05-2023 \t GoFirst\n");
      printf("\t\t14-05-2023 \t AirIndiaExpress\n");
      printf("\t\t18-05-2023 \t Indigo\n");
      printf("\t\t22-05-2023 \t AirAsia\n");
      printf("\t\t26-05-2023 \t GoFirst\n");
      printf("\t\t30-05-2023 \t SpiceJet\n");
      printf("Enter the date you want to travel in flight:");
      scanf("%d",&date);
      if(date==3||date==22){
      printf("You choosed Airasia Flight\n");
      printf("The class of flight available in this date is:\n");
      printf("\t\t  First Class\n");
      printf("\t\t  Business Class\n");
      printf("\t\t  Economy Class\n");
      printf("Did you want to book the tickets in this day : press 1 for 'yes' 0 for'no'\n");
      int possibilty;
       scanf("%d",&possibilty);
           if(possibilty==1)
           {
               return possibilty;
           }
           else
           {

                return ret;
           }
       }
    else if(date==7||date==30){
      printf("You choosed SpiceJet Flight\n");
      printf("The class of flight available in this date is:\n");
      printf("\t\t  First Class\n");
      printf("\t\t  Business Class\n");
      printf("\t\t  Economy Class\n");
      printf("Did you want to book the tickets in this day : press 1 for 'yes' 0 for'no'\n");
      int possibilty;
       scanf("%d",&possibilty);
           if(possibilty==1)
           {
               return possibilty;
           }
           else
           {

                return ret;
           }
       }
    else if(date==10||date==26){
      printf("You choosed GoFirst Flight\n");
      printf("The class of flight available in this date is:\n");
      printf("\t\t  First Class\n");
      printf("\t\t  Business Class\n");
      printf("\t\t  Economy Class\n");
      printf("Did you want to book the tickets in this day : press 1 for 'yes' 0 for'no'\n");
      int possibilty;
       scanf("%d",&possibilty);
           if(possibilty==1)
           {
               return possibilty;
           }
           else
           {

                return ret;
           }
       }
    else if(date==14){
      printf("You choosed AirIndiaExpress Flight\n");
      printf("The class of flight available in this date is:\n");
      printf("\t\t  First Class\n");
      printf("\t\t  Business Class\n");
      printf("\t\t  Economy Class\n");
      printf("Did you want to book the tickets in this day : press 1 for 'yes' 0 for'no'\n");
      int possibilty;
       scanf("%d",&possibilty);
           if(possibilty==1)
           {
               return possibilty;
           }
           else
           {

                return ret;
           }
       }
       break;

    case 6:
     printf("The timing of flight available available to this airport is\n");
    printf("\t\t Time  \t\t Flight \n");
    printf("\t\t01-06-2024 \t AirAsia\n");
    printf("\t\t04-06-2024 \t SpiceJet\n");
    printf("\t\t09-06-2024 \t GoFirst\n");
    printf("\t\t13-06-2024 \t AirIndiaExpress\n");
    printf("\t\t16-06-2024 \t Indigo\n");
    printf("\t\t20-06-2024 \t AirAsia\n");
    printf("\t\t25-06-2024 \t GoFirst\n");
    printf("\t\t29-06-2024 \t SpiceJet\n");
    printf("Enter the date you want to travel in flight:");
    scanf("%d",&date);













  }

}
int  Fdetails(){
    clearScreen();
    int passnum;
    printf("Enter your Passport number:");
    scanf("%d", &passnum);
    printf("Flights available for this area\n");
    printf("\n\t1. Delhi\n");
    printf("\t2. Istanbul\n");
    printf("\t3. Dubai\n");
    printf("\t4. Chennai\n");
    printf("\nEnter Your Destination area in numbers as listed above:");
    int  ar=0;
    scanf("%d",&ar);
       if(ar==1)
       {
         return ar;
       }

}



int main(void){
    int choice;
    int result;
    displaymenu();
    printf("Enter your choice: ");
    scanf("%d",&choice);
  int ar;
    switch(choice){
    case 1:
       ar=Fdetails();
        break;
    case 2:
        reservation();
        break;
    }

    if(ar==1)
    {
       result=delhi();
    }
    if(result==1050)
    {
        printf("hi");
    }


}












































































/*#include <stdio.h>

int main() {
    // Write C code here
    char arr[50]="hello";
    printf("%s",*(arr+2));

    return 0;
}
*/
/*
#include <stdio.h>

int main() {
    // Write C code here
      char str[5]="good";
    char str1[10]="morning";
    strcat(str,str1);
    printf("%s",str);

    return 0;
}
*/
