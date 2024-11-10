#include<stdio.h>
#include<string.h>

void palindromeOrnot(char arr[] , int length){

    int i , j , ispalindrome = 0;
    
    if(length%2 == 0)
        j = length/2;
    else 
        j = (length-1)/2;
    
    for(i = 0; i <j  ; i++){
        if(arr[i] == arr[length-i-1]){
            ispalindrome = 1;
        }
        else {
            ispalindrome = 0;
            break;
        }
    }
    if(ispalindrome == 1)
        printf("%s is a palindrome\n",arr);
    else
        printf("%s is not a palindrome\n", arr);
}
int main(){
    char arr[5][21];
    int i;

    for (i = 0; i < 5; i++){
        printf("Enter string %d (max 20 characters): ", i+1);
        scanf("%20s", arr[i]);
    }

    for(i = 0; i < 5; i++){
        palindromeOrnot(arr[i], strlen(arr[i]));
    }
    
    return 0;
}