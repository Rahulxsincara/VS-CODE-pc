#include <stdio.h>

int main()
{

    int n;
    int l=0,t=0,p=0,s=0;
    float total;

    printf("*----Welcome to KL Attendance Calculator----*");
    printf("\nMade by: Rahul_sincara");

    printf("\n\nPlz Enter total no. of courses to calculate: ");
    scanf("%d",&n);

    while(n--){
        char str[25];
    printf("\n--Enter course name/title: ");
    scanf("%s",str);

    printf("--plz put 0 If any of them not exist.--\n");
    printf("\nEnter your Lecture percentage = ");
    scanf("%d",&l);

    printf("Enter your Practical percentage = ");
    scanf("%d",&p);

    printf("Enter your Tutorial percentage = ");
    scanf("%d",&t);

    printf("Enter your Skill percentage = ");
    scanf("%d",&s);

    int L=100, P=50, T=100, S=25;

    int weight_sum=0;
    float score_sum=0;

    if(l>0){ weight_sum+=L; score_sum+=l*L; }
    if(p>0){ weight_sum+=P; score_sum+=p*P; }
    if(t>0){ weight_sum+=T; score_sum+=t*T; }
    if(s>0){ weight_sum+=S; score_sum+=s*S; }

    total = score_sum / weight_sum;

    printf("\nTotal Attendance of %s = %.2f%%\n",str,total);

    }
    return 0;
}