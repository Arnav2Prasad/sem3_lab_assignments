#include <stdio.h>
#include "header.h"

struct Distance read(int i){
    struct Distance dist;
    printf("Enter the distance-%d in kms and meters (seperated by a space): ",i);
    //int a,b;
    scanf("%d",&dist.kms);
    scanf("%d",&dist.meters);

    return dist;
};

void display(struct Distance ans){
	if (ans.meters>=1000){
        ans.kms+=(int)ans.meters/1000;
        ans.meters=(ans.meters%1000);
    }
	printf("%d Km %d m\n",ans.kms,ans.meters);
	return;
}

struct Distance Add(struct Distance dist1,struct Distance dist2){
    struct Distance ans;
    ans.kms=dist1.kms+dist2.kms;
    ans.meters=dist1.meters+dist2.meters;

    if (ans.meters>=1000){
        ans.kms+=(int)ans.meters/1000;
        ans.meters=(ans.meters%1000);
    }
    return ans;
}

struct Distance subtract(struct Distance s1,struct Distance s2){
    struct Distance ans;
    ans.kms=s1.kms-s2.kms;
    ans.meters=s1.meters-s2.meters;

    if (ans.meters<0){
        ans.kms-=1;
        ans.meters+=1000;
    }
    return ans;
}

