﻿#include <cstdio>

int main(void) {
  int a;
  scanf("%d",&a);
  if(a%4==0 && a%100!=0){
   printf("yes");
  }else if(a%400==0){
    printf("yes");
  }else printf("no");
  
} 
