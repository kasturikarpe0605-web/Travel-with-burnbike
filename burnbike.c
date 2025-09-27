#include <stdio.h>
int main() {
     float distance, fare, calories, discount, discountedFare;
       printf("Enter the distance travelled (in km): ");
    scanf("%f", &distance);
     fare = distance * 10;
     printf("Fare is %f " , fare);
      // Assume fare is 5rupees per km
    fare = distance * 5;
       // Assume 50 calories burned per km
    calories = distance * 50;
  if (calories > 50)
        discount = 0.10 * fare;
    else
        discount = 0.0;

    discountedFare = fare - discount;
      printf("Calories burned: %.2f calories\n", calories);
    printf("Discounted fare: rupees %.2f\n", discountedFare);

    return 0;
}
