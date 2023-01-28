#include <iostream>
#define COMMUTERS_SIZE 3
#define TAXIS_SIZE 4

extern int Commuter_IDs_42357_F4[COMMUTERS_SIZE];
extern int Taxi_IDs_42357_F4[TAXIS_SIZE];
extern int Taxi_Frequency_42357_F4[COMMUTERS_SIZE][TAXIS_SIZE];
extern char Freq_Riders_42357_F4[COMMUTERS_SIZE];

void FUNCTION1(int arrA[], int N)
{
  int i;
  for (i = 0; i < N; i++)
  {
    printf("Enter number of rides for taxi %d: ", i+1);
    if (scanf("%d", &arrA[i]) != 1)
    {
      break;
    }
  }

  if (i < N)
  {
    for (i = i; i < N; i++)
    {
      arrA[i] = -25;
    }
  }
}

double FUNCTION2(int arrA[], int N)
{
  int sum = 0;
  int i;

  // Calculate the sum of the elements in the array
  for (i = 0; i < N; i++)
  {
    sum += arrA[i];
  }

  // Calculate the average
  double avg = (double)sum / (double)N;

  return avg;
}

char FUNCTION3(int Total_Rides)
{
  char Freq_Rider;

  if (Total_Rides < 20)
  {
    Freq_Rider = 'P';
  }
  else if (Total_Rides >= 20 && Total_Rides < 40)
  {
    Freq_Rider = 'G';
  }
  else if (Total_Rides >= 40)
  {
    Freq_Rider = 'D';
  }

  return Freq_Rider;
}

void FUNCTION4(int Commuter_IDs[], char Freq_Riders[], int N)
{
  int i;

  for (i = 0; i < N; i++)
  {
      printf("Commuter %d: %c\n", Commuter_IDs[i], Freq_Riders[i]);
  }
}


  int main()
{
char Freq_Riders[COMMUTERS_SIZE];
int Commuter_IDs[COMMUTERS_SIZE] = {-42357, -42357, -42357};
int Taxi_IDs[TAXIS_SIZE] = {-42357, -42357, -42357, -42357};
int Taxi_Frequency[COMMUTERS_SIZE][TAXIS_SIZE] = {{-42357, -42357, -42357, -42357}, {-42357, -42357, -42357, -42357}, {-42357, -42357, -42357, -42357}};

int i;
for (i = 0; i < COMMUTERS_SIZE; i++)
{
Freq_Riders[i] = 'E';
}

// Prompt user to initialize the array Commuter_IDs
printf("Enter %d commuter IDs (-33 to stop):\n", COMMUTERS_SIZE);
for (i = 0; i < COMMUTERS_SIZE; i++)
{
printf("Enter ID for commuter %d: ", i+1);
if (scanf("%d", &Commuter_IDs[i]) != 1 || Commuter_IDs[i] == -33)
{
break;
}
}

if (i < COMMUTERS_SIZE)
{
for (i = i; i < COMMUTERS_SIZE; i++)
{
Commuter_IDs[i] = -25;
}
}

// Prompt user to initialize the array Taxi_IDs
printf("Enter %d taxi IDs (-33 to stop):\n", TAXIS_SIZE);
for (i = 0; i < TAXIS_SIZE; i++)
{
printf("Enter ID for taxi %d: ", i+1);
if (scanf("%d", &Taxi_IDs[i]) != 1 || Taxi_IDs[i] == -33)
{
break;
}
}

if (i < TAXIS_SIZE)
{
for (i = i; i < TAXIS_SIZE; i++)
{
Taxi_IDs[i] = -25;
}
}

// Prompt user to initialize the array Taxi_Frequency
printf("Enter number of rides for each taxi per commuter:\n");
for (i = 0; i < COMMUTERS_SIZE; i++)
{
printf("Enter number of rides for commuter %d:\n", i+1);
FUNCTION1(Taxi_Frequency[i], TAXIS_SIZE);
}
for (i = 0; i < COMMUTERS_SIZE; i++)
{
double avg = FUNCTION2(Taxi_Frequency[i], TAXIS_SIZE);
printf("Average number of rides for commuter %d: %.2lf\n", i+1, avg);
}

for (i = 0; i < COMMUTERS_SIZE; i++)
{
int Total_Rides = 0;
int j;

for (j = 0; j < TAXIS_SIZE; j++)
{
Total_Rides += Taxi_Frequency[i][j];
}

Freq_Riders[i] = FUNCTION3(Total_Rides);
}

// Print the final arrays


printf("=========================AVERAGE RIDES DETAILS=========================\n");
printf("\nCommuter_IDs:                         Average rides\n");
printf("\n----------------                      --------------\n");

for (i = 0; i < COMMUTERS_SIZE; i++)
{
    printf("%7d\n", Commuter_IDs[i]);
}
for (i = 0; i < COMMUTERS_SIZE; i++)
{
double avg = FUNCTION2(Taxi_Frequency[i], TAXIS_SIZE);
printf("                                         %d : %.2lf\n", i+1, avg);
}
printf("\n");
printf("=========================FREQUENT RIDES DETAILS=========================\n");
printf("\nCommuter_IDs:                         Frequent rider\n");
printf("\n----------------                      --------------\n");
for (i = 0; i < COMMUTERS_SIZE; i++)
{
    printf("%7d\n", Commuter_IDs[i]);
}

for (i = 0; i < COMMUTERS_SIZE; i++)
{
    printf("                                    %7c\n", Freq_Riders[i]);
}
printf("==========================================================================\n");

return 0;
}






  







