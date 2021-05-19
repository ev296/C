#include <stdio.h>
#include <stdlib.h>
#include "Horoscope.h"

int FECHA=0;
int MENU=0
int Z;//signo
int END;

int main(){
    
    int M, D; //mes y día de cumpleaños
    printf("WELCOME TO THE HOROSCOPE!!\n\n In this program you will know your zodiac sign and another interesting data.\n");
    printf("Please enter your birthday date with format MM/DD\n");
    printf("MONTH:\n");
    scanf("%d", &M);

    printf("DAY:\n");
    scanf("%2d", &D);

    srand(time(NULL));
    cls();

    //SIGNO
    while (FECHA==0){
    
    while(M>=13|M==0|D==0|D>32){
    printf("There is an error, try again\n");
    printf("Please enter your birthday date with format MM/DD\n");
    printf("MONTH:\n");
    scanf("%d", &M);

    printf("DAY:");
    scanf("%2d", &D);
    }
    switch(M){
    case 01:
    if(D>0&&D<=19){
        printf("Your zodiac signs is CAPRICORN\n\n");
        Z=1;
        }
        if(D>19&&D<31){
            printf("Your zodiac signs is AQUARIUS\n\n");
            Z=2;
        }
    break;
    case 02:
    if(D>0&&D<=18){
        printf("Your zodiac signs is AQUARIUS\n\n");
        Z=2;
        }
        if(D>18&&D<28){
            printf("Your zodiac signs is PISCES\n\n");
            Z=3;
        }
    break;
    case 03:
    if(D>0&&D<=20){
        printf("Your zodiac signs is PISCES\n\n");
        Z=3;
        }
        if(D>20&&D<31){
            printf("Your zodiac signs is ARIES\n\n");
            Z=4;
        }
    break;
    case 04:
    if(D>0&&D<=20){
        printf("Your zodiac signs is ARIES\n\n");
        Z=4;
        }
        if(D>20&&D<30){
            printf("Your zodiac signs is TAURUS\n\n");
            Z=5;
        }
    break;
    case 05:
    if(D>0&&D<=21){
        printf("Your zodiac signs is TAURUS\n\n");
        }
        Z=5;
        if(D>21&&D<31){
            printf("Your zodiac signs is GEMINI\n\n");
            Z=6;
        }
    break;
    case 06:
    if(D>0&&D<=21){
        printf("Your zodiac signs is GEMINI\n\n");
        Z=6;
    }
        if(D>21&&D<30){
            printf("Your zodiac signs is CANCER\n\n");
        Z=7;
        }
    break;
    case 07:
    if(D>0&&D<=22){
        printf("Your zodiac signs is CANCER\n\n");
        Z=7;
        }
        if(D>22&&D<31){
            printf("Your zodiac signs is LEO\n\n");
            Z=8;
        }
    break;
    case 8:
    if(D>0&&D<=23){
        printf("Your zodiac signs is LEO\n\n");
        Z=8;
        }
        if(D>23&&D<31){
            printf("Your zodiac signs is VIRGO\n\n");
            Z=9;
        }
    break;
    case 9:
    if(D>0&&D<=24){
        printf("Your zodiac signs is VIRGO\n\n");
        Z=9;
        }
        if(D>24&&D<30){
            printf("Your zodiac signs is LIBRA\n\n");
            Z=10;
        }
       if(D>30){
    break;
    case 10:
    if(D>0&&D<=23){
        printf("Your zodiac signs is LIBRA\n\n");
        Z=10;
        }
        if(D>23&&D<31){
            printf("Your zodiac signs is SCORPIO\n\n");
            Z=11;
        }
    break;
    case 11:
    if(D>0&&D<=22){
        printf("Your zodiac signs is SCORPIO\n\n");
            Z=11;
        }
        if(D>22&&D<30){
            printf("Your zodiac signs is SAGITTARIUS\n\n");
            Z=12;
        }
    break;
    case 12:
    if(D>0&&D<=21){
        printf("Your zodiac signs is SAGITTARIUS\n\n");
        Z=12;
        }
        if(D>21&&D<30){
            printf("Your zodiac signs is CAPRICORN\n\n");
        Z=1;
        }
    break;
    }
    FECHA++;
//SIGNIFICADO DEL SIGNO
switch(Z){
        case 1: printf("You have a natural ability to find a solution to things, even if they look like lost cases. They are lovers of order, stability and of everything walking as planned.\n");
        break;
        case 2: printf("They are loving and very sensitive people are usually people born under this sign. They like noble causes and giving without expecting something in return.\n");
        break;
        case 3: printf("The honesty can be one of their best qualities. They handle a quite character and believe in others even if that may cause them some difficulty in being underpaid.\n");
        break;
        case 4: printf("Are adaptable and kind people, they can get along with others for their creativity and spontaneity. They are retailers and observers.\n");
        break;
        case 5: printf("This is a loving sign, which likes to be romantic at its best. He is also a lover of strength and resistance, with a great will to do things and put them on the right path.\n");
        break;
        case 6: printf ("Intelligence is one of his most known and recognized qualities, but not only of mind, but also of action. They are usually balanced, adaptable and very devoted to love.\n");
        break;
        case 7: printf("They are homely, romantic and very passionate people. They love to share in family all the moments, in addition to being delivered and dedicated. They are usually admired and very nice people, so they usually like everyone.\n");
        break;
        case 8: printf("They like to be leaders, relying on their ideas and convictions. They love to attract attention and have others' attention always on them, although there are times when pride wins them over.\n");
        break;
        case 9: printf("They are people of strong character, with firm and clear ideas, because when they want something they get whatever it takes. They have the ability to convince others, to be the center of attraction and the soul of parties or meetings.\n");
        break;
        case 10: printf("Balance is always present in your life, being a lover of stability and parity in all senses. They are quiet people, who like harmony and even loneliness in some moments, although it can also be quite the opposite, with disorder and noise.\n");
        break;
        case 11: printf("Calculating-minded, strong-willed, but kind-hearted at heart. Skilled at negotiating or achieving their goals. Obstacles become challenges that they usually overcome without consideration. They are also passionate.\n");
        break;
        case 12: printf("They are usually disorderly, trapped or even tantrum if things do not happen as they were thought. In contrast, they are able to focus all their energy to solve difficulties.\n");
        break;
    }

    //MENU
    while(MENU==0){
    printf("\n");
    printf("Okey, now what do you want to do? Choose a number\n");
    printf("1. MY HOROSCOPE OF THE DAY\n");
    printf("2. THE STRENGTHS AND WEAKNESSES IN MY SIGN\n");
    printf("3. YOUR COMPATIBILITY WITH OTHER SIGNS\n");
    printf("4. EXIT\n\n");
    printf("ANSWER:");
    scanf ("%d", &END);

    cls();
    
    if(END==1){
    HoroscopoDelDia();
    }
    if(END==2){
    FortalezasYDebilidades();
    }
    if(END==3){
    Compatibilidad();
    }
    if (END==4){
    printf("I hope you liked it\n\nEVELYN NANEZ IBANEZ 1961288\n\nPress ENTER to EXIT\n");
    MENU++;
    }
    if(END>=5|END==0){
            printf("There is an error, try again\n");
    }
    }
    }
    return 0;
}
}
