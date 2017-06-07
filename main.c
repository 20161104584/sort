//
//  main.c
//  sort
//
//  Created by 20161104584 on 17/6/7.
//  Copyright © 2017年 20161104584. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a[10],i,j,t;
    printf("Input 10 number:\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("\n");
    for(i=0;j<9;i++)
        for(i=0;j<9-i;j++)
            if(a[i]>a[j+1])
            {
                t=a[j];a[j]=a[j+1];a[j+1]=t;
            }
    printf("The scorted numbers:\n");
    for(i=0;i<10;i++)
        printf("%d",a[i]);
    return 0;
}
