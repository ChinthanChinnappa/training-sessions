#include <stdio.h>
int main(){
    int status;
    while(1){
        printf("Enter order status (1-4): \n");
        scanf("%d",&status);
        switch(status)
        {
        case 1:
            printf("Order Placed\n");
            break;
        case 2:
            printf("Your food is being prepared\n");
            break;
        case 3:
            printf("Out for Delivery\n");
            break;
        case 4:
            printf("Your order has been delivered. Enjoy your meal!\n");
            break;
        default:
            printf("Invalid status. Please enter a number between 1 and 4\n");
            break;
        }
    }
}
