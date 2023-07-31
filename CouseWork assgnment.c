#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char encrypt(char str[],int arr[]){              // Define a function called "encrypt()", use to store encrypt algorithm.

    char val[1000],msg[1000]="";                 // Define two string variables called val(to store values) and msg(to store message).

    for(int i=0;i<strlen(str);i++){              // Inside for loop: Get and check string characters in
                                                 // the user input string one by one and assign the random values
            switch(str[i]){                      // which generated in main function.
            case ' ':
                sprintf(val,"%d",arr[0]);
                strcat(msg,val);
                break;
            case 'A':
            case 'a':
                sprintf(val,"%d",arr[1]);
                strcat(msg,val);
                break;
            case 'B':
            case 'b':
                sprintf(val,"%d",arr[2]);
                strcat(msg,val);
                break;
            case 'C':
            case 'c':
                sprintf(val,"%d",arr[3]);
                strcat(msg,val);
                break;
            case 'D':
            case 'd':
                sprintf(val,"%d",arr[4]);
                strcat(msg,val);
                break;
            case 'E':
            case 'e':
                sprintf(val,"%d",arr[5]);
                strcat(msg,val);
                break;
            case 'F':
            case 'f':
                sprintf(val,"%d",arr[6]);
                strcat(msg,val);
                break;
            case 'G':
            case 'g':
                sprintf(val,"%d",arr[7]);
                strcat(msg,val);
                break;
            case 'H':
            case 'h':
                sprintf(val,"%d",arr[8]);
                strcat(msg,val);
                break;
            case 'I':
            case 'i':
                sprintf(val,"%d",arr[9]);
                strcat(msg,val);
                break;
            case 'J':
            case 'j':
                sprintf(val,"%d",arr[10]);
                strcat(msg,val);
                break;
            case 'K':
            case 'k':
                sprintf(val,"%d",arr[11]);
                strcat(msg,val);
                break;
            case 'L':
            case 'l':
                sprintf(val,"%d",arr[12]);
                strcat(msg,val);
                break;
            case 'M':
            case 'm':
                sprintf(val,"%d",arr[13]);
                strcat(msg,val);
                break;
            case 'N':
            case 'n':
                sprintf(val,"%d",arr[14]);
                strcat(msg,val);
                break;
            case 'O':
            case 'o':
                sprintf(val,"%d",arr[15]);
                strcat(msg,val);
                break;
            case 'P':
            case 'p':
                sprintf(val,"%d",arr[16]);
                strcat(msg,val);
                break;
            case 'Q':
            case 'q':
                sprintf(val,"%d",arr[17]);
                strcat(msg,val);
                break;
            case 'R':
            case 'r':
                sprintf(val,"%d",arr[18]);
                strcat(msg,val);
                break;
            case 'S':
            case 's':
                sprintf(val,"%d",arr[19]);
                strcat(msg,val);
                break;
            case 'T':
            case 't':
                sprintf(val,"%d",arr[20]);
                strcat(msg,val);
                break;
            case 'U':
            case 'u':
                sprintf(val,"%d",arr[21]);
                strcat(msg,val);
                break;
            case 'V':
            case 'v':
                sprintf(val,"%d",arr[22]);
                strcat(msg,val);
                break;
            case 'W':
            case 'w':
                sprintf(val,"%d",arr[23]);
                strcat(msg,val);
                break;
            case 'X':
            case 'x':
                sprintf(val,"%d",arr[24]);
                strcat(msg,val);
                break;
            case 'Y':
            case 'y':
                sprintf(val,"%d",arr[25]);
                strcat(msg,val);
                break;
            case 'Z':
            case 'z':
                sprintf(val,"%d",arr[26]);
                strcat(msg,val);
                break;
            case '.':
                sprintf(val,"%d",arr[27]);
                strcat(msg,val);
                break;
            case ',':
                sprintf(val,"%d",arr[28]);
                strcat(msg,val);
                break;
            case '?':
                sprintf(val,"%d",arr[29]);
                strcat(msg,val);
                break;
            case '!':
                sprintf(val,"%d",arr[30]);
                strcat(msg,val);
                break;
            default:
                return "error";
        }
    }
    printf("\nEncrypted message is : %s",msg);                    // prints the encrypted message code
}

char decrypt(char num[],int arr2[]){    // Define a function called "decrypt()", use to store decrypt algorithm

    char msg[1000]="";                  // Define a string variable called msg(to store message).

    for(int i=0;i<strlen(num);i+=2){
        int a=num[i]-'0';               // convert character values in the character array called num to integers.
        int b=num[i+1]-'0';             // Since ASCII value of 0(zero) is 48, Subtract it by '0' to get actual integer value.
        int value=(a)*10+(b);           // After that assign the values two by two in the user input number array into value variable using simple mathematical calculation.

        if(value==arr2[0])
            strcat(msg," ");
        if(value==arr2[1])
            strcat(msg,"A");
        if(value==arr2[2])
            strcat(msg,"B");
        if(value==arr2[3])
            strcat(msg,"C");
        if(value==arr2[4])
            strcat(msg,"D");
        if(value==arr2[5])
            strcat(msg,"E");
        if(value==arr2[6])
            strcat(msg,"F");
        if(value==arr2[7])
            strcat(msg,"G");
        if(value==arr2[8])
            strcat(msg,"H");
        if(value==arr2[9])
            strcat(msg,"I");
        if(value==arr2[10])
            strcat(msg,"J");
        if(value==arr2[11])
            strcat(msg,"K");
        if(value==arr2[12])
            strcat(msg,"L");
        if(value==arr2[13])
            strcat(msg,"M");
        if(value==arr2[14])
            strcat(msg,"N");
        if(value==arr2[15])
            strcat(msg,"O");
        if(value==arr2[16])
            strcat(msg,"P");
        if(value==arr2[17])
            strcat(msg,"Q");
        if(value==arr2[18])
            strcat(msg,"R");
        if(value==arr2[19])
            strcat(msg,"S");
        if(value==arr2[20])
            strcat(msg,"T");
        if(value==arr2[21])
            strcat(msg,"U");
        if(value==arr2[22])
            strcat(msg,"V");
        if(value==arr2[23])
            strcat(msg,"W");
        if(value==arr2[24])
            strcat(msg,"X");
        if(value==arr2[25])
            strcat(msg,"Y");
        if(value==arr2[26])
            strcat(msg,"Z");
        if(value==arr2[27])
            strcat(msg,".");
        if(value==arr2[28])
            strcat(msg,",");
        if(value==arr2[29])
            strcat(msg,"?");
        if(value==arr2[30])
            strcat(msg,"!");
    }
    printf("\nDecrypted message is : %s",msg);                    // prints the decrypted message code
}


void main(){

    char flag,flag1,flag2,number[1000],messege[1000];           // Define string variables called flag,flag1,flag2,number,messege.
    int seed,num[1000];                                         // Define integer variables called num and seed.

    printf("Select the service you want(for encrypt press 'e/E', for decrypt press 'd/D') : ");
    scanf("\n%c",&flag1);                                                                          // Get input value for what process user want(Encryption or Decryption).
    printf("\nIf you want change previous encrypt/decrypt algorithm(number sequence) Y/N : ");
    scanf("\n%c",&flag2);                                                                        // Get input value for if user want to change the number sequence.

    if(flag2=='Y' || flag2=='y'){
        printf("\nEnter a seeding value[0~99] : ");
        scanf("\n%d",&seed);
        srand(seed);                                   // Using srand() function for change random number sequence.
    }

    for(int i=0;i<31;i++){
        num[i]=rand()%100;                             // Using rand() function to generate random number values.
        for(int j=0;j<i;j++){
            if(num[i]==num[j] || num[i]<10){           // Check if previously generated numbers are different from given random number.
                i--;                                   // if it is different then add it into the integer array called num.(use to assign alphabets,comma,question mark,fullstop)
                break;
            }
        }
    }

    if(flag1=='e' || flag1=='E'){
        printf("\nEnter the massege : ");
        scanf("\n%[^\n]",messege);                    // Get the message from user for use encryption process.
        encrypt(messege,num);                         // Called the function "encrypt()" with given input data to complete encryption process.
    }


    if(flag1=='d' || flag1=='D'){
        printf("\nEnter the number : ");
        scanf("\n%s",number);                        // Get the value from user for use decryption process.
        decrypt(number,num);                         // Called the function "decrypt()" with given input data to complete decryption process.
    }
}


