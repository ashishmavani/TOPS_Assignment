// WAP to find simple interest

# include<stdio.h>
# include<math.h>
int main()
{
    float Amt,ROI,Tenure,sint;
    printf("Enter Amount: ");
    scanf("%f",&Amt);
    printf("Enter Rate of Interest (Per Year): ");
    scanf("%f",&ROI);
    printf("Enter Tenure in Year: ");
    scanf("%f",&Tenure);
    sint=(Amt*ROI*Tenure)/100;

    printf("simple interest of %.2f \n",sint);
    
    return 0;
}
