
#include<stdio.h> 
#include<string.h>

void reversestring(char arr[], int start, int length , char resultarr[]){
    if(length ==  )
        return;

    resultarr[start]=arr[length-1];
    reversestring(arr , start+1 , length-1, resultarr);
}

int main(){
    char arr[100] , char resultarr[100];

    printf("Enter any string value :\n");
    fgets(arr , 99 , stdin);

    reversestring(arr , 0 , strlen(arr) , resultarr);

    printf("The reverse string is : %s", resultarr);
    return 0;
}
