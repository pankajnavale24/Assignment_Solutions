/*Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed. */
main()
 {
     int sub1,sub2,sub3,sub4,sub5,total,percentage;
    printf(" enter marks out of 100\n");
     printf("enter marks of sub1\n");
     scanf("%d",&sub1);
     printf("enter marks of sub2\n");
     scanf("%d",&sub2);
     printf("enter marks of sub3\n");
     scanf("%d",&sub3);
     printf("enter marks of sub4\n");
     scanf("%d",&sub4);
     printf("enter marks of sub5\n");
     scanf("%d",&sub5);
     total=(sub1+sub2+sub3+sub4+sub5);
     percentage=total/5;
     printf("result is ");
     if(percentage>33)
     printf("student is passed ");
     else
     printf("student is fail");
         getch();
 }

