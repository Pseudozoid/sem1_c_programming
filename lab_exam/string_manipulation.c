#include <stdio.h>
void main()
{
    char s1[50], s2[50];
    int choice, i, j, diff;

    printf("\nEnter the first string:\n");
    scanf("%s", s1);
    printf("\nEnter the second string:\n");
    scanf("%s", s2);
    
    printf("\n1 --> Compare\n2 --> Concatenate\n3 --> Get Length\n4 --> Copy\n");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
        {   i=0;
            while(s1[i]!='\0' || s2[i]!='\0')
            {
                diff = s1[i] - s2[i];
                if (diff != 0)
                    break;
                i++;
            }
            if (diff>0)
                printf("\nThe strings are not the same and %s comes after %s\n", s1, s2);

            else if (diff<0)
                printf("\nThe strings are not the same and %s comes after %s\n", s2, s1);
            
            else
                printf("\nBoth strings are the same\n");
            
            break;
        }

        case 2:
        {   
            i=0;
            while(s1[i]!='\0')
                i++;
            
            j=0;
            while(s2[j]!='\0')
            {
                s1[i] = s2[j];
                i++;
                j++;
            }
            s1[i]='\0';
            printf("\nThe concatenated string is %s", s1);
            
            break;
        }

        default:
            printf("H");
    }
}