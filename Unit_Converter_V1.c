/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

/*Unit Conversion Program*/
/*Print welcome message, create selection screen*/
int main()
{
    int option = -1;
    printf("Welcome to the Unit Conversion Program!\n\n");
    printf("Please select from the following options what type of unit you would like to convert.\n");
    printf("\n1: Distance\n");
    printf("2: Volume\n");
    printf("3: Mass\n");
    printf("4: Time\n");
    printf("5: Temperature\n");
    
    /*Infinite Loop for option input*/
    while (1){
        printf("\nEnter a number option from above: ");
        scanf("%d", &option);
        
        /*Elseif ladder for determining what was selected, will lead to further elseif loops*/
        /*Distance*/
            /*Options: Feet, Inches, Miles, Yard, Meters, Centimeters, Millimeters, Kilometers*/ 
        if(option == 1) {
            printf("\n\nYou have selected 'Distance'\n");
            printf("\nPlease select from the following options what unit you'd like to convert FROM:\n");
            printf("1: Feet\n");
            printf("2: Inches\n");
            printf("3: Miles\n");
            printf("4: Yards\n");
            printf("5: Meters\n");
            printf("6: Centimeters\n");
            printf("7: Millimeters\n");
            printf("8: Kilometers\n");
            printf("\nEnter a number option from above: ");
            scanf("%d", &option);
            if(option == 1) {
                printf("\n\nYou have selected 'Feet'\n");
                printf("\nPlease select from the following options what unit you'd like to convert TO:\n");
                printf("1: Inches\n");
                printf("2: Miles\n");
                printf("3: Yards\n");
                printf("4: Meters\n");
                printf("5: Centimeters\n");
                printf("6: Millimeters\n");
                printf("7: Kilometers\n");
                printf("\nEnter a number option from above: ");
                scanf("%d", &option);
                if(option == 1) {
                    printf("\n\nYou have selected 'Inches'\n");
                    float inch, feet;
                    printf("Enter the distance in Feet: ");
                    scanf("%f", &feet);
                    inch = feet * 12;
                    printf("Distance in Inches: %f",inch);
                }
                else if (option == 2) {
                    printf("\n\nYou have selected 'Miles'\n");
                    float mile, feet;
                    printf("Enter the distance in Feet: ");
                    scanf("%f", &feet);
                    mile = feet / 5280;
                    printf("Distance in Miles: %f", mile);
                }
                else if (option == 3) {
                    printf("\n\nYou have selected 'Yards'\n");
                    float yard, feet;
                    printf("Enter the distance in Feet: ");
                    scanf("%f", &feet);
                    yard = feet / 3;
                    printf("Distance in Yards: %f", yard);
                }
                else if (option == 4) {
                    printf("\n\nYou have selected 'Meters'\n");
                    float meter, feet;
                    printf("Enter the distance in Feet: ");
                    scanf("%f", &feet);
                    meter = feet / 3.281;
                    printf("Distance in Meters: %f", meter);
                }
                else if (option == 5) {
                    printf("\n\nYou have selected 'Centimeters'\n");
                    float cmeter, feet;
                    printf("Enter the distance in Feet: ");
                    scanf("%f", &feet);
                    cmeter = feet * 30.48;
                    printf("Distance in Centimeters: %f", cmeter);
                }
                else if (option == 6) {
                    printf("\n\nYou have selected 'Millimeters'\n");
                    float mmeter, feet;
                    printf("Enter the distance in Feet: ");
                    scanf("%f", &feet);
                    mmeter = feet * 304.8;
                    printf("Distance in Millimeters: %f", mmeter);
                }
                else if (option == 7) {
                    printf("\n\nYou have selected 'Kilometers'\n");
                    float kmeter, feet;
                    printf("Enter the distance in Feet: ");
                    scanf("%f", &feet);
                    kmeter = feet / 3281;
                    printf("Distance in Kilometers: %f", kmeter);
                    break;
                }
                else {
                printf("Invalid selection, please return to main menu.");
                }
            }
            else if(option == 2){
                printf("\n\nYou have selected 'Inches'");
                printf("\nPlease select from the following options what unit you'd like to convert TO:\n");
                printf("1: Feet\n");
                printf("2: Miles\n");
                printf("3: Yards\n");
                printf("4: Meters\n");
                printf("5: Centimeters\n");
                printf("6: Millimeters\n");
                printf("7: Kilometers\n");
                printf("\nEnter a number option from above: ");
                scanf("%d", &option);
                if(option == 1) {
                    printf("\n\nYou have selected 'Feet'\n");
                    float inch, feet;
                    printf("Enter the distance in Inches: ");
                    scanf("%f", &inch);
                    feet = inch / 12;
                    printf("Distance in Feet: %f",feet);
                }
                else if (option == 2) {
                    printf("\n\nYou have selected 'Miles'\n");
                    float mile, inch;
                    printf("Enter the distance in Inches: ");
                    scanf("%f", &inch);
                    mile = inch / 63360;
                    printf("Distance in Miles: %f", mile);
                }
                else if (option == 3) {
                    printf("\n\nYou have selected 'Yards'\n");
                    float yard, inch;
                    printf("Enter the distance in Inches: ");
                    scanf("%f", &inch);
                    yard = inch / 36;
                    printf("Distance in Yards: %f", yard);
                }
                else if (option == 4) {
                    printf("\n\nYou have selected 'Meters'\n");
                    float meter, inch;
                    printf("Enter the distance in Inches: ");
                    scanf("%f", &inch);
                    meter = inch / 39.37;
                    printf("Distance in Meters: %f", meter);
                }
                else if (option == 5) {
                    printf("\n\nYou have selected 'Centimeters'\n");
                    float cmeter, inch;
                    printf("Enter the distance in Inches: ");
                    scanf("%f", &inch);
                    cmeter = inch * 2.54;
                    printf("Distance in Centimeters: %f", cmeter);
                }
                else if (option == 6) {
                    printf("\n\nYou have selected 'Millimeters'\n");
                    float mmeter, inch;
                    printf("Enter the distance in Inches: ");
                    scanf("%f", &inch);
                    mmeter = inch * 25.4;
                    printf("Distance in Millimeters: %f", mmeter);
                }
                else if (option == 7) {
                    printf("\n\nYou have selected 'Kilometers'\n");
                    float kmeter, inch;
                    printf("Enter the distance in Inches: ");
                    scanf("%f", &inch);
                    kmeter = inch / 39370;
                    printf("Distance in Kilometers: %f", kmeter);
                    break;
                }
                else {
                printf("Invalid selection, please return to main menu.");
                }
            }
            else if(option == 3){
                printf("\n\nYou have selected 'Miles'");
                printf("\nPlease select from the following options what unit you'd like to convert TO:\n");
                printf("1: Feet\n");
                printf("2: Inches\n");
                printf("3: Yards\n");
                printf("4: Meters\n");
                printf("5: Centimeters\n");
                printf("6: Millimeters\n");
                printf("7: Kilometers\n");
                printf("\nEnter a number option from above: ");
                scanf("%d", &option);
                if(option == 1) {
                    printf("\n\nYou have selected 'Feet'\n");
                    float mile, feet;
                    printf("Enter the distance in Miles: ");
                    scanf("%f", &mile);
                    feet = mile * 5280;
                    printf("Distance in Feet: %f",feet);
                }
                else if (option == 2) {
                    printf("\n\nYou have selected 'Inches'\n");
                    float mile, inch;
                    printf("Enter the distance in Miles: ");
                    scanf("%f", &mile);
                    inch = mile * 63360;
                    printf("Distance in Inches: %f", inch);
                }
                else if (option == 3) {
                    printf("\n\nYou have selected 'Yards'\n");
                    float yard, mile;
                    printf("Enter the distance in Miles: ");
                    scanf("%f", &mile);
                    yard = mile * 1760;
                    printf("Distance in Yards: %f", yard);
                }
                else if (option == 4) {
                    printf("\n\nYou have selected 'Meters'\n");
                    float meter, mile;
                    printf("Enter the distance in Miles: ");
                    scanf("%f", &mile);
                    meter = mile * 1609.34;
                    printf("Distance in Meters: %f", meter);
                }
                else if (option == 5) {
                    printf("\n\nYou have selected 'Centimeters'\n");
                    float cmeter, mile;
                    printf("Enter the distance in Miles: ");
                    scanf("%f", &mile);
                    cmeter = mile * 160934;
                    printf("Distance in Centimeters: %f", cmeter);
                }
                else if (option == 6) {
                    printf("\n\nYou have selected 'Millimeters'\n");
                    float mmeter, mile;
                    printf("Enter the distance in Miles: ");
                    scanf("%f", &mile);
                    mmeter = mile * 1609340;
                    printf("Distance in Millimeters: %f", mmeter);
                }
                else if (option == 7) {
                    printf("\n\nYou have selected 'Kilometers'\n");
                    float kmeter, mile;
                    printf("Enter the distance in Miles: ");
                    scanf("%f", &mile);
                    kmeter = mile * 1.60934;
                    printf("Distance in Kilometers: %f", kmeter);
                    break;
                }
                else {
                printf("Invalid selection, please return to main menu.");
                }
            }
            else if(option == 4){
                printf("\n\nYou have selected 'Yards'");
                printf("\nPlease select from the following options what unit you'd like to convert TO:\n");
                printf("1: Feet\n");
                printf("2: Inches\n");
                printf("3: Miles\n");
                printf("4: Meters\n");
                printf("5: Centimeters\n");
                printf("6: Millimeters\n");
                printf("7: Kilometers\n");
                printf("\nEnter a number option from above: ");
                scanf("%d", &option);
                if(option == 1) {
                    printf("\n\nYou have selected 'Feet'\n");
                    float yard, feet;
                    printf("Enter the distance in Yards: ");
                    scanf("%f", &yard);
                    feet = yard * 3;
                    printf("Distance in Feet: %f",feet);
                }
                else if (option == 2) {
                    printf("\n\nYou have selected 'Inches'\n");
                    float yard, inch;
                    printf("Enter the distance in Yards: ");
                    scanf("%f", &yard);
                    inch = yard * 36;
                    printf("Distance in Inches: %f", inch);
                }
                else if (option == 3) {
                    printf("\n\nYou have selected 'Miles'\n");
                    float yard, mile;
                    printf("Enter the distance in Yards: ");
                    scanf("%f", &yard);
                    mile = yard / 1760;
                    printf("Distance in Miles: %f", mile);
                }
                else if (option == 4) {
                    printf("\n\nYou have selected 'Meters'\n");
                    float meter, yard;
                    printf("Enter the distance in Yards: ");
                    scanf("%f", &yard);
                    meter = yard / 1.094;
                    printf("Distance in Meters: %f", meter);
                }
                else if (option == 5) {
                    printf("\n\nYou have selected 'Centimeters'\n");
                    float cmeter, yard;
                    printf("Enter the distance in Yards: ");
                    scanf("%f", &yard);
                    cmeter = yard * 91.44;
                    printf("Distance in Centimeters: %f", cmeter);
                }
                else if (option == 6) {
                    printf("\n\nYou have selected 'Millimeters'\n");
                    float mmeter, yard;
                    printf("Enter the distance in Yards: ");
                    scanf("%f", &yard);
                    mmeter = yard * 914.4;
                    printf("Distance in Millimeters: %f", mmeter);
                }
                else if (option == 7) {
                    printf("\n\nYou have selected 'Kilometers'\n");
                    float kmeter, yard;
                    printf("Enter the distance in Yards: ");
                    scanf("%f", &yard);
                    kmeter = yard / 1094;
                    printf("Distance in Kilometers: %f", kmeter);
                    break;
                }
                else {
                printf("Invalid selection, please return to main menu.");
                }
            }
            else if(option == 5){
                printf("\n\nYou have selected 'Meters'");
                printf("\nPlease select from the following options what unit you'd like to convert TO:\n");
                printf("1: Feet\n");
                printf("2: Inches\n");
                printf("3: Miles\n");
                printf("4: Yards\n");
                printf("5: Centimeters\n");
                printf("6: Millimeters\n");
                printf("7: Kilometers\n");
                printf("\nEnter a number option from above: ");
                scanf("%d", &option);
                if(option == 1) {
                    printf("\n\nYou have selected 'Feet'\n");
                    float meter, feet;
                    printf("Enter the distance in Meters: ");
                    scanf("%f", &meter);
                    feet = meter * 3.281;
                    printf("Distance in Feet: %f",feet);
                }
                else if (option == 2) {
                    printf("\n\nYou have selected 'Inches'\n");
                    float meter, inch;
                    printf("Enter the distance in Meters: ");
                    scanf("%f", &meter);
                    inch = meter * 39.3701;
                    printf("Distance in Inches: %f", inch);
                }
                else if (option == 3) {
                    printf("\n\nYou have selected 'Miles'\n");
                    float meter, mile;
                    printf("Enter the distance in Meters: ");
                    scanf("%f", &meter);
                    mile = meter / 1609;
                    printf("Distance in Miles: %f", mile);
                }
                else if (option == 4) {
                    printf("\n\nYou have selected 'Yards'\n");
                    float meter, yard;
                    printf("Enter the distance in Meters: ");
                    scanf("%f", &meter);
                    yard = meter * 1.09361;
                    printf("Distance in Yards: %f", yard);
                }
                else if (option == 5) {
                    printf("\n\nYou have selected 'Centimeters'\n");
                    float cmeter, meter;
                    printf("Enter the distance in Meters: ");
                    scanf("%f", &meter);
                    cmeter = meter * 100;
                    printf("Distance in Centimeters: %f", cmeter);
                }
                else if (option == 6) {
                    printf("\n\nYou have selected 'Millimeters'\n");
                    float mmeter, meter;
                    printf("Enter the distance in Meters: ");
                    scanf("%f", &meter);
                    mmeter = meter * 1000;
                    printf("Distance in Millimeters: %f", mmeter);
                }
                else if (option == 7) {
                    printf("\n\nYou have selected 'Kilometers'\n");
                    float kmeter, meter;
                    printf("Enter the distance in Meters: ");
                    scanf("%f", &meter);
                    kmeter = meter / 1000;
                    printf("Distance in Kilometers: %f", kmeter);
                    break;
                }
                else {
                printf("Invalid selection, please return to main menu.");
                }
            }
            else if(option == 6){
                printf("\n\nYou have selected 'Centimeters'");
                printf("\nPlease select from the following options what unit you'd like to convert TO:\n");
                printf("1: Feet\n");
                printf("2: Inches\n");
                printf("3: Miles\n");
                printf("4: Yards\n");
                printf("5: Meters\n");
                printf("6: Millimeters\n");
                printf("7: Kilometers\n");
                printf("\nEnter a number option from above: ");
                scanf("%d", &option);
                if(option == 1) {
                    printf("\n\nYou have selected 'Feet'\n");
                    float cmeter, feet;
                    printf("Enter the distance in Centimeters: ");
                    scanf("%f", &cmeter);
                    feet = cmeter / 30.48;
                    printf("Distance in Feet: %f",feet);
                }
                else if (option == 2) {
                    printf("\n\nYou have selected 'Inches'\n");
                    float cmeter, inch;
                    printf("Enter the distance in Centimeters: ");
                    scanf("%f", &cmeter);
                    inch = cmeter / 2.54;
                    printf("Distance in Inches: %f", inch);
                }
                else if (option == 3) {
                    printf("\n\nYou have selected 'Miles'\n");
                    float cmeter, mile;
                    printf("Enter the distance in Centimeters: ");
                    scanf("%f", &cmeter);
                    mile = cmeter / 160900;
                    printf("Distance in Miles: %f", mile);
                }
                else if (option == 4) {
                    printf("\n\nYou have selected 'Yards'\n");
                    float cmeter, yard;
                    printf("Enter the distance in Centimeters: ");
                    scanf("%f", &cmeter);
                    yard = cmeter / 91.44;
                    printf("Distance in Yards: %f", yard);
                }
                else if (option == 5) {
                    printf("\n\nYou have selected 'Meters'\n");
                    float cmeter, meter;
                    printf("Enter the distance in Centimeters: ");
                    scanf("%f", &cmeter);
                    meter = cmeter / 100;
                    printf("Distance in Meters: %f", meter);
                }
                else if (option == 6) {
                    printf("\n\nYou have selected 'Millimeters'\n");
                    float mmeter, cmeter;
                    printf("Enter the distance in Centimeters: ");
                    scanf("%f", &cmeter);
                    mmeter = cmeter * 10;
                    printf("Distance in Millimeters: %f", mmeter);
                }
                else if (option == 7) {
                    printf("\n\nYou have selected 'Kilometers'\n");
                    float kmeter, cmeter;
                    printf("Enter the distance in Centimeters: ");
                    scanf("%f", &cmeter);
                    kmeter = cmeter / 100000;
                    printf("Distance in Kilometers: %f", kmeter);
                    break;
                }
                else {
                printf("Invalid selection, please return to main menu.");
                }
            }
            else if(option == 7){
                printf("\n\nYou have selected 'Millimeters'");
                printf("\nPlease select from the following options what unit you'd like to convert TO:\n");
                printf("1: Feet\n");
                printf("2: Inches\n");
                printf("3: Miles\n");
                printf("4: Yards\n");
                printf("5: Meters\n");
                printf("6: Centimeters\n");
                printf("7: Kilometers\n");
                printf("\nEnter a number option from above: ");
                scanf("%d", &option);
                if(option == 1) {
                    printf("\n\nYou have selected 'Feet'\n");
                    float mmeter, feet;
                    printf("Enter the distance in Millimeters: ");
                    scanf("%f", &mmeter);
                    feet = mmeter / 304.8;
                    printf("Distance in Feet: %f",feet);
                }
                else if (option == 2) {
                    printf("\n\nYou have selected 'Inches'\n");
                    float mmeter, inch;
                    printf("Enter the distance in Millimeters: ");
                    scanf("%f", &mmeter);
                    inch = mmeter / 25.4;
                    printf("Distance in Inches: %f", inch);
                }
                else if (option == 3) {
                    printf("\n\nYou have selected 'Miles'\n");
                    float mmeter, mile;
                    printf("Enter the distance in Millimeters: ");
                    scanf("%f", &mmeter);
                    mile = mmeter / 1609000;
                    printf("Distance in Miles: %f", mile);
                }
                else if (option == 4) {
                    printf("\n\nYou have selected 'Yards'\n");
                    float mmeter, yard;
                    printf("Enter the distance in Millimeters: ");
                    scanf("%f", &mmeter);
                    yard = mmeter / 914.4;
                    printf("Distance in Yards: %f", yard);
                }
                else if (option == 5) {
                    printf("\n\nYou have selected 'Meters'\n");
                    float mmeter, meter;
                    printf("Enter the distance in Millimeters: ");
                    scanf("%f", &mmeter);
                    meter = mmeter / 1000;
                    printf("Distance in Meters: %f", meter);
                }
                else if (option == 6) {
                    printf("\n\nYou have selected 'Centimeters'\n");
                    float mmeter, cmeter;
                    printf("Enter the distance in Millimeters: ");
                    scanf("%f", &mmeter);
                    cmeter = mmeter / 10;
                    printf("Distance in Centimeters: %f", cmeter);
                }
                else if (option == 7) {
                    printf("\n\nYou have selected 'Kilometers'\n");
                    float kmeter, mmeter;
                    printf("Enter the distance in Millimeters: ");
                    scanf("%f", &mmeter);
                    kmeter = mmeter / 1000000;
                    printf("Distance in Kilometers: %f", kmeter);
                    break;
                }
                else {
                printf("Invalid selection, please return to main menu.");
                }
            }
            else if(option == 8){
                printf("\n\nYou have selected 'Kilometers'");
                printf("\nPlease select from the following options what unit you'd like to convert TO:\n");
                printf("1: Feet\n");
                printf("2: Inches\n");
                printf("3: Miles\n");
                printf("4: Yards\n");
                printf("5: Meters\n");
                printf("6: Centimeters\n");
                printf("7: Millimeters\n");
                printf("\nEnter a number option from above: ");
                scanf("%d", &option);
                if(option == 1) {
                    printf("\n\nYou have selected 'Feet'\n");
                    float kmeter, feet;
                    printf("Enter the distance in Kilometers: ");
                    scanf("%f", &kmeter);
                    feet = kmeter * 3280.84;
                    printf("Distance in Feet: %f",feet);
                }
                else if (option == 2) {
                    printf("\n\nYou have selected 'Inches'\n");
                    float kmeter, inch;
                    printf("Enter the distance in Kilometers: ");
                    scanf("%f", &kmeter);
                    inch = kmeter * 39370.1;
                    printf("Distance in Inches: %f", inch);
                }
                else if (option == 3) {
                    printf("\n\nYou have selected 'Miles'\n");
                    float kmeter, mile;
                    printf("Enter the distance in Kilometers: ");
                    scanf("%f", &kmeter);
                    mile = kmeter / 1.609;
                    printf("Distance in Miles: %f", mile);
                }
                else if (option == 4) {
                    printf("\n\nYou have selected 'Yards'\n");
                    float kmeter, yard;
                    printf("Enter the distance in Kilometers: ");
                    scanf("%f", &kmeter);
                    yard = kmeter / 1093.61;
                    printf("Distance in Yards: %f", yard);
                }
                else if (option == 5) {
                    printf("\n\nYou have selected 'Meters'\n");
                    float kmeter, meter;
                    printf("Enter the distance in Kilometers: ");
                    scanf("%f", &kmeter);
                    meter = kmeter * 1000;
                    printf("Distance in Meters: %f", meter);
                }
                else if (option == 6) {
                    printf("\n\nYou have selected 'Centimeters'\n");
                    float kmeter, cmeter;
                    printf("Enter the distance in Kilometers: ");
                    scanf("%f", &kmeter);
                    cmeter = kmeter * 100000;
                    printf("Distance in Centimeters: %f", cmeter);
                }
                else if (option == 7) {
                    printf("\n\nYou have selected 'Millimeters'\n");
                    float kmeter, mmeter;
                    printf("Enter the distance in Kilometers: ");
                    scanf("%f", &kmeter);
                    mmeter = kmeter * 1000000;
                    printf("Distance in Millimeters: %f", mmeter);
                    break;
                }
                else {
                printf("Invalid selection, please return to main menu.");
                }
                break;
            }
            else
                printf("Invalid selection, please return to main menu.");
            }
        else if (option == 2) {
            /*Volume*/
                /*Options: Cubic Meter, Cubic Centimeter, Milliliter, Liter, Fluid Ounce, Pint, Quart, Gallon*/ 
            printf("\n\nYou have selected 'Volume'\n");
            printf("\nPlease select from the following options what unit you'd like to convert FROM:\n");
            printf("1: Cubic Meters\n");
            printf("2: Cubic Centimeters\n");
            printf("3: Liters\n");
            printf("4: Milliliters\n");
            printf("5: Fluid Ounces\n");
            printf("6: Pints\n");
            printf("7: Quarts\n");
            printf("8: Gallons\n");
            printf("\nEnter a number option from above: ");
            scanf("%d", &option);
            if(option == 1) {
                printf("\n\nYou have selected 'Cubic Meter'\n");
                printf("\nPlease select from the following options what unit you'd like to convert TO:\n");
                printf("1: Cubic Centimeters\n");
                printf("2: Liters\n");
                printf("3: Milliliters\n");
                printf("4: Fluid Ounces\n");
                printf("5: Pints\n");
                printf("6: Quarts\n");
                printf("7: Gallons\n");
                printf("\nEnter a number option from above: ");
                scanf("%d", &option);
                if(option == 1) {
                    printf("\n\nYou have selected 'Cubic Centimeters'\n");
                    float cubmet, cubcmet;
                    printf("Enter the volume in Cubic Meters: ");
                    scanf("%f", &cubmet);
                    cubcmet = cubmet * 1000000;
                    printf("Volume in Cubic Centimeters: %f",cubcmet);
                }
                else if (option == 2) {
                    printf("\n\nYou have selected 'Liters'\n");
                    float cubmet, liter;
                    printf("Enter the volume in Cubic Meters: ");
                    scanf("%f", &cubmet);
                    liter = cubmet * 1000;
                    printf("Volume in Liters: %f", liter);
                }
                else if (option == 3) {
                    printf("\n\nYou have selected 'Milliliters'\n");
                    float cubmet, mliter;
                    printf("Enter the volume in Cubic Meters: ");
                    scanf("%f", &cubmet);
                    mliter = cubmet * 1000000;
                    printf("Volume in MilliLiters: %f", mliter);
                }
                else if (option == 4) {
                    printf("\n\nYou have selected 'Fluid Ounces'\n");
                    float cubmet, founce;
                    printf("Enter the volume in Cubic Meters: ");
                    scanf("%f", &cubmet);
                    founce = cubmet * 35195.1;
                    printf("Volume in Fluid Ounces: %f", founce);
                }
                else if (option == 5) {
                    printf("\n\nYou have selected 'Pints'\n");
                    float cubmet, pint;
                    printf("Enter the volume in Cubic Meters: ");
                    scanf("%f", &cubmet);
                    pint = cubmet * 1759.75;
                    printf("Volume in Pints: %f", pint);
                }
                else if (option == 6) {
                    printf("\n\nYou have selected 'Quarts'\n");
                    float cubmet, quart;
                    printf("Enter the volume in Cubic Meters: ");
                    scanf("%f", &cubmet);
                    quart = cubmet * 1759.75;
                    printf("Volume in Quarts: %f", quart);
                }
                else if (option == 7) {
                    printf("\n\nYou have selected 'Gallons'\n");
                    float cubmet, gallon;
                    printf("Enter the volume in Cubic Meters: ");
                    scanf("%f", &cubmet);
                    gallon = cubmet * 219.969;
                    printf("Volume in Gallons: %f", gallon);
                break;
                }
                else {
                printf("Invalid selection, please return to main menu.");
                }
            }
            else if (option == 2) {
                printf("\n\nYou have selected 'Cubic Centimeters'\n");
                printf("\nPlease select from the following options what unit you'd like to convert TO:\n");
                printf("1: Cubic Meters\n");
                printf("2: Liters\n");
                printf("3: Milliliters\n");
                printf("4: Fluid Ounces\n");
                printf("5: Pints\n");
                printf("6: Quarts\n");
                printf("7: Gallons\n");
                printf("\nEnter a number option from above: ");
                scanf("%d", &option);
                if(option == 1) {
                    printf("\n\nYou have selected 'Cubic Meters'\n");
                    float cubmet, cubcmet;
                    printf("Enter the volume in Cubic Centimeters: ");
                    scanf("%f", &cubcmet);
                    cubmet = cubcmet / 1000000;
                    printf("Volume in Cubic Meters: %f",cubmet);
                }
                else if (option == 2) {
                    printf("\n\nYou have selected 'Liters'\n");
                    float cubcmet, liter;
                    printf("Enter the volume in Cubic Centimeters: ");
                    scanf("%f", &cubcmet);
                    liter = cubcmet / 1000;
                    printf("Volume in Liters: %f", liter);
                }
                else if (option == 3) {
                    printf("\n\nYou have selected 'Milliliters'\n");
                    float cubcmet, mliter;
                    printf("Enter the volume in Cubic Centimeters: ");
                    scanf("%f", &cubcmet);
                    mliter = cubcmet * 1;
                    printf("Volume in MilliLiters: %f", mliter);
                }
                else if (option == 4) {
                    printf("\n\nYou have selected 'Fluid Ounces'\n");
                    float cubcmet, founce;
                    printf("Enter the volume in Cubic Centimeters: ");
                    scanf("%f", &cubcmet);
                    founce = cubcmet / 28.413;
                    printf("Volume in Fluid Ounces: %f", founce);
                }
                else if (option == 5) {
                    printf("\n\nYou have selected 'Pints'\n");
                    float cubcmet, pint;
                    printf("Enter the volume in Cubic Centimeters: ");
                    scanf("%f", &cubcmet);
                    pint = cubcmet / 568.3;
                    printf("Volume in Pints: %f", pint);
                }
                else if (option == 6) {
                    printf("\n\nYou have selected 'Quarts'\n");
                    float cubcmet, quart;
                    printf("Enter the volume in Cubic Centimeters: ");
                    scanf("%f", &cubcmet);
                    quart = cubcmet / 1137;
                    printf("Volume in Quarts: %f", quart);
                }
                else if (option == 7) {
                    printf("\n\nYou have selected 'Gallons'\n");
                    float cubcmet, gallon;
                    printf("Enter the volume in Cubic Centimeters: ");
                    scanf("%f", &cubcmet);
                    gallon = cubcmet / 4546;
                    printf("Volume in Gallons: %f", gallon);
                break;
                }
                else {
                printf("Invalid selection, please return to main menu.");
                }    
            }
            else if (option == 3) {
                printf("\n\nYou have selected 'Liters'\n");
                printf("\nPlease select from the following options what unit you'd like to convert TO:\n");
                printf("1: Cubic Meters\n");
                printf("2: Cubic Centimeters\n");
                printf("3: Milliliters\n");
                printf("4: Fluid Ounces\n");
                printf("5: Pints\n");
                printf("6: Quarts\n");
                printf("7: Gallons\n");
                printf("\nEnter a number option from above: ");
                scanf("%d", &option);
                if(option == 1) {
                    printf("\n\nYou have selected 'Cubic Meters'\n");
                    float cubmet, liter;
                    printf("Enter the volume in Liters: ");
                    scanf("%f", &liter);
                    cubmet = liter / 1000;
                    printf("Volume in Cubic Meters: %f",cubmet);
                }
                else if (option == 2) {
                    printf("\n\nYou have selected 'Cubic Centimeters'\n");
                    float cubcmet, liter;
                    printf("Enter the volume in Liters: ");
                    scanf("%f", &liter);
                    cubcmet = cubcmet * 1000;
                    printf("Volume in Cubic Centimeters: %f", cubcmet);
                }
                else if (option == 3) {
                    printf("\n\nYou have selected 'Milliliters'\n");
                    float liter, mliter;
                    printf("Enter the volume in Liters: ");
                    scanf("%f", &liter);
                    mliter = liter * 1000;
                    printf("Volume in Milliliters: %f", mliter);
                }
                else if (option == 4) {
                    printf("\n\nYou have selected 'Fluid Ounces'\n");
                    float liter, founce;
                    printf("Enter the volume in Liters: ");
                    scanf("%f", &liter);
                    founce = liter * 35.195;
                    printf("Volume in Fluid Ounces: %f", founce);
                }
                else if (option == 5) {
                    printf("\n\nYou have selected 'Pints'\n");
                    float liter, pint;
                    printf("Enter the volume in Liters: ");
                    scanf("%f", &liter);
                    pint = liter * 1.75975;
                    printf("Volume in Pints: %f", pint);
                }
                else if (option == 6) {
                    printf("\n\nYou have selected 'Quarts'\n");
                    float liter, quart;
                    printf("Enter the volume in Liters: ");
                    scanf("%f", &liter);
                    quart = liter / 1.136;
                    printf("Volume in Quarts: %f", quart);
                }
                else if (option == 7) {
                    printf("\n\nYou have selected 'Gallons'\n");
                    float liter, gallon;
                    printf("Enter the volume in Liters: ");
                    scanf("%f", &liter);
                    gallon = liter / 4.546;
                    printf("Volume in Gallons: %f", gallon);
                break;
                }
                else {
                printf("Invalid selection, please return to main menu.");
                }
            }
            else if (option == 4) {
                printf("\n\nYou have selected 'Milliliters'\n");
                printf("\nPlease select from the following options what unit you'd like to convert TO:\n");
                printf("1: Cubic Meters\n");
                printf("2: Cubic Centimeters\n");
                printf("3: Liters\n");
                printf("4: Fluid Ounces\n");
                printf("5: Pints\n");
                printf("6: Quarts\n");
                printf("7: Gallons\n");
                printf("\nEnter a number option from above: ");
                scanf("%d", &option);
                if(option == 1) {
                    printf("\n\nYou have selected 'Cubic Meters'\n");
                    float cubmet, mliter;
                    printf("Enter the volume in Milliliters: ");
                    scanf("%f", &mliter);
                    cubmet = mliter / 1000000;
                    printf("Volume in Cubic Meters: %f",cubmet);
                }
                else if (option == 2) {
                    printf("\n\nYou have selected 'Cubic Centimeters'\n");
                    float cubcmet, mliter;
                    printf("Enter the volume in Milliliters: ");
                    scanf("%f", &mliter);
                    cubcmet = mliter * 1;
                    printf("Volume in Cubic Centimeters: %f", cubcmet);
                }
                else if (option == 3) {
                    printf("\n\nYou have selected 'Liters'\n");
                    float liter, mliter;
                    printf("Enter the volume in Milliliters: ");
                    scanf("%f", &mliter);
                    liter = mliter / 1000;
                    printf("Volume in Liters: %f", liter);
                }
                else if (option == 4) {
                    printf("\n\nYou have selected 'Fluid Ounces'\n");
                    float mliter, founce;
                    printf("Enter the volume in Milliliters: ");
                    scanf("%f", &mliter);
                    founce = mliter / 28.413;
                    printf("Volume in Fluid Ounces: %f", founce);
                }
                else if (option == 5) {
                    printf("\n\nYou have selected 'Pints'\n");
                    float mliter, pint;
                    printf("Enter the volume in Milliliters: ");
                    scanf("%f", &mliter);
                    pint = mliter / 568.3;
                    printf("Volume in Pints: %f", pint);
                }
                else if (option == 6) {
                    printf("\n\nYou have selected 'Quarts'\n");
                    float mliter, quart;
                    printf("Enter the volume in Milliliters: ");
                    scanf("%f", &mliter);
                    quart = mliter / 1137;
                    printf("Volume in Quarts: %f", quart);
                }
                else if (option == 7) {
                    printf("\n\nYou have selected 'Gallons'\n");
                    float mliter, gallon;
                    printf("Enter the volume in Milliliters: ");
                    scanf("%f", &mliter);
                    gallon = mliter / 4546;
                    printf("Volume in Gallons: %f", gallon);
                break;
                }
                else {
                printf("Invalid selection, please return to main menu.");
                }
            }
            else if (option == 5) {
                printf("\n\nYou have selected 'Fluid Ounces'\n");
                printf("\nPlease select from the following options what unit you'd like to convert TO:\n");
                printf("1: Cubic Meters\n");
                printf("2: Cubic Centimeters\n");
                printf("3: Liters\n");
                printf("4: Milliliters\n");
                printf("5: Pints\n");
                printf("6: Quarts\n");
                printf("7: Gallons\n");
                printf("\nEnter a number option from above: ");
                scanf("%d", &option);
                if(option == 1) {
                    printf("\n\nYou have selected 'Cubic Meters'\n");
                    float cubmet, founce;
                    printf("Enter the volume in Fluid Ounces: ");
                    scanf("%f", &founce);
                    cubmet = founce / 35200;
                    printf("Volume in Cubic Meters: %f",cubmet);
                }
                else if (option == 2) {
                    printf("\n\nYou have selected 'Cubic Centimeters'\n");
                    float cubcmet, founce;
                    printf("Enter the volume in Fluid Ounces: ");
                    scanf("%f", &founce);
                    cubcmet = founce * 28.413;
                    printf("Volume in Cubic Centimeters: %f", cubcmet);
                }
                else if (option == 3) {
                    printf("\n\nYou have selected 'Liters'\n");
                    float liter, founce;
                    printf("Enter the volume in Fluid Ounces: ");
                    scanf("%f", &founce);
                    liter = founce / 35.195;
                    printf("Volume in Liters: %f", liter);
                }
                else if (option == 4) {
                    printf("\n\nYou have selected 'Milliliters'\n");
                    float mliter, founce;
                    printf("Enter the volume in Fluid Ounces: ");
                    scanf("%f", &founce);
                    mliter = founce * 28.413;
                    printf("Volume in Milliliters: %f", mliter);
                }
                else if (option == 5) {
                    printf("\n\nYou have selected 'Pints'\n");
                    float founce, pint;
                    printf("Enter the volume in Fluid Ounces: ");
                    scanf("%f", &founce);
                    pint = founce / 20;
                    printf("Volume in Pints: %f", pint);
                }
                else if (option == 6) {
                    printf("\n\nYou have selected 'Quarts'\n");
                    float founce, quart;
                    printf("Enter the volume in Fluid Ounces: ");
                    scanf("%f", &founce);
                    quart = founce / 4;
                    printf("Volume in Quarts: %f", quart);
                }
                else if (option == 7) {
                    printf("\n\nYou have selected 'Gallons'\n");
                    float founce, gallon;
                    printf("Enter the volume in Fluid Ounces: ");
                    scanf("%f", &founce);
                    gallon = founce / 160;
                    printf("Volume in Gallons: %f", gallon);
                break;
                }
                else {
                printf("Invalid selection, please return to main menu.");
                }
            }
            else if (option == 6) {
                printf("\n\nYou have selected 'Pints'\n");
                printf("\nPlease select from the following options what unit you'd like to convert TO:\n");
                printf("1: Cubic Meters\n");
                printf("2: Cubic Centimeters\n");
                printf("3: Liters\n");
                printf("4: Milliliters\n");
                printf("5: Fluid Ounces\n");
                printf("6: Quarts\n");
                printf("7: Gallons\n");
                printf("\nEnter a number option from above: ");
                scanf("%d", &option);
                if(option == 1) {
                    printf("\n\nYou have selected 'Cubic Meters'\n");
                    float cubmet, pint;
                    printf("Enter the volume in Pints: ");
                    scanf("%f", &pint);
                    cubmet = pint / 1760;
                    printf("Volume in Cubic Meters: %f",cubmet);
                }
                else if (option == 2) {
                    printf("\n\nYou have selected 'Cubic Centimeters'\n");
                    float cubcmet, pint;
                    printf("Enter the volume in Pints: ");
                    scanf("%f", &pint);
                    cubcmet = pint * 568.261;
                    printf("Volume in Cubic Centimeters: %f", cubcmet);
                }
                else if (option == 3) {
                    printf("\n\nYou have selected 'Liters'\n");
                    float liter, pint;
                    printf("Enter the volume in Pints: ");
                    scanf("%f", &pint);
                    liter = pint / 1.76;
                    printf("Volume in Liters: %f", liter);
                }
                else if (option == 4) {
                    printf("\n\nYou have selected 'Milliliters'\n");
                    float mliter, pint;
                    printf("Enter the volume in Pints: ");
                    scanf("%f", &pint);
                    mliter = pint * 568.261;
                    printf("Volume in Milliliters: %f", mliter);
                }
                else if (option == 5) {
                    printf("\n\nYou have selected 'Fluid Ounces'\n");
                    float founce, pint;
                    printf("Enter the volume in Pints: ");
                    scanf("%f", &pint);
                    founce = pint * 20;
                    printf("Volume in Fluid Ounces: %f", founce);
                }
                else if (option == 6) {
                    printf("\n\nYou have selected 'Quarts'\n");
                    float pint, quart;
                    printf("Enter the volume in Pints: ");
                    scanf("%f", &pint);
                    quart = pint / 2;
                    printf("Volume in Quarts: %f", quart);
                }
                else if (option == 7) {
                    printf("\n\nYou have selected 'Gallons'\n");
                    float pint, gallon;
                    printf("Enter the volume in Pints: ");
                    scanf("%f", &pint);
                    gallon = pint / 8;
                    printf("Volume in Gallons: %f", gallon);
                break;
                }
                else {
                printf("Invalid selection, please return to main menu.");
                }
            }
            else if (option == 7) {
                printf("\n\nYou have selected 'Quarts'\n");
                printf("\nPlease select from the following options what unit you'd like to convert TO:\n");
                printf("1: Cubic Meters\n");
                printf("2: Cubic Centimeters\n");
                printf("3: Liters\n");
                printf("4: Milliliters\n");
                printf("5: Fluid Ounces\n");
                printf("6: Pints\n");
                printf("7: Gallons\n");
                printf("\nEnter a number option from above: ");
                scanf("%d", &option);
                if(option == 1) {
                    printf("\n\nYou have selected 'Cubic Meters'\n");
                    float cubmet, quart;
                    printf("Enter the volume in Quarts: ");
                    scanf("%f", &quart);
                    cubmet = quart / 879.9;
                    printf("Volume in Cubic Meters: %f",cubmet);
                }
                else if (option == 2) {
                    printf("\n\nYou have selected 'Cubic Centimeters'\n");
                    float cubcmet, quart;
                    printf("Enter the volume in Quarts: ");
                    scanf("%f", &quart);
                    cubcmet = quart * 1136.52;
                    printf("Volume in Cubic Centimeters: %f", cubcmet);
                }
                else if (option == 3) {
                    printf("\n\nYou have selected 'Liters'\n");
                    float liter, quart;
                    printf("Enter the volume in Quarts: ");
                    scanf("%f", &quart);
                    liter = quart * 1.13652;
                    printf("Volume in Liters: %f", liter);
                }
                else if (option == 4) {
                    printf("\n\nYou have selected 'Milliliters'\n");
                    float mliter, quart;
                    printf("Enter the volume in Quarts: ");
                    scanf("%f", &quart);
                    mliter = quart * 1136.52;
                    printf("Volume in Milliliters: %f", mliter);
                }
                else if (option == 5) {
                    printf("\n\nYou have selected 'Fluid Ounces'\n");
                    float founce, quart;
                    printf("Enter the volume in Quarts: ");
                    scanf("%f", &quart);
                    founce = quart * 40;
                    printf("Volume in Fluid Ounces: %f", founce);
                }
                else if (option == 6) {
                    printf("\n\nYou have selected 'Pints'\n");
                    float pint, quart;
                    printf("Enter the volume in Quarts: ");
                    scanf("%f", &quart);
                    pint = quart * 2;
                    printf("Volume in Pints: %f", pint);
                }
                else if (option == 7) {
                    printf("\n\nYou have selected 'Gallons'\n");
                    float quart, gallon;
                    printf("Enter the volume in Quarts: ");
                    scanf("%f", &quart);
                    gallon = quart / 4;
                    printf("Volume in Gallons: %f", gallon);
                break;
                }
                else {
                printf("Invalid selection, please return to main menu.");
                }
            }
            else if (option == 8) {
                printf("\n\nYou have selected 'Gallons'\n");
                printf("\nPlease select from the following options what unit you'd like to convert TO:\n");
                printf("1: Cubic Meters\n");
                printf("2: Cubic Centimeters\n");
                printf("3: Liters\n");
                printf("4: Milliliters\n");
                printf("5: Fluid Ounces\n");
                printf("6: Pints\n");
                printf("7: Quarts\n");
                printf("\nEnter a number option from above: ");
                scanf("%d", &option);
                if(option == 1) {
                    printf("\n\nYou have selected 'Cubic Meters'\n");
                    float cubmet, gallon;
                    printf("Enter the volume in Gallons: ");
                    scanf("%f", &gallon);
                    cubmet = gallon / 220;
                    printf("Volume in Cubic Meters: %f",cubmet);
                }
                else if (option == 2) {
                    printf("\n\nYou have selected 'Cubic Centimeters'\n");
                    float cubcmet, gallon;
                    printf("Enter the volume in Gallons: ");
                    scanf("%f", &gallon);
                    cubcmet = gallon * 4546.09;
                    printf("Volume in Cubic Centimeters: %f", cubcmet);
                }
                else if (option == 3) {
                    printf("\n\nYou have selected 'Liters'\n");
                    float liter, gallon;
                    printf("Enter the volume in Gallons: ");
                    scanf("%f", &gallon);
                    liter = gallon * 4.54609;
                    printf("Volume in Liters: %f", liter);
                }
                else if (option == 4) {
                    printf("\n\nYou have selected 'Milliliters'\n");
                    float mliter, gallon;
                    printf("Enter the volume in Gallons: ");
                    scanf("%f", &gallon);
                    mliter = gallon * 4546.09;
                    printf("Volume in Milliliters: %f", mliter);
                }
                else if (option == 5) {
                    printf("\n\nYou have selected 'Fluid Ounces'\n");
                    float founce, gallon;
                    printf("Enter the volume in Gallons: ");
                    scanf("%f", &gallon);
                    founce = gallon * 160;
                    printf("Volume in Fluid Ounces: %f", founce);
                }
                else if (option == 6) {
                    printf("\n\nYou have selected 'Pints'\n");
                    float pint, gallon;
                    printf("Enter the volume in Gallons: ");
                    scanf("%f", &gallon);
                    pint = gallon * 8;
                    printf("Volume in Pints: %f", pint);
                }
                else if (option == 7) {
                    printf("\n\nYou have selected 'Quarts'\n");
                    float quart, gallon;
                    printf("Enter the volume in Gallons: ");
                    scanf("%f", &gallon);
                    quart = gallon * 4;
                    printf("Volume in Quarts: %f", quart);
                break;
                }
                else {
                printf("Invalid selection, please return to main menu.");
                }
            break;
            }
            else {
                printf("Invalid selection, please return to main menu.");
            }
        }
        else if (option == 3) {
            /*Mass*/
                /*Options: Gram, Kilogram, Milligram, Tonne, Ounce, Pound*/
            printf("\n\nYou have selected 'Mass'\n");
            printf("\nPlease select from the following options what unit you'd like to convert FROM:\n");
            printf("1: Grams\n");
            printf("2: Kilograms\n");
            printf("3: Milligrams\n");
            printf("4: Tonnes\n");
            printf("5: Ounces\n");
            printf("6: Pounds\n");
            printf("\nEnter a number option from above: ");
            scanf("%d", &option);
            if(option == 1) {
                printf("\n\nYou have selected 'Grams'\n");
                printf("\nPlease select from the following options what unit you'd like to convert TO:\n");
                printf("1: Kilograms\n");
                printf("2: Milligrams\n");
                printf("3: Tonnes\n");
                printf("4: Ounces\n");
                printf("5: Pounds\n");
                printf("\nEnter a number option from above: ");
                scanf("%d", &option);
                if(option == 1) {
                    printf("\n\nYou have selected 'Kilograms'\n");
                    float gram, kgram;
                    printf("Enter the mass in Grams: ");
                    scanf("%f", &gram);
                    kgram = gram / 1000;
                    printf("Mass in Kilograms: %f",kgram);
                }
                else if(option == 2) {
                    printf("\n\nYou have selected 'Milligrams'\n");
                    float gram, mgram;
                    printf("Enter the mass in Grams: ");
                    scanf("%f", &gram);
                    mgram = gram * 1000;
                    printf("Mass in Milligrams: %f",mgram);
                }
                else if(option == 3) {
                    printf("\n\nYou have selected 'Tonnes'\n");
                    float gram, ton;
                    printf("Enter the mass in Grams: ");
                    scanf("%f", &gram);
                    ton = gram / 1000000;
                    printf("Mass in Tonnes: %f",ton);
                }
                else if(option == 4) {
                    printf("\n\nYou have selected 'Ounces'\n");
                    float gram, ounce;
                    printf("Enter the mass in Grams: ");
                    scanf("%f", &gram);
                    ounce = gram / 28.35;
                    printf("Mass in Ounces: %f",ounce);
                }
                else if(option == 5) {
                    printf("\n\nYou have selected 'Pounds'\n");
                    float gram, pound;
                    printf("Enter the mass in Grams: ");
                    scanf("%f", &gram);
                    pound = gram / 453.6;
                    printf("Mass in Pounds: %f",pound);
                break;
                }
                else {
                printf("Invalid selection, please return to main menu.");
                }
            }
            else if(option == 2) {
                printf("\n\nYou have selected 'Kilograms'\n");
                printf("\nPlease select from the following options what unit you'd like to convert TO:\n");
                printf("1: Grams\n");
                printf("2: Milligrams\n");
                printf("3: Tonnes\n");
                printf("4: Ounces\n");
                printf("5: Pounds\n");
                printf("\nEnter a number option from above: ");
                scanf("%d", &option);
                if(option == 1) {
                    printf("\n\nYou have selected 'Grams'\n");
                    float gram, kgram;
                    printf("Enter the mass in Kilograms: ");
                    scanf("%f", &kgram);
                    gram = kgram * 1000;
                    printf("Mass in Grams: %f",gram);
                }
                else if(option == 2) {
                    printf("\n\nYou have selected 'Milligrams'\n");
                    float kgram, mgram;
                    printf("Enter the mass in Kilograms: ");
                    scanf("%f", &kgram);
                    mgram = kgram * 1000000;
                    printf("Mass in Milligrams: %f",mgram);
                }
                else if(option == 3) {
                    printf("\n\nYou have selected 'Tonnes'\n");
                    float kgram, ton;
                    printf("Enter the mass in Kilograms: ");
                    scanf("%f", &kgram);
                    ton = kgram / 1000;
                    printf("Mass in Tonnes: %f",ton);
                }
                else if(option == 4) {
                    printf("\n\nYou have selected 'Ounces'\n");
                    float kgram, ounce;
                    printf("Enter the mass in Kilograms: ");
                    scanf("%f", &kgram);
                    ounce = kgram * 35.274;
                    printf("Mass in Ounces: %f",ounce);
                }
                else if(option == 5) {
                    printf("\n\nYou have selected 'Pounds'\n");
                    float kgram, pound;
                    printf("Enter the mass in Kilograms: ");
                    scanf("%f", &kgram);
                    pound = kgram * 2.20462;
                    printf("Mass in Pounds: %f",pound);
                break;
                }
                else {
                printf("Invalid selection, please return to main menu.");
                }
            }
            else if(option == 3) {
                printf("\n\nYou have selected 'Milligrams'\n");
                printf("\nPlease select from the following options what unit you'd like to convert TO:\n");
                printf("1: Grams\n");
                printf("2: Kilograms\n");
                printf("3: Tonnes\n");
                printf("4: Ounces\n");
                printf("5: Pounds\n");
                printf("\nEnter a number option from above: ");
                scanf("%d", &option);
                if(option == 1) {
                    printf("\n\nYou have selected 'Grams'\n");
                    float gram, mgram;
                    printf("Enter the mass in Milligrams: ");
                    scanf("%f", &mgram);
                    gram = mgram / 1000;
                    printf("Mass in Grams: %f",gram);
                }
                else if(option == 2) {
                    printf("\n\nYou have selected 'Kilograms'\n");
                    float kgram, mgram;
                    printf("Enter the mass in Milligrams: ");
                    scanf("%f", &mgram);
                    kgram = mgram / 1000000;
                    printf("Mass in Kilograms: %f",kgram);
                }
                else if(option == 3) {
                    printf("\n\nYou have selected 'Tonnes'\n");
                    float mgram, ton;
                    printf("Enter the mass in Milligrams: ");
                    scanf("%f", &mgram);
                    ton = mgram / 1000000000;
                    printf("Mass in Tonnes: %f",ton);
                }
                else if(option == 4) {
                    printf("\n\nYou have selected 'Ounces'\n");
                    float mgram, ounce;
                    printf("Enter the mass in Milligrams: ");
                    scanf("%f", &mgram);
                    ounce = mgram / 28350;
                    printf("Mass in Ounces: %f",ounce);
                }
                else if(option == 5) {
                    printf("\n\nYou have selected 'Pounds'\n");
                    float mgram, pound;
                    printf("Enter the mass in Milligrams: ");
                    scanf("%f", &mgram);
                    pound = mgram / 453600;
                    printf("Mass in Pounds: %f",pound);
                break;
                }
                else {
                printf("Invalid selection, please return to main menu.");
                }
            }
            else if(option == 4) {
                printf("\n\nYou have selected 'Tonnes'\n");
                printf("\nPlease select from the following options what unit you'd like to convert TO:\n");
                printf("1: Grams\n");
                printf("2: Kilograms\n");
                printf("3: Milligrams\n");
                printf("4: Ounces\n");
                printf("5: Pounds\n");
                printf("\nEnter a number option from above: ");
                scanf("%d", &option);
                if(option == 1) {
                    printf("\n\nYou have selected 'Grams'\n");
                    float gram, ton;
                    printf("Enter the mass in Tonnes: ");
                    scanf("%f", &ton);
                    gram = ton * 1000000;
                    printf("Mass in Grams: %f",gram);
                }
                else if(option == 2) {
                    printf("\n\nYou have selected 'Kilograms'\n");
                    float kgram, ton;
                    printf("Enter the mass in Tonnes: ");
                    scanf("%f", &ton);
                    kgram = ton * 1000;
                    printf("Mass in Kilograms: %f",kgram);
                }
                else if(option == 3) {
                    printf("\n\nYou have selected 'Milligrams'\n");
                    float mgram, ton;
                    printf("Enter the mass in Tonnes: ");
                    scanf("%f", &ton);
                    mgram = ton * 1000000000;
                    printf("Mass in Milligrams: %f",mgram);
                }
                else if(option == 4) {
                    printf("\n\nYou have selected 'Ounces'\n");
                    float ton, ounce;
                    printf("Enter the mass in Tonnes: ");
                    scanf("%f", &ton);
                    ounce = ton * 35274;
                    printf("Mass in Ounces: %f",ounce);
                }
                else if(option == 5) {
                    printf("\n\nYou have selected 'Pounds'\n");
                    float ton, pound;
                    printf("Enter the mass in Tonnes: ");
                    scanf("%f", &ton);
                    pound = ton * 2204.62;
                    printf("Mass in Pounds: %f",pound);
                break;
                }
                else {
                printf("Invalid selection, please return to main menu.");
                }
            }
            else if(option == 5) {
                printf("\n\nYou have selected 'Ounces'\n");
                printf("\nPlease select from the following options what unit you'd like to convert TO:\n");
                printf("1: Grams\n");
                printf("2: Kilograms\n");
                printf("3: Milligrams\n");
                printf("4: Tonnes\n");
                printf("5: Pounds\n");
                printf("\nEnter a number option from above: ");
                scanf("%d", &option);
                if(option == 1) {
                    printf("\n\nYou have selected 'Grams'\n");
                    float gram, ounce;
                    printf("Enter the mass in Ounces: ");
                    scanf("%f", &ounce);
                    gram = ounce * 28.3495;
                    printf("Mass in Grams: %f",gram);
                }
                else if(option == 2) {
                    printf("\n\nYou have selected 'Kilograms'\n");
                    float kgram, ounce;
                    printf("Enter the mass in Ounces: ");
                    scanf("%f", &ounce);
                    kgram = ounce / 35.274;
                    printf("Mass in Kilograms: %f",kgram);
                }
                else if(option == 3) {
                    printf("\n\nYou have selected 'Milligrams'\n");
                    float mgram, ounce;
                    printf("Enter the mass in Ounces: ");
                    scanf("%f", &ounce);
                    mgram = ounce * 28349.5;
                    printf("Mass in Milligrams: %f",mgram);
                }
                else if(option == 4) {
                    printf("\n\nYou have selected 'Tonnes'\n");
                    float ton, ounce;
                    printf("Enter the mass in Ounces: ");
                    scanf("%f", &ounce);
                    ton = ounce / 35274;
                    printf("Mass in Tonnes: %f",ton);
                }
                else if(option == 5) {
                    printf("\n\nYou have selected 'Pounds'\n");
                    float ounce, pound;
                    printf("Enter the mass in Ounces: ");
                    scanf("%f", &ounce);
                    pound = ounce / 16;
                    printf("Mass in Pounds: %f",pound);
                break;
                }
                else {
                printf("Invalid selection, please return to main menu.");
                }
            }
            else if(option == 6) {
                printf("\n\nYou have selected 'Pounds'\n");
                printf("\nPlease select from the following options what unit you'd like to convert TO:\n");
                printf("1: Grams\n");
                printf("2: Kilograms\n");
                printf("3: Milligrams\n");
                printf("4: Tonnes\n");
                printf("5: Ounces\n");
                printf("\nEnter a number option from above: ");
                scanf("%d", &option);
                if(option == 1) {
                    printf("\n\nYou have selected 'Grams'\n");
                    float gram, pound;
                    printf("Enter the mass in Pounds: ");
                    scanf("%f", &pound);
                    gram = pound * 453.592;
                    printf("Mass in Grams: %f",gram);
                }
                else if(option == 2) {
                    printf("\n\nYou have selected 'Kilograms'\n");
                    float kgram, pound;
                    printf("Enter the mass in Pounds: ");
                    scanf("%f", &pound);
                    kgram = pound / 2.205;
                    printf("Mass in Kilograms: %f",kgram);
                }
                else if(option == 3) {
                    printf("\n\nYou have selected 'Milligrams'\n");
                    float mgram, pound;
                    printf("Enter the mass in Pounds: ");
                    scanf("%f", &pound);
                    mgram = pound * 453592;
                    printf("Mass in Milligrams: %f",mgram);
                }
                else if(option == 4) {
                    printf("\n\nYou have selected 'Tonnes'\n");
                    float ton, pound;
                    printf("Enter the mass in Pounds: ");
                    scanf("%f", &pound);
                    ton = pound / 2205;
                    printf("Mass in Tonnes: %f",ton);
                }
                else if(option == 5) {
                    printf("\n\nYou have selected 'Ounces'\n");
                    float ounce, pound;
                    printf("Enter the mass in Pounds: ");
                    scanf("%f", &pound);
                    ounce = pound * 16;
                    printf("Mass in Ounces: %f",ounce);
                break;
                }
                else {
                printf("Invalid selection, please return to main menu.");
                }
            break;
            }
            else {
                printf("Invalid selection, please return to main menu.");
                }
        }
        else if (option == 4) {
            /*Time*/
                /*Options: Seconds, Minutes, Hours, Days, Weeks, Months, Years*/
            printf("\n\nYou have selected 'Time'\n");
            printf("\nPlease select from the following options what unit you'd like to convert FROM:\n");
            printf("1: Seconds\n");
            printf("2: Minutes\n");
            printf("3: Hours\n");
            printf("4: Days\n");
            printf("5: Weeks\n");
            printf("6: Months\n");
            printf("7: Years\n");
            printf("\nEnter a number option from above: ");
            scanf("%d", &option);
            if(option == 1) {
                printf("\n\nYou have selected 'Seconds'\n");
                printf("\nPlease select from the following options what unit you'd like to convert TO:\n");
                printf("1: Minutes\n");
                printf("2: Hours\n");
                printf("3: Days\n");
                printf("4: Weeks\n");
                printf("5: Months\n");
                printf("6: Years\n");
                printf("\nEnter a number option from above: ");
                scanf("%d", &option);
                if(option == 1) {
                    printf("\n\nYou have selected 'Minutes'\n");
                    float sec, min;
                    printf("Enter the time in Seconds: ");
                    scanf("%f", &sec);
                    min = sec / 60;
                    printf("Time in Minutes: %f",min);
                }
                else if(option == 2) {
                    printf("\n\nYou have selected 'Hours'\n");
                    float sec, hour;
                    printf("Enter the time in Seconds: ");
                    scanf("%f", &sec);
                    hour = sec / 3600;
                    printf("Time in Hours: %f",hour);
                }
                else if(option == 3) {
                    printf("\n\nYou have selected 'Days'\n");
                    float sec, day;
                    printf("Enter the time in Seconds: ");
                    scanf("%f", &sec);
                    day = sec / 86400;
                    printf("Time in Days: %f",day);
                }
                else if(option == 4) {
                    printf("\n\nYou have selected 'Weeks'\n");
                    float sec, week;
                    printf("Enter the time in Seconds: ");
                    scanf("%f", &sec);
                    week = sec / 604800;
                    printf("Time in Weeks: %f",week);
                }
                else if(option == 5) {
                    printf("\n\nYou have selected 'Months'\n");
                    float sec, month;
                    printf("Enter the time in Seconds: ");
                    scanf("%f", &sec);
                    month = sec / 2628000;
                    printf("Time in Months: %f",month);
                }
                else if(option == 6) {
                    printf("\n\nYou have selected 'Years'\n");
                    float sec, year;
                    printf("Enter the time in Seconds: ");
                    scanf("%f", &sec);
                    year = sec / 31540000;
                    printf("Time in Years: %f",year);
                break;
                }
                else {
                printf("Invalid selection, please return to main menu.");
                }
            }
            else if(option == 2) {
                printf("\n\nYou have selected 'Minutes'\n");
                printf("\nPlease select from the following options what unit you'd like to convert TO:\n");
                printf("1: Seconds\n");
                printf("2: Hours\n");
                printf("3: Days\n");
                printf("4: Weeks\n");
                printf("5: Months\n");
                printf("6: Years\n");
                printf("\nEnter a number option from above: ");
                scanf("%d", &option);
                if(option == 1) {
                    printf("\n\nYou have selected 'Seconds'\n");
                    float sec, min;
                    printf("Enter the time in Minutes: ");
                    scanf("%f", &min);
                    sec = min * 60;
                    printf("Time in Seconds: %f",sec);
                }
                else if(option == 2) {
                    printf("\n\nYou have selected 'Hours'\n");
                    float min, hour;
                    printf("Enter the time in Minutes: ");
                    scanf("%f", &min);
                    hour = min / 60;
                    printf("Time in Hours: %f",hour);
                }
                else if(option == 3) {
                    printf("\n\nYou have selected 'Days'\n");
                    float min, day;
                    printf("Enter the time in Minutes: ");
                    scanf("%f", &min);
                    day = min / 1440;
                    printf("Time in Days: %f",day);
                }
                else if(option == 4) {
                    printf("\n\nYou have selected 'Weeks'\n");
                    float min, week;
                    printf("Enter the time in Minutes: ");
                    scanf("%f", &min);
                    week = min / 10080;
                    printf("Time in Weeks: %f",week);
                }
                else if(option == 5) {
                    printf("\n\nYou have selected 'Months'\n");
                    float min, month;
                    printf("Enter the time in Minutes: ");
                    scanf("%f", &min);
                    month = min / 43800;
                    printf("Time in Months: %f",month);
                }
                else if(option == 6) {
                    printf("\n\nYou have selected 'Years'\n");
                    float min, year;
                    printf("Enter the time in Minutes: ");
                    scanf("%f", &min);
                    year = min / 525600;
                    printf("Time in Years: %f",year);
                break;
                }
                else {
                printf("Invalid selection, please return to main menu.");
                }
            }
            else if(option == 3) {
                printf("\n\nYou have selected 'Hours'\n");
                printf("\nPlease select from the following options what unit you'd like to convert TO:\n");
                printf("1: Seconds\n");
                printf("2: Minutes\n");
                printf("3: Days\n");
                printf("4: Weeks\n");
                printf("5: Months\n");
                printf("6: Years\n");
                printf("\nEnter a number option from above: ");
                scanf("%d", &option);
                if(option == 1) {
                    printf("\n\nYou have selected 'Seconds'\n");
                    float sec, hour;
                    printf("Enter the time in Hours: ");
                    scanf("%f", &hour);
                    sec = hour * 3600;
                    printf("Time in Seconds: %f",sec);
                }
                else if(option == 2) {
                    printf("\n\nYou have selected 'Minutes'\n");
                    float min, hour;
                    printf("Enter the time in Hours: ");
                    scanf("%f", &hour);
                    min = hour * 60;
                    printf("Time in Minutes: %f",min);
                }
                else if(option == 3) {
                    printf("\n\nYou have selected 'Days'\n");
                    float hour, day;
                    printf("Enter the time in Hours: ");
                    scanf("%f", &hour);
                    day = hour / 24;
                    printf("Time in Days: %f",day);
                }
                else if(option == 4) {
                    printf("\n\nYou have selected 'Weeks'\n");
                    float hour, week;
                    printf("Enter the time in Hours: ");
                    scanf("%f", &hour);
                    week = hour / 168;
                    printf("Time in Weeks: %f",week);
                }
                else if(option == 5) {
                    printf("\n\nYou have selected 'Months'\n");
                    float hour, month;
                    printf("Enter the time in Hours: ");
                    scanf("%f", &hour);
                    month = hour / 730;
                    printf("Time in Months: %f",month);
                }
                else if(option == 6) {
                    printf("\n\nYou have selected 'Years'\n");
                    float hour, year;
                    printf("Enter the time in Hours: ");
                    scanf("%f", &hour);
                    year = hour / 8760;
                    printf("Time in Years: %f",year);
                break;
                }
                else {
                printf("Invalid selection, please return to main menu.");
                }
            }   
            else if(option == 4) {
                printf("\n\nYou have selected 'Days'\n");
                printf("\nPlease select from the following options what unit you'd like to convert TO:\n");
                printf("1: Seconds\n");
                printf("2: Minutes\n");
                printf("3: Hours\n");
                printf("4: Weeks\n");
                printf("5: Months\n");
                printf("6: Years\n");
                printf("\nEnter a number option from above: ");
                scanf("%d", &option);
                if(option == 1) {
                    printf("\n\nYou have selected 'Seconds'\n");
                    float sec, day;
                    printf("Enter the time in Days: ");
                    scanf("%f", &day);
                    sec = day * 86400;
                    printf("Time in Seconds: %f",sec);
                }
                else if(option == 2) {
                    printf("\n\nYou have selected 'Minutes'\n");
                    float min, day;
                    printf("Enter the time in Days: ");
                    scanf("%f", &day);
                    min = day * 1440;
                    printf("Time in Minutes: %f",min);
                }
                else if(option == 3) {
                    printf("\n\nYou have selected 'Hours'\n");
                    float hour, day;
                    printf("Enter the time in Days: ");
                    scanf("%f", &day);
                    hour = day * 24;
                    printf("Time in Hours: %f",hour);
                }
                else if(option == 4) {
                    printf("\n\nYou have selected 'Weeks'\n");
                    float day, week;
                    printf("Enter the time in Days: ");
                    scanf("%f", &day);
                    week = day / 7;
                    printf("Time in Weeks: %f",week);
                }
                else if(option == 5) {
                    printf("\n\nYou have selected 'Months'\n");
                    float day, month;
                    printf("Enter the time in Days: ");
                    scanf("%f", &day);
                    month = day / 30.417;
                    printf("Time in Months: %f",month);
                }
                else if(option == 6) {
                    printf("\n\nYou have selected 'Years'\n");
                    float day, year;
                    printf("Enter the time in Days: ");
                    scanf("%f", &day);
                    year = day / 365;
                    printf("Time in Years: %f",year);
                break;
                }
                else {
                printf("Invalid selection, please return to main menu.");
                }
            }
            else if(option == 5) {
                printf("\n\nYou have selected 'Weeks'\n");
                printf("\nPlease select from the following options what unit you'd like to convert TO:\n");
                printf("1: Seconds\n");
                printf("2: Minutes\n");
                printf("3: Hours\n");
                printf("4: Days\n");
                printf("5: Months\n");
                printf("6: Years\n");
                printf("\nEnter a number option from above: ");
                scanf("%d", &option);
                if(option == 1) {
                    printf("\n\nYou have selected 'Seconds'\n");
                    float sec, week;
                    printf("Enter the time in Weeks: ");
                    scanf("%f", &week);
                    sec = week * 604800;
                    printf("Time in Seconds: %f",sec);
                }
                else if(option == 2) {
                    printf("\n\nYou have selected 'Minutes'\n");
                    float min, week;
                    printf("Enter the time in Weeks: ");
                    scanf("%f", &week);
                    min = week * 10080;
                    printf("Time in Minutes: %f",min);
                }
                else if(option == 3) {
                    printf("\n\nYou have selected 'Hours'\n");
                    float hour, week;
                    printf("Enter the time in Weeks: ");
                    scanf("%f", &week);
                    hour = week * 168;
                    printf("Time in Hours: %f",hour);
                }
                else if(option == 4) {
                    printf("\n\nYou have selected 'Days'\n");
                    float day, week;
                    printf("Enter the time in Weeks: ");
                    scanf("%f", &week);
                    day = week * 7;
                    printf("Time in Days: %f",day);
                }
                else if(option == 5) {
                    printf("\n\nYou have selected 'Months'\n");
                    float week, month;
                    printf("Enter the time in Weeks: ");
                    scanf("%f", &week);
                    month = week / 4.345;
                    printf("Time in Months: %f",month);
                }
                else if(option == 6) {
                    printf("\n\nYou have selected 'Years'\n");
                    float week, year;
                    printf("Enter the time in Weeks: ");
                    scanf("%f", &week);
                    year = week / 52.143;
                    printf("Time in Years: %f",year);
                break;
                }
                else {
                printf("Invalid selection, please return to main menu.");
                }
            }
            else if(option == 6) {
                printf("\n\nYou have selected 'Months'\n");
                printf("\nPlease select from the following options what unit you'd like to convert TO:\n");
                printf("1: Seconds\n");
                printf("2: Minutes\n");
                printf("3: Hours\n");
                printf("4: Days\n");
                printf("5: Weeks\n");
                printf("6: Years\n");
                printf("\nEnter a number option from above: ");
                scanf("%d", &option);
                if(option == 1) {
                    printf("\n\nYou have selected 'Seconds'\n");
                    float sec, month;
                    printf("Enter the time in Months: ");
                    scanf("%f", &month);
                    sec = month * 2628000;
                    printf("Time in Seconds: %f",sec);
                }
                else if(option == 2) {
                    printf("\n\nYou have selected 'Minutes'\n");
                    float min, month;
                    printf("Enter the time in Months: ");
                    scanf("%f", &month);
                    min = month * 43800;
                    printf("Time in Minutes: %f",min);
                }
                else if(option == 3) {
                    printf("\n\nYou have selected 'Hours'\n");
                    float hour, month;
                    printf("Enter the time in Months: ");
                    scanf("%f", &month);
                    hour = month * 730.001;
                    printf("Time in Hours: %f",hour);
                }
                else if(option == 4) {
                    printf("\n\nYou have selected 'Days'\n");
                    float day, month;
                    printf("Enter the time in Months: ");
                    scanf("%f", &month);
                    day = month * 30.4167;
                    printf("Time in Days: %f",day);
                }
                else if(option == 5) {
                    printf("\n\nYou have selected 'Weeks'\n");
                    float week, month;
                    printf("Enter the time in Months: ");
                    scanf("%f", &month);
                    week = month * 4.34524;
                    printf("Time in Weeks: %f",week);
                }
                else if(option == 6) {
                    printf("\n\nYou have selected 'Years'\n");
                    float month, year;
                    printf("Enter the time in Months: ");
                    scanf("%f", &month);
                    year = month / 12;
                    printf("Time in Years: %f",year);
                break;
                }
                else {
                printf("Invalid selection, please return to main menu.");
                }
            }
            else if(option == 7) {
                printf("\n\nYou have selected 'Years'\n");
                printf("\nPlease select from the following options what unit you'd like to convert TO:\n");
                printf("1: Seconds\n");
                printf("2: Minutes\n");
                printf("3: Hours\n");
                printf("4: Days\n");
                printf("5: Weeks\n");
                printf("6: Months\n");
                printf("\nEnter a number option from above: ");
                scanf("%d", &option);
                if(option == 1) {
                    printf("\n\nYou have selected 'Seconds'\n");
                    float sec, year;
                    printf("Enter the time in Years: ");
                    scanf("%f", &year);
                    sec = year * 31540000;
                    printf("Time in Seconds: %f",sec);
                }
                else if(option == 2) {
                    printf("\n\nYou have selected 'Minutes'\n");
                    float min, year;
                    printf("Enter the time in Years: ");
                    scanf("%f", &year);
                    min = year * 525600;
                    printf("Time in Minutes: %f",min);
                }
                else if(option == 3) {
                    printf("\n\nYou have selected 'Hours'\n");
                    float hour, year;
                    printf("Enter the time in Years: ");
                    scanf("%f", &year);
                    hour = year * 8760;
                    printf("Time in Hours: %f",hour);
                }
                else if(option == 4) {
                    printf("\n\nYou have selected 'Days'\n");
                    float day, year;
                    printf("Enter the time in Years: ");
                    scanf("%f", &year);
                    day = year * 365;
                    printf("Time in Days: %f",day);
                }
                else if(option == 5) {
                    printf("\n\nYou have selected 'Weeks'\n");
                    float week, year;
                    printf("Enter the time in Years: ");
                    scanf("%f", &year);
                    week = year * 52.1429;
                    printf("Time in Weeks: %f",week);
                }
                else if(option == 6) {
                    printf("\n\nYou have selected 'Months'\n");
                    float month, year;
                    printf("Enter the time in Years: ");
                    scanf("%f", &year);
                    month = year * 12;
                    printf("Time in Months: %f",month);
                break;
                }
                else {
                printf("Invalid selection, please return to main menu.");
                }
            break;
            }
            else {
                printf("Invalid selection, please return to main menu.");
                }
        }
        else if (option == 5) {
            /*Temperature*/
                /*Options: Celsius, Farenheit, Kelvin, Rankine*/
            printf("\n\nYou have selected 'Temperature'\n");
            printf("\nPlease select from the following options what unit you'd like to convert FROM:\n");
            printf("1: Celsius\n");
            printf("2: Farenheit\n");
            printf("3: Kelvin\n");
            printf("4: Rankine\n");
            printf("\nEnter a number option from above: ");
            scanf("%d", &option);
            if(option == 1) {
                printf("\n\nYou have selected 'Celsius'\n");
                printf("\nPlease select from the following options what unit you'd like to convert TO:\n");
                printf("1: Farenheit\n");
                printf("2: Kelvin\n");
                printf("3: Rankine\n");
                printf("\nEnter a number option from above: ");
                scanf("%d", &option);
                if(option == 1) {
                    printf("\n\nYou have selected 'Farenheit'\n");
                    float far, cel;
                    printf("Enter the temperature in Celsius: ");
                    scanf("%f", &cel);
                    far = ((cel * (9/5)) +32);
                    printf("Temperature in Farenheit: %f",far);
                }
                else if(option == 2) {
                    printf("\n\nYou have selected 'Kelvin'\n");
                    float kel, cel;
                    printf("Enter the temperature in Celsius: ");
                    scanf("%f", &cel);
                    kel = cel + 273.15;
                    printf("Temperature in Kelvin: %f",kel);
                }
                else if(option == 3) {
                    printf("\n\nYou have selected 'Rankine'\n");
                    float ran, cel;
                    printf("Enter the temperature in Celsius: ");
                    scanf("%f", &cel);
                    ran = ((cel * (9/5)) + 491.67);
                    printf("Temperature in Rankine: %f",ran);
                break;
                }
                else {
                printf("Invalid selection, please return to main menu.");
                }
            }
            else if(option == 2) {
                printf("\n\nYou have selected 'Farenheit'\n");
                printf("\nPlease select from the following options what unit you'd like to convert TO:\n");
                printf("1: Celsius\n");
                printf("2: Kelvin\n");
                printf("3: Rankine\n");
                printf("\nEnter a number option from above: ");
                scanf("%d", &option);
                if(option == 1) {
                    printf("\n\nYou have selected 'Celsius'\n");
                    float far, cel;
                    printf("Enter the temperature in Farenheit: ");
                    scanf("%f", &far);
                    cel = (far - 32) * (5/9);
                    printf("Temperature in Celsius: %f",cel);
                }
                else if(option == 2) {
                    printf("\n\nYou have selected 'Kelvin'\n");
                    float kel, far;
                    printf("Enter the temperature in Farenheit: ");
                    scanf("%f", &far);
                    kel = ((far - 32) * (5/9)) + 273.15;
                    printf("Temperature in Kelvin: %f",kel);
                }
                else if(option == 3) {
                    printf("\n\nYou have selected 'Rankine'\n");
                    float ran, far;
                    printf("Enter the temperature in Farenheit: ");
                    scanf("%f", &far);
                    ran = far + 459.67;
                    printf("Temperature in Rankine: %f",ran);
                break;
                }
                else {
                printf("Invalid selection, please return to main menu.");
                }
            }
            else if(option == 3) {
                printf("\n\nYou have selected 'Kelvin'\n");
                printf("\nPlease select from the following options what unit you'd like to convert TO:\n");
                printf("1: Celsius\n");
                printf("2: Farenheit\n");
                printf("3: Rankine\n");
                printf("\nEnter a number option from above: ");
                scanf("%d", &option);
                if(option == 1) {
                    printf("\n\nYou have selected 'Celsius'\n");
                    float kel, cel;
                    printf("Enter the temperature in Kelvin: ");
                    scanf("%f", &kel);
                    cel = kel - 273.15;
                    printf("Temperature in Celsius: %f",cel);
                }
                else if(option == 2) {
                    printf("\n\nYou have selected 'Farenheit'\n");
                    float kel, far;
                    printf("Enter the temperature in Kelvin: ");
                    scanf("%f", &kel);
                    far = ((kel - 273.15) * 9/5) + 32;
                    printf("Temperature in Farenheit: %f",far);
                }
                else if(option == 3) {
                    printf("\n\nYou have selected 'Rankine'\n");
                    float ran, kel;
                    printf("Enter the temperature in Kelvin: ");
                    scanf("%f", &kel);
                    ran = kel * 1.8;
                    printf("Temperature in Rankine: %f",ran);
                break;
                }
                else {
                printf("Invalid selection, please return to main menu.");
                }
            }
            else if(option == 4) {
                printf("\n\nYou have selected 'Rankine'\n");
                printf("\nPlease select from the following options what unit you'd like to convert TO:\n");
                printf("1: Celsius\n");
                printf("2: Farenheit\n");
                printf("3: Kelvin\n");
                printf("\nEnter a number option from above: ");
                scanf("%d", &option);
                if(option == 1) {
                    printf("\n\nYou have selected 'Celsius'\n");
                    float ran, cel;
                    printf("Enter the temperature in Rankine: ");
                    scanf("%f", &ran);
                    cel = ((ran - 491.67) * (5/9));
                    printf("Temperature in Celsius: %f",cel);
                }
                else if(option == 2) {
                    printf("\n\nYou have selected 'Farenheit'\n");
                    float ran, far;-
                    printf("Enter the temperature in Rankine: ");
                    scanf("%f", &ran);
                    far = ran - 459.67;
                    printf("Temperature in Farenheit: %f",far);
                }
                else if(option == 3) {
                    printf("\n\nYou have selected 'Kelvin'\n");
                    float ran, kel;
                    printf("Enter the temperature in Rankine: ");
                    scanf("%f", &ran);
                    kel = ran / 1.8;
                    printf("Temperature in Kelvin: %f",kel);
                break;
                }
                else {
                printf("Invalid selection, please return to main menu.");
                }
                break;
            }
        else {
            printf("Invalid Selection\n");
        }
        }
    break;
    }
        return 0;
    }


    
