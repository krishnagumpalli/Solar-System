#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<dos.h>

void info();
void Sleep(int x){
delay(x);}
void main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\turboC3\\bgi");
    setfillstyle(SOLID_FILL,YELLOW);
    circle(20,20,125);
    floodfill(21,21,WHITE);
    outtextxy(160,40,"SUN");
    setfillstyle(SOLID_FILL,RED);
    circle(25,180,15);
    floodfill(26,181,WHITE);
    outtextxy(50,180,"MERCURY");
    setfillstyle(SOLID_FILL,6);
    circle(40,230,18);
    floodfill(41,231,WHITE);
    outtextxy(68,230,"VENUS");
    setfillstyle(SOLID_FILL,BLUE);
    circle(70,290,30);
    floodfill(61,301,WHITE);
    outtextxy(110,290,"EARTH");
    setfillstyle(SOLID_FILL,GREEN);
    line(66,274,73,277);
    line(65,275,66,274);
    line(73,277,75,278);
    line(65,275,67,280);
    line(75,278,73,280);
    line(67,280,60,278);
    line(73,280,80,279);
    line(60,278,60,283);
    line(80,279,79,283);
    line(60,283,63,283);
    line(79,283,76,283);
    line(63,283,67,295);
    line(76,283,67,295);
    floodfill(70,280,WHITE);
    setfillstyle(SOLID_FILL,28);
    circle(150,370,40);
    floodfill(151,371,WHITE);
    outtextxy(190,410,"MARS");
    setfillstyle(SOLID_FILL,22);
    circle(300,350,60);
    floodfill(271,351,WHITE);
    outtextxy(360,410,"JUPITER");
    setfillstyle(SOLID_FILL,39);
    circle(410,270,50);
    floodfill(399,271,WHITE);
    outtextxy(470,330,"SATURN");
    line(330,250,490,290);
    setfillstyle(SOLID_FILL,25);
    circle(490,170,45);
    floodfill(501,191,WHITE);
    outtextxy(545,225,"URANUS");
    setfillstyle(SOLID_FILL,18);
    circle(530,70,40);
    floodfill(531,71,WHITE);
    outtextxy(575,115,"NEPTUNE");
    getch();
    closegraph();
    system("cls");
int countr,num,i,r;
     char choice;

     mainhome_1:
     system("cls");
     printf("\n*******************************************************");
     printf("\nWelcome");
     printf("\nto the\n\nSOLAR SYSTEM INFO CENTRE");
     printf("\n*******************************************************");
     printf("\nPress any key if you're ready");
     printf("\n*******************************************************\n");
     getch();
     mainhome:
     system("cls");
     printf("\nSOLAR SYSTEM INFO CENTRE");
     printf("\n\n*******************************************************\n");
     printf("\nRead the facts and interesting information on our solar system and get ready for a little quiz to test your understanding.\nOr if you think you already know, go ahead and give the quiz a try.\nEither way, wish you the best!") ;
     printf("\n\n\n*******************************************************\n");
     printf("\n - Press I for the information");
     printf("\n - Press Q to start the game");
     printf("\n - Press any other key to quit");
     printf("\n\n*******************************************************\n");
     choice=toupper(getch());

    if (choice=='I')
	{
	info();getch();
	goto mainhome;

	}

    else if(choice=='Q')
    {
    system("cls");
    printf("\nWelcome to the Solar System Quiz");
    printf("\n*******************************************************\n");
    printf("\nAre you ready?\n5 questions, 4 options each\nPress the number corresponding to the option that you choose\nGood Luck!");
    printf("\n\n*******************************************************\n");
    printf("\nPress X to play the game\n\nPress any other key to go back to the home screen");
    if (toupper(getch())=='X')
		{
		    goto test;
        }
	else
		{
        goto mainhome;
       }

     test:
     system("cls");
     printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t     1");
     Sleep(1000);
     printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t     2");
     Sleep(1000);
     printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t     3");
     Sleep(1000);
     printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t Let's Go!");
     Sleep(1000);
     game:


     srand(time(0));
     int num = (rand() % (4 - 1 + 1)) + 1;
     countr=0;
     if(num==1)
     {
         for(i=1;i<=5;i++)
        {
            system("cls");
            printf("\nQUIZ");
            printf("\n*******************************************************\n");
            r=i;

            switch(r)
            {
                case 1:
                printf("\n\nQ1. Which planet has a horizontal axis of rotation?");
                printf("\n\n1) Neptune\n 2) Mars\n 3) Uranus\n 4) Saturn");
		if (toupper(getch())=='3')
                {printf("\n\nCorrect!");countr++;Sleep(2000);
		break;Sleep(2000);}
                else
                {printf("\n\nWrong! The correct answer is 3) Uranus");Sleep(2000);
                break;}

                case 2:
                printf("\n\nQ2. Which planet is the second smallest planet in the Solar System?");
                printf("\n\n1) Mercury\n 2) Venus\n 3) Mars\n 4) Earth");
		if (toupper(getch())=='3')
                {printf("\n\nCorrect!");countr++;Sleep(2000);
		break;Sleep(2000);}
                else
                {printf("\n\nWrong! The correct answer is 3) Mars");Sleep(2000);
                break;}

                case 3:
                printf("\n\nQ3. Which star is the nearest one to the Earth?");
                printf("\n\n1) Proxima Centauri\n 2) Sun\n 3) Moon\n 4) Venus");
		if (toupper(getch())=='2')
                {printf("\n\nCorrect!");countr++;Sleep(2000);
		break;Sleep(2000);}
                else
                {printf("\n\nWrong! The correct answer is 2) Sun ");Sleep(2000);
                break;}

                case 4:
                printf("\n\nQ4. How many moons are there around Saturn?");
                printf("\n\n1) 150\n 2) 62\n 3) 68\n 4) 29");
		if (toupper(getch())=='2')
                {printf("\n\nCorrect!");countr++;Sleep(2000);
		break;Sleep(2000);}
                else
                {printf("\n\nWrong! The correct answer is 2) 62");Sleep(2000);
                break;}

                case 5:
                printf("\n\nQ5. Which planet is often referred to as the 'ice giant'?");
                printf("\n\n1) Mercury\n 2) Neptune\n 3) Uranus\n 4) Saturn");
		if (toupper(getch())=='3')
                {printf("\n\nCorrect!");countr++;Sleep(2000);
		break;Sleep(2000);}
                else
                {printf("\n\nWrong! The correct answer is 3) Uranus");Sleep(2000);
                goto score;
		break;}

            }
        }
     }
     else if(num==2)
     {
         for(i=1;i<=5;i++)
        {
            system("cls");
            printf("\nQUIZ");
            printf("\n*******************************************************\n");
            r=i;

            switch(r)
            {
            	case 1:
                printf("\n\nQ1. A day on which planet is the same as 2 times its year?");
                printf("\n\n1) Saturn\n2) Mercury\n3) Venus\n4) Neptune");
		if (toupper(getch())=='2')
                {printf("\n\nCorrect!");countr++;Sleep(2000);
		break;Sleep(2000);}
                else
                {printf("\n\nWrong! The correct answer is 2) Mercury");Sleep(2000);
                break;}

                case 2:
                printf("\n\nQ2. Which planet has the tallest mountain in the Solar System?");
                printf("\n\n1) Mars\n2) Earth\n3) Jupiter\n4) Uranus");
		if (toupper(getch())=='1')
                {printf("\n\nCorrect!");countr++;Sleep(2000);
		break;Sleep(2000);}
                else
                {printf("\n\nWrong! The correct answer is 1) Mars");Sleep(2000);
                break;}

                case 3:
                printf("\n\nQ3. What is the densest planet in the Solar System?");
                printf("\n\n1) Jupiter\n2) Neptune\n3) Earth\n4) Venus");
		if (toupper(getch())=='3')
                {printf("\n\nCorrect!");countr++;Sleep(2000);
		break;Sleep(2000);}
                else
                {printf("\n\nWrong! The correct answer is 3) Earth");Sleep(2000);
                break;}

                case 4:
                printf("\n\nQ4. In what year was the term 'dwarf planet' introduced?");
                printf("\n\n1) 2008\n2) 2006\n3) 2005\n4) 2007");
		if (toupper(getch())=='2')
                {printf("\n\nCorrect!");countr++;Sleep(2000);
		break;Sleep(2000);}
                else
                {printf("\n\nWrong! The correct answer is 2) 2006");Sleep(2000);
                break;}

                case 5:
                printf("\n\nQ5. What lies between the orbits of Mars and Jupiter?");
                printf("\n\n1) Meteor Belt\n2) Asteroid Belt\n3) Comet Belt\n4) Halley's Comet");
		if (toupper(getch())=='2')
                {printf("\n\nCorrect!");countr++;Sleep(2000);
		break;Sleep(2000);}
                else
                {printf("\n\nWrong! The correct answer is 2) Asteroid Belt");Sleep(2000);
                goto score;
		break;}
            }
        }
     }
     else if(num==3)
     {
         for(i=1;i<=5;i++)
        {
            system("cls");
            printf("\nQUIZ");
            printf("\n*******************************************************\n");
            r=i;

            switch(r)
            {
            	case 1:
                printf("\n\nQ1. Which is the flattest planet in the Solar System?");
                printf("\n\n1) Saturn\n2) Earth\n3) Venus\n4) Neptune");
		if (toupper(getch())=='1')
                {printf("\n\nCorrect!");countr++;Sleep(2000);
		break;Sleep(2000);}
                else
                {printf("\n\nWrong! The correct answer is 1) Saturn");Sleep(2000);
                break;}

                case 2:
                printf("\n\nQ2. What is the number of natural satellites present in the Solar System?");
                printf("\n\n1) 350\n2) 278\n3) 336\n4) 401");
		if (toupper(getch())=='1')
                {printf("\n\nCorrect!");countr++;Sleep(2000);
		break;Sleep(2000);}
                else
                {printf("\n\nWrong! The correct answer is 1) 350");Sleep(2000);
                break;}

                case 3:
                printf("\n\nQ3. Which planet has the Great Red Spot?");
                printf("\n\n1) Uranus\n2) Neptune\n3) Jupiter\n4) Venus");
		if (toupper(getch())=='3')
                {printf("\n\nCorrect!");countr++;Sleep(2000);
		break;Sleep(2000);}
                else
                {printf("\n\nWrong! The correct answer is 3) Jupiter");Sleep(2000);
                break;}

                case 4:
                printf("\n\nQ4. How many dwarf planets have been classified till 2008?");
                printf("\n\n1) 2\n2) 6\n3) 5\n4) 8");
		if (toupper(getch())=='3')
                {printf("\n\nCorrect!");countr++;Sleep(2000);
		break;Sleep(2000);}
                else
                {printf("\n\nWrong! The correct answer is 3) 5");Sleep(2000);
                break;}

                case 5:
                printf("\n\nQ5. What is the number of day one year in Neptune is equivalent to in terms of Earth days?");
                printf("\n\n1) 10,756\n2) 789\n3) 25,273\n4) 60,190");
		if (toupper(getch())=='4')
                {printf("\n\nCorrect!");countr++;Sleep(2000);
		break;Sleep(2000);}
                else
                {printf("\n\nWrong! The correct answer is 4) 60,190");Sleep(2000);
                goto score;
		break;}
            }
        }
     }
     else if(num==4)
     {
         for(i=1;i<=5;i++)
        {
            system("cls");
            printf("\nQUIZ");
            printf("\n*******************************************************\n");
            r=i;

            switch(r)
            {
            	case 1:
                printf("\n\nQ1. What is the second brightest object in the night sky?");
                printf("\n\n1) Jupiter\n2) Moon\n3) Venus\n4) Mars");
		if (toupper(getch())=='3')
                {printf("\n\nCorrect!");countr++;Sleep(2000);
		break;Sleep(2000);}
                else
                {printf("\n\nWrong! The correct answer is 3) Venus");Sleep(2000);
                break;}

                case 2:
                printf("\n\nQ2. What is the largest moon in the Solar System?");
                printf("\n\n1) Titan\n2) Phobos\n3) Triton\n4) Ganymede");
		if (toupper(getch())=='4')
                {printf("\n\nCorrect!");countr++;Sleep(2000);
		break;Sleep(2000);}
                else
                {printf("\n\nWrong! The correct answer is 4) Ganymede");Sleep(2000);
                break;}

                case 3:
                printf("\n\nQ3. Which planet rotates in the opposite direction to most other planets?");
                printf("\n\n1) Jupiter\n2) Neptune\n3) Earth\n4) Venus");
		if (toupper(getch())=='4')
                {printf("\n\nCorrect!");countr++;Sleep(2000);
		break;Sleep(2000);}
                else
                {printf("\n\nWrong! The correct answer is 4) Venus");Sleep(2000);
                break;}

                case 4:
                printf("\n\nQ4. What percentage of the mass of the Solar System does the Sun make up?");
                printf("\n\n1) 73.24\n2) 99.86\n3) 88.93\n4) 98.67");
		if (toupper(getch())=='2')
                {printf("\n\nCorrect!");countr++;Sleep(2000);
		break;Sleep(2000);}
                else
                {printf("\n\nWrong! The correct answer is 2) 99.86");Sleep(2000);
                break;}

                case 5:
                printf("\n\nQ5. What is the coldest place in the Solar System?");
                printf("\n\n1) Triton\n2) Uranus\n3) Neptune\n4) Pluto");
		if (toupper(getch())=='1')
                {printf("\n\nCorrect!");countr++;Sleep(2000);
		break;Sleep(2000);}
                else
                {printf("\n\nWrong! The correct answer is 1) Triton");Sleep(2000);
                goto score;
		break;}
            }
        }
     }








	score:
    system("cls");
    printf("\n\nYou have answered %d questions correctly",countr);
    if (countr<=2){printf("\nBetter luck next time!\n\n\n\n\n\n");}
    else{printf("\nCongratulations!\n\n\n\n\n\n\n");}
    printf("\nPress any key to continue to the home screen");
    getch();
    goto mainhome;
        }
}

void info()
	{system("cls");
    printf("\nINFO");
    printf("\n*******************************************************\n");
    printf("\nYou will get points of information for each topic as you go along.\n\nPress any key after you're done with one topic to move on to the next.\n\nAfter you're done with all the topics, you will be directed back to the home screen where you can choose to play the quiz based on the information, or access the info centre again.\n\nPress any key to start reading.");
    getch();
    system("cls");
    printf("\nMERCURY");
    printf("\n*******************************************************\n");
    printf("\n - Mercury is the smallest planet in the Solar System.\n\n - Mercury is only the second hottest planet.\n\n - A year on Mercury is just 88 days long.\n\n - Mercury is only the second hottest planet.\n\n - Your weight on Mercury would be 38 percent of your weight on Earth.\n\n - A day on the surface of Mercury lasts 176 Earth days.\n\n - Mercury has a diameter of 4,879 km, making it the smallest planet.\n\n - Mercury is the second densest planet.\n\n - Mercury has a molten core.\n\n - Mercury is the most cratered planet in the Solar System.");
    getch();
    system("cls");
    printf("\nVENUS");
    printf("\n*******************************************************\n");
    printf("\n - Venus is the third smallest planet in the Solar System.\n\n - Venus is the second brightest object in the night sky.\n\n - Venus is also known as the Morning Star and the Evening Star.\n\n - Venus is the hottest planet in our solar system.\n\n - Venus is often called the Earth's sister planet.\n\n - Venus rotates in the opposite direction to most other planets.\n\n - A day on the surface of Venus (solar day) would appear to take 117 Earth days.\n\n - A year on Venus takes 225 Earth days.\n\n - Venus does not have any moons or rings.\n\n - Atmospheric pressure on Venus is 92 times greater than the Earth's.");
    getch();
    system("cls");
    printf("\nEARTH");
    printf("\n*******************************************************\n");
    printf("\n - Earth is our home planet.\n\n - The Earth is the densest planet in the Solar System.\n\n - There is only one natural satellite of the planet Earth, called the Moon.\n\n - The Earth was once believed to be the centre of the universe.\n\n - A day in Earth lasts 23 hours, 56 minutes and 4 seconds.\n\n - A year in Earth is 365.2564 days.\n\n - The Earth tilts at roughly 66 degrees.\n\n - 70 percent of the Earth's surface is covered in water.\n\n - The Earth's rotation is gradually slowing.\n\n - Earth has a powerful magnetic field.");
    getch();
    system("cls");
    printf("\nMARS");
    printf("\n*******************************************************\n");
    printf("\n - Mars is the fourth planet from the Sun.\n\n - It is the second smallest planet in the solar system.\n\n - Mars is also often described as the 'Red Planet' due to its reddish appearance.\n\n - Mars and Earth have approximately the same landmass.\n\n - Mars is home to the tallest mountain in the solar system.\n\n - Mars has the largest dust storms in the solar system.\n\n - On Mars the Sun appears about half the size as it does on Earth.\n\n - There are signs of liquid water on Mars.\n\n - A year on Mars lasts 687 days.\n\n - It has 2 moons, named Phobos & Deimos");
    getch();
    system("cls");
    printf("\nJUPITER");
    printf("\n*******************************************************\n");
    printf("\n - The planet Jupiter is the fifth planet out from the Sun.\n\n - It is made primarily of gases and is therefore known as a 'gas giant'.\n\n - Jupiter is the fourth brightest object in the solar system.\n\n - Jupiter has the shortest day of all the planets.\n\n - Jupiter orbits the Sun once every 11.8 Earth years.\n\n - The Great Red Spot is a huge storm on Jupiter.\n\n - Jupiter has a thin ring system.\n\n - It is two and a half times more massive than all the other planets in the solar system combined.\n\n - It has 29 moons.\n\n - Jupiter's moon Ganymede is the largest moon in the solar system.");
    getch();
    system("cls");
    printf("\nSATURN");
    printf("\n*******************************************************\n");
    printf("\n - Saturn is the sixth planet from the Sun.\n\n - It the most distant planet that can be seen with the naked eye.\n\n - Saturn is the second largest planet\n\n - It is best known for its fabulous ring system that was first observed in 1610 by the astronomer Galileo Galilei.\n\n - Saturn is the flattest planet.\n\n - Saturn orbits the Sun once every 29.4 Earth years.\n\n - Saturn has the most extensive rings in the solar system.\n\n - Saturn is made mostly of hydrogen.\n\n - Its orbit period is 10,756 days, or 29.5 years.\n\n - Saturn has 150 moons and smaller moonlets, with exactly 62 moons.");
    getch();
    system("cls");
    printf("\nURANUS");
    printf("\n*******************************************************\n");
    printf("\n - Uranus is the seventh planet from the Sun.\n\n - Uranus is often referred to as an 'ice giant' planet.\n\n - Uranus is the only planet that has a horizontal axis.\n\n - Uranus turns on its axis once every 17 hours, 14 minutes.\n\n - Uranus makes one trip around the Sun every 84 Earth years.\n\n - Uranus is the coldest planet in the Solar System.\n\n - The coldest temperature hits as low as -224 degrees Celsius\n\n - Uranus has two sets of very thin dark coloured rings.\n\n - It has 27 moons orbitting the planet.\n\n - Uranus' moons are named after characters created by William Shakespeare and Alexander Pope.");
    getch();
    system("cls");
    printf("\nNEPTUNE");
    printf("\n*******************************************************\n");
    printf("\n - Neptune is the eighth planet from the Sun making it the most distant in the solar system.\n\n - Neptune is the smallest of the ice giants.\n\n - Neptune has a very thin collection of rings.\n\n - Neptune has a very active climate.\n\n - Neptune spins on its axis very rapidly, taking 18 hours for one rotation.\n\n - One year in Neptune is equivalent to 60,190 days.\n\n - Large storms whirl through its upper atmosphere.\n\n - One of the largest storms ever seen was recorded in 1989 and it was called the Great Dark Spot.\n\n - Triton, one of the moons of Neptune, is the coldest place in the Solar System.");
    getch();
    system("cls");
    printf("\nSUN AND THE STARS");
    printf("\n*******************************************************\n");
    printf("\n - The Sun is a star found at the center of the Solar System.\n\n - It makes up around 99.86 percent of the Solar System's mass.\n\n - Light from the Sun reaches Earth in around 8 minutes.\n\n - The Sun's surface temperature is around 5500 degrees Celsius.\n\n - After the Sun in our Solar System, the nearest star to Earth is Proxima Centauri.\n\n - The light from stars takes millions of years to reach Earth, therefore when you look at the stars you are literally looking back in time.\n\n - Stars only appear to twinkle due to turbulences in the Earth's atmosphere deflecting the light that reaches our eyes.");
    getch();
    system("cls");
    printf("\nSATELLITES, DWARFS, AND DUST");
    printf("\n*******************************************************\n");
    printf("\n - As of 2018, there are a total of about 350 natural satellites in the Solar System.\n\n - Some scientists believe that water could exist below the surface of Europa.\n\n - In 2006 the International Astronomical Union adopted the term 'dwarf planet' for solar system objects that were bigger than small solar system bodies such as comets and asteroids but not quite planets.\n\n - As of 2008, there are five recognized dwarf planets: Pluto, Ceres, Eris, Makemake & Haumea.\n\n - Asteroids are small Solar System bodies that orbit the Sun.\n\n - The asteroid belt lies roughly between the orbits of Mars and Jupiter in the Solar System.");
     }
