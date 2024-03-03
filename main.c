
                                //------------------------------------------------------------------//
                               //---Made By Raeyaan Shahid - F6SFBU & Husamaldein Abadi - C34Q0D---//
                              //------------------------------------------------------------------//

#include <stdio.h>
#include <math.h>

int main() {
    double  a,*aP,b= 1.0;
    int n, i= 0, BinaryArray[7]={0,0,0,0,0,0,0};

    printf("Choose a number in decimal (0-255) to convert it to Hexadecimal: \n");
    scanf("%lf", &a);
    printf("%0.0lf! Ah, easy.\n Let's Start...\n\n#1st 'Divide by 2 and see if there is a remainder to get the Binary Digits'\n %0.0lf / 2: \n", a,a);
    aP = &a;
    n=a;

//---------#1---------//---Dividing And Getting The Binary Values---//
    do {
        if(n%2 == 0){BinaryArray[i] = 0;}
        else{        BinaryArray[i] = 1;}

        n = (a/ pow(2.0,b)) ;
        printf("   %d Binary= %d \n",n, BinaryArray[i]);

        i++;
        b++;

        if(n == 0){BinaryArray[i+1]= 0; break;}
    }while(0 < a/ pow(2.0,b));
printf("\n");

//---------#2---------//---Reversing Binary Digits---//
        int y,j,HexaJ,D1=0,D2=0;

        for(y=7; y>=0; y--){
            printf("%d " ,BinaryArray[y]);
            if(y%4== 0 && y!= 0){//Putting a comma (,) to make groups of four
                printf(",");}}

printf("   #2nd 'Reordering Binary Digits From Bottom to Top'\n\n");

//---------#3---------//---Converting Each Digit To Its Hexadecimal Value---//
        for(j=7; j>=0; j--){
            if(j%4>= 0 && j>= 4 ){//Without the second expression the number 0 will enter into the statement
                HexaJ = BinaryArray[j] * pow(2,(j-4));
                D1 += HexaJ;
          } else{HexaJ = BinaryArray[j] * pow(2,j);
                D2 += HexaJ;}

        printf("%d ", HexaJ);
            if(j%4== 0  && j!= 0){//Putting a comma (,) to make groups of four
                printf(",");
            }}
    printf("   #3rd 'Each Digit To Its Hexadecimal Value'");
    printf("\n   %d       %d     #4th 'Sub Hexadecimal Values'", D1,D2);
    printf("\n   |        |");
    printf("\n   %lX        %lX     #5th 'If The Hexadecimal Numbers are bigger than 9 Convert them to Their Characters'", D1,D2);
    //printf("\n%0.0lf From Decimal to Hexadecimal:  %lX%lX ", *aP,D1,D2);
    printf("\n\n(%0.0lf)10 =  (%lX%lX)16 ", *aP,D1,D2);
    return 0;
}
