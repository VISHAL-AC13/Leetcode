#include<stdio.h>
#include<math.h>
int addDigits(int num) {
    int i,res,rem;
    if(num<10){
        return num;
    }
    else{
        res=0;
    while(num>0){
         rem=num%10;
         res=res+rem;
        num=num/10;
    }
    return addDigits(res);
    }

}






