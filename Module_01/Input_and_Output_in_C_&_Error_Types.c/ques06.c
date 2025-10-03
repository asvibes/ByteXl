#include <stdio.h>

#include <string.h>

int main()
{
char buildingname[101], streetname[101], city [101], state [101], pincode [101];

fgets(buildingname, sizeof(buildingname), stdin);



fgets(streetname, sizeof(streetname), stdin);

fgets(city, sizeof(city), stdin);

fgets(state, sizeof(state), stdin);

fgets (pincode, sizeof(pincode), stdin);

printf("Hello!\n");

printf("%s", buildingname);



printf("%s", streetname);

printf("%s", city);

printf("%s", state);

printf("%s", pincode);



return 0;



}
