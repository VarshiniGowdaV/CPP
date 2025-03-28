
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int getrandomnumber(int min,int max)
{
    return min+rand() % (max - min +1);
}
int main()
{
    FILE *file =fopen("bike_data.txt","w");
    if(file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    srand(time(NULL)); //seed for randomixation

    const char *brands[]={"TVS","Bajaj","KTM","Yamaha","Honda","Suzuki"};
    const char *models[]={"Apache","pulsa","Duke","R15"};
    const char *status[]={"Available","Booked"};

    for(int i=0;i<100000;i++)
    {
        int regnum = getrandomnumber(1000,9999);
        int brandindex = getrandomnumber(0,5);
int modelindex= getrandomnumber(0,5);
int statusindex=getrandomnumber(0,1);
int rentprice=getrandomnumber(300,3000);
fprintf(file,"KA07k %d,%s,%s,%s,%d\n",regnum,brandindex,modelindex,statusindex,rentprice);
    }
    fclose(file);
    printf("data successfully writter to bike.txt\n");
    return 0;
}
