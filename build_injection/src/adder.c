#include <stdio.h>

int main(int argc, char* argv[]){
    int number1, number2, answer;

    sscanf(argv[1],"%d",&number1);
    sscanf(argv[2],"%d",&number2);

    answer = number1 + number2;

    printf("%d + %d = %d\n", number1, number2, answer);
    }
