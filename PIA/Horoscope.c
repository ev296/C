#include <stdio.h>
#include <stdlib.h>
#include "Horoscope.h"
void cls (void) {
system ("cls");
}
void HoroscopoDelDia (){
    int H; //SABER MÁS DEL HORÓSCOPO
    int RandH; //numero random del horóscopo del día
    int RandLove, RandCareer, RandWellB; //Saber más del horóscopo
    printf("MY HOROSCOPE OF THE DAY\n\n");
    RandH=(rand()%12)+1;
      switch(RandH){
        case 1: printf("An unusual and beneficial development in your personal life could have you contemplating moving. This represents not only a positive change in your living conditions, but in your entire life as well. New friends and contacts could appear on the scene, probably those in interesting professions or who share a lot of your own interests. Expect some visitors in the evening. This could be a rather overwhelming day, but a wonderful one nonetheless.\n");
        break;
        case 2: printf("Do not let embarrassment from past events get in the way of your pursuit of future dreams today. Own up to your mistakes and learn from them. You will gain more respect from others by openly admitting that you have done wrong, as opposed to trying to sneak away from the scene and hide out somewhere while pretending that you had nothing to do with the problem whatsoever.\n");
        break;
        case 3: printf("Today you might suddenly have the desire to look into your family history. Modern computer technology, particularly the Internet, has made it more possible than ever for everyone to learn about their ancestors, and now is a great time for you to do it. Spiritually, you might also decide to explore your own past lives or get in touch with spirit guides or totem animals. Group activities could be of great assistance in all these pursuits.Leave your doubts in the past and look forward to a brighter future.\n");
        break;
        case 4: printf("Remember, that you can only remain sovereign of the forest as long as the other animals around you are in support of your personality and leadership abilities. Avoid mutiny by taking care of the people in your world, instead of simply trying to rule their lives. Gain respect from others with kind words and a sensitive attitude, instead of by enforcing harsh rules and regulations that restrict and aggravate.\n");
        break;
        case 5: printf("Your ship is finally coming into port after being out in the rough seas for so long. It is time to pull into the harbor and dock the boat for a while. Relax on dry land and explore the neighboring area. There is nothing wrong with getting off your vessel for a while. You may not even have realized how much you missed solid ground until now. Remember what it is like to be stable again.\n");
        break;
        case 6:printf("By being around people who are rather negative and flippant, you might find yourself inadvertently picking up on these habits. Be careful of who you associate with, because you will find that others will judge you according to the company that you keep - especially if you start talking like those people as well. Make sure to maintain a respectful attitude and proper manners regardless of whom you are with.\n");
        break;
        case 7: printf("Your thinking is apt to be quite clear and rational today, which is especially important, since others will be looking to you for your thoughts and opinions on a certain matter. People will know that they will be able to get a straight and honest answer from you, so don't disappoint them. Think through each situation clearly before you offer your advice on the matter. You will find that it is worth the effort to do so.\n");
        break;
        case 8: printf("You might want to consider just giving yourself a rest today. You've been pushed to your limit recently and could do with a break. The pressure on you has been tremendous. Think about slowing down in order to take a break. You may not be going as fast as before, but you will find that this is exactly the rest that you need to complete what you need to get done.\n");
        break;
        case 9: printf("Sudden creative inspiration could come your way today, and you might want to express it through the use of modern technology in some way. This is a great day to learn computer graphics. If you've been thinking of trying your hand at writing, this is the day to get started. Your mind is especially quick and penetrating right now, so whatever you try today could bring considerable benefits your way.\n");
        break;
        case 10: printf("Your rock star attitude may be getting a bit old at this time. People aren't going to continue to fall for your stylish persona that demands attention all the time. Remember that every person in the world is special, so try not to act as if you are the only one. Help a child assemble their new toy airplane today, or assist a friend in picking out a new shirt. Do something for others instead of always expecting things for yourself.\n");
        break;
        case 11: printf("Today promises to be one of the most fortunate days you've had in a long time. You could find yourself in just the right place at the right time to meet the right person - which could propel you in a specific direction you've been wanting to take! This is not really pure luck, however. Changes that have been going on within you have caused you to attract the breaks you deserve. Make the most of them!\n");
        break;
        case 12: printf("Feel free to engage in goofy and playful activities when no one is watching. If you can't have fun with yourself, then who can you have fun with? Don't feel like you need to entertain the masses. All you need to do is entertain yourself. There is a strong guiding force that likes to see you having a good time. Remember that you can be productive today even when you are having fun.\n");
        break;
      }
        printf("\n");
        printf("You want to know something more?\n");
        printf("1. YOUR LOVE HOROSCOPE\n");
        printf("2. YOUR CAREER HOROSCOPE\n");
        printf("3. YOUR WELLBEING HOROSCOPE\n");
        printf("4. EXIT\n\n");
        printf("ANSWER:");
        scanf ("%d", &H);
        cls();

            switch(H){
            case 1: printf("YOUR LOVE HOROSCOPE\n\n");
            RandLove=(rand()%5)+1;
                switch(RandLove){
                case 1: printf("It is time to heal some petty disputes that you have had with a family member or friend. The energy of the day will help you to experience peace and mutual understanding with someone who has not always been close to you. It is a good time to be honest and clear and to let this person know what is on your mind. By being open, you will create a path for future peace.\n");
                break;
                case 2: printf("Today you could receive an interesting communication from someone. You might receive an email from an old friend. If you have lost contact with this person, it could be pleasant exchanging words with them again. Or you could receive a love letter from someone you used to date. An ex might even call you up on the phone. You'll have to decide what you feel about this person now. Just remain honest with yourself - and with them!\n");
                break;
                case 3:printf("Today you could be focused on those tiny details. Maybe you will be organizing your filing system by topic or name. Or maybe you will be putting together some links for a web page. You'll be focused on little things like letters, numbers, and shapes. You'll enjoy using that orderly brain of yours to create a more tidy system. So make time to do what you love best but don't neglect your partner!\n");
                break;
                case 4:printf("A marriage may be taking place; a couple whom you have known for a long time could well invite you to their wedding. The emotions generated by the occasion could bring new romance into your life - either with an established partner or with someone new. Don't be surprised if you spend the day all starry-eyed. That's what weddings are for! Enjoy the day and be glad for your friends.\n");
                break;
                case 5:printf("Sex and romance are very much on your mind today, though a get-together with a partner may not be possible at this time. Set one up if you can, but if not, go out with friends and enjoy some spirited conversation. You'll need some outlet for that energy that racy novels just won't satisfy! During the day: Stroll through an art gallery, and buy yourself a present at the gift shop.\n");
                break;
                }
            break;
            case 2: printf("YOUR CAREER HOROSCOPE\n\n");
            RandCareer=(rand()%5)+1;
                switch(RandCareer){
                case 1:printf("This is a good day to reflect on the past weeks and get some perspective. You have probably been working too hard, and neglecting the other priorities in your life. Give yourself this day to relax and visit with friends and relatives. Spend the day chatting, laughing and unwinding. Don't obsess about tasks that are waiting for you back at the office. Trust us, they are not going anywhere.\n");
                break;
                case 2:printf("Pleasant companionship may well surround you today. Friends at work may stop by to chat and say hello. Phone calls with business associates may be marked by increased feelings of mutual respect and collaboration. Consider spending some time with friends or family later on in the day. Perhaps an evening with just one very special person is what you'll enjoy most. Whatever your preference, make the most of the day's positive and social energy.\n");
                break;
                case 3:printf("Today your communication abilities are heightened. You will find it easy to express yourself and relate to others, either verbally or in writing. If you have to make a presentation or write a speech, you will find that you are calm and inspired as you do so. In fact, anything you work on today should flow smoothly and easily. Enjoy this great day!\n");
                break;
                case 4:printf("You can expect to take a lot of short journeys today, as you do some shopping and attend a social event. You have an imaginative way about you, making your company especially coveted by friends, coworkers and family. You're especially bright and communicative today, making others enjoy you even more than usual. Pleasant companionship is guaranteed, so enjoy your day!\n");
                break;
                case 5:printf("You may find yourself the life of the party today. The break from work and routine may have you feeling on top of the world and ready to make fun happen. Chances are good that you'll have a real magnetic appeal to those around you and that you'll find yourself in like-minded company. Allow yourself to get into the mood and enjoy the upbeat environment. You deserve to take a break and to relax a little bit. Whether you party with colleagues or with friends outside of work, you're likely to have a lot of fun!\n");
                break;
                }
            break;
            case 3:printf("YOUR WELLBEING HOROSCOPE\n\n");
            RandWellB=(rand()%5)+1;
                switch(RandWellB){
                case 1:printf("The question \"Am I losing my memory?\" may come up constantly today. You might have the strange feeling that there was something you had to do, but can't quite remember what. Don't worry about it - if you push yourself too hard you'll drive yourself crazy. Your imagination could come up with a lot of ideas for stories, poems, etc. Write them down as soon as they come. You'll want to remember them!\n");
                break;
                case 2:printf("Today you might not feel quite so secure about your financial situation, and thus you might get a little nervous. Disconcerting information in the news about the general state of the world economy might have planted some unsettling seeds in your mind. However, on the whole you should be pretty stable now financially, and this trend is likely to continue. Check out the facts before giving in to panic.");
                break;
                case 3:printf("Sometimes you give out more energy than you receive. You tend to support other people emotionally or financially, but sometimes you don't receive from them in return. Today you could notice that you are feeling a bit tired or drained. This could be because of this energy imbalance. You'll feel good if you can pinpoint how things got off track. Then you'll be well on your way to correcting the problem!\n");
                break;
                case 4:printf("You could meet someone very unusual today. Pay attention to interesting, eccentric types who might cross your path. You could have a stimulating exchange with them. Perhaps you will meet an unconventional artist or entrepreneur. By talking with them and scanning their energy, you could tune into a different way of living. And this could give you some perspective on what might be missing in your life. You might need to get in touch with your inner eccentric!\n");
                break;
                }
            break;
            }
            printf("\n");
}
void FortalezasYDebilidades(){
        int RandStrengts, RandWeakness; //Strengts and weaknesses
        printf("THE STRENGTHS AND WEAKNESSES IN MY SIGN\n\n");
        printf("STRENGTHS:\n");
            RandStrengts=(rand()%5)+1;
            switch(RandStrengts){
            case 1: printf("Courageous, determined, confident, enthusiastic, optimistic, honest and passionate\n");
            break;
            case 2: printf("Reliable, patient, practical, devoted, responsible and stable\n");
            break;
            case 3: printf("Gentle, affectionate, curious, adaptable, ability to learn quickly and exchange ideas\n");
            break;
            case 4: printf("Tenacious, highly imaginative, loyal, emotional, sympathetic and persuasive\n");
            break;
            case 5: printf("Creative, passionate, generous, warm-hearted, cheerful, humorous\n");
            break;
            }
            printf("\n");
        printf("WEAKNESSES:\n");
            RandWeakness=(rand()%5)+1;
            switch(RandWeakness){
            case 1: printf("Impatient, moody, short-tempered, impulsive and aggressive\n");
            break;
            case 2: printf("Stubborn, possessive and uncompromising\n");
            break;
            case 3: printf("Nervous, inconsistent and indecisive\n");
            break;
            case 4: printf("Moody, pessimistic, suspicious, manipulative and insecure\n");
            break;
            case 5: printf("None\n");
            break;
            }
            printf("\n");
    }
void Compatibilidad (){
    printf("YOUR COMPATIBILITY WITH OTHER SIGNS\n");
        switch(Z){
        case 1: printf("Compatible: This earth sign is ambitious, cold, calculating and predictable, which makes it closer to Scorpio and Pisces.\n\n");
                printf("Not compatible: Capricorn does not match Aries and Libra, and its totally opposite sign is Cancer.\n\n");
        break;
        case 2: printf("Compatible: Aquarium is an air sign that is characterized by being original, innovative, independent and good friend. Therefore, your ideal partner would be an Aries or a Sagittarius.\n\n");
                printf("To make a friendship the best option is Gemini.\n\n");
                printf("Not compatible: Aquarium does not click with Taurus or Scorpio, and its opposite sign is Leo, because both enjoy being in the spotlight\n\n");
        break;
        case 3: printf("Compatible: this water sign is imaginative, sensitive, calm, patient and spiritual, which brings it closer to Capricorn and Taurus.\n\n");
                printf("Not compatible: Gemini and Sagittarius are the signs that do not match Pisces. Virgo is its totally opposite sign, mainly because those who have it are very practical and analysts.\n\n");
        break;
        case 4: printf("Compatible: Aries, a sign of fire, is characterized by its energy, is pioneering, adventurous and brave; in addition, is very sure of itself pampering. That is why the signs that agree most with love are Aquarius and Gemini. But if you are looking for a friendship, Leo and Sagittarius are the ones.\n\n");
                printf("Not compatible: Don not even think about having a relationship with Cancer and Capricorn; it will break soon.\n\n");
        break;
        case 5: printf("Compatible: People under this sign are patient and persistent, they love to feel safe and love fidelity, but they can also be jealous and possessive. Your ideal partner can be Cancer or Pisces.\n\n");
                printf("In friendship, Virgo and Capricorn are the choice.\n\n");
                printf("Not compatible: Neither Leo nor Aquarium are indicated.\n\n");
        break;
        case 6: printf("Compatible: It is an air sign; you have to feel freedom. These people are characterized by being affectionate and intellectual, so they are akin to Aries and Leo. With Libra and Aquarius you can have a good friendship.\n\n");
                printf("Incompatible: Virgo and Pisces will not reach agreements with Gemini.\n\n");
        break;
        case 7: printf("Compatible: This water sign usually has mood swings and is quite reserved. In addition, he is a worker, family, homely, reliable, loyal and very good person, so his ideal partner are the signs of land, Virgo and Taurus.\n\n");
                printf("Unsupported: Aries and Libra are the signs that are least related to Cancer.\n\n");
        break;
        case 8: printf("Compatible: Leo is a sign of fire, which makes him adventurous, confident, generous, faithful and loving. With Libra he maintains a balanced relationship, with Gemini he enjoys social gatherings, and Sagittarius and Aries are joined by enthusiasm.\n\n");
                printf("Not compatible: Taurus and Scorpio are the signs with which it has the least affinity.\n\n");
        break;
        case 9: printf("Compatible: This earth sign is usually very perfectionist, intelligent, hard-working and practical. He tends to worry excessively and be quite critical of others. Therefore, Scorpio and Cancer are his best option.\n\n");
                printf("Not compatible: Gemini and Sagittarius are not compatible with Virgo, and Pisces is its opposite sign; however, being a dreamer could also be its complement.\n\n");
        break;
        case 10:printf("Compatible: Libra is an air sign and is characterized by being elegant, analytical and sociable so it is better related to Leo and Sagittarius. Besides, out of curiosity they are excellent friends for Aquarius and Gemini.\n\n");
                printf("Not compatible: Libra has no strong affinity with Cancer and Capricorn.\n\n");
        break;
        case 11:printf("Compatible: This water sign is passionate, dogmatic, emotional, deep, therefore, your ideal partner is Capricorn or Virgo.\n\n");
                printf("Not compatible: Scorpio is less compatible with Leo and Aquarius.\n\n");
        break;
        case 12:printf("Compatible: Sagittarius is a sign of fire and is usually adventurous, energetic, optimistic, self-confident and sympathetic. Therefore it sympathizes better with Aquarius and Libra.\n\n");
                printf("Not compatible: Virgo and Pisces are the least Sagittarius-like, while Gemini is their opposite sign, which would complicate them making solid and serious decisions about the future.\n\n");
        break;
        }
    }
