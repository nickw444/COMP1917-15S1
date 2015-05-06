void testPrint(int testGroup) {
    printf("Group %d has passed - you're awesome!\n",testGroup);
}
 
void runUnitTests (void) { 
    printf ("Testing group 1\n");
    assert (dayOfWeek (THURSDAY,  FALSE,  4,  4) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  6,  6) == FRIDAY);
    assert (dayOfWeek (MONDAY,    FALSE,  8,  8) == MONDAY);
    assert (dayOfWeek (WEDNESDAY, FALSE, 10, 10) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 12, 12) == FRIDAY);
    assert (dayOfWeek (THURSDAY,  FALSE,  9,  5) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  5,  9) == FRIDAY);
    assert (dayOfWeek (SUNDAY,    FALSE,  7, 11) == SUNDAY);
    assert (dayOfWeek (SUNDAY,    TRUE,   9, 9 ) == THURSDAY);
    assert (dayOfWeek (TUESDAY,   FALSE, 11,  7) == TUESDAY);
    assert (dayOfWeek (WEDNESDAY, FALSE,  3,  7) == WEDNESDAY);
    assert (dayOfWeek (WEDNESDAY, TRUE, 9, 25) == TUESDAY);
 
    testPrint(1);   
 
    printf ("Testing group 2\n");
    assert (dayOfWeek (THURSDAY,  FALSE,  4,  5) == FRIDAY);
    assert (dayOfWeek (SATURDAY,  FALSE,  6,  5) == FRIDAY);
    assert (dayOfWeek (MONDAY,    FALSE,  8,  9) == TUESDAY);
    assert (dayOfWeek (WEDNESDAY, FALSE, 10,  9) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 12, 20) == SATURDAY);
    assert (dayOfWeek (THURSDAY,  FALSE,  9,  9) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  5,  5) == MONDAY);
    assert (dayOfWeek (SUNDAY,    FALSE,  7,  7) == WEDNESDAY);
    assert (dayOfWeek (TUESDAY,   FALSE, 11, 11) == SATURDAY);
    assert (dayOfWeek (THURSDAY,  FALSE,  3, 30) == SATURDAY);
    assert (dayOfWeek (FRIDAY,  FALSE,  10, 21) == TUESDAY);
    testPrint(2); 
 
    printf ("Testing group 3\n");
    assert (dayOfWeek (TUESDAY,   FALSE,  2,  28) == TUESDAY);
    assert (dayOfWeek (TUESDAY,   FALSE,  2,  27) == MONDAY);
    assert (dayOfWeek (THURSDAY,  FALSE,  1,   5) == SATURDAY);
    assert (dayOfWeek (THURSDAY,  FALSE,  1,   3) == THURSDAY);
    assert (dayOfWeek (WEDNESDAY, TRUE,   3,  27) == TUESDAY);
    assert (dayOfWeek (MONDAY,    TRUE,   1,   4) == MONDAY);
    assert (dayOfWeek (MONDAY,    FALSE,  1,   4) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  3,  21) == FRIDAY);
    assert (dayOfWeek (SATURDAY,  FALSE,  2,  1) == SUNDAY);
    assert (dayOfWeek (SATURDAY,  FALSE,  8,  14) == FRIDAY);
    assert (dayOfWeek (THURSDAY,  FALSE,  4,  5) == FRIDAY);
    assert (dayOfWeek (SUNDAY,    FALSE,  1,  26) == TUESDAY);
    assert (dayOfWeek (WEDNESDAY, TRUE,  1,  16)  == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 7, 9)  == WEDNESDAY);
    testPrint(3);
 
    printf ("Testing group 4\n");
    assert (dayOfWeek (THURSDAY, TRUE, 2, 29) == THURSDAY);
    assert (dayOfWeek (THURSDAY, TRUE, 2, 28) == WEDNESDAY);
    assert (dayOfWeek (THURSDAY, FALSE, 2, 28) == THURSDAY);
    assert (dayOfWeek (THURSDAY, TRUE, 7, 1) == MONDAY);
    assert (dayOfWeek (THURSDAY, FALSE, 12, 18) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY, FALSE, 2, 10) == MONDAY);
    assert (dayOfWeek (SATURDAY, FALSE, 10, 21) == WEDNESDAY);
    assert (dayOfWeek (MONDAY, FALSE, 3, 1) == TUESDAY);
    assert (dayOfWeek (FRIDAY, FALSE, 2, 26) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY, FALSE, 2, 11) == TUESDAY);
    assert (dayOfWeek (MONDAY, TRUE, 7, 1) == FRIDAY);
    testPrint(4);
 
    printf ("Testing group 5\n");
    assert (dayOfWeek (TUESDAY, TRUE, 2, 27) == SUNDAY);
    assert (dayOfWeek (WEDNESDAY, TRUE, 2,  22) == WEDNESDAY);
    // assert (dayOfWeek (THURSDAY,  TRUE,  1,   3) == TUESDAY); // This test is incorrect (look at the next one!)
    assert (dayOfWeek (THURSDAY, TRUE, 1, 3) == WEDNESDAY);
    assert (dayOfWeek (THURSDAY,  TRUE,  1, 4) == THURSDAY);
    assert (dayOfWeek (THURSDAY, TRUE, 1, 11) == THURSDAY);
    assert (dayOfWeek (THURSDAY, TRUE, 2, 1) == THURSDAY);
    assert (dayOfWeek (THURSDAY, TRUE, 2, 29) == THURSDAY);
    assert (dayOfWeek (THURSDAY, TRUE, 2, 17) == SATURDAY);
    assert (dayOfWeek (THURSDAY, TRUE, 2, 18) == SUNDAY);
    assert (dayOfWeek (THURSDAY,  TRUE,  4,   4) == THURSDAY);
    testPrint(5);
 
    printf ("Testing group 6\n");
    assert (dayOfWeek (FRIDAY, TRUE, 1, 1) == TUESDAY);
    assert (dayOfWeek (WEDNESDAY, TRUE, 2, 29) == WEDNESDAY);
    assert (dayOfWeek (THURSDAY, FALSE, 3, 30) == SATURDAY);
    assert (dayOfWeek (TUESDAY, TRUE, 4, 24) == MONDAY);
    assert (dayOfWeek (THURSDAY, FALSE, 12, 31) == TUESDAY);
    assert (dayOfWeek (SATURDAY, TRUE, 1, 5) == SUNDAY);
    assert (dayOfWeek (MONDAY, TRUE, 10, 18) == TUESDAY);
    assert (dayOfWeek (MONDAY, FALSE, 11, 12) == SATURDAY);
    assert (dayOfWeek (WEDNESDAY, TRUE, 3, 7) == WEDNESDAY);
    assert (dayOfWeek (SUNDAY, TRUE, 3, 21) == SUNDAY);
    assert (dayOfWeek (MONDAY, TRUE, 3, 15) == TUESDAY);
    testPrint(6);
 
    printf ("Testing group 7\n");
    assert (dayOfWeek (MONDAY, TRUE, 2, 15) == MONDAY);
    assert (dayOfWeek (MONDAY, TRUE, 1, 4) == MONDAY);
    assert (dayOfWeek (MONDAY, TRUE, 4, 4) == MONDAY);
    assert (dayOfWeek (MONDAY, TRUE, 2, 29) == MONDAY);
    assert (dayOfWeek (MONDAY, FALSE, 2, 28) == MONDAY);
    assert (dayOfWeek (MONDAY, TRUE, 3, 1) == TUESDAY);
    assert (dayOfWeek (FRIDAY, FALSE, 6, 6) == FRIDAY); 
    assert (dayOfWeek (TUESDAY, TRUE, 4, 1) == SATURDAY);
    assert (dayOfWeek (TUESDAY, TRUE, 12, 25) == MONDAY);
    assert (dayOfWeek (TUESDAY, FALSE, 4, 1) == SATURDAY);
    testPrint(7);
 
    printf ("Testing group 8\n");
    assert (dayOfWeek (THURSDAY, TRUE, 3, 2) == SATURDAY);
    assert (dayOfWeek (THURSDAY, FALSE, 1, 1) == TUESDAY);
    assert (dayOfWeek (SATURDAY, TRUE, 10, 10) == SATURDAY);
    assert (dayOfWeek (SATURDAY, FALSE, 3, 13) == FRIDAY);
    assert (dayOfWeek (THURSDAY, FALSE, 11, 4) == MONDAY);
    assert (dayOfWeek (THURSDAY, FALSE, 7, 22) == MONDAY);
    assert (dayOfWeek (FRIDAY, TRUE, 3, 15) == SATURDAY);
    assert (dayOfWeek (FRIDAY, FALSE, 5, 12) == MONDAY);
    assert (dayOfWeek (FRIDAY, FALSE, 7, 2) == WEDNESDAY);
    assert (dayOfWeek (SUNDAY, TRUE, 1, 31) == SATURDAY);
    assert (dayOfWeek (WEDNESDAY, TRUE, 6, 9) == SATURDAY);
    testPrint(8);
 
    printf ("Testing group 9\n");
    assert (dayOfWeek (THURSDAY, TRUE, 1, 6) == SATURDAY);
    assert (dayOfWeek (WEDNESDAY, FALSE, 6, 10) == SUNDAY); 
    assert (dayOfWeek (THURSDAY, TRUE, 10, 1) == TUESDAY);
    assert (dayOfWeek (SATURDAY,  TRUE,  2,  3)  == MONDAY);
    assert (dayOfWeek (FRIDAY, TRUE, 11, 29) == SATURDAY);
    assert (dayOfWeek (FRIDAY, FALSE, 12, 12) == FRIDAY);
    assert (dayOfWeek (FRIDAY, TRUE, 3, 19) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY, TRUE, 6, 6) == FRIDAY);
    assert (dayOfWeek (TUESDAY, TRUE, 3, 14) == TUESDAY);
    assert (dayOfWeek (TUESDAY, TRUE, 3, 15) == WEDNESDAY);
    assert (dayOfWeek (TUESDAY, TRUE, 8 , 28) == MONDAY);
    testPrint(9);
 
    printf ("Testing group 10\n");
    assert (dayOfWeek (THURSDAY, TRUE, 10, 3) == THURSDAY);
    assert (dayOfWeek (THURSDAY, TRUE, 10, 4) == FRIDAY);
    assert (dayOfWeek (THURSDAY, FALSE, 7, 6) == SATURDAY);
    assert (dayOfWeek (WEDNESDAY, TRUE, 10, 16) == TUESDAY);
    assert (dayOfWeek (SUNDAY,   FALSE, 2, 8) == MONDAY);
    assert (dayOfWeek (TUESDAY,  TRUE,  9, 30) == SATURDAY);
    assert (dayOfWeek (MONDAY,   TRUE,  1,  1) == FRIDAY);
    assert (dayOfWeek (TUESDAY,  TRUE,  9, 30) == SATURDAY);
    assert (dayOfWeek (MONDAY,   TRUE,  8, 31) == WEDNESDAY);
    assert (dayOfWeek (THURSDAY, TRUE,  4, 14) == SUNDAY);
    assert (dayOfWeek (MONDAY,   FALSE, 2,  9) == WEDNESDAY);
    assert (dayOfWeek (SUNDAY,   TRUE,  9,  2) == THURSDAY);
    testPrint(10);
 
    printf ("Testing group 11: Different doomsdays, months, and days\n");
    assert (dayOfWeek (SUNDAY,  TRUE, 1, 20) == TUESDAY);
    assert (dayOfWeek (MONDAY, TRUE, 2, 19) == FRIDAY);
    assert (dayOfWeek (TUESDAY, TRUE, 3, 18) == SATURDAY);
    assert (dayOfWeek (WEDNESDAY,TRUE, 4, 17) == TUESDAY);
    assert (dayOfWeek (THURSDAY, TRUE, 5, 16) == THURSDAY);
    assert (dayOfWeek (FRIDAY,   TRUE, 6, 15) == SUNDAY);
    assert (dayOfWeek (SATURDAY, TRUE, 7,  14) == TUESDAY);
    assert (dayOfWeek (SUNDAY, TRUE, 8,   13) == FRIDAY);
    assert (dayOfWeek (MONDAY,  TRUE, 9,  12) == MONDAY);
    assert (dayOfWeek (TUESDAY, TRUE, 10,   11) == WEDNESDAY);
    assert (dayOfWeek (WEDNESDAY,TRUE, 11, 10) == SATURDAY);
    assert (dayOfWeek (THURSDAY,TRUE, 12,  9) == MONDAY);
    testPrint(11);
 
    printf ("Testing group 12: tutor birthdays\n");
    assert (dayOfWeek (SATURDAY, TRUE, 5, 15) == FRIDAY);
    assert (dayOfWeek (THURSDAY, TRUE, 5, 26) == SUNDAY);
    assert (dayOfWeek (WEDNESDAY,  FALSE,  4,  1) == SUNDAY);
    assert (dayOfWeek (WEDNESDAY,  TRUE,  4,  1) == SUNDAY);
    assert (dayOfWeek (THURSDAY,  TRUE,  2,  23)  == FRIDAY);
    assert (dayOfWeek (MONDAY,TRUE,8,1) == MONDAY);
    testPrint(12);
 
    printf ("Testing group 13: Tests for February dates on leap years specifically\n");
    assert (dayOfWeek (WEDNESDAY, TRUE,  2,  29) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    TRUE,  2,  29) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    TRUE,  2,  28) == THURSDAY);
    assert (dayOfWeek (SUNDAY,    TRUE,  2,  29) == SUNDAY);
    assert (dayOfWeek (SUNDAY,    TRUE,  2,  27) == FRIDAY);
    assert (dayOfWeek (MONDAY, TRUE, 2, 29) == MONDAY);
    assert (dayOfWeek (TUESDAY,    TRUE, 2,  20) == SUNDAY);
    assert (dayOfWeek (MONDAY,  TRUE,  3,  1) == TUESDAY);
    assert (dayOfWeek (FRIDAY, FALSE, 3, 28) == FRIDAY); // due date
    testPrint(13);
 
    printf ("Testing group 14\n");
    assert (dayOfWeek (FRIDAY, FALSE, 6, 7) == SATURDAY);
    assert (dayOfWeek (MONDAY, TRUE, 6, 6) == MONDAY);
    assert (dayOfWeek (MONDAY, TRUE, 10, 11) == TUESDAY);
    assert (dayOfWeek (TUESDAY, FALSE, 7, 4) == TUESDAY);
    assert (dayOfWeek (TUESDAY, FALSE, 9, 6) == WEDNESDAY);
    assert (dayOfWeek (SATURDAY, TRUE, 5, 5) == TUESDAY);
    assert (dayOfWeek (MONDAY, FALSE, 5, 13) == FRIDAY);
    assert (dayOfWeek (FRIDAY, FALSE, 3, 19) == WEDNESDAY); 
    assert (dayOfWeek (FRIDAY, FALSE, 3, 24) == MONDAY);  
    assert (dayOfWeek (MONDAY, FALSE, 10, 4) == TUESDAY);
    assert (dayOfWeek (THURSDAY, FALSE, 4, 28) == SUNDAY);
    assert (dayOfWeek (FRIDAY, FALSE, 4, 21) == MONDAY);
    testPrint(14);
 
    printf ("Testing group 15\n");
    assert (dayOfWeek (WEDNESDAY,  TRUE,  1,  17)  == TUESDAY);
    assert (dayOfWeek (WEDNESDAY,  TRUE,  2,  3)  == FRIDAY);
    assert (dayOfWeek (SUNDAY,  TRUE,  1,  6)  == TUESDAY);
    assert (dayOfWeek (SUNDAY,  TRUE,  1,  28)  == WEDNESDAY);
    assert (dayOfWeek (SUNDAY,  TRUE,  2,  14)  == SATURDAY);
    assert (dayOfWeek (TUESDAY,  TRUE,  12,  25)  == MONDAY);
    assert (dayOfWeek (TUESDAY,  TRUE,  6,  17)  == SATURDAY);
    assert (dayOfWeek (TUESDAY,  TRUE,  5,  9)  == TUESDAY);
    assert (dayOfWeek (TUESDAY,  TRUE,  2,  9)  == WEDNESDAY);
    assert (dayOfWeek (WEDNESDAY, FALSE,  3,  3) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    TRUE,  10,  31) == FRIDAY);
    assert (dayOfWeek (THURSDAY,  FALSE,  11,  1) == FRIDAY);
    assert (dayOfWeek (TUESDAY,  FALSE,  7,  5)  == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,  FALSE,  5,  30)  == FRIDAY);
    testPrint(15);
 
    printf ("Testing group 16: extremities \n");
    //1-4 Tests extremities of leapyears and non leapyears
    //5-6 Tests the 2 leapyear affected months January and February
    //7 Tests if you wrongly used the situational may doomsday
    assert (dayOfWeek (WEDNESDAY, FALSE,  11,  1) == THURSDAY);
    assert (dayOfWeek (WEDNESDAY, FALSE,  11,  27) == TUESDAY);
    assert (dayOfWeek (THURSDAY, TRUE,  1,  1) == MONDAY);
    assert (dayOfWeek (THURSDAY, TRUE, 1,  27) == SATURDAY);
    assert (dayOfWeek (SUNDAY, TRUE, 1, 16) == FRIDAY);
    assert (dayOfWeek (SUNDAY,  TRUE,  2,  16) == MONDAY);
    assert (dayOfWeek (FRIDAY, FALSE,  5,  2) == FRIDAY);
    assert (dayOfWeek (SATURDAY, TRUE, 12, 26) == SATURDAY);
    assert (dayOfWeek (FRIDAY, FALSE, 3, 22) == SATURDAY);
    testPrint(16);
 
    printf ("Testing group 17\n");
    assert (dayOfWeek (FRIDAY, FALSE, 3, 29) == SATURDAY);
    assert (dayOfWeek (MONDAY, TRUE, 1, 1) == FRIDAY);
    assert (dayOfWeek (SUNDAY, TRUE, 2, 2) == MONDAY);
    assert (dayOfWeek (WEDNESDAY, TRUE, 4, 19) == THURSDAY);
    assert (dayOfWeek (TUESDAY, TRUE, 5, 14) == SUNDAY);
    assert (dayOfWeek (THURSDAY, FALSE, 6, 18) == TUESDAY);
    assert (dayOfWeek (FRIDAY, FALSE, 7, 5) == SATURDAY);
    assert (dayOfWeek (FRIDAY, FALSE, 4, 8) == TUESDAY);
    assert (dayOfWeek (FRIDAY, FALSE, 8, 4) == MONDAY);
    assert (dayOfWeek (MONDAY, TRUE, 3, 30) == WEDNESDAY);
    assert (dayOfWeek (THURSDAY, FALSE, 5, 13) == MONDAY);
    assert (dayOfWeek (SATURDAY, FALSE, 2, 9) == MONDAY);
    assert (dayOfWeek(TUESDAY, FALSE, 7, 8 ) == SATURDAY);
    assert (dayOfWeek(THURSDAY, FALSE, 4,26) == FRIDAY);
    assert (dayOfWeek(SATURDAY, FALSE, 6, 13) == SATURDAY);
    assert (dayOfWeek (TUESDAY, TRUE, 2, 3) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 3, 28) == FRIDAY); // The day we have to submit the doomsday code
    assert (dayOfWeek (SUNDAY, TRUE, 12, 31) == FRIDAY); //366th day of the year!
    assert (dayOfWeek (FRIDAY, FALSE, 7, 3) == THURSDAY);
    testPrint(17);
 
    printf ("Testing group 18 - Series of TRUE cases\n");
    assert (dayOfWeek (WEDNESDAY, TRUE,   3,   6) == TUESDAY);
    assert (dayOfWeek (WEDNESDAY, TRUE,   5,   1) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    TRUE,   6,  28) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    TRUE,   3,   5) == WEDNESDAY);
    assert (dayOfWeek (TUESDAY,   TRUE,  10,   7) == SATURDAY);
    assert (dayOfWeek (THURSDAY,  TRUE,   4,   9) == TUESDAY);
    assert (dayOfWeek (THURSDAY,  TRUE,   2,   2) == FRIDAY);
    assert (dayOfWeek (THURSDAY,  TRUE,   4,  30) == TUESDAY);
    assert (dayOfWeek (THURSDAY,  TRUE,   2,   2) == FRIDAY);
    assert (dayOfWeek (SUNDAY,    TRUE,   5,  11) == TUESDAY);
    assert (dayOfWeek (SUNDAY,    TRUE,   1,   1) == THURSDAY);
    assert (dayOfWeek (MONDAY,    TRUE,   1,   1) == FRIDAY);
    assert (dayOfWeek (WEDNESDAY, TRUE,   2,  29) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    TRUE,   2,  29) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    TRUE,   2,  28) == THURSDAY);
    assert (dayOfWeek (MONDAY,    TRUE,   2,  29) == MONDAY);
    assert (dayOfWeek (SUNDAY,    TRUE,   2,  27) == FRIDAY);
    assert (dayOfWeek (THURSDAY,  TRUE,   2,   6) == TUESDAY);
    assert (dayOfWeek (WEDNESDAY, TRUE,   2,  12) == SUNDAY);
    assert (dayOfWeek (SATURDAY,  TRUE,   1,   5) == SUNDAY);
    assert (dayOfWeek (SUNDAY,    TRUE,   1,  21) == WEDNESDAY);
    assert (dayOfWeek (WEDNESDAY, TRUE,   5,  17) == THURSDAY);
    testPrint(18);
 
    printf ("Testing group 19 - last day of each month\n");
    assert (dayOfWeek (SUNDAY,    FALSE, 1,  31) == SUNDAY);
    assert (dayOfWeek (MONDAY,    FALSE, 2,  28) == MONDAY);
    assert (dayOfWeek (TUESDAY,   FALSE, 3,  31) == FRIDAY);
    assert (dayOfWeek (WEDNESDAY, FALSE, 4,  30) == MONDAY);
    assert (dayOfWeek (THURSDAY,  FALSE, 5,  31) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 6,  30) == MONDAY);
    assert (dayOfWeek (SATURDAY,  FALSE, 7,  31) == FRIDAY);
    assert (dayOfWeek (SUNDAY,    FALSE, 8,  31) == TUESDAY);
    assert (dayOfWeek (MONDAY,    FALSE, 9,  30) == FRIDAY);
    assert (dayOfWeek (TUESDAY,   FALSE, 10, 31) == TUESDAY);
    assert (dayOfWeek (WEDNESDAY, FALSE, 11, 30) == FRIDAY);
    assert (dayOfWeek (THURSDAY,  FALSE, 12, 31) == TUESDAY);
    testPrint(19);
 
    printf ("Testing group 20 - first day of each month\n");
    assert (dayOfWeek (SUNDAY,    FALSE, 1,  1) == FRIDAY);
    assert (dayOfWeek (MONDAY,    FALSE, 2,  1) == TUESDAY);
    assert (dayOfWeek (TUESDAY,   FALSE, 3,  1) == WEDNESDAY);
    assert (dayOfWeek (WEDNESDAY, FALSE, 4,  1) == SUNDAY);
    assert (dayOfWeek (THURSDAY,  FALSE, 5,  1) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 6,  1) == SUNDAY);
    assert (dayOfWeek (SATURDAY,  FALSE, 7,  1) == WEDNESDAY);
    assert (dayOfWeek (SUNDAY,    FALSE, 8,  1) == SUNDAY);
    assert (dayOfWeek (MONDAY,    FALSE, 9,  1) == THURSDAY);
    assert (dayOfWeek (TUESDAY,   FALSE, 10, 1) == SUNDAY);
    assert (dayOfWeek (WEDNESDAY, FALSE, 11, 1) == THURSDAY);
    assert (dayOfWeek (THURSDAY,  FALSE, 12, 1) == SUNDAY);
    assert (dayOfWeek (TUESDAY,   FALSE, 9,  27) == WEDNESDAY);    
    testPrint(20);
 
    // tests how well you handle the modulo operator with negative numbers
    // note: some compilers can't calculate the remainder of a negative #
    assert (dayOfWeek (THURSDAY,  FALSE, 2, 1) == FRIDAY);
    assert (dayOfWeek (SATURDAY,  TRUE, 6, 27) == SATURDAY);
    assert (dayOfWeek (TUESDAY, TRUE, 8, 6) == SUNDAY);
 
    assert (dayOfWeek (FRIDAY,    TRUE,   2,  20) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  12,  1) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  1,  1) == WEDNESDAY);
    assert (dayOfWeek (WEDNESDAY, FALSE, 12, 12) == WEDNESDAY);
 
    assert (dayOfWeek (FRIDAY, TRUE, 4, 27) == SUNDAY);
    assert (dayOfWeek (MONDAY, TRUE, 3, 24) == THURSDAY);
    assert (dayOfWeek (MONDAY, FALSE, 3, 24) == THURSDAY);
    assert (dayOfWeek (THURSDAY, FALSE, 2, 17) == SUNDAY);
    assert (dayOfWeek (THURSDAY, TRUE, 2, 17) == SATURDAY);
    assert (dayOfWeek (SATURDAY, TRUE, 1, 21) == TUESDAY);
    assert (dayOfWeek (FRIDAY, TRUE, 11, 29) == SATURDAY);
    assert (dayOfWeek (FRIDAY, FALSE, 12, 13) == SATURDAY);
    assert (dayOfWeek (MONDAY, FALSE, 7, 28) == THURSDAY);
 
    printf ("Testing group 21 - even more Jan/Feb unit tests!\n");
    assert (dayOfWeek (FRIDAY,    TRUE,  1,  1) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 1,  1) == WEDNESDAY); 
    assert (dayOfWeek (THURSDAY,  TRUE,  1, 31) == WEDNESDAY);
    assert (dayOfWeek (THURSDAY,  FALSE, 1, 31) == THURSDAY);
    assert (dayOfWeek (THURSDAY,  TRUE,  2, 28) == WEDNESDAY);
    assert (dayOfWeek (THURSDAY,  TRUE,  2, 29) == THURSDAY);
    assert (dayOfWeek (THURSDAY,  FALSE, 2, 28) == THURSDAY);
    assert (dayOfWeek (WEDNESDAY,  FALSE, 1, 31) == WEDNESDAY);
    assert (dayOfWeek (WEDNESDAY,  TRUE,  2, 28) == TUESDAY);
    assert (dayOfWeek (WEDNESDAY,  TRUE,  2, 29) == WEDNESDAY);
    assert (dayOfWeek (WEDNESDAY,  FALSE, 2, 28) == WEDNESDAY);
 
    //Tests first day of month for leap years
    printf ("Testing group 22\n");
    assert (dayOfWeek (SUNDAY,  TRUE,  1,  1) == THURSDAY);
    assert (dayOfWeek (MONDAY,  TRUE,  2,  1) == MONDAY);
    assert (dayOfWeek (TUESDAY,  TRUE,  3,  1) == WEDNESDAY);
    assert (dayOfWeek (WEDNESDAY,  TRUE,  4,  1) == SUNDAY);
    assert (dayOfWeek (THURSDAY,  TRUE,  5,  1) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,  TRUE,  6,  1) == SUNDAY);
    assert (dayOfWeek (SATURDAY,  TRUE,  7,  1) == WEDNESDAY);
    assert (dayOfWeek (SUNDAY,  TRUE,  8,  1) == SUNDAY);
    assert (dayOfWeek (MONDAY,  TRUE,  9,  1) == THURSDAY);
    assert (dayOfWeek (TUESDAY,  TRUE,  10,  1) == SUNDAY);
    assert (dayOfWeek (WEDNESDAY,  TRUE,  11,  1) == THURSDAY);
    assert (dayOfWeek (THURSDAY,  TRUE,  12,  1) == SUNDAY);
    
    //2014 by Hugh
    //January
    assert (dayOfWeek (FRIDAY,    FALSE,  1,  1) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  1,  2) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  1,  3) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  1,  4) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  1,  5) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  1,  6) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  1,  7) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  1,  8) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  1,  9) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  1, 10) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  1, 11) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  1, 12) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  1, 13) == MONDAY);
    
    assert (dayOfWeek (FRIDAY,    FALSE,  1, 14) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  1, 15) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  1, 16) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  1, 17) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  1, 18) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  1, 19) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  1, 20) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  1, 21) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  1, 22) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  1, 23) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  1, 24) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  1, 25) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  1, 26) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  1, 27) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  1, 28) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  1, 29) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  1, 30) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  1, 31) == FRIDAY);
    //February
    assert (dayOfWeek (FRIDAY,    FALSE,  2,  1) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  2,  2) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  2,  3) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  2,  4) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  2,  5) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  2,  6) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  2,  7) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  2,  8) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  2,  9) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  2, 10) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  2, 11) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  2, 12) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  2, 13) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  2, 14) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  2, 15) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  2, 16) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  2, 17) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  2, 18) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  2, 19) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  2, 20) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  2, 21) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  2, 22) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  2, 23) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  2, 24) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  2, 25) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  2, 26) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  2, 27) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  2, 28) == FRIDAY);
    //March
    assert (dayOfWeek (FRIDAY,    FALSE,  3,  1) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  3,  2) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  3,  3) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  3,  4) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  3,  5) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  3,  6) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  3,  7) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  3,  8) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  3,  9) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  3, 10) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  3, 11) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  3, 12) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  3, 13) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  3, 14) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  3, 15) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  3, 16) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  3, 17) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  3, 18) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  3, 19) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  3, 20) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  3, 21) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  3, 22) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  3, 23) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  3, 24) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  3, 25) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  3, 26) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  3, 27) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  3, 28) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  3, 29) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  3, 30) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  3, 31) == MONDAY);
    //April
    assert (dayOfWeek (FRIDAY,    FALSE,  4,  1) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  4,  2) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  4,  3) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  4,  4) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  4,  5) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  4,  6) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  4,  7) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  4,  8) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  4,  9) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  4, 10) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  4, 11) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  4, 12) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  4, 13) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  4, 14) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  4, 15) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  4, 16) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  4, 17) == THURSDAY);
    assert (dayOfWeek (THURSDAY,  FALSE,  4,  5) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  4, 18) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  4, 19) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  4, 20) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  4, 21) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  4, 22) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  4, 23) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  4, 24) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  4, 25) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  4, 26) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  4, 27) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  4, 28) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  4, 29) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  4, 30) == WEDNESDAY);
    //May
    assert (dayOfWeek (FRIDAY,    FALSE,  5,  1) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  5,  2) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  5,  3) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  5,  4) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  5,  5) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  5,  6) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  5,  7) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  5,  8) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  5,  9) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  5, 10) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  5, 11) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  5, 12) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  5, 13) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  5, 14) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  5, 15) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  5, 16) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  5, 17) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  5, 18) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  5, 19) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  5, 20) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  5, 21) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  5, 22) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  5, 23) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  5, 24) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  5, 25) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  5, 26) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  5, 27) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  5, 28) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  5, 29) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  5, 30) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  5, 31) == SATURDAY);
    //June
    assert (dayOfWeek (FRIDAY,    FALSE,  6,  1) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  6,  2) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  6,  3) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  6,  4) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  6,  5) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  6,  6) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  6,  7) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  6,  8) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  6,  9) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  6, 10) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  6, 11) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  6, 12) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  6, 13) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  6, 14) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  6, 15) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  6, 16) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  6, 17) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  6, 18) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  6, 19) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  6, 20) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  6, 21) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  6, 22) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  6, 23) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  6, 24) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  6, 25) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  6, 26) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  6, 27) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  6, 28) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  6, 29) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  6, 30) == MONDAY);
    //July
    assert (dayOfWeek (FRIDAY,    FALSE,  7,  1) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  7,  2) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  7,  3) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  7,  4) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  7,  5) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  7,  6) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  7,  7) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  7,  8) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  7,  9) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  7, 10) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  7, 11) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  7, 12) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  7, 13) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  7, 14) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  7, 15) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  7, 16) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  7, 17) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  7, 18) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  7, 19) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  7, 20) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  7, 21) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  7, 22) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  7, 23) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  7, 24) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  7, 25) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  7, 26) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  7, 27) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  7, 28) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  7, 29) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  7, 30) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  7, 31) == THURSDAY);
    //August
    assert (dayOfWeek (FRIDAY,    FALSE,  8,  1) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  8,  2) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  8,  3) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  8,  4) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  8,  5) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  8,  6) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  8,  7) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  8,  8) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  8,  9) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  8, 10) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  8, 11) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  8, 12) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  8, 13) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  8, 14) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  8, 15) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  8, 16) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  8, 17) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  8, 18) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  8, 19) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  8, 20) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  8, 21) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  8, 22) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  8, 23) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  8, 24) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  8, 25) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  8, 26) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  8, 27) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  8, 28) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  8, 29) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  8, 30) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  8, 31) == SUNDAY);
    //September
    assert (dayOfWeek (FRIDAY,    FALSE,  9,  1) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  9,  2) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  9,  3) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  9,  4) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  9,  5) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  9,  6) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  9,  7) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  9,  8) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  9,  9) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  9, 10) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  9, 11) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  9, 12) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  9, 13) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  9, 14) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  9, 15) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  9, 16) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  9, 17) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  9, 18) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  9, 19) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  9, 20) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  9, 21) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  9, 22) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  9, 23) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  9, 24) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  9, 25) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  9, 26) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  9, 27) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  9, 28) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  9, 29) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE,  9, 30) == TUESDAY);
    //October
    assert (dayOfWeek (FRIDAY,    FALSE, 10,  1) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 10,  2) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 10,  3) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 10,  4) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 10,  5) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 10,  6) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 10,  7) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 10,  8) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 10,  9) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 10, 10) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 10, 11) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 10, 12) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 10, 13) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 10, 14) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 10, 15) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 10, 16) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 10, 17) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 10, 18) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 10, 19) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 10, 20) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 10, 21) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 10, 22) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 10, 23) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 10, 24) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 10, 25) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 10, 26) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 10, 27) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 10, 28) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 10, 29) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 10, 30) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 10, 31) == FRIDAY);
    //November
    assert (dayOfWeek (FRIDAY,    FALSE, 11,  1) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 11,  2) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 11,  3) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 11,  4) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 11,  5) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 11,  6) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 11,  7) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 11,  8) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 11,  9) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 11, 10) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 11, 11) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 11, 12) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 11, 13) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 11, 14) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 11, 15) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 11, 16) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 11, 17) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 11, 18) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 11, 19) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 11, 20) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 11, 21) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 11, 22) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 11, 23) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 11, 24) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 11, 25) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 11, 26) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 11, 27) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 11, 28) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 11, 29) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 11, 30) == SUNDAY);
    //December
    assert (dayOfWeek (FRIDAY,    FALSE, 12,  1) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 12,  2) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 12,  3) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 12,  4) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 12,  5) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 12,  6) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 12,  7) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 12,  8) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 12,  9) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 12, 10) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 12, 11) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 12, 12) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 12, 13) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 12, 14) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 12, 15) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 12, 16) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 12, 17) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 12, 18) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 12, 19) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 12, 20) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 12, 21) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 12, 22) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 12, 23) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 12, 24) == WEDNESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 12, 25) == THURSDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 12, 26) == FRIDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 12, 27) == SATURDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 12, 28) == SUNDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 12, 29) == MONDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 12, 30) == TUESDAY);
    assert (dayOfWeek (FRIDAY,    FALSE, 12, 31) == WEDNESDAY);
 
    assert (dayOfWeek (WEDNESDAY, FALSE, 1, 30) == TUESDAY);
 
    //Test all possible legal inputs
    // Doomsday = THURSDAY, leapyear = No
    assert(dayOfWeek(THURSDAY, FALSE, 1, 1) == TUESDAY);     // 1 January
    assert(dayOfWeek(THURSDAY, FALSE, 1, 2) == WEDNESDAY);   // 2 January
    assert(dayOfWeek(THURSDAY, FALSE, 1, 3) == THURSDAY);    // 3 January
    assert(dayOfWeek(THURSDAY, FALSE, 1, 4) == FRIDAY);      // 4 January
    assert(dayOfWeek(THURSDAY, FALSE, 1, 5) == SATURDAY);    // 5 January
    assert(dayOfWeek(THURSDAY, FALSE, 1, 6) == SUNDAY);      // 6 January
    assert(dayOfWeek(THURSDAY, FALSE, 1, 7) == MONDAY);      // 7 January
    assert(dayOfWeek(THURSDAY, FALSE, 1, 8) == TUESDAY);     // 8 January
    assert(dayOfWeek(THURSDAY, FALSE, 1, 9) == WEDNESDAY);   // 9 January
    assert(dayOfWeek(THURSDAY, FALSE, 1, 10) == THURSDAY);   // 10 January
    assert(dayOfWeek(THURSDAY, FALSE, 1, 11) == FRIDAY);     // 11 January
    assert(dayOfWeek(THURSDAY, FALSE, 1, 12) == SATURDAY);   // 12 January
    assert(dayOfWeek(THURSDAY, FALSE, 1, 13) == SUNDAY);     // 13 January
    assert(dayOfWeek(THURSDAY, FALSE, 1, 14) == MONDAY);     // 14 January
    assert(dayOfWeek(THURSDAY, FALSE, 1, 15) == TUESDAY);    // 15 January
    assert(dayOfWeek(THURSDAY, FALSE, 1, 16) == WEDNESDAY);  // 16 January
    assert(dayOfWeek(THURSDAY, FALSE, 1, 17) == THURSDAY);   // 17 January
    assert(dayOfWeek(THURSDAY, FALSE, 1, 18) == FRIDAY);     // 18 January
    assert(dayOfWeek(THURSDAY, FALSE, 1, 19) == SATURDAY);   // 19 January
    assert(dayOfWeek(THURSDAY, FALSE, 1, 20) == SUNDAY);     // 20 January
    assert(dayOfWeek(THURSDAY, FALSE, 1, 21) == MONDAY);     // 21 January
    assert(dayOfWeek(THURSDAY, FALSE, 1, 22) == TUESDAY);    // 22 January
    assert(dayOfWeek(THURSDAY, FALSE, 1, 23) == WEDNESDAY);  // 23 January
    assert(dayOfWeek(THURSDAY, FALSE, 1, 24) == THURSDAY);   // 24 January
    assert(dayOfWeek(THURSDAY, FALSE, 1, 25) == FRIDAY);     // 25 January
    assert(dayOfWeek(THURSDAY, FALSE, 1, 26) == SATURDAY);   // 26 January
    assert(dayOfWeek(THURSDAY, FALSE, 1, 27) == SUNDAY);     // 27 January
    assert(dayOfWeek(THURSDAY, FALSE, 1, 28) == MONDAY);     // 28 January
    assert(dayOfWeek(THURSDAY, FALSE, 1, 29) == TUESDAY);    // 29 January
    assert(dayOfWeek(THURSDAY, FALSE, 1, 30) == WEDNESDAY);  // 30 January
    assert(dayOfWeek(THURSDAY, FALSE, 1, 31) == THURSDAY);   // 31 January
    assert(dayOfWeek(THURSDAY, FALSE, 2, 1) == FRIDAY);      // 1 February
    assert(dayOfWeek(THURSDAY, FALSE, 2, 2) == SATURDAY);    // 2 February
    assert(dayOfWeek(THURSDAY, FALSE, 2, 3) == SUNDAY);      // 3 February
    assert(dayOfWeek(THURSDAY, FALSE, 2, 4) == MONDAY);      // 4 February
    assert(dayOfWeek(THURSDAY, FALSE, 2, 5) == TUESDAY);     // 5 February
    assert(dayOfWeek(THURSDAY, FALSE, 2, 6) == WEDNESDAY);   // 6 February
    assert(dayOfWeek(THURSDAY, FALSE, 2, 7) == THURSDAY);    // 7 February
    assert(dayOfWeek(THURSDAY, FALSE, 2, 8) == FRIDAY);      // 8 February
    assert(dayOfWeek(THURSDAY, FALSE, 2, 9) == SATURDAY);    // 9 February
    assert(dayOfWeek(THURSDAY, FALSE, 2, 10) == SUNDAY);     // 10 February
    assert(dayOfWeek(THURSDAY, FALSE, 2, 11) == MONDAY);     // 11 February
    assert(dayOfWeek(THURSDAY, FALSE, 2, 12) == TUESDAY);    // 12 February
    assert(dayOfWeek(THURSDAY, FALSE, 2, 13) == WEDNESDAY);  // 13 February
    assert(dayOfWeek(THURSDAY, FALSE, 2, 14) == THURSDAY);   // 14 February
    assert(dayOfWeek(THURSDAY, FALSE, 2, 15) == FRIDAY);     // 15 February
    assert(dayOfWeek(THURSDAY, FALSE, 2, 16) == SATURDAY);   // 16 February
    assert(dayOfWeek(THURSDAY, FALSE, 2, 17) == SUNDAY);     // 17 February
    assert(dayOfWeek(THURSDAY, FALSE, 2, 18) == MONDAY);     // 18 February
    assert(dayOfWeek(THURSDAY, FALSE, 2, 19) == TUESDAY);    // 19 February
    assert(dayOfWeek(THURSDAY, FALSE, 2, 20) == WEDNESDAY);  // 20 February
    assert(dayOfWeek(THURSDAY, FALSE, 2, 21) == THURSDAY);   // 21 February
    assert(dayOfWeek(THURSDAY, FALSE, 2, 22) == FRIDAY);     // 22 February
    assert(dayOfWeek(THURSDAY, FALSE, 2, 23) == SATURDAY);   // 23 February
    assert(dayOfWeek(THURSDAY, FALSE, 2, 24) == SUNDAY);     // 24 February
    assert(dayOfWeek(THURSDAY, FALSE, 2, 25) == MONDAY);     // 25 February
    assert(dayOfWeek(THURSDAY, FALSE, 2, 26) == TUESDAY);    // 26 February
    assert(dayOfWeek(THURSDAY, FALSE, 2, 27) == WEDNESDAY);  // 27 February
    assert(dayOfWeek(THURSDAY, FALSE, 2, 28) == THURSDAY);   // 28 February
    assert(dayOfWeek(THURSDAY, FALSE, 3, 1) == FRIDAY);      // 1 March
    assert(dayOfWeek(THURSDAY, FALSE, 3, 2) == SATURDAY);    // 2 March
    assert(dayOfWeek(THURSDAY, FALSE, 3, 3) == SUNDAY);      // 3 March
    assert(dayOfWeek(THURSDAY, FALSE, 3, 4) == MONDAY);      // 4 March
    assert(dayOfWeek(THURSDAY, FALSE, 3, 5) == TUESDAY);     // 5 March
    assert(dayOfWeek(THURSDAY, FALSE, 3, 6) == WEDNESDAY);   // 6 March
    assert(dayOfWeek(THURSDAY, FALSE, 3, 7) == THURSDAY);    // 7 March
    assert(dayOfWeek(THURSDAY, FALSE, 3, 8) == FRIDAY);      // 8 March
    assert(dayOfWeek(THURSDAY, FALSE, 3, 9) == SATURDAY);    // 9 March
    assert(dayOfWeek(THURSDAY, FALSE, 3, 10) == SUNDAY);     // 10 March
    assert(dayOfWeek(THURSDAY, FALSE, 3, 11) == MONDAY);     // 11 March
    assert(dayOfWeek(THURSDAY, FALSE, 3, 12) == TUESDAY);    // 12 March
    assert(dayOfWeek(THURSDAY, FALSE, 3, 13) == WEDNESDAY);  // 13 March
    assert(dayOfWeek(THURSDAY, FALSE, 3, 14) == THURSDAY);   // 14 March
    assert(dayOfWeek(THURSDAY, FALSE, 3, 15) == FRIDAY);     // 15 March
    assert(dayOfWeek(THURSDAY, FALSE, 3, 16) == SATURDAY);   // 16 March
    assert(dayOfWeek(THURSDAY, FALSE, 3, 17) == SUNDAY);     // 17 March
    assert(dayOfWeek(THURSDAY, FALSE, 3, 18) == MONDAY);     // 18 March
    assert(dayOfWeek(THURSDAY, FALSE, 3, 19) == TUESDAY);    // 19 March
    assert(dayOfWeek(THURSDAY, FALSE, 3, 20) == WEDNESDAY);  // 20 March
    assert(dayOfWeek(THURSDAY, FALSE, 3, 21) == THURSDAY);   // 21 March
    assert(dayOfWeek(THURSDAY, FALSE, 3, 22) == FRIDAY);     // 22 March
    assert(dayOfWeek(THURSDAY, FALSE, 3, 23) == SATURDAY);   // 23 March
    assert(dayOfWeek(THURSDAY, FALSE, 3, 24) == SUNDAY);     // 24 March
    assert(dayOfWeek(THURSDAY, FALSE, 3, 25) == MONDAY);     // 25 March
    assert(dayOfWeek(THURSDAY, FALSE, 3, 26) == TUESDAY);    // 26 March
    assert(dayOfWeek(THURSDAY, FALSE, 3, 27) == WEDNESDAY);  // 27 March
    assert(dayOfWeek(THURSDAY, FALSE, 3, 28) == THURSDAY);   // 28 March
    assert(dayOfWeek(THURSDAY, FALSE, 3, 29) == FRIDAY);     // 29 March
    assert(dayOfWeek(THURSDAY, FALSE, 3, 30) == SATURDAY);   // 30 March
    assert(dayOfWeek(THURSDAY, FALSE, 3, 31) == SUNDAY);     // 31 March
    assert(dayOfWeek(THURSDAY, FALSE, 4, 1) == MONDAY);      // 1 April
    assert(dayOfWeek(THURSDAY, FALSE, 4, 2) == TUESDAY);     // 2 April
    assert(dayOfWeek(THURSDAY, FALSE, 4, 3) == WEDNESDAY);   // 3 April
    assert(dayOfWeek(THURSDAY, FALSE, 4, 4) == THURSDAY);    // 4 April
    assert(dayOfWeek(THURSDAY, FALSE, 4, 5) == FRIDAY);      // 5 April
    assert(dayOfWeek(THURSDAY, FALSE, 4, 6) == SATURDAY);    // 6 April
    assert(dayOfWeek(THURSDAY, FALSE, 4, 7) == SUNDAY);      // 7 April
    assert(dayOfWeek(THURSDAY, FALSE, 4, 8) == MONDAY);      // 8 April
    assert(dayOfWeek(THURSDAY, FALSE, 4, 9) == TUESDAY);     // 9 April
    assert(dayOfWeek(THURSDAY, FALSE, 4, 10) == WEDNESDAY);  // 10 April
    assert(dayOfWeek(THURSDAY, FALSE, 4, 11) == THURSDAY);   // 11 April
    assert(dayOfWeek(THURSDAY, FALSE, 4, 12) == FRIDAY);     // 12 April
    assert(dayOfWeek(THURSDAY, FALSE, 4, 13) == SATURDAY);   // 13 April
    assert(dayOfWeek(THURSDAY, FALSE, 4, 14) == SUNDAY);     // 14 April
    assert(dayOfWeek(THURSDAY, FALSE, 4, 15) == MONDAY);     // 15 April
    assert(dayOfWeek(THURSDAY, FALSE, 4, 16) == TUESDAY);    // 16 April
    assert(dayOfWeek(THURSDAY, FALSE, 4, 17) == WEDNESDAY);  // 17 April
    assert(dayOfWeek(THURSDAY, FALSE, 4, 18) == THURSDAY);   // 18 April
    assert(dayOfWeek(THURSDAY, FALSE, 4, 19) == FRIDAY);     // 19 April
    assert(dayOfWeek(THURSDAY, FALSE, 4, 20) == SATURDAY);   // 20 April
    assert(dayOfWeek(THURSDAY, FALSE, 4, 21) == SUNDAY);     // 21 April
    assert(dayOfWeek(THURSDAY, FALSE, 4, 22) == MONDAY);     // 22 April
    assert(dayOfWeek(THURSDAY, FALSE, 4, 23) == TUESDAY);    // 23 April
    assert(dayOfWeek(THURSDAY, FALSE, 4, 24) == WEDNESDAY);  // 24 April
    assert(dayOfWeek(THURSDAY, FALSE, 4, 25) == THURSDAY);   // 25 April
    assert(dayOfWeek(THURSDAY, FALSE, 4, 26) == FRIDAY);     // 26 April
    assert(dayOfWeek(THURSDAY, FALSE, 4, 27) == SATURDAY);   // 27 April
    assert(dayOfWeek(THURSDAY, FALSE, 4, 28) == SUNDAY);     // 28 April
    assert(dayOfWeek(THURSDAY, FALSE, 4, 29) == MONDAY);     // 29 April
    assert(dayOfWeek(THURSDAY, FALSE, 4, 30) == TUESDAY);    // 30 April
    assert(dayOfWeek(THURSDAY, FALSE, 5, 1) == WEDNESDAY);   // 1 May
    assert(dayOfWeek(THURSDAY, FALSE, 5, 2) == THURSDAY);    // 2 May
    assert(dayOfWeek(THURSDAY, FALSE, 5, 3) == FRIDAY);      // 3 May
    assert(dayOfWeek(THURSDAY, FALSE, 5, 4) == SATURDAY);    // 4 May
    assert(dayOfWeek(THURSDAY, FALSE, 5, 5) == SUNDAY);      // 5 May
    assert(dayOfWeek(THURSDAY, FALSE, 5, 6) == MONDAY);      // 6 May
    assert(dayOfWeek(THURSDAY, FALSE, 5, 7) == TUESDAY);     // 7 May
    assert(dayOfWeek(THURSDAY, FALSE, 5, 8) == WEDNESDAY);   // 8 May
    assert(dayOfWeek(THURSDAY, FALSE, 5, 9) == THURSDAY);    // 9 May
    assert(dayOfWeek(THURSDAY, FALSE, 5, 10) == FRIDAY);     // 10 May
    assert(dayOfWeek(THURSDAY, FALSE, 5, 11) == SATURDAY);   // 11 May
    assert(dayOfWeek(THURSDAY, FALSE, 5, 12) == SUNDAY);     // 12 May
    assert(dayOfWeek(THURSDAY, FALSE, 5, 13) == MONDAY);     // 13 May
    assert(dayOfWeek(THURSDAY, FALSE, 5, 14) == TUESDAY);    // 14 May
    assert(dayOfWeek(THURSDAY, FALSE, 5, 15) == WEDNESDAY);  // 15 May
    assert(dayOfWeek(THURSDAY, FALSE, 5, 16) == THURSDAY);   // 16 May
    assert(dayOfWeek(THURSDAY, FALSE, 5, 17) == FRIDAY);     // 17 May
    assert(dayOfWeek(THURSDAY, FALSE, 5, 18) == SATURDAY);   // 18 May
    assert(dayOfWeek(THURSDAY, FALSE, 5, 19) == SUNDAY);     // 19 May
    assert(dayOfWeek(THURSDAY, FALSE, 5, 20) == MONDAY);     // 20 May
    assert(dayOfWeek(THURSDAY, FALSE, 5, 21) == TUESDAY);    // 21 May
    assert(dayOfWeek(THURSDAY, FALSE, 5, 22) == WEDNESDAY);  // 22 May
    assert(dayOfWeek(THURSDAY, FALSE, 5, 23) == THURSDAY);   // 23 May
    assert(dayOfWeek(THURSDAY, FALSE, 5, 24) == FRIDAY);     // 24 May
    assert(dayOfWeek(THURSDAY, FALSE, 5, 25) == SATURDAY);   // 25 May
    assert(dayOfWeek(THURSDAY, FALSE, 5, 26) == SUNDAY);     // 26 May
    assert(dayOfWeek(THURSDAY, FALSE, 5, 27) == MONDAY);     // 27 May
    assert(dayOfWeek(THURSDAY, FALSE, 5, 28) == TUESDAY);    // 28 May
    assert(dayOfWeek(THURSDAY, FALSE, 5, 29) == WEDNESDAY);  // 29 May
    assert(dayOfWeek(THURSDAY, FALSE, 5, 30) == THURSDAY);   // 30 May
    assert(dayOfWeek(THURSDAY, FALSE, 5, 31) == FRIDAY);     // 31 May
    assert(dayOfWeek(THURSDAY, FALSE, 6, 1) == SATURDAY);    // 1 June
    assert(dayOfWeek(THURSDAY, FALSE, 6, 2) == SUNDAY);      // 2 June
    assert(dayOfWeek(THURSDAY, FALSE, 6, 3) == MONDAY);      // 3 June
    assert(dayOfWeek(THURSDAY, FALSE, 6, 4) == TUESDAY);     // 4 June
    assert(dayOfWeek(THURSDAY, FALSE, 6, 5) == WEDNESDAY);   // 5 June
    assert(dayOfWeek(THURSDAY, FALSE, 6, 6) == THURSDAY);    // 6 June
    assert(dayOfWeek(THURSDAY, FALSE, 6, 7) == FRIDAY);      // 7 June
    assert(dayOfWeek(THURSDAY, FALSE, 6, 8) == SATURDAY);    // 8 June
    assert(dayOfWeek(THURSDAY, FALSE, 6, 9) == SUNDAY);      // 9 June
    assert(dayOfWeek(THURSDAY, FALSE, 6, 10) == MONDAY);     // 10 June
    assert(dayOfWeek(THURSDAY, FALSE, 6, 11) == TUESDAY);    // 11 June
    assert(dayOfWeek(THURSDAY, FALSE, 6, 12) == WEDNESDAY);  // 12 June
    assert(dayOfWeek(THURSDAY, FALSE, 6, 13) == THURSDAY);   // 13 June
    assert(dayOfWeek(THURSDAY, FALSE, 6, 14) == FRIDAY);     // 14 June
    assert(dayOfWeek(THURSDAY, FALSE, 6, 15) == SATURDAY);   // 15 June
    assert(dayOfWeek(THURSDAY, FALSE, 6, 16) == SUNDAY);     // 16 June
    assert(dayOfWeek(THURSDAY, FALSE, 6, 17) == MONDAY);     // 17 June
    assert(dayOfWeek(THURSDAY, FALSE, 6, 18) == TUESDAY);    // 18 June
    assert(dayOfWeek(THURSDAY, FALSE, 6, 19) == WEDNESDAY);  // 19 June
    assert(dayOfWeek(THURSDAY, FALSE, 6, 20) == THURSDAY);   // 20 June
    assert(dayOfWeek(THURSDAY, FALSE, 6, 21) == FRIDAY);     // 21 June
    assert(dayOfWeek(THURSDAY, FALSE, 6, 22) == SATURDAY);   // 22 June
    assert(dayOfWeek(THURSDAY, FALSE, 6, 23) == SUNDAY);     // 23 June
    assert(dayOfWeek(THURSDAY, FALSE, 6, 24) == MONDAY);     // 24 June
    assert(dayOfWeek(THURSDAY, FALSE, 6, 25) == TUESDAY);    // 25 June
    assert(dayOfWeek(THURSDAY, FALSE, 6, 26) == WEDNESDAY);  // 26 June
    assert(dayOfWeek(THURSDAY, FALSE, 6, 27) == THURSDAY);   // 27 June
    assert(dayOfWeek(THURSDAY, FALSE, 6, 28) == FRIDAY);     // 28 June
    assert(dayOfWeek(THURSDAY, FALSE, 6, 29) == SATURDAY);   // 29 June
    assert(dayOfWeek(THURSDAY, FALSE, 6, 30) == SUNDAY);     // 30 June
    assert(dayOfWeek(THURSDAY, FALSE, 7, 1) == MONDAY);      // 1 July
    assert(dayOfWeek(THURSDAY, FALSE, 7, 2) == TUESDAY);     // 2 July
    assert(dayOfWeek(THURSDAY, FALSE, 7, 3) == WEDNESDAY);   // 3 July
    assert(dayOfWeek(THURSDAY, FALSE, 7, 4) == THURSDAY);    // 4 July
    assert(dayOfWeek(THURSDAY, FALSE, 7, 5) == FRIDAY);      // 5 July
    assert(dayOfWeek(THURSDAY, FALSE, 7, 6) == SATURDAY);    // 6 July
    assert(dayOfWeek(THURSDAY, FALSE, 7, 7) == SUNDAY);      // 7 July
    assert(dayOfWeek(THURSDAY, FALSE, 7, 8) == MONDAY);      // 8 July
    assert(dayOfWeek(THURSDAY, FALSE, 7, 9) == TUESDAY);     // 9 July
    assert(dayOfWeek(THURSDAY, FALSE, 7, 10) == WEDNESDAY);  // 10 July
    assert(dayOfWeek(THURSDAY, FALSE, 7, 11) == THURSDAY);   // 11 July
    assert(dayOfWeek(THURSDAY, FALSE, 7, 12) == FRIDAY);     // 12 July
    assert(dayOfWeek(THURSDAY, FALSE, 7, 13) == SATURDAY);   // 13 July
    assert(dayOfWeek(THURSDAY, FALSE, 7, 14) == SUNDAY);     // 14 July
    assert(dayOfWeek(THURSDAY, FALSE, 7, 15) == MONDAY);     // 15 July
    assert(dayOfWeek(THURSDAY, FALSE, 7, 16) == TUESDAY);    // 16 July
    assert(dayOfWeek(THURSDAY, FALSE, 7, 17) == WEDNESDAY);  // 17 July
    assert(dayOfWeek(THURSDAY, FALSE, 7, 18) == THURSDAY);   // 18 July
    assert(dayOfWeek(THURSDAY, FALSE, 7, 19) == FRIDAY);     // 19 July
    assert(dayOfWeek(THURSDAY, FALSE, 7, 20) == SATURDAY);   // 20 July
    assert(dayOfWeek(THURSDAY, FALSE, 7, 21) == SUNDAY);     // 21 July
    assert(dayOfWeek(THURSDAY, FALSE, 7, 22) == MONDAY);     // 22 July
    assert(dayOfWeek(THURSDAY, FALSE, 7, 23) == TUESDAY);    // 23 July
    assert(dayOfWeek(THURSDAY, FALSE, 7, 24) == WEDNESDAY);  // 24 July
    assert(dayOfWeek(THURSDAY, FALSE, 7, 25) == THURSDAY);   // 25 July
    assert(dayOfWeek(THURSDAY, FALSE, 7, 26) == FRIDAY);     // 26 July
    assert(dayOfWeek(THURSDAY, FALSE, 7, 27) == SATURDAY);   // 27 July
    assert(dayOfWeek(THURSDAY, FALSE, 7, 28) == SUNDAY);     // 28 July
    assert(dayOfWeek(THURSDAY, FALSE, 7, 29) == MONDAY);     // 29 July
    assert(dayOfWeek(THURSDAY, FALSE, 7, 30) == TUESDAY);    // 30 July
    assert(dayOfWeek(THURSDAY, FALSE, 7, 31) == WEDNESDAY);  // 31 July
    assert(dayOfWeek(THURSDAY, FALSE, 8, 1) == THURSDAY);    // 1 August
    assert(dayOfWeek(THURSDAY, FALSE, 8, 2) == FRIDAY);      // 2 August
    assert(dayOfWeek(THURSDAY, FALSE, 8, 3) == SATURDAY);    // 3 August
    assert(dayOfWeek(THURSDAY, FALSE, 8, 4) == SUNDAY);      // 4 August
    assert(dayOfWeek(THURSDAY, FALSE, 8, 5) == MONDAY);      // 5 August
    assert(dayOfWeek(THURSDAY, FALSE, 8, 6) == TUESDAY);     // 6 August
    assert(dayOfWeek(THURSDAY, FALSE, 8, 7) == WEDNESDAY);   // 7 August
    assert(dayOfWeek(THURSDAY, FALSE, 8, 8) == THURSDAY);    // 8 August
    assert(dayOfWeek(THURSDAY, FALSE, 8, 9) == FRIDAY);      // 9 August
    assert(dayOfWeek(THURSDAY, FALSE, 8, 10) == SATURDAY);   // 10 August
    assert(dayOfWeek(THURSDAY, FALSE, 8, 11) == SUNDAY);     // 11 August
    assert(dayOfWeek(THURSDAY, FALSE, 8, 12) == MONDAY);     // 12 August
    assert(dayOfWeek(THURSDAY, FALSE, 8, 13) == TUESDAY);    // 13 August
    assert(dayOfWeek(THURSDAY, FALSE, 8, 14) == WEDNESDAY);  // 14 August
    assert(dayOfWeek(THURSDAY, FALSE, 8, 15) == THURSDAY);   // 15 August
    assert(dayOfWeek(THURSDAY, FALSE, 8, 16) == FRIDAY);     // 16 August
    assert(dayOfWeek(THURSDAY, FALSE, 8, 17) == SATURDAY);   // 17 August
    assert(dayOfWeek(THURSDAY, FALSE, 8, 18) == SUNDAY);     // 18 August
    assert(dayOfWeek(THURSDAY, FALSE, 8, 19) == MONDAY);     // 19 August
    assert(dayOfWeek(THURSDAY, FALSE, 8, 20) == TUESDAY);    // 20 August
    assert(dayOfWeek(THURSDAY, FALSE, 8, 21) == WEDNESDAY);  // 21 August
    assert(dayOfWeek(THURSDAY, FALSE, 8, 22) == THURSDAY);   // 22 August
    assert(dayOfWeek(THURSDAY, FALSE, 8, 23) == FRIDAY);     // 23 August
    assert(dayOfWeek(THURSDAY, FALSE, 8, 24) == SATURDAY);   // 24 August
    assert(dayOfWeek(THURSDAY, FALSE, 8, 25) == SUNDAY);     // 25 August
    assert(dayOfWeek(THURSDAY, FALSE, 8, 26) == MONDAY);     // 26 August
    assert(dayOfWeek(THURSDAY, FALSE, 8, 27) == TUESDAY);    // 27 August
    assert(dayOfWeek(THURSDAY, FALSE, 8, 28) == WEDNESDAY);  // 28 August
    assert(dayOfWeek(THURSDAY, FALSE, 8, 29) == THURSDAY);   // 29 August
    assert(dayOfWeek(THURSDAY, FALSE, 8, 30) == FRIDAY);     // 30 August
    assert(dayOfWeek(THURSDAY, FALSE, 8, 31) == SATURDAY);   // 31 August
    assert(dayOfWeek(THURSDAY, FALSE, 9, 1) == SUNDAY);      // 1 September
    assert(dayOfWeek(THURSDAY, FALSE, 9, 2) == MONDAY);      // 2 September
    assert(dayOfWeek(THURSDAY, FALSE, 9, 3) == TUESDAY);     // 3 September
    assert(dayOfWeek(THURSDAY, FALSE, 9, 4) == WEDNESDAY);   // 4 September
    assert(dayOfWeek(THURSDAY, FALSE, 9, 5) == THURSDAY);    // 5 September
    assert(dayOfWeek(THURSDAY, FALSE, 9, 6) == FRIDAY);      // 6 September
    assert(dayOfWeek(THURSDAY, FALSE, 9, 7) == SATURDAY);    // 7 September
    assert(dayOfWeek(THURSDAY, FALSE, 9, 8) == SUNDAY);      // 8 September
    assert(dayOfWeek(THURSDAY, FALSE, 9, 9) == MONDAY);      // 9 September
    assert(dayOfWeek(THURSDAY, FALSE, 9, 10) == TUESDAY);    // 10 September
    assert(dayOfWeek(THURSDAY, FALSE, 9, 11) == WEDNESDAY);  // 11 September
    assert(dayOfWeek(THURSDAY, FALSE, 9, 12) == THURSDAY);   // 12 September
    assert(dayOfWeek(THURSDAY, FALSE, 9, 13) == FRIDAY);     // 13 September
    assert(dayOfWeek(THURSDAY, FALSE, 9, 14) == SATURDAY);   // 14 September
    assert(dayOfWeek(THURSDAY, FALSE, 9, 15) == SUNDAY);     // 15 September
    assert(dayOfWeek(THURSDAY, FALSE, 9, 16) == MONDAY);     // 16 September
    assert(dayOfWeek(THURSDAY, FALSE, 9, 17) == TUESDAY);    // 17 September
    assert(dayOfWeek(THURSDAY, FALSE, 9, 18) == WEDNESDAY);  // 18 September
    assert(dayOfWeek(THURSDAY, FALSE, 9, 19) == THURSDAY);   // 19 September
    assert(dayOfWeek(THURSDAY, FALSE, 9, 20) == FRIDAY);     // 20 September
    assert(dayOfWeek(THURSDAY, FALSE, 9, 21) == SATURDAY);   // 21 September
    assert(dayOfWeek(THURSDAY, FALSE, 9, 22) == SUNDAY);     // 22 September
    assert(dayOfWeek(THURSDAY, FALSE, 9, 23) == MONDAY);     // 23 September
    assert(dayOfWeek(THURSDAY, FALSE, 9, 24) == TUESDAY);    // 24 September
    assert(dayOfWeek(THURSDAY, FALSE, 9, 25) == WEDNESDAY);  // 25 September
    assert(dayOfWeek(THURSDAY, FALSE, 9, 26) == THURSDAY);   // 26 September
    assert(dayOfWeek(THURSDAY, FALSE, 9, 27) == FRIDAY);     // 27 September
    assert(dayOfWeek(THURSDAY, FALSE, 9, 28) == SATURDAY);   // 28 September
    assert(dayOfWeek(THURSDAY, FALSE, 9, 29) == SUNDAY);     // 29 September
    assert(dayOfWeek(THURSDAY, FALSE, 9, 30) == MONDAY);     // 30 September
    assert(dayOfWeek(THURSDAY, FALSE, 10, 1) == TUESDAY);    // 1 October
    assert(dayOfWeek(THURSDAY, FALSE, 10, 2) == WEDNESDAY);  // 2 October
    assert(dayOfWeek(THURSDAY, FALSE, 10, 3) == THURSDAY);   // 3 October
    assert(dayOfWeek(THURSDAY, FALSE, 10, 4) == FRIDAY);     // 4 October
    assert(dayOfWeek(THURSDAY, FALSE, 10, 5) == SATURDAY);   // 5 October
    assert(dayOfWeek(THURSDAY, FALSE, 10, 6) == SUNDAY);     // 6 October
    assert(dayOfWeek(THURSDAY, FALSE, 10, 7) == MONDAY);     // 7 October
    assert(dayOfWeek(THURSDAY, FALSE, 10, 8) == TUESDAY);    // 8 October
    assert(dayOfWeek(THURSDAY, FALSE, 10, 9) == WEDNESDAY);  // 9 October
    assert(dayOfWeek(THURSDAY, FALSE, 10, 10) == THURSDAY);  // 10 October
    assert(dayOfWeek(THURSDAY, FALSE, 10, 11) == FRIDAY);    // 11 October
    assert(dayOfWeek(THURSDAY, FALSE, 10, 12) == SATURDAY);  // 12 October
    assert(dayOfWeek(THURSDAY, FALSE, 10, 13) == SUNDAY);    // 13 October
    assert(dayOfWeek(THURSDAY, FALSE, 10, 14) == MONDAY);    // 14 October
    assert(dayOfWeek(THURSDAY, FALSE, 10, 15) == TUESDAY);   // 15 October
    assert(dayOfWeek(THURSDAY, FALSE, 10, 16) == WEDNESDAY); // 16 October
    assert(dayOfWeek(THURSDAY, FALSE, 10, 17) == THURSDAY);  // 17 October
    assert(dayOfWeek(THURSDAY, FALSE, 10, 18) == FRIDAY);    // 18 October
    assert(dayOfWeek(THURSDAY, FALSE, 10, 19) == SATURDAY);  // 19 October
    assert(dayOfWeek(THURSDAY, FALSE, 10, 20) == SUNDAY);    // 20 October
    assert(dayOfWeek(THURSDAY, FALSE, 10, 21) == MONDAY);    // 21 October
    assert(dayOfWeek(THURSDAY, FALSE, 10, 22) == TUESDAY);   // 22 October
    assert(dayOfWeek(THURSDAY, FALSE, 10, 23) == WEDNESDAY); // 23 October
    assert(dayOfWeek(THURSDAY, FALSE, 10, 24) == THURSDAY);  // 24 October
    assert(dayOfWeek(THURSDAY, FALSE, 10, 25) == FRIDAY);    // 25 October
    assert(dayOfWeek(THURSDAY, FALSE, 10, 26) == SATURDAY);  // 26 October
    assert(dayOfWeek(THURSDAY, FALSE, 10, 27) == SUNDAY);    // 27 October
    assert(dayOfWeek(THURSDAY, FALSE, 10, 28) == MONDAY);    // 28 October
    assert(dayOfWeek(THURSDAY, FALSE, 10, 29) == TUESDAY);   // 29 October
    assert(dayOfWeek(THURSDAY, FALSE, 10, 30) == WEDNESDAY); // 30 October
    assert(dayOfWeek(THURSDAY, FALSE, 10, 31) == THURSDAY);  // 31 October
    assert(dayOfWeek(THURSDAY, FALSE, 11, 1) == FRIDAY);     // 1 November
    assert(dayOfWeek(THURSDAY, FALSE, 11, 2) == SATURDAY);   // 2 November
    assert(dayOfWeek(THURSDAY, FALSE, 11, 3) == SUNDAY);     // 3 November
    assert(dayOfWeek(THURSDAY, FALSE, 11, 4) == MONDAY);     // 4 November
    assert(dayOfWeek(THURSDAY, FALSE, 11, 5) == TUESDAY);    // 5 November
    assert(dayOfWeek(THURSDAY, FALSE, 11, 6) == WEDNESDAY);  // 6 November
    assert(dayOfWeek(THURSDAY, FALSE, 11, 7) == THURSDAY);   // 7 November
    assert(dayOfWeek(THURSDAY, FALSE, 11, 8) == FRIDAY);     // 8 November
    assert(dayOfWeek(THURSDAY, FALSE, 11, 9) == SATURDAY);   // 9 November
    assert(dayOfWeek(THURSDAY, FALSE, 11, 10) == SUNDAY);    // 10 November
    assert(dayOfWeek(THURSDAY, FALSE, 11, 11) == MONDAY);    // 11 November
    assert(dayOfWeek(THURSDAY, FALSE, 11, 12) == TUESDAY);   // 12 November
    assert(dayOfWeek(THURSDAY, FALSE, 11, 13) == WEDNESDAY); // 13 November
    assert(dayOfWeek(THURSDAY, FALSE, 11, 14) == THURSDAY);  // 14 November
    assert(dayOfWeek(THURSDAY, FALSE, 11, 15) == FRIDAY);    // 15 November
    assert(dayOfWeek(THURSDAY, FALSE, 11, 16) == SATURDAY);  // 16 November
    assert(dayOfWeek(THURSDAY, FALSE, 11, 17) == SUNDAY);    // 17 November
    assert(dayOfWeek(THURSDAY, FALSE, 11, 18) == MONDAY);    // 18 November
    assert(dayOfWeek(THURSDAY, FALSE, 11, 19) == TUESDAY);   // 19 November
    assert(dayOfWeek(THURSDAY, FALSE, 11, 20) == WEDNESDAY); // 20 November
    assert(dayOfWeek(THURSDAY, FALSE, 11, 21) == THURSDAY);  // 21 November
    assert(dayOfWeek(THURSDAY, FALSE, 11, 22) == FRIDAY);    // 22 November
    assert(dayOfWeek(THURSDAY, FALSE, 11, 23) == SATURDAY);  // 23 November
    assert(dayOfWeek(THURSDAY, FALSE, 11, 24) == SUNDAY);    // 24 November
    assert(dayOfWeek(THURSDAY, FALSE, 11, 25) == MONDAY);    // 25 November
    assert(dayOfWeek(THURSDAY, FALSE, 11, 26) == TUESDAY);   // 26 November
    assert(dayOfWeek(THURSDAY, FALSE, 11, 27) == WEDNESDAY); // 27 November
    assert(dayOfWeek(THURSDAY, FALSE, 11, 28) == THURSDAY);  // 28 November
    assert(dayOfWeek(THURSDAY, FALSE, 11, 29) == FRIDAY);    // 29 November
    assert(dayOfWeek(THURSDAY, FALSE, 11, 30) == SATURDAY);  // 30 November
    assert(dayOfWeek(THURSDAY, FALSE, 12, 1) == SUNDAY);     // 1 December
    assert(dayOfWeek(THURSDAY, FALSE, 12, 2) == MONDAY);     // 2 December
    assert(dayOfWeek(THURSDAY, FALSE, 12, 3) == TUESDAY);    // 3 December
    assert(dayOfWeek(THURSDAY, FALSE, 12, 4) == WEDNESDAY);  // 4 December
    assert(dayOfWeek(THURSDAY, FALSE, 12, 5) == THURSDAY);   // 5 December
    assert(dayOfWeek(THURSDAY, FALSE, 12, 6) == FRIDAY);     // 6 December
    assert(dayOfWeek(THURSDAY, FALSE, 12, 7) == SATURDAY);   // 7 December
    assert(dayOfWeek(THURSDAY, FALSE, 12, 8) == SUNDAY);     // 8 December
    assert(dayOfWeek(THURSDAY, FALSE, 12, 9) == MONDAY);     // 9 December
    assert(dayOfWeek(THURSDAY, FALSE, 12, 10) == TUESDAY);   // 10 December
    assert(dayOfWeek(THURSDAY, FALSE, 12, 11) == WEDNESDAY); // 11 December
    assert(dayOfWeek(THURSDAY, FALSE, 12, 12) == THURSDAY);  // 12 December
    assert(dayOfWeek(THURSDAY, FALSE, 12, 13) == FRIDAY);    // 13 December
    assert(dayOfWeek(THURSDAY, FALSE, 12, 14) == SATURDAY);  // 14 December
    assert(dayOfWeek(THURSDAY, FALSE, 12, 15) == SUNDAY);    // 15 December
    assert(dayOfWeek(THURSDAY, FALSE, 12, 16) == MONDAY);    // 16 December
    assert(dayOfWeek(THURSDAY, FALSE, 12, 17) == TUESDAY);   // 17 December
    assert(dayOfWeek(THURSDAY, FALSE, 12, 18) == WEDNESDAY); // 18 December
    assert(dayOfWeek(THURSDAY, FALSE, 12, 19) == THURSDAY);  // 19 December
    assert(dayOfWeek(THURSDAY, FALSE, 12, 20) == FRIDAY);    // 20 December
    assert(dayOfWeek(THURSDAY, FALSE, 12, 21) == SATURDAY);  // 21 December
    assert(dayOfWeek(THURSDAY, FALSE, 12, 22) == SUNDAY);    // 22 December
    assert(dayOfWeek(THURSDAY, FALSE, 12, 23) == MONDAY);    // 23 December
    assert(dayOfWeek(THURSDAY, FALSE, 12, 24) == TUESDAY);   // 24 December
    assert(dayOfWeek(THURSDAY, FALSE, 12, 25) == WEDNESDAY); // 25 December
    assert(dayOfWeek(THURSDAY, FALSE, 12, 26) == THURSDAY);  // 26 December
    assert(dayOfWeek(THURSDAY, FALSE, 12, 27) == FRIDAY);    // 27 December
    assert(dayOfWeek(THURSDAY, FALSE, 12, 28) == SATURDAY);  // 28 December
    assert(dayOfWeek(THURSDAY, FALSE, 12, 29) == SUNDAY);    // 29 December
    assert(dayOfWeek(THURSDAY, FALSE, 12, 30) == MONDAY);    // 30 December
    assert(dayOfWeek(THURSDAY, FALSE, 12, 31) == TUESDAY);   // 31 December
    // Doomsday = FRIDAY, leapyear = No
    assert(dayOfWeek(FRIDAY, FALSE, 1, 1) == WEDNESDAY);     // 1 January
    assert(dayOfWeek(FRIDAY, FALSE, 1, 2) == THURSDAY);      // 2 January
    assert(dayOfWeek(FRIDAY, FALSE, 1, 3) == FRIDAY);        // 3 January
    assert(dayOfWeek(FRIDAY, FALSE, 1, 4) == SATURDAY);      // 4 January
    assert(dayOfWeek(FRIDAY, FALSE, 1, 5) == SUNDAY);        // 5 January
    assert(dayOfWeek(FRIDAY, FALSE, 1, 6) == MONDAY);        // 6 January
    assert(dayOfWeek(FRIDAY, FALSE, 1, 7) == TUESDAY);       // 7 January
    assert(dayOfWeek(FRIDAY, FALSE, 1, 8) == WEDNESDAY);     // 8 January
    assert(dayOfWeek(FRIDAY, FALSE, 1, 9) == THURSDAY);      // 9 January
    assert(dayOfWeek(FRIDAY, FALSE, 1, 10) == FRIDAY);       // 10 January
    assert(dayOfWeek(FRIDAY, FALSE, 1, 11) == SATURDAY);     // 11 January
    assert(dayOfWeek(FRIDAY, FALSE, 1, 12) == SUNDAY);       // 12 January
    assert(dayOfWeek(FRIDAY, FALSE, 1, 13) == MONDAY);       // 13 January
    assert(dayOfWeek(FRIDAY, FALSE, 1, 14) == TUESDAY);      // 14 January
    assert(dayOfWeek(FRIDAY, FALSE, 1, 15) == WEDNESDAY);    // 15 January
    assert(dayOfWeek(FRIDAY, FALSE, 1, 16) == THURSDAY);     // 16 January
    assert(dayOfWeek(FRIDAY, FALSE, 1, 17) == FRIDAY);       // 17 January
    assert(dayOfWeek(FRIDAY, FALSE, 1, 18) == SATURDAY);     // 18 January
    assert(dayOfWeek(FRIDAY, FALSE, 1, 19) == SUNDAY);       // 19 January
    assert(dayOfWeek(FRIDAY, FALSE, 1, 20) == MONDAY);       // 20 January
    assert(dayOfWeek(FRIDAY, FALSE, 1, 21) == TUESDAY);      // 21 January
    assert(dayOfWeek(FRIDAY, FALSE, 1, 22) == WEDNESDAY);    // 22 January
    assert(dayOfWeek(FRIDAY, FALSE, 1, 23) == THURSDAY);     // 23 January
    assert(dayOfWeek(FRIDAY, FALSE, 1, 24) == FRIDAY);       // 24 January
    assert(dayOfWeek(FRIDAY, FALSE, 1, 25) == SATURDAY);     // 25 January
    assert(dayOfWeek(FRIDAY, FALSE, 1, 26) == SUNDAY);       // 26 January
    assert(dayOfWeek(FRIDAY, FALSE, 1, 27) == MONDAY);       // 27 January
    assert(dayOfWeek(FRIDAY, FALSE, 1, 28) == TUESDAY);      // 28 January
    assert(dayOfWeek(FRIDAY, FALSE, 1, 29) == WEDNESDAY);    // 29 January
    assert(dayOfWeek(FRIDAY, FALSE, 1, 30) == THURSDAY);     // 30 January
    assert(dayOfWeek(FRIDAY, FALSE, 1, 31) == FRIDAY);       // 31 January
    assert(dayOfWeek(FRIDAY, FALSE, 2, 1) == SATURDAY);      // 1 February
    assert(dayOfWeek(FRIDAY, FALSE, 2, 2) == SUNDAY);        // 2 February
    assert(dayOfWeek(FRIDAY, FALSE, 2, 3) == MONDAY);        // 3 February
    assert(dayOfWeek(FRIDAY, FALSE, 2, 4) == TUESDAY);       // 4 February
    assert(dayOfWeek(FRIDAY, FALSE, 2, 5) == WEDNESDAY);     // 5 February
    assert(dayOfWeek(FRIDAY, FALSE, 2, 6) == THURSDAY);      // 6 February
    assert(dayOfWeek(FRIDAY, FALSE, 2, 7) == FRIDAY);        // 7 February
    assert(dayOfWeek(FRIDAY, FALSE, 2, 8) == SATURDAY);      // 8 February
    assert(dayOfWeek(FRIDAY, FALSE, 2, 9) == SUNDAY);        // 9 February
    assert(dayOfWeek(FRIDAY, FALSE, 2, 10) == MONDAY);       // 10 February
    assert(dayOfWeek(FRIDAY, FALSE, 2, 11) == TUESDAY);      // 11 February
    assert(dayOfWeek(FRIDAY, FALSE, 2, 12) == WEDNESDAY);    // 12 February
    assert(dayOfWeek(FRIDAY, FALSE, 2, 13) == THURSDAY);     // 13 February
    assert(dayOfWeek(FRIDAY, FALSE, 2, 14) == FRIDAY);       // 14 February
    assert(dayOfWeek(FRIDAY, FALSE, 2, 15) == SATURDAY);     // 15 February
    assert(dayOfWeek(FRIDAY, FALSE, 2, 16) == SUNDAY);       // 16 February
    assert(dayOfWeek(FRIDAY, FALSE, 2, 17) == MONDAY);       // 17 February
    assert(dayOfWeek(FRIDAY, FALSE, 2, 18) == TUESDAY);      // 18 February
    assert(dayOfWeek(FRIDAY, FALSE, 2, 19) == WEDNESDAY);    // 19 February
    assert(dayOfWeek(FRIDAY, FALSE, 2, 20) == THURSDAY);     // 20 February
    assert(dayOfWeek(FRIDAY, FALSE, 2, 21) == FRIDAY);       // 21 February
    assert(dayOfWeek(FRIDAY, FALSE, 2, 22) == SATURDAY);     // 22 February
    assert(dayOfWeek(FRIDAY, FALSE, 2, 23) == SUNDAY);       // 23 February
    assert(dayOfWeek(FRIDAY, FALSE, 2, 24) == MONDAY);       // 24 February
    assert(dayOfWeek(FRIDAY, FALSE, 2, 25) == TUESDAY);      // 25 February
    assert(dayOfWeek(FRIDAY, FALSE, 2, 26) == WEDNESDAY);    // 26 February
    assert(dayOfWeek(FRIDAY, FALSE, 2, 27) == THURSDAY);     // 27 February
    assert(dayOfWeek(FRIDAY, FALSE, 2, 28) == FRIDAY);       // 28 February
    assert(dayOfWeek(FRIDAY, FALSE, 3, 1) == SATURDAY);      // 1 March
    assert(dayOfWeek(FRIDAY, FALSE, 3, 2) == SUNDAY);        // 2 March
    assert(dayOfWeek(FRIDAY, FALSE, 3, 3) == MONDAY);        // 3 March
    assert(dayOfWeek(FRIDAY, FALSE, 3, 4) == TUESDAY);       // 4 March
    assert(dayOfWeek(FRIDAY, FALSE, 3, 5) == WEDNESDAY);     // 5 March
    assert(dayOfWeek(FRIDAY, FALSE, 3, 6) == THURSDAY);      // 6 March
    assert(dayOfWeek(FRIDAY, FALSE, 3, 7) == FRIDAY);        // 7 March
    assert(dayOfWeek(FRIDAY, FALSE, 3, 8) == SATURDAY);      // 8 March
    assert(dayOfWeek(FRIDAY, FALSE, 3, 9) == SUNDAY);        // 9 March
    assert(dayOfWeek(FRIDAY, FALSE, 3, 10) == MONDAY);       // 10 March
    assert(dayOfWeek(FRIDAY, FALSE, 3, 11) == TUESDAY);      // 11 March
    assert(dayOfWeek(FRIDAY, FALSE, 3, 12) == WEDNESDAY);    // 12 March
    assert(dayOfWeek(FRIDAY, FALSE, 3, 13) == THURSDAY);     // 13 March
    assert(dayOfWeek(FRIDAY, FALSE, 3, 14) == FRIDAY);       // 14 March
    assert(dayOfWeek(FRIDAY, FALSE, 3, 15) == SATURDAY);     // 15 March
    assert(dayOfWeek(FRIDAY, FALSE, 3, 16) == SUNDAY);       // 16 March
    assert(dayOfWeek(FRIDAY, FALSE, 3, 17) == MONDAY);       // 17 March
    assert(dayOfWeek(FRIDAY, FALSE, 3, 18) == TUESDAY);      // 18 March
    assert(dayOfWeek(FRIDAY, FALSE, 3, 19) == WEDNESDAY);    // 19 March
    assert(dayOfWeek(FRIDAY, FALSE, 3, 20) == THURSDAY);     // 20 March
    assert(dayOfWeek(FRIDAY, FALSE, 3, 21) == FRIDAY);       // 21 March
    assert(dayOfWeek(FRIDAY, FALSE, 3, 22) == SATURDAY);     // 22 March
    assert(dayOfWeek(FRIDAY, FALSE, 3, 23) == SUNDAY);       // 23 March
    assert(dayOfWeek(FRIDAY, FALSE, 3, 24) == MONDAY);       // 24 March
    assert(dayOfWeek(FRIDAY, FALSE, 3, 25) == TUESDAY);      // 25 March
    assert(dayOfWeek(FRIDAY, FALSE, 3, 26) == WEDNESDAY);    // 26 March
    assert(dayOfWeek(FRIDAY, FALSE, 3, 27) == THURSDAY);     // 27 March
    assert(dayOfWeek(FRIDAY, FALSE, 3, 28) == FRIDAY);       // 28 March
    assert(dayOfWeek(FRIDAY, FALSE, 3, 29) == SATURDAY);     // 29 March
    assert(dayOfWeek(FRIDAY, FALSE, 3, 30) == SUNDAY);       // 30 March
    assert(dayOfWeek(FRIDAY, FALSE, 3, 31) == MONDAY);       // 31 March
    assert(dayOfWeek(FRIDAY, FALSE, 4, 1) == TUESDAY);       // 1 April
    assert(dayOfWeek(FRIDAY, FALSE, 4, 2) == WEDNESDAY);     // 2 April
    assert(dayOfWeek(FRIDAY, FALSE, 4, 3) == THURSDAY);      // 3 April
    assert(dayOfWeek(FRIDAY, FALSE, 4, 4) == FRIDAY);        // 4 April
    assert(dayOfWeek(FRIDAY, FALSE, 4, 5) == SATURDAY);      // 5 April
    assert(dayOfWeek(FRIDAY, FALSE, 4, 6) == SUNDAY);        // 6 April
    assert(dayOfWeek(FRIDAY, FALSE, 4, 7) == MONDAY);        // 7 April
    assert(dayOfWeek(FRIDAY, FALSE, 4, 8) == TUESDAY);       // 8 April
    assert(dayOfWeek(FRIDAY, FALSE, 4, 9) == WEDNESDAY);     // 9 April
    assert(dayOfWeek(FRIDAY, FALSE, 4, 10) == THURSDAY);     // 10 April
    assert(dayOfWeek(FRIDAY, FALSE, 4, 11) == FRIDAY);       // 11 April
    assert(dayOfWeek(FRIDAY, FALSE, 4, 12) == SATURDAY);     // 12 April
    assert(dayOfWeek(FRIDAY, FALSE, 4, 13) == SUNDAY);       // 13 April
    assert(dayOfWeek(FRIDAY, FALSE, 4, 14) == MONDAY);       // 14 April
    assert(dayOfWeek(FRIDAY, FALSE, 4, 15) == TUESDAY);      // 15 April
    assert(dayOfWeek(FRIDAY, FALSE, 4, 16) == WEDNESDAY);    // 16 April
    assert(dayOfWeek(FRIDAY, FALSE, 4, 17) == THURSDAY);     // 17 April
    assert(dayOfWeek(FRIDAY, FALSE, 4, 18) == FRIDAY);       // 18 April
    assert(dayOfWeek(FRIDAY, FALSE, 4, 19) == SATURDAY);     // 19 April
    assert(dayOfWeek(FRIDAY, FALSE, 4, 20) == SUNDAY);       // 20 April
    assert(dayOfWeek(FRIDAY, FALSE, 4, 21) == MONDAY);       // 21 April
    assert(dayOfWeek(FRIDAY, FALSE, 4, 22) == TUESDAY);      // 22 April
    assert(dayOfWeek(FRIDAY, FALSE, 4, 23) == WEDNESDAY);    // 23 April
    assert(dayOfWeek(FRIDAY, FALSE, 4, 24) == THURSDAY);     // 24 April
    assert(dayOfWeek(FRIDAY, FALSE, 4, 25) == FRIDAY);       // 25 April
    assert(dayOfWeek(FRIDAY, FALSE, 4, 26) == SATURDAY);     // 26 April
    assert(dayOfWeek(FRIDAY, FALSE, 4, 27) == SUNDAY);       // 27 April
    assert(dayOfWeek(FRIDAY, FALSE, 4, 28) == MONDAY);       // 28 April
    assert(dayOfWeek(FRIDAY, FALSE, 4, 29) == TUESDAY);      // 29 April
    assert(dayOfWeek(FRIDAY, FALSE, 4, 30) == WEDNESDAY);    // 30 April
    assert(dayOfWeek(FRIDAY, FALSE, 5, 1) == THURSDAY);      // 1 May
    assert(dayOfWeek(FRIDAY, FALSE, 5, 2) == FRIDAY);        // 2 May
    assert(dayOfWeek(FRIDAY, FALSE, 5, 3) == SATURDAY);      // 3 May
    assert(dayOfWeek(FRIDAY, FALSE, 5, 4) == SUNDAY);        // 4 May
    assert(dayOfWeek(FRIDAY, FALSE, 5, 5) == MONDAY);        // 5 May
    assert(dayOfWeek(FRIDAY, FALSE, 5, 6) == TUESDAY);       // 6 May
    assert(dayOfWeek(FRIDAY, FALSE, 5, 7) == WEDNESDAY);     // 7 May
    assert(dayOfWeek(FRIDAY, FALSE, 5, 8) == THURSDAY);      // 8 May
    assert(dayOfWeek(FRIDAY, FALSE, 5, 9) == FRIDAY);        // 9 May
    assert(dayOfWeek(FRIDAY, FALSE, 5, 10) == SATURDAY);     // 10 May
    assert(dayOfWeek(FRIDAY, FALSE, 5, 11) == SUNDAY);       // 11 May
    assert(dayOfWeek(FRIDAY, FALSE, 5, 12) == MONDAY);       // 12 May
    assert(dayOfWeek(FRIDAY, FALSE, 5, 13) == TUESDAY);      // 13 May
    assert(dayOfWeek(FRIDAY, FALSE, 5, 14) == WEDNESDAY);    // 14 May
    assert(dayOfWeek(FRIDAY, FALSE, 5, 15) == THURSDAY);     // 15 May
    assert(dayOfWeek(FRIDAY, FALSE, 5, 16) == FRIDAY);       // 16 May
    assert(dayOfWeek(FRIDAY, FALSE, 5, 17) == SATURDAY);     // 17 May
    assert(dayOfWeek(FRIDAY, FALSE, 5, 18) == SUNDAY);       // 18 May
    assert(dayOfWeek(FRIDAY, FALSE, 5, 19) == MONDAY);       // 19 May
    assert(dayOfWeek(FRIDAY, FALSE, 5, 20) == TUESDAY);      // 20 May
    assert(dayOfWeek(FRIDAY, FALSE, 5, 21) == WEDNESDAY);    // 21 May
    assert(dayOfWeek(FRIDAY, FALSE, 5, 22) == THURSDAY);     // 22 May
    assert(dayOfWeek(FRIDAY, FALSE, 5, 23) == FRIDAY);       // 23 May
    assert(dayOfWeek(FRIDAY, FALSE, 5, 24) == SATURDAY);     // 24 May
    assert(dayOfWeek(FRIDAY, FALSE, 5, 25) == SUNDAY);       // 25 May
    assert(dayOfWeek(FRIDAY, FALSE, 5, 26) == MONDAY);       // 26 May
    assert(dayOfWeek(FRIDAY, FALSE, 5, 27) == TUESDAY);      // 27 May
    assert(dayOfWeek(FRIDAY, FALSE, 5, 28) == WEDNESDAY);    // 28 May
    assert(dayOfWeek(FRIDAY, FALSE, 5, 29) == THURSDAY);     // 29 May
    assert(dayOfWeek(FRIDAY, FALSE, 5, 30) == FRIDAY);       // 30 May
    assert(dayOfWeek(FRIDAY, FALSE, 5, 31) == SATURDAY);     // 31 May
    assert(dayOfWeek(FRIDAY, FALSE, 6, 1) == SUNDAY);        // 1 June
    assert(dayOfWeek(FRIDAY, FALSE, 6, 2) == MONDAY);        // 2 June
    assert(dayOfWeek(FRIDAY, FALSE, 6, 3) == TUESDAY);       // 3 June
    assert(dayOfWeek(FRIDAY, FALSE, 6, 4) == WEDNESDAY);     // 4 June
    assert(dayOfWeek(FRIDAY, FALSE, 6, 5) == THURSDAY);      // 5 June
    assert(dayOfWeek(FRIDAY, FALSE, 6, 6) == FRIDAY);        // 6 June
    assert(dayOfWeek(FRIDAY, FALSE, 6, 7) == SATURDAY);      // 7 June
    assert(dayOfWeek(FRIDAY, FALSE, 6, 8) == SUNDAY);        // 8 June
    assert(dayOfWeek(FRIDAY, FALSE, 6, 9) == MONDAY);        // 9 June
    assert(dayOfWeek(FRIDAY, FALSE, 6, 10) == TUESDAY);      // 10 June
    assert(dayOfWeek(FRIDAY, FALSE, 6, 11) == WEDNESDAY);    // 11 June
    assert(dayOfWeek(FRIDAY, FALSE, 6, 12) == THURSDAY);     // 12 June
    assert(dayOfWeek(FRIDAY, FALSE, 6, 13) == FRIDAY);       // 13 June
    assert(dayOfWeek(FRIDAY, FALSE, 6, 14) == SATURDAY);     // 14 June
    assert(dayOfWeek(FRIDAY, FALSE, 6, 15) == SUNDAY);       // 15 June
    assert(dayOfWeek(FRIDAY, FALSE, 6, 16) == MONDAY);       // 16 June
    assert(dayOfWeek(FRIDAY, FALSE, 6, 17) == TUESDAY);      // 17 June
    assert(dayOfWeek(FRIDAY, FALSE, 6, 18) == WEDNESDAY);    // 18 June
    assert(dayOfWeek(FRIDAY, FALSE, 6, 19) == THURSDAY);     // 19 June
    assert(dayOfWeek(FRIDAY, FALSE, 6, 20) == FRIDAY);       // 20 June
    assert(dayOfWeek(FRIDAY, FALSE, 6, 21) == SATURDAY);     // 21 June
    assert(dayOfWeek(FRIDAY, FALSE, 6, 22) == SUNDAY);       // 22 June
    assert(dayOfWeek(FRIDAY, FALSE, 6, 23) == MONDAY);       // 23 June
    assert(dayOfWeek(FRIDAY, FALSE, 6, 24) == TUESDAY);      // 24 June
    assert(dayOfWeek(FRIDAY, FALSE, 6, 25) == WEDNESDAY);    // 25 June
    assert(dayOfWeek(FRIDAY, FALSE, 6, 26) == THURSDAY);     // 26 June
    assert(dayOfWeek(FRIDAY, FALSE, 6, 27) == FRIDAY);       // 27 June
    assert(dayOfWeek(FRIDAY, FALSE, 6, 28) == SATURDAY);     // 28 June
    assert(dayOfWeek(FRIDAY, FALSE, 6, 29) == SUNDAY);       // 29 June
    assert(dayOfWeek(FRIDAY, FALSE, 6, 30) == MONDAY);       // 30 June
    assert(dayOfWeek(FRIDAY, FALSE, 7, 1) == TUESDAY);       // 1 July
    assert(dayOfWeek(FRIDAY, FALSE, 7, 2) == WEDNESDAY);     // 2 July
    assert(dayOfWeek(FRIDAY, FALSE, 7, 3) == THURSDAY);      // 3 July
    assert(dayOfWeek(FRIDAY, FALSE, 7, 4) == FRIDAY);        // 4 July
    assert(dayOfWeek(FRIDAY, FALSE, 7, 5) == SATURDAY);      // 5 July
    assert(dayOfWeek(FRIDAY, FALSE, 7, 6) == SUNDAY);        // 6 July
    assert(dayOfWeek(FRIDAY, FALSE, 7, 7) == MONDAY);        // 7 July
    assert(dayOfWeek(FRIDAY, FALSE, 7, 8) == TUESDAY);       // 8 July
    assert(dayOfWeek(FRIDAY, FALSE, 7, 9) == WEDNESDAY);     // 9 July
    assert(dayOfWeek(FRIDAY, FALSE, 7, 10) == THURSDAY);     // 10 July
    assert(dayOfWeek(FRIDAY, FALSE, 7, 11) == FRIDAY);       // 11 July
    assert(dayOfWeek(FRIDAY, FALSE, 7, 12) == SATURDAY);     // 12 July
    assert(dayOfWeek(FRIDAY, FALSE, 7, 13) == SUNDAY);       // 13 July
    assert(dayOfWeek(FRIDAY, FALSE, 7, 14) == MONDAY);       // 14 July
    assert(dayOfWeek(FRIDAY, FALSE, 7, 15) == TUESDAY);      // 15 July
    assert(dayOfWeek(FRIDAY, FALSE, 7, 16) == WEDNESDAY);    // 16 July
    assert(dayOfWeek(FRIDAY, FALSE, 7, 17) == THURSDAY);     // 17 July
    assert(dayOfWeek(FRIDAY, FALSE, 7, 18) == FRIDAY);       // 18 July
    assert(dayOfWeek(FRIDAY, FALSE, 7, 19) == SATURDAY);     // 19 July
    assert(dayOfWeek(FRIDAY, FALSE, 7, 20) == SUNDAY);       // 20 July
    assert(dayOfWeek(FRIDAY, FALSE, 7, 21) == MONDAY);       // 21 July
    assert(dayOfWeek(FRIDAY, FALSE, 7, 22) == TUESDAY);      // 22 July
    assert(dayOfWeek(FRIDAY, FALSE, 7, 23) == WEDNESDAY);    // 23 July
    assert(dayOfWeek(FRIDAY, FALSE, 7, 24) == THURSDAY);     // 24 July
    assert(dayOfWeek(FRIDAY, FALSE, 7, 25) == FRIDAY);       // 25 July
    assert(dayOfWeek(FRIDAY, FALSE, 7, 26) == SATURDAY);     // 26 July
    assert(dayOfWeek(FRIDAY, FALSE, 7, 27) == SUNDAY);       // 27 July
    assert(dayOfWeek(FRIDAY, FALSE, 7, 28) == MONDAY);       // 28 July
    assert(dayOfWeek(FRIDAY, FALSE, 7, 29) == TUESDAY);      // 29 July
    assert(dayOfWeek(FRIDAY, FALSE, 7, 30) == WEDNESDAY);    // 30 July
    assert(dayOfWeek(FRIDAY, FALSE, 7, 31) == THURSDAY);     // 31 July
    assert(dayOfWeek(FRIDAY, FALSE, 8, 1) == FRIDAY);        // 1 August
    assert(dayOfWeek(FRIDAY, FALSE, 8, 2) == SATURDAY);      // 2 August
    assert(dayOfWeek(FRIDAY, FALSE, 8, 3) == SUNDAY);        // 3 August
    assert(dayOfWeek(FRIDAY, FALSE, 8, 4) == MONDAY);        // 4 August
    assert(dayOfWeek(FRIDAY, FALSE, 8, 5) == TUESDAY);       // 5 August
    assert(dayOfWeek(FRIDAY, FALSE, 8, 6) == WEDNESDAY);     // 6 August
    assert(dayOfWeek(FRIDAY, FALSE, 8, 7) == THURSDAY);      // 7 August
    assert(dayOfWeek(FRIDAY, FALSE, 8, 8) == FRIDAY);        // 8 August
    assert(dayOfWeek(FRIDAY, FALSE, 8, 9) == SATURDAY);      // 9 August
    assert(dayOfWeek(FRIDAY, FALSE, 8, 10) == SUNDAY);       // 10 August
    assert(dayOfWeek(FRIDAY, FALSE, 8, 11) == MONDAY);       // 11 August
    assert(dayOfWeek(FRIDAY, FALSE, 8, 12) == TUESDAY);      // 12 August
    assert(dayOfWeek(FRIDAY, FALSE, 8, 13) == WEDNESDAY);    // 13 August
    assert(dayOfWeek(FRIDAY, FALSE, 8, 14) == THURSDAY);     // 14 August
    assert(dayOfWeek(FRIDAY, FALSE, 8, 15) == FRIDAY);       // 15 August
    assert(dayOfWeek(FRIDAY, FALSE, 8, 16) == SATURDAY);     // 16 August
    assert(dayOfWeek(FRIDAY, FALSE, 8, 17) == SUNDAY);       // 17 August
    assert(dayOfWeek(FRIDAY, FALSE, 8, 18) == MONDAY);       // 18 August
    assert(dayOfWeek(FRIDAY, FALSE, 8, 19) == TUESDAY);      // 19 August
    assert(dayOfWeek(FRIDAY, FALSE, 8, 20) == WEDNESDAY);    // 20 August
    assert(dayOfWeek(FRIDAY, FALSE, 8, 21) == THURSDAY);     // 21 August
    assert(dayOfWeek(FRIDAY, FALSE, 8, 22) == FRIDAY);       // 22 August
    assert(dayOfWeek(FRIDAY, FALSE, 8, 23) == SATURDAY);     // 23 August
    assert(dayOfWeek(FRIDAY, FALSE, 8, 24) == SUNDAY);       // 24 August
    assert(dayOfWeek(FRIDAY, FALSE, 8, 25) == MONDAY);       // 25 August
    assert(dayOfWeek(FRIDAY, FALSE, 8, 26) == TUESDAY);      // 26 August
    assert(dayOfWeek(FRIDAY, FALSE, 8, 27) == WEDNESDAY);    // 27 August
    assert(dayOfWeek(FRIDAY, FALSE, 8, 28) == THURSDAY);     // 28 August
    assert(dayOfWeek(FRIDAY, FALSE, 8, 29) == FRIDAY);       // 29 August
    assert(dayOfWeek(FRIDAY, FALSE, 8, 30) == SATURDAY);     // 30 August
    assert(dayOfWeek(FRIDAY, FALSE, 8, 31) == SUNDAY);       // 31 August
    assert(dayOfWeek(FRIDAY, FALSE, 9, 1) == MONDAY);        // 1 September
    assert(dayOfWeek(FRIDAY, FALSE, 9, 2) == TUESDAY);       // 2 September
    assert(dayOfWeek(FRIDAY, FALSE, 9, 3) == WEDNESDAY);     // 3 September
    assert(dayOfWeek(FRIDAY, FALSE, 9, 4) == THURSDAY);      // 4 September
    assert(dayOfWeek(FRIDAY, FALSE, 9, 5) == FRIDAY);        // 5 September
    assert(dayOfWeek(FRIDAY, FALSE, 9, 6) == SATURDAY);      // 6 September
    assert(dayOfWeek(FRIDAY, FALSE, 9, 7) == SUNDAY);        // 7 September
    assert(dayOfWeek(FRIDAY, FALSE, 9, 8) == MONDAY);        // 8 September
    assert(dayOfWeek(FRIDAY, FALSE, 9, 9) == TUESDAY);       // 9 September
    assert(dayOfWeek(FRIDAY, FALSE, 9, 10) == WEDNESDAY);    // 10 September
    assert(dayOfWeek(FRIDAY, FALSE, 9, 11) == THURSDAY);     // 11 September
    assert(dayOfWeek(FRIDAY, FALSE, 9, 12) == FRIDAY);       // 12 September
    assert(dayOfWeek(FRIDAY, FALSE, 9, 13) == SATURDAY);     // 13 September
    assert(dayOfWeek(FRIDAY, FALSE, 9, 14) == SUNDAY);       // 14 September
    assert(dayOfWeek(FRIDAY, FALSE, 9, 15) == MONDAY);       // 15 September
    assert(dayOfWeek(FRIDAY, FALSE, 9, 16) == TUESDAY);      // 16 September
    assert(dayOfWeek(FRIDAY, FALSE, 9, 17) == WEDNESDAY);    // 17 September
    assert(dayOfWeek(FRIDAY, FALSE, 9, 18) == THURSDAY);     // 18 September
    assert(dayOfWeek(FRIDAY, FALSE, 9, 19) == FRIDAY);       // 19 September
    assert(dayOfWeek(FRIDAY, FALSE, 9, 20) == SATURDAY);     // 20 September
    assert(dayOfWeek(FRIDAY, FALSE, 9, 21) == SUNDAY);       // 21 September
    assert(dayOfWeek(FRIDAY, FALSE, 9, 22) == MONDAY);       // 22 September
    assert(dayOfWeek(FRIDAY, FALSE, 9, 23) == TUESDAY);      // 23 September
    assert(dayOfWeek(FRIDAY, FALSE, 9, 24) == WEDNESDAY);    // 24 September
    assert(dayOfWeek(FRIDAY, FALSE, 9, 25) == THURSDAY);     // 25 September
    assert(dayOfWeek(FRIDAY, FALSE, 9, 26) == FRIDAY);       // 26 September
    assert(dayOfWeek(FRIDAY, FALSE, 9, 27) == SATURDAY);     // 27 September
    assert(dayOfWeek(FRIDAY, FALSE, 9, 28) == SUNDAY);       // 28 September
    assert(dayOfWeek(FRIDAY, FALSE, 9, 29) == MONDAY);       // 29 September
    assert(dayOfWeek(FRIDAY, FALSE, 9, 30) == TUESDAY);      // 30 September
    assert(dayOfWeek(FRIDAY, FALSE, 10, 1) == WEDNESDAY);    // 1 October
    assert(dayOfWeek(FRIDAY, FALSE, 10, 2) == THURSDAY);     // 2 October
    assert(dayOfWeek(FRIDAY, FALSE, 10, 3) == FRIDAY);       // 3 October
    assert(dayOfWeek(FRIDAY, FALSE, 10, 4) == SATURDAY);     // 4 October
    assert(dayOfWeek(FRIDAY, FALSE, 10, 5) == SUNDAY);       // 5 October
    assert(dayOfWeek(FRIDAY, FALSE, 10, 6) == MONDAY);       // 6 October
    assert(dayOfWeek(FRIDAY, FALSE, 10, 7) == TUESDAY);      // 7 October
    assert(dayOfWeek(FRIDAY, FALSE, 10, 8) == WEDNESDAY);    // 8 October
    assert(dayOfWeek(FRIDAY, FALSE, 10, 9) == THURSDAY);     // 9 October
    assert(dayOfWeek(FRIDAY, FALSE, 10, 10) == FRIDAY);      // 10 October
    assert(dayOfWeek(FRIDAY, FALSE, 10, 11) == SATURDAY);    // 11 October
    assert(dayOfWeek(FRIDAY, FALSE, 10, 12) == SUNDAY);      // 12 October
    assert(dayOfWeek(FRIDAY, FALSE, 10, 13) == MONDAY);      // 13 October
    assert(dayOfWeek(FRIDAY, FALSE, 10, 14) == TUESDAY);     // 14 October
    assert(dayOfWeek(FRIDAY, FALSE, 10, 15) == WEDNESDAY);   // 15 October
    assert(dayOfWeek(FRIDAY, FALSE, 10, 16) == THURSDAY);    // 16 October
    assert(dayOfWeek(FRIDAY, FALSE, 10, 17) == FRIDAY);      // 17 October
    assert(dayOfWeek(FRIDAY, FALSE, 10, 18) == SATURDAY);    // 18 October
    assert(dayOfWeek(FRIDAY, FALSE, 10, 19) == SUNDAY);      // 19 October
    assert(dayOfWeek(FRIDAY, FALSE, 10, 20) == MONDAY);      // 20 October
    assert(dayOfWeek(FRIDAY, FALSE, 10, 21) == TUESDAY);     // 21 October
    assert(dayOfWeek(FRIDAY, FALSE, 10, 22) == WEDNESDAY);   // 22 October
    assert(dayOfWeek(FRIDAY, FALSE, 10, 23) == THURSDAY);    // 23 October
    assert(dayOfWeek(FRIDAY, FALSE, 10, 24) == FRIDAY);      // 24 October
    assert(dayOfWeek(FRIDAY, FALSE, 10, 25) == SATURDAY);    // 25 October
    assert(dayOfWeek(FRIDAY, FALSE, 10, 26) == SUNDAY);      // 26 October
    assert(dayOfWeek(FRIDAY, FALSE, 10, 27) == MONDAY);      // 27 October
    assert(dayOfWeek(FRIDAY, FALSE, 10, 28) == TUESDAY);     // 28 October
    assert(dayOfWeek(FRIDAY, FALSE, 10, 29) == WEDNESDAY);   // 29 October
    assert(dayOfWeek(FRIDAY, FALSE, 10, 30) == THURSDAY);    // 30 October
    assert(dayOfWeek(FRIDAY, FALSE, 10, 31) == FRIDAY);      // 31 October
    assert(dayOfWeek(FRIDAY, FALSE, 11, 1) == SATURDAY);     // 1 November
    assert(dayOfWeek(FRIDAY, FALSE, 11, 2) == SUNDAY);       // 2 November
    assert(dayOfWeek(FRIDAY, FALSE, 11, 3) == MONDAY);       // 3 November
    assert(dayOfWeek(FRIDAY, FALSE, 11, 4) == TUESDAY);      // 4 November
    assert(dayOfWeek(FRIDAY, FALSE, 11, 5) == WEDNESDAY);    // 5 November
    assert(dayOfWeek(FRIDAY, FALSE, 11, 6) == THURSDAY);     // 6 November
    assert(dayOfWeek(FRIDAY, FALSE, 11, 7) == FRIDAY);       // 7 November
    assert(dayOfWeek(FRIDAY, FALSE, 11, 8) == SATURDAY);     // 8 November
    assert(dayOfWeek(FRIDAY, FALSE, 11, 9) == SUNDAY);       // 9 November
    assert(dayOfWeek(FRIDAY, FALSE, 11, 10) == MONDAY);      // 10 November
    assert(dayOfWeek(FRIDAY, FALSE, 11, 11) == TUESDAY);     // 11 November
    assert(dayOfWeek(FRIDAY, FALSE, 11, 12) == WEDNESDAY);   // 12 November
    assert(dayOfWeek(FRIDAY, FALSE, 11, 13) == THURSDAY);    // 13 November
    assert(dayOfWeek(FRIDAY, FALSE, 11, 14) == FRIDAY);      // 14 November
    assert(dayOfWeek(FRIDAY, FALSE, 11, 15) == SATURDAY);    // 15 November
    assert(dayOfWeek(FRIDAY, FALSE, 11, 16) == SUNDAY);      // 16 November
    assert(dayOfWeek(FRIDAY, FALSE, 11, 17) == MONDAY);      // 17 November
    assert(dayOfWeek(FRIDAY, FALSE, 11, 18) == TUESDAY);     // 18 November
    assert(dayOfWeek(FRIDAY, FALSE, 11, 19) == WEDNESDAY);   // 19 November
    assert(dayOfWeek(FRIDAY, FALSE, 11, 20) == THURSDAY);    // 20 November
    assert(dayOfWeek(FRIDAY, FALSE, 11, 21) == FRIDAY);      // 21 November
    assert(dayOfWeek(FRIDAY, FALSE, 11, 22) == SATURDAY);    // 22 November
    assert(dayOfWeek(FRIDAY, FALSE, 11, 23) == SUNDAY);      // 23 November
    assert(dayOfWeek(FRIDAY, FALSE, 11, 24) == MONDAY);      // 24 November
    assert(dayOfWeek(FRIDAY, FALSE, 11, 25) == TUESDAY);     // 25 November
    assert(dayOfWeek(FRIDAY, FALSE, 11, 26) == WEDNESDAY);   // 26 November
    assert(dayOfWeek(FRIDAY, FALSE, 11, 27) == THURSDAY);    // 27 November
    assert(dayOfWeek(FRIDAY, FALSE, 11, 28) == FRIDAY);      // 28 November
    assert(dayOfWeek(FRIDAY, FALSE, 11, 29) == SATURDAY);    // 29 November
    assert(dayOfWeek(FRIDAY, FALSE, 11, 30) == SUNDAY);      // 30 November
    assert(dayOfWeek(FRIDAY, FALSE, 12, 1) == MONDAY);       // 1 December
    assert(dayOfWeek(FRIDAY, FALSE, 12, 2) == TUESDAY);      // 2 December
    assert(dayOfWeek(FRIDAY, FALSE, 12, 3) == WEDNESDAY);    // 3 December
    assert(dayOfWeek(FRIDAY, FALSE, 12, 4) == THURSDAY);     // 4 December
    assert(dayOfWeek(FRIDAY, FALSE, 12, 5) == FRIDAY);       // 5 December
    assert(dayOfWeek(FRIDAY, FALSE, 12, 6) == SATURDAY);     // 6 December
    assert(dayOfWeek(FRIDAY, FALSE, 12, 7) == SUNDAY);       // 7 December
    assert(dayOfWeek(FRIDAY, FALSE, 12, 8) == MONDAY);       // 8 December
    assert(dayOfWeek(FRIDAY, FALSE, 12, 9) == TUESDAY);      // 9 December
    assert(dayOfWeek(FRIDAY, FALSE, 12, 10) == WEDNESDAY);   // 10 December
    assert(dayOfWeek(FRIDAY, FALSE, 12, 11) == THURSDAY);    // 11 December
    assert(dayOfWeek(FRIDAY, FALSE, 12, 12) == FRIDAY);      // 12 December
    assert(dayOfWeek(FRIDAY, FALSE, 12, 13) == SATURDAY);    // 13 December
    assert(dayOfWeek(FRIDAY, FALSE, 12, 14) == SUNDAY);      // 14 December
    assert(dayOfWeek(FRIDAY, FALSE, 12, 15) == MONDAY);      // 15 December
    assert(dayOfWeek(FRIDAY, FALSE, 12, 16) == TUESDAY);     // 16 December
    assert(dayOfWeek(FRIDAY, FALSE, 12, 17) == WEDNESDAY);   // 17 December
    assert(dayOfWeek(FRIDAY, FALSE, 12, 18) == THURSDAY);    // 18 December
    assert(dayOfWeek(FRIDAY, FALSE, 12, 19) == FRIDAY);      // 19 December
    assert(dayOfWeek(FRIDAY, FALSE, 12, 20) == SATURDAY);    // 20 December
    assert(dayOfWeek(FRIDAY, FALSE, 12, 21) == SUNDAY);      // 21 December
    assert(dayOfWeek(FRIDAY, FALSE, 12, 22) == MONDAY);      // 22 December
    assert(dayOfWeek(FRIDAY, FALSE, 12, 23) == TUESDAY);     // 23 December
    assert(dayOfWeek(FRIDAY, FALSE, 12, 24) == WEDNESDAY);   // 24 December
    assert(dayOfWeek(FRIDAY, FALSE, 12, 25) == THURSDAY);    // 25 December
    assert(dayOfWeek(FRIDAY, FALSE, 12, 26) == FRIDAY);      // 26 December
    assert(dayOfWeek(FRIDAY, FALSE, 12, 27) == SATURDAY);    // 27 December
    assert(dayOfWeek(FRIDAY, FALSE, 12, 28) == SUNDAY);      // 28 December
    assert(dayOfWeek(FRIDAY, FALSE, 12, 29) == MONDAY);      // 29 December
    assert(dayOfWeek(FRIDAY, FALSE, 12, 30) == TUESDAY);     // 30 December
    assert(dayOfWeek(FRIDAY, FALSE, 12, 31) == WEDNESDAY);   // 31 December
    // Doomsday = SATURDAY, leapyear = No
    assert(dayOfWeek(SATURDAY, FALSE, 1, 1) == THURSDAY);    // 1 January
    assert(dayOfWeek(SATURDAY, FALSE, 1, 2) == FRIDAY);      // 2 January
    assert(dayOfWeek(SATURDAY, FALSE, 1, 3) == SATURDAY);    // 3 January
    assert(dayOfWeek(SATURDAY, FALSE, 1, 4) == SUNDAY);      // 4 January
    assert(dayOfWeek(SATURDAY, FALSE, 1, 5) == MONDAY);      // 5 January
    assert(dayOfWeek(SATURDAY, FALSE, 1, 6) == TUESDAY);     // 6 January
    assert(dayOfWeek(SATURDAY, FALSE, 1, 7) == WEDNESDAY);   // 7 January
    assert(dayOfWeek(SATURDAY, FALSE, 1, 8) == THURSDAY);    // 8 January
    assert(dayOfWeek(SATURDAY, FALSE, 1, 9) == FRIDAY);      // 9 January
    assert(dayOfWeek(SATURDAY, FALSE, 1, 10) == SATURDAY);   // 10 January
    assert(dayOfWeek(SATURDAY, FALSE, 1, 11) == SUNDAY);     // 11 January
    assert(dayOfWeek(SATURDAY, FALSE, 1, 12) == MONDAY);     // 12 January
    assert(dayOfWeek(SATURDAY, FALSE, 1, 13) == TUESDAY);    // 13 January
    assert(dayOfWeek(SATURDAY, FALSE, 1, 14) == WEDNESDAY);  // 14 January
    assert(dayOfWeek(SATURDAY, FALSE, 1, 15) == THURSDAY);   // 15 January
    assert(dayOfWeek(SATURDAY, FALSE, 1, 16) == FRIDAY);     // 16 January
    assert(dayOfWeek(SATURDAY, FALSE, 1, 17) == SATURDAY);   // 17 January
    assert(dayOfWeek(SATURDAY, FALSE, 1, 18) == SUNDAY);     // 18 January
    assert(dayOfWeek(SATURDAY, FALSE, 1, 19) == MONDAY);     // 19 January
    assert(dayOfWeek(SATURDAY, FALSE, 1, 20) == TUESDAY);    // 20 January
    assert(dayOfWeek(SATURDAY, FALSE, 1, 21) == WEDNESDAY);  // 21 January
    assert(dayOfWeek(SATURDAY, FALSE, 1, 22) == THURSDAY);   // 22 January
    assert(dayOfWeek(SATURDAY, FALSE, 1, 23) == FRIDAY);     // 23 January
    assert(dayOfWeek(SATURDAY, FALSE, 1, 24) == SATURDAY);   // 24 January
    assert(dayOfWeek(SATURDAY, FALSE, 1, 25) == SUNDAY);     // 25 January
    assert(dayOfWeek(SATURDAY, FALSE, 1, 26) == MONDAY);     // 26 January
    assert(dayOfWeek(SATURDAY, FALSE, 1, 27) == TUESDAY);    // 27 January
    assert(dayOfWeek(SATURDAY, FALSE, 1, 28) == WEDNESDAY);  // 28 January
    assert(dayOfWeek(SATURDAY, FALSE, 1, 29) == THURSDAY);   // 29 January
    assert(dayOfWeek(SATURDAY, FALSE, 1, 30) == FRIDAY);     // 30 January
    assert(dayOfWeek(SATURDAY, FALSE, 1, 31) == SATURDAY);   // 31 January
    assert(dayOfWeek(SATURDAY, FALSE, 2, 1) == SUNDAY);      // 1 February
    assert(dayOfWeek(SATURDAY, FALSE, 2, 2) == MONDAY);      // 2 February
    assert(dayOfWeek(SATURDAY, FALSE, 2, 3) == TUESDAY);     // 3 February
    assert(dayOfWeek(SATURDAY, FALSE, 2, 4) == WEDNESDAY);   // 4 February
    assert(dayOfWeek(SATURDAY, FALSE, 2, 5) == THURSDAY);    // 5 February
    assert(dayOfWeek(SATURDAY, FALSE, 2, 6) == FRIDAY);      // 6 February
    assert(dayOfWeek(SATURDAY, FALSE, 2, 7) == SATURDAY);    // 7 February
    assert(dayOfWeek(SATURDAY, FALSE, 2, 8) == SUNDAY);      // 8 February
    assert(dayOfWeek(SATURDAY, FALSE, 2, 9) == MONDAY);      // 9 February
    assert(dayOfWeek(SATURDAY, FALSE, 2, 10) == TUESDAY);    // 10 February
    assert(dayOfWeek(SATURDAY, FALSE, 2, 11) == WEDNESDAY);  // 11 February
    assert(dayOfWeek(SATURDAY, FALSE, 2, 12) == THURSDAY);   // 12 February
    assert(dayOfWeek(SATURDAY, FALSE, 2, 13) == FRIDAY);     // 13 February
    assert(dayOfWeek(SATURDAY, FALSE, 2, 14) == SATURDAY);   // 14 February
    assert(dayOfWeek(SATURDAY, FALSE, 2, 15) == SUNDAY);     // 15 February
    assert(dayOfWeek(SATURDAY, FALSE, 2, 16) == MONDAY);     // 16 February
    assert(dayOfWeek(SATURDAY, FALSE, 2, 17) == TUESDAY);    // 17 February
    assert(dayOfWeek(SATURDAY, FALSE, 2, 18) == WEDNESDAY);  // 18 February
    assert(dayOfWeek(SATURDAY, FALSE, 2, 19) == THURSDAY);   // 19 February
    assert(dayOfWeek(SATURDAY, FALSE, 2, 20) == FRIDAY);     // 20 February
    assert(dayOfWeek(SATURDAY, FALSE, 2, 21) == SATURDAY);   // 21 February
    assert(dayOfWeek(SATURDAY, FALSE, 2, 22) == SUNDAY);     // 22 February
    assert(dayOfWeek(SATURDAY, FALSE, 2, 23) == MONDAY);     // 23 February
    assert(dayOfWeek(SATURDAY, FALSE, 2, 24) == TUESDAY);    // 24 February
    assert(dayOfWeek(SATURDAY, FALSE, 2, 25) == WEDNESDAY);  // 25 February
    assert(dayOfWeek(SATURDAY, FALSE, 2, 26) == THURSDAY);   // 26 February
    assert(dayOfWeek(SATURDAY, FALSE, 2, 27) == FRIDAY);     // 27 February
    assert(dayOfWeek(SATURDAY, FALSE, 2, 28) == SATURDAY);   // 28 February
    assert(dayOfWeek(SATURDAY, FALSE, 3, 1) == SUNDAY);      // 1 March
    assert(dayOfWeek(SATURDAY, FALSE, 3, 2) == MONDAY);      // 2 March
    assert(dayOfWeek(SATURDAY, FALSE, 3, 3) == TUESDAY);     // 3 March
    assert(dayOfWeek(SATURDAY, FALSE, 3, 4) == WEDNESDAY);   // 4 March
    assert(dayOfWeek(SATURDAY, FALSE, 3, 5) == THURSDAY);    // 5 March
    assert(dayOfWeek(SATURDAY, FALSE, 3, 6) == FRIDAY);      // 6 March
    assert(dayOfWeek(SATURDAY, FALSE, 3, 7) == SATURDAY);    // 7 March
    assert(dayOfWeek(SATURDAY, FALSE, 3, 8) == SUNDAY);      // 8 March
    assert(dayOfWeek(SATURDAY, FALSE, 3, 9) == MONDAY);      // 9 March
    assert(dayOfWeek(SATURDAY, FALSE, 3, 10) == TUESDAY);    // 10 March
    assert(dayOfWeek(SATURDAY, FALSE, 3, 11) == WEDNESDAY);  // 11 March
    assert(dayOfWeek(SATURDAY, FALSE, 3, 12) == THURSDAY);   // 12 March
    assert(dayOfWeek(SATURDAY, FALSE, 3, 13) == FRIDAY);     // 13 March
    assert(dayOfWeek(SATURDAY, FALSE, 3, 14) == SATURDAY);   // 14 March
    assert(dayOfWeek(SATURDAY, FALSE, 3, 15) == SUNDAY);     // 15 March
    assert(dayOfWeek(SATURDAY, FALSE, 3, 16) == MONDAY);     // 16 March
    assert(dayOfWeek(SATURDAY, FALSE, 3, 17) == TUESDAY);    // 17 March
    assert(dayOfWeek(SATURDAY, FALSE, 3, 18) == WEDNESDAY);  // 18 March
    assert(dayOfWeek(SATURDAY, FALSE, 3, 19) == THURSDAY);   // 19 March
    assert(dayOfWeek(SATURDAY, FALSE, 3, 20) == FRIDAY);     // 20 March
    assert(dayOfWeek(SATURDAY, FALSE, 3, 21) == SATURDAY);   // 21 March
    assert(dayOfWeek(SATURDAY, FALSE, 3, 22) == SUNDAY);     // 22 March
    assert(dayOfWeek(SATURDAY, FALSE, 3, 23) == MONDAY);     // 23 March
    assert(dayOfWeek(SATURDAY, FALSE, 3, 24) == TUESDAY);    // 24 March
    assert(dayOfWeek(SATURDAY, FALSE, 3, 25) == WEDNESDAY);  // 25 March
    assert(dayOfWeek(SATURDAY, FALSE, 3, 26) == THURSDAY);   // 26 March
    assert(dayOfWeek(SATURDAY, FALSE, 3, 27) == FRIDAY);     // 27 March
    assert(dayOfWeek(SATURDAY, FALSE, 3, 28) == SATURDAY);   // 28 March
    assert(dayOfWeek(SATURDAY, FALSE, 3, 29) == SUNDAY);     // 29 March
    assert(dayOfWeek(SATURDAY, FALSE, 3, 30) == MONDAY);     // 30 March
    assert(dayOfWeek(SATURDAY, FALSE, 3, 31) == TUESDAY);    // 31 March
    assert(dayOfWeek(SATURDAY, FALSE, 4, 1) == WEDNESDAY);   // 1 April
    assert(dayOfWeek(SATURDAY, FALSE, 4, 2) == THURSDAY);    // 2 April
    assert(dayOfWeek(SATURDAY, FALSE, 4, 3) == FRIDAY);      // 3 April
    assert(dayOfWeek(SATURDAY, FALSE, 4, 4) == SATURDAY);    // 4 April
    assert(dayOfWeek(SATURDAY, FALSE, 4, 5) == SUNDAY);      // 5 April
    assert(dayOfWeek(SATURDAY, FALSE, 4, 6) == MONDAY);      // 6 April
    assert(dayOfWeek(SATURDAY, FALSE, 4, 7) == TUESDAY);     // 7 April
    assert(dayOfWeek(SATURDAY, FALSE, 4, 8) == WEDNESDAY);   // 8 April
    assert(dayOfWeek(SATURDAY, FALSE, 4, 9) == THURSDAY);    // 9 April
    assert(dayOfWeek(SATURDAY, FALSE, 4, 10) == FRIDAY);     // 10 April
    assert(dayOfWeek(SATURDAY, FALSE, 4, 11) == SATURDAY);   // 11 April
    assert(dayOfWeek(SATURDAY, FALSE, 4, 12) == SUNDAY);     // 12 April
    assert(dayOfWeek(SATURDAY, FALSE, 4, 13) == MONDAY);     // 13 April
    assert(dayOfWeek(SATURDAY, FALSE, 4, 14) == TUESDAY);    // 14 April
    assert(dayOfWeek(SATURDAY, FALSE, 4, 15) == WEDNESDAY);  // 15 April
    assert(dayOfWeek(SATURDAY, FALSE, 4, 16) == THURSDAY);   // 16 April
    assert(dayOfWeek(SATURDAY, FALSE, 4, 17) == FRIDAY);     // 17 April
    assert(dayOfWeek(SATURDAY, FALSE, 4, 18) == SATURDAY);   // 18 April
    assert(dayOfWeek(SATURDAY, FALSE, 4, 19) == SUNDAY);     // 19 April
    assert(dayOfWeek(SATURDAY, FALSE, 4, 20) == MONDAY);     // 20 April
    assert(dayOfWeek(SATURDAY, FALSE, 4, 21) == TUESDAY);    // 21 April
    assert(dayOfWeek(SATURDAY, FALSE, 4, 22) == WEDNESDAY);  // 22 April
    assert(dayOfWeek(SATURDAY, FALSE, 4, 23) == THURSDAY);   // 23 April
    assert(dayOfWeek(SATURDAY, FALSE, 4, 24) == FRIDAY);     // 24 April
    assert(dayOfWeek(SATURDAY, FALSE, 4, 25) == SATURDAY);   // 25 April
    assert(dayOfWeek(SATURDAY, FALSE, 4, 26) == SUNDAY);     // 26 April
    assert(dayOfWeek(SATURDAY, FALSE, 4, 27) == MONDAY);     // 27 April
    assert(dayOfWeek(SATURDAY, FALSE, 4, 28) == TUESDAY);    // 28 April
    assert(dayOfWeek(SATURDAY, FALSE, 4, 29) == WEDNESDAY);  // 29 April
    assert(dayOfWeek(SATURDAY, FALSE, 4, 30) == THURSDAY);   // 30 April
    assert(dayOfWeek(SATURDAY, FALSE, 5, 1) == FRIDAY);      // 1 May
    assert(dayOfWeek(SATURDAY, FALSE, 5, 2) == SATURDAY);    // 2 May
    assert(dayOfWeek(SATURDAY, FALSE, 5, 3) == SUNDAY);      // 3 May
    assert(dayOfWeek(SATURDAY, FALSE, 5, 4) == MONDAY);      // 4 May
    assert(dayOfWeek(SATURDAY, FALSE, 5, 5) == TUESDAY);     // 5 May
    assert(dayOfWeek(SATURDAY, FALSE, 5, 6) == WEDNESDAY);   // 6 May
    assert(dayOfWeek(SATURDAY, FALSE, 5, 7) == THURSDAY);    // 7 May
    assert(dayOfWeek(SATURDAY, FALSE, 5, 8) == FRIDAY);      // 8 May
    assert(dayOfWeek(SATURDAY, FALSE, 5, 9) == SATURDAY);    // 9 May
    assert(dayOfWeek(SATURDAY, FALSE, 5, 10) == SUNDAY);     // 10 May
    assert(dayOfWeek(SATURDAY, FALSE, 5, 11) == MONDAY);     // 11 May
    assert(dayOfWeek(SATURDAY, FALSE, 5, 12) == TUESDAY);    // 12 May
    assert(dayOfWeek(SATURDAY, FALSE, 5, 13) == WEDNESDAY);  // 13 May
    assert(dayOfWeek(SATURDAY, FALSE, 5, 14) == THURSDAY);   // 14 May
    assert(dayOfWeek(SATURDAY, FALSE, 5, 15) == FRIDAY);     // 15 May
    assert(dayOfWeek(SATURDAY, FALSE, 5, 16) == SATURDAY);   // 16 May
    assert(dayOfWeek(SATURDAY, FALSE, 5, 17) == SUNDAY);     // 17 May
    assert(dayOfWeek(SATURDAY, FALSE, 5, 18) == MONDAY);     // 18 May
    assert(dayOfWeek(SATURDAY, FALSE, 5, 19) == TUESDAY);    // 19 May
    assert(dayOfWeek(SATURDAY, FALSE, 5, 20) == WEDNESDAY);  // 20 May
    assert(dayOfWeek(SATURDAY, FALSE, 5, 21) == THURSDAY);   // 21 May
    assert(dayOfWeek(SATURDAY, FALSE, 5, 22) == FRIDAY);     // 22 May
    assert(dayOfWeek(SATURDAY, FALSE, 5, 23) == SATURDAY);   // 23 May
    assert(dayOfWeek(SATURDAY, FALSE, 5, 24) == SUNDAY);     // 24 May
    assert(dayOfWeek(SATURDAY, FALSE, 5, 25) == MONDAY);     // 25 May
    assert(dayOfWeek(SATURDAY, FALSE, 5, 26) == TUESDAY);    // 26 May
    assert(dayOfWeek(SATURDAY, FALSE, 5, 27) == WEDNESDAY);  // 27 May
    assert(dayOfWeek(SATURDAY, FALSE, 5, 28) == THURSDAY);   // 28 May
    assert(dayOfWeek(SATURDAY, FALSE, 5, 29) == FRIDAY);     // 29 May
    assert(dayOfWeek(SATURDAY, FALSE, 5, 30) == SATURDAY);   // 30 May
    assert(dayOfWeek(SATURDAY, FALSE, 5, 31) == SUNDAY);     // 31 May
    assert(dayOfWeek(SATURDAY, FALSE, 6, 1) == MONDAY);      // 1 June
    assert(dayOfWeek(SATURDAY, FALSE, 6, 2) == TUESDAY);     // 2 June
    assert(dayOfWeek(SATURDAY, FALSE, 6, 3) == WEDNESDAY);   // 3 June
    assert(dayOfWeek(SATURDAY, FALSE, 6, 4) == THURSDAY);    // 4 June
    assert(dayOfWeek(SATURDAY, FALSE, 6, 5) == FRIDAY);      // 5 June
    assert(dayOfWeek(SATURDAY, FALSE, 6, 6) == SATURDAY);    // 6 June
    assert(dayOfWeek(SATURDAY, FALSE, 6, 7) == SUNDAY);      // 7 June
    assert(dayOfWeek(SATURDAY, FALSE, 6, 8) == MONDAY);      // 8 June
    assert(dayOfWeek(SATURDAY, FALSE, 6, 9) == TUESDAY);     // 9 June
    assert(dayOfWeek(SATURDAY, FALSE, 6, 10) == WEDNESDAY);  // 10 June
    assert(dayOfWeek(SATURDAY, FALSE, 6, 11) == THURSDAY);   // 11 June
    assert(dayOfWeek(SATURDAY, FALSE, 6, 12) == FRIDAY);     // 12 June
    assert(dayOfWeek(SATURDAY, FALSE, 6, 13) == SATURDAY);   // 13 June
    assert(dayOfWeek(SATURDAY, FALSE, 6, 14) == SUNDAY);     // 14 June
    assert(dayOfWeek(SATURDAY, FALSE, 6, 15) == MONDAY);     // 15 June
    assert(dayOfWeek(SATURDAY, FALSE, 6, 16) == TUESDAY);    // 16 June
    assert(dayOfWeek(SATURDAY, FALSE, 6, 17) == WEDNESDAY);  // 17 June
    assert(dayOfWeek(SATURDAY, FALSE, 6, 18) == THURSDAY);   // 18 June
    assert(dayOfWeek(SATURDAY, FALSE, 6, 19) == FRIDAY);     // 19 June
    assert(dayOfWeek(SATURDAY, FALSE, 6, 20) == SATURDAY);   // 20 June
    assert(dayOfWeek(SATURDAY, FALSE, 6, 21) == SUNDAY);     // 21 June
    assert(dayOfWeek(SATURDAY, FALSE, 6, 22) == MONDAY);     // 22 June
    assert(dayOfWeek(SATURDAY, FALSE, 6, 23) == TUESDAY);    // 23 June
    assert(dayOfWeek(SATURDAY, FALSE, 6, 24) == WEDNESDAY);  // 24 June
    assert(dayOfWeek(SATURDAY, FALSE, 6, 25) == THURSDAY);   // 25 June
    assert(dayOfWeek(SATURDAY, FALSE, 6, 26) == FRIDAY);     // 26 June
    assert(dayOfWeek(SATURDAY, FALSE, 6, 27) == SATURDAY);   // 27 June
    assert(dayOfWeek(SATURDAY, FALSE, 6, 28) == SUNDAY);     // 28 June
    assert(dayOfWeek(SATURDAY, FALSE, 6, 29) == MONDAY);     // 29 June
    assert(dayOfWeek(SATURDAY, FALSE, 6, 30) == TUESDAY);    // 30 June
    assert(dayOfWeek(SATURDAY, FALSE, 7, 1) == WEDNESDAY);   // 1 July
    assert(dayOfWeek(SATURDAY, FALSE, 7, 2) == THURSDAY);    // 2 July
    assert(dayOfWeek(SATURDAY, FALSE, 7, 3) == FRIDAY);      // 3 July
    assert(dayOfWeek(SATURDAY, FALSE, 7, 4) == SATURDAY);    // 4 July
    assert(dayOfWeek(SATURDAY, FALSE, 7, 5) == SUNDAY);      // 5 July
    assert(dayOfWeek(SATURDAY, FALSE, 7, 6) == MONDAY);      // 6 July
    assert(dayOfWeek(SATURDAY, FALSE, 7, 7) == TUESDAY);     // 7 July
    assert(dayOfWeek(SATURDAY, FALSE, 7, 8) == WEDNESDAY);   // 8 July
    assert(dayOfWeek(SATURDAY, FALSE, 7, 9) == THURSDAY);    // 9 July
    assert(dayOfWeek(SATURDAY, FALSE, 7, 10) == FRIDAY);     // 10 July
    assert(dayOfWeek(SATURDAY, FALSE, 7, 11) == SATURDAY);   // 11 July
    assert(dayOfWeek(SATURDAY, FALSE, 7, 12) == SUNDAY);     // 12 July
    assert(dayOfWeek(SATURDAY, FALSE, 7, 13) == MONDAY);     // 13 July
    assert(dayOfWeek(SATURDAY, FALSE, 7, 14) == TUESDAY);    // 14 July
    assert(dayOfWeek(SATURDAY, FALSE, 7, 15) == WEDNESDAY);  // 15 July
    assert(dayOfWeek(SATURDAY, FALSE, 7, 16) == THURSDAY);   // 16 July
    assert(dayOfWeek(SATURDAY, FALSE, 7, 17) == FRIDAY);     // 17 July
    assert(dayOfWeek(SATURDAY, FALSE, 7, 18) == SATURDAY);   // 18 July
    assert(dayOfWeek(SATURDAY, FALSE, 7, 19) == SUNDAY);     // 19 July
    assert(dayOfWeek(SATURDAY, FALSE, 7, 20) == MONDAY);     // 20 July
    assert(dayOfWeek(SATURDAY, FALSE, 7, 21) == TUESDAY);    // 21 July
    assert(dayOfWeek(SATURDAY, FALSE, 7, 22) == WEDNESDAY);  // 22 July
    assert(dayOfWeek(SATURDAY, FALSE, 7, 23) == THURSDAY);   // 23 July
    assert(dayOfWeek(SATURDAY, FALSE, 7, 24) == FRIDAY);     // 24 July
    assert(dayOfWeek(SATURDAY, FALSE, 7, 25) == SATURDAY);   // 25 July
    assert(dayOfWeek(SATURDAY, FALSE, 7, 26) == SUNDAY);     // 26 July
    assert(dayOfWeek(SATURDAY, FALSE, 7, 27) == MONDAY);     // 27 July
    assert(dayOfWeek(SATURDAY, FALSE, 7, 28) == TUESDAY);    // 28 July
    assert(dayOfWeek(SATURDAY, FALSE, 7, 29) == WEDNESDAY);  // 29 July
    assert(dayOfWeek(SATURDAY, FALSE, 7, 30) == THURSDAY);   // 30 July
    assert(dayOfWeek(SATURDAY, FALSE, 7, 31) == FRIDAY);     // 31 July
    assert(dayOfWeek(SATURDAY, FALSE, 8, 1) == SATURDAY);    // 1 August
    assert(dayOfWeek(SATURDAY, FALSE, 8, 2) == SUNDAY);      // 2 August
    assert(dayOfWeek(SATURDAY, FALSE, 8, 3) == MONDAY);      // 3 August
    assert(dayOfWeek(SATURDAY, FALSE, 8, 4) == TUESDAY);     // 4 August
    assert(dayOfWeek(SATURDAY, FALSE, 8, 5) == WEDNESDAY);   // 5 August
    assert(dayOfWeek(SATURDAY, FALSE, 8, 6) == THURSDAY);    // 6 August
    assert(dayOfWeek(SATURDAY, FALSE, 8, 7) == FRIDAY);      // 7 August
    assert(dayOfWeek(SATURDAY, FALSE, 8, 8) == SATURDAY);    // 8 August
    assert(dayOfWeek(SATURDAY, FALSE, 8, 9) == SUNDAY);      // 9 August
    assert(dayOfWeek(SATURDAY, FALSE, 8, 10) == MONDAY);     // 10 August
    assert(dayOfWeek(SATURDAY, FALSE, 8, 11) == TUESDAY);    // 11 August
    assert(dayOfWeek(SATURDAY, FALSE, 8, 12) == WEDNESDAY);  // 12 August
    assert(dayOfWeek(SATURDAY, FALSE, 8, 13) == THURSDAY);   // 13 August
    assert(dayOfWeek(SATURDAY, FALSE, 8, 14) == FRIDAY);     // 14 August
    assert(dayOfWeek(SATURDAY, FALSE, 8, 15) == SATURDAY);   // 15 August
    assert(dayOfWeek(SATURDAY, FALSE, 8, 16) == SUNDAY);     // 16 August
    assert(dayOfWeek(SATURDAY, FALSE, 8, 17) == MONDAY);     // 17 August
    assert(dayOfWeek(SATURDAY, FALSE, 8, 18) == TUESDAY);    // 18 August
    assert(dayOfWeek(SATURDAY, FALSE, 8, 19) == WEDNESDAY);  // 19 August
    assert(dayOfWeek(SATURDAY, FALSE, 8, 20) == THURSDAY);   // 20 August
    assert(dayOfWeek(SATURDAY, FALSE, 8, 21) == FRIDAY);     // 21 August
    assert(dayOfWeek(SATURDAY, FALSE, 8, 22) == SATURDAY);   // 22 August
    assert(dayOfWeek(SATURDAY, FALSE, 8, 23) == SUNDAY);     // 23 August
    assert(dayOfWeek(SATURDAY, FALSE, 8, 24) == MONDAY);     // 24 August
    assert(dayOfWeek(SATURDAY, FALSE, 8, 25) == TUESDAY);    // 25 August
    assert(dayOfWeek(SATURDAY, FALSE, 8, 26) == WEDNESDAY);  // 26 August
    assert(dayOfWeek(SATURDAY, FALSE, 8, 27) == THURSDAY);   // 27 August
    assert(dayOfWeek(SATURDAY, FALSE, 8, 28) == FRIDAY);     // 28 August
    assert(dayOfWeek(SATURDAY, FALSE, 8, 29) == SATURDAY);   // 29 August
    assert(dayOfWeek(SATURDAY, FALSE, 8, 30) == SUNDAY);     // 30 August
    assert(dayOfWeek(SATURDAY, FALSE, 8, 31) == MONDAY);     // 31 August
    assert(dayOfWeek(SATURDAY, FALSE, 9, 1) == TUESDAY);     // 1 September
    assert(dayOfWeek(SATURDAY, FALSE, 9, 2) == WEDNESDAY);   // 2 September
    assert(dayOfWeek(SATURDAY, FALSE, 9, 3) == THURSDAY);    // 3 September
    assert(dayOfWeek(SATURDAY, FALSE, 9, 4) == FRIDAY);      // 4 September
    assert(dayOfWeek(SATURDAY, FALSE, 9, 5) == SATURDAY);    // 5 September
    assert(dayOfWeek(SATURDAY, FALSE, 9, 6) == SUNDAY);      // 6 September
    assert(dayOfWeek(SATURDAY, FALSE, 9, 7) == MONDAY);      // 7 September
    assert(dayOfWeek(SATURDAY, FALSE, 9, 8) == TUESDAY);     // 8 September
    assert(dayOfWeek(SATURDAY, FALSE, 9, 9) == WEDNESDAY);   // 9 September
    assert(dayOfWeek(SATURDAY, FALSE, 9, 10) == THURSDAY);   // 10 September
    assert(dayOfWeek(SATURDAY, FALSE, 9, 11) == FRIDAY);     // 11 September
    assert(dayOfWeek(SATURDAY, FALSE, 9, 12) == SATURDAY);   // 12 September
    assert(dayOfWeek(SATURDAY, FALSE, 9, 13) == SUNDAY);     // 13 September
    assert(dayOfWeek(SATURDAY, FALSE, 9, 14) == MONDAY);     // 14 September
    assert(dayOfWeek(SATURDAY, FALSE, 9, 15) == TUESDAY);    // 15 September
    assert(dayOfWeek(SATURDAY, FALSE, 9, 16) == WEDNESDAY);  // 16 September
    assert(dayOfWeek(SATURDAY, FALSE, 9, 17) == THURSDAY);   // 17 September
    assert(dayOfWeek(SATURDAY, FALSE, 9, 18) == FRIDAY);     // 18 September
    assert(dayOfWeek(SATURDAY, FALSE, 9, 19) == SATURDAY);   // 19 September
    assert(dayOfWeek(SATURDAY, FALSE, 9, 20) == SUNDAY);     // 20 September
    assert(dayOfWeek(SATURDAY, FALSE, 9, 21) == MONDAY);     // 21 September
    assert(dayOfWeek(SATURDAY, FALSE, 9, 22) == TUESDAY);    // 22 September
    assert(dayOfWeek(SATURDAY, FALSE, 9, 23) == WEDNESDAY);  // 23 September
    assert(dayOfWeek(SATURDAY, FALSE, 9, 24) == THURSDAY);   // 24 September
    assert(dayOfWeek(SATURDAY, FALSE, 9, 25) == FRIDAY);     // 25 September
    assert(dayOfWeek(SATURDAY, FALSE, 9, 26) == SATURDAY);   // 26 September
    assert(dayOfWeek(SATURDAY, FALSE, 9, 27) == SUNDAY);     // 27 September
    assert(dayOfWeek(SATURDAY, FALSE, 9, 28) == MONDAY);     // 28 September
    assert(dayOfWeek(SATURDAY, FALSE, 9, 29) == TUESDAY);    // 29 September
    assert(dayOfWeek(SATURDAY, FALSE, 9, 30) == WEDNESDAY);  // 30 September
    assert(dayOfWeek(SATURDAY, FALSE, 10, 1) == THURSDAY);   // 1 October
    assert(dayOfWeek(SATURDAY, FALSE, 10, 2) == FRIDAY);     // 2 October
    assert(dayOfWeek(SATURDAY, FALSE, 10, 3) == SATURDAY);   // 3 October
    assert(dayOfWeek(SATURDAY, FALSE, 10, 4) == SUNDAY);     // 4 October
    assert(dayOfWeek(SATURDAY, FALSE, 10, 5) == MONDAY);     // 5 October
    assert(dayOfWeek(SATURDAY, FALSE, 10, 6) == TUESDAY);    // 6 October
    assert(dayOfWeek(SATURDAY, FALSE, 10, 7) == WEDNESDAY);  // 7 October
    assert(dayOfWeek(SATURDAY, FALSE, 10, 8) == THURSDAY);   // 8 October
    assert(dayOfWeek(SATURDAY, FALSE, 10, 9) == FRIDAY);     // 9 October
    assert(dayOfWeek(SATURDAY, FALSE, 10, 10) == SATURDAY);  // 10 October
    assert(dayOfWeek(SATURDAY, FALSE, 10, 11) == SUNDAY);    // 11 October
    assert(dayOfWeek(SATURDAY, FALSE, 10, 12) == MONDAY);    // 12 October
    assert(dayOfWeek(SATURDAY, FALSE, 10, 13) == TUESDAY);   // 13 October
    assert(dayOfWeek(SATURDAY, FALSE, 10, 14) == WEDNESDAY); // 14 October
    assert(dayOfWeek(SATURDAY, FALSE, 10, 15) == THURSDAY);  // 15 October
    assert(dayOfWeek(SATURDAY, FALSE, 10, 16) == FRIDAY);    // 16 October
    assert(dayOfWeek(SATURDAY, FALSE, 10, 17) == SATURDAY);  // 17 October
    assert(dayOfWeek(SATURDAY, FALSE, 10, 18) == SUNDAY);    // 18 October
    assert(dayOfWeek(SATURDAY, FALSE, 10, 19) == MONDAY);    // 19 October
    assert(dayOfWeek(SATURDAY, FALSE, 10, 20) == TUESDAY);   // 20 October
    assert(dayOfWeek(SATURDAY, FALSE, 10, 21) == WEDNESDAY); // 21 October
    assert(dayOfWeek(SATURDAY, FALSE, 10, 22) == THURSDAY);  // 22 October
    assert(dayOfWeek(SATURDAY, FALSE, 10, 23) == FRIDAY);    // 23 October
    assert(dayOfWeek(SATURDAY, FALSE, 10, 24) == SATURDAY);  // 24 October
    assert(dayOfWeek(SATURDAY, FALSE, 10, 25) == SUNDAY);    // 25 October
    assert(dayOfWeek(SATURDAY, FALSE, 10, 26) == MONDAY);    // 26 October
    assert(dayOfWeek(SATURDAY, FALSE, 10, 27) == TUESDAY);   // 27 October
    assert(dayOfWeek(SATURDAY, FALSE, 10, 28) == WEDNESDAY); // 28 October
    assert(dayOfWeek(SATURDAY, FALSE, 10, 29) == THURSDAY);  // 29 October
    assert(dayOfWeek(SATURDAY, FALSE, 10, 30) == FRIDAY);    // 30 October
    assert(dayOfWeek(SATURDAY, FALSE, 10, 31) == SATURDAY);  // 31 October
    assert(dayOfWeek(SATURDAY, FALSE, 11, 1) == SUNDAY);     // 1 November
    assert(dayOfWeek(SATURDAY, FALSE, 11, 2) == MONDAY);     // 2 November
    assert(dayOfWeek(SATURDAY, FALSE, 11, 3) == TUESDAY);    // 3 November
    assert(dayOfWeek(SATURDAY, FALSE, 11, 4) == WEDNESDAY);  // 4 November
    assert(dayOfWeek(SATURDAY, FALSE, 11, 5) == THURSDAY);   // 5 November
    assert(dayOfWeek(SATURDAY, FALSE, 11, 6) == FRIDAY);     // 6 November
    assert(dayOfWeek(SATURDAY, FALSE, 11, 7) == SATURDAY);   // 7 November
    assert(dayOfWeek(SATURDAY, FALSE, 11, 8) == SUNDAY);     // 8 November
    assert(dayOfWeek(SATURDAY, FALSE, 11, 9) == MONDAY);     // 9 November
    assert(dayOfWeek(SATURDAY, FALSE, 11, 10) == TUESDAY);   // 10 November
    assert(dayOfWeek(SATURDAY, FALSE, 11, 11) == WEDNESDAY); // 11 November
    assert(dayOfWeek(SATURDAY, FALSE, 11, 12) == THURSDAY);  // 12 November
    assert(dayOfWeek(SATURDAY, FALSE, 11, 13) == FRIDAY);    // 13 November
    assert(dayOfWeek(SATURDAY, FALSE, 11, 14) == SATURDAY);  // 14 November
    assert(dayOfWeek(SATURDAY, FALSE, 11, 15) == SUNDAY);    // 15 November
    assert(dayOfWeek(SATURDAY, FALSE, 11, 16) == MONDAY);    // 16 November
    assert(dayOfWeek(SATURDAY, FALSE, 11, 17) == TUESDAY);   // 17 November
    assert(dayOfWeek(SATURDAY, FALSE, 11, 18) == WEDNESDAY); // 18 November
    assert(dayOfWeek(SATURDAY, FALSE, 11, 19) == THURSDAY);  // 19 November
    assert(dayOfWeek(SATURDAY, FALSE, 11, 20) == FRIDAY);    // 20 November
    assert(dayOfWeek(SATURDAY, FALSE, 11, 21) == SATURDAY);  // 21 November
    assert(dayOfWeek(SATURDAY, FALSE, 11, 22) == SUNDAY);    // 22 November
    assert(dayOfWeek(SATURDAY, FALSE, 11, 23) == MONDAY);    // 23 November
    assert(dayOfWeek(SATURDAY, FALSE, 11, 24) == TUESDAY);   // 24 November
    assert(dayOfWeek(SATURDAY, FALSE, 11, 25) == WEDNESDAY); // 25 November
    assert(dayOfWeek(SATURDAY, FALSE, 11, 26) == THURSDAY);  // 26 November
    assert(dayOfWeek(SATURDAY, FALSE, 11, 27) == FRIDAY);    // 27 November
    assert(dayOfWeek(SATURDAY, FALSE, 11, 28) == SATURDAY);  // 28 November
    assert(dayOfWeek(SATURDAY, FALSE, 11, 29) == SUNDAY);    // 29 November
    assert(dayOfWeek(SATURDAY, FALSE, 11, 30) == MONDAY);    // 30 November
    assert(dayOfWeek(SATURDAY, FALSE, 12, 1) == TUESDAY);    // 1 December
    assert(dayOfWeek(SATURDAY, FALSE, 12, 2) == WEDNESDAY);  // 2 December
    assert(dayOfWeek(SATURDAY, FALSE, 12, 3) == THURSDAY);   // 3 December
    assert(dayOfWeek(SATURDAY, FALSE, 12, 4) == FRIDAY);     // 4 December
    assert(dayOfWeek(SATURDAY, FALSE, 12, 5) == SATURDAY);   // 5 December
    assert(dayOfWeek(SATURDAY, FALSE, 12, 6) == SUNDAY);     // 6 December
    assert(dayOfWeek(SATURDAY, FALSE, 12, 7) == MONDAY);     // 7 December
    assert(dayOfWeek(SATURDAY, FALSE, 12, 8) == TUESDAY);    // 8 December
    assert(dayOfWeek(SATURDAY, FALSE, 12, 9) == WEDNESDAY);  // 9 December
    assert(dayOfWeek(SATURDAY, FALSE, 12, 10) == THURSDAY);  // 10 December
    assert(dayOfWeek(SATURDAY, FALSE, 12, 11) == FRIDAY);    // 11 December
    assert(dayOfWeek(SATURDAY, FALSE, 12, 12) == SATURDAY);  // 12 December
    assert(dayOfWeek(SATURDAY, FALSE, 12, 13) == SUNDAY);    // 13 December
    assert(dayOfWeek(SATURDAY, FALSE, 12, 14) == MONDAY);    // 14 December
    assert(dayOfWeek(SATURDAY, FALSE, 12, 15) == TUESDAY);   // 15 December
    assert(dayOfWeek(SATURDAY, FALSE, 12, 16) == WEDNESDAY); // 16 December
    assert(dayOfWeek(SATURDAY, FALSE, 12, 17) == THURSDAY);  // 17 December
    assert(dayOfWeek(SATURDAY, FALSE, 12, 18) == FRIDAY);    // 18 December
    assert(dayOfWeek(SATURDAY, FALSE, 12, 19) == SATURDAY);  // 19 December
    assert(dayOfWeek(SATURDAY, FALSE, 12, 20) == SUNDAY);    // 20 December
    assert(dayOfWeek(SATURDAY, FALSE, 12, 21) == MONDAY);    // 21 December
    assert(dayOfWeek(SATURDAY, FALSE, 12, 22) == TUESDAY);   // 22 December
    assert(dayOfWeek(SATURDAY, FALSE, 12, 23) == WEDNESDAY); // 23 December
    assert(dayOfWeek(SATURDAY, FALSE, 12, 24) == THURSDAY);  // 24 December
    assert(dayOfWeek(SATURDAY, FALSE, 12, 25) == FRIDAY);    // 25 December
    assert(dayOfWeek(SATURDAY, FALSE, 12, 26) == SATURDAY);  // 26 December
    assert(dayOfWeek(SATURDAY, FALSE, 12, 27) == SUNDAY);    // 27 December
    assert(dayOfWeek(SATURDAY, FALSE, 12, 28) == MONDAY);    // 28 December
    assert(dayOfWeek(SATURDAY, FALSE, 12, 29) == TUESDAY);   // 29 December
    assert(dayOfWeek(SATURDAY, FALSE, 12, 30) == WEDNESDAY); // 30 December
    assert(dayOfWeek(SATURDAY, FALSE, 12, 31) == THURSDAY);  // 31 December
    // Doomsday = SUNDAY, leapyear = No
    assert(dayOfWeek(SUNDAY, FALSE, 1, 1) == FRIDAY);        // 1 January
    assert(dayOfWeek(SUNDAY, FALSE, 1, 2) == SATURDAY);      // 2 January
    assert(dayOfWeek(SUNDAY, FALSE, 1, 3) == SUNDAY);        // 3 January
    assert(dayOfWeek(SUNDAY, FALSE, 1, 4) == MONDAY);        // 4 January
    assert(dayOfWeek(SUNDAY, FALSE, 1, 5) == TUESDAY);       // 5 January
    assert(dayOfWeek(SUNDAY, FALSE, 1, 6) == WEDNESDAY);     // 6 January
    assert(dayOfWeek(SUNDAY, FALSE, 1, 7) == THURSDAY);      // 7 January
    assert(dayOfWeek(SUNDAY, FALSE, 1, 8) == FRIDAY);        // 8 January
    assert(dayOfWeek(SUNDAY, FALSE, 1, 9) == SATURDAY);      // 9 January
    assert(dayOfWeek(SUNDAY, FALSE, 1, 10) == SUNDAY);       // 10 January
    assert(dayOfWeek(SUNDAY, FALSE, 1, 11) == MONDAY);       // 11 January
    assert(dayOfWeek(SUNDAY, FALSE, 1, 12) == TUESDAY);      // 12 January
    assert(dayOfWeek(SUNDAY, FALSE, 1, 13) == WEDNESDAY);    // 13 January
    assert(dayOfWeek(SUNDAY, FALSE, 1, 14) == THURSDAY);     // 14 January
    assert(dayOfWeek(SUNDAY, FALSE, 1, 15) == FRIDAY);       // 15 January
    assert(dayOfWeek(SUNDAY, FALSE, 1, 16) == SATURDAY);     // 16 January
    assert(dayOfWeek(SUNDAY, FALSE, 1, 17) == SUNDAY);       // 17 January
    assert(dayOfWeek(SUNDAY, FALSE, 1, 18) == MONDAY);       // 18 January
    assert(dayOfWeek(SUNDAY, FALSE, 1, 19) == TUESDAY);      // 19 January
    assert(dayOfWeek(SUNDAY, FALSE, 1, 20) == WEDNESDAY);    // 20 January
    assert(dayOfWeek(SUNDAY, FALSE, 1, 21) == THURSDAY);     // 21 January
    assert(dayOfWeek(SUNDAY, FALSE, 1, 22) == FRIDAY);       // 22 January
    assert(dayOfWeek(SUNDAY, FALSE, 1, 23) == SATURDAY);     // 23 January
    assert(dayOfWeek(SUNDAY, FALSE, 1, 24) == SUNDAY);       // 24 January
    assert(dayOfWeek(SUNDAY, FALSE, 1, 25) == MONDAY);       // 25 January
    assert(dayOfWeek(SUNDAY, FALSE, 1, 26) == TUESDAY);      // 26 January
    assert(dayOfWeek(SUNDAY, FALSE, 1, 27) == WEDNESDAY);    // 27 January
    assert(dayOfWeek(SUNDAY, FALSE, 1, 28) == THURSDAY);     // 28 January
    assert(dayOfWeek(SUNDAY, FALSE, 1, 29) == FRIDAY);       // 29 January
    assert(dayOfWeek(SUNDAY, FALSE, 1, 30) == SATURDAY);     // 30 January
    assert(dayOfWeek(SUNDAY, FALSE, 1, 31) == SUNDAY);       // 31 January
    assert(dayOfWeek(SUNDAY, FALSE, 2, 1) == MONDAY);        // 1 February
    assert(dayOfWeek(SUNDAY, FALSE, 2, 2) == TUESDAY);       // 2 February
    assert(dayOfWeek(SUNDAY, FALSE, 2, 3) == WEDNESDAY);     // 3 February
    assert(dayOfWeek(SUNDAY, FALSE, 2, 4) == THURSDAY);      // 4 February
    assert(dayOfWeek(SUNDAY, FALSE, 2, 5) == FRIDAY);        // 5 February
    assert(dayOfWeek(SUNDAY, FALSE, 2, 6) == SATURDAY);      // 6 February
    assert(dayOfWeek(SUNDAY, FALSE, 2, 7) == SUNDAY);        // 7 February
    assert(dayOfWeek(SUNDAY, FALSE, 2, 8) == MONDAY);        // 8 February
    assert(dayOfWeek(SUNDAY, FALSE, 2, 9) == TUESDAY);       // 9 February
    assert(dayOfWeek(SUNDAY, FALSE, 2, 10) == WEDNESDAY);    // 10 February
    assert(dayOfWeek(SUNDAY, FALSE, 2, 11) == THURSDAY);     // 11 February
    assert(dayOfWeek(SUNDAY, FALSE, 2, 12) == FRIDAY);       // 12 February
    assert(dayOfWeek(SUNDAY, FALSE, 2, 13) == SATURDAY);     // 13 February
    assert(dayOfWeek(SUNDAY, FALSE, 2, 14) == SUNDAY);       // 14 February
    assert(dayOfWeek(SUNDAY, FALSE, 2, 15) == MONDAY);       // 15 February
    assert(dayOfWeek(SUNDAY, FALSE, 2, 16) == TUESDAY);      // 16 February
    assert(dayOfWeek(SUNDAY, FALSE, 2, 17) == WEDNESDAY);    // 17 February
    assert(dayOfWeek(SUNDAY, FALSE, 2, 18) == THURSDAY);     // 18 February
    assert(dayOfWeek(SUNDAY, FALSE, 2, 19) == FRIDAY);       // 19 February
    assert(dayOfWeek(SUNDAY, FALSE, 2, 20) == SATURDAY);     // 20 February
    assert(dayOfWeek(SUNDAY, FALSE, 2, 21) == SUNDAY);       // 21 February
    assert(dayOfWeek(SUNDAY, FALSE, 2, 22) == MONDAY);       // 22 February
    assert(dayOfWeek(SUNDAY, FALSE, 2, 23) == TUESDAY);      // 23 February
    assert(dayOfWeek(SUNDAY, FALSE, 2, 24) == WEDNESDAY);    // 24 February
    assert(dayOfWeek(SUNDAY, FALSE, 2, 25) == THURSDAY);     // 25 February
    assert(dayOfWeek(SUNDAY, FALSE, 2, 26) == FRIDAY);       // 26 February
    assert(dayOfWeek(SUNDAY, FALSE, 2, 27) == SATURDAY);     // 27 February
    assert(dayOfWeek(SUNDAY, FALSE, 2, 28) == SUNDAY);       // 28 February
    assert(dayOfWeek(SUNDAY, FALSE, 3, 1) == MONDAY);        // 1 March
    assert(dayOfWeek(SUNDAY, FALSE, 3, 2) == TUESDAY);       // 2 March
    assert(dayOfWeek(SUNDAY, FALSE, 3, 3) == WEDNESDAY);     // 3 March
    assert(dayOfWeek(SUNDAY, FALSE, 3, 4) == THURSDAY);      // 4 March
    assert(dayOfWeek(SUNDAY, FALSE, 3, 5) == FRIDAY);        // 5 March
    assert(dayOfWeek(SUNDAY, FALSE, 3, 6) == SATURDAY);      // 6 March
    assert(dayOfWeek(SUNDAY, FALSE, 3, 7) == SUNDAY);        // 7 March
    assert(dayOfWeek(SUNDAY, FALSE, 3, 8) == MONDAY);        // 8 March
    assert(dayOfWeek(SUNDAY, FALSE, 3, 9) == TUESDAY);       // 9 March
    assert(dayOfWeek(SUNDAY, FALSE, 3, 10) == WEDNESDAY);    // 10 March
    assert(dayOfWeek(SUNDAY, FALSE, 3, 11) == THURSDAY);     // 11 March
    assert(dayOfWeek(SUNDAY, FALSE, 3, 12) == FRIDAY);       // 12 March
    assert(dayOfWeek(SUNDAY, FALSE, 3, 13) == SATURDAY);     // 13 March
    assert(dayOfWeek(SUNDAY, FALSE, 3, 14) == SUNDAY);       // 14 March
    assert(dayOfWeek(SUNDAY, FALSE, 3, 15) == MONDAY);       // 15 March
    assert(dayOfWeek(SUNDAY, FALSE, 3, 16) == TUESDAY);      // 16 March
    assert(dayOfWeek(SUNDAY, FALSE, 3, 17) == WEDNESDAY);    // 17 March
    assert(dayOfWeek(SUNDAY, FALSE, 3, 18) == THURSDAY);     // 18 March
    assert(dayOfWeek(SUNDAY, FALSE, 3, 19) == FRIDAY);       // 19 March
    assert(dayOfWeek(SUNDAY, FALSE, 3, 20) == SATURDAY);     // 20 March
    assert(dayOfWeek(SUNDAY, FALSE, 3, 21) == SUNDAY);       // 21 March
    assert(dayOfWeek(SUNDAY, FALSE, 3, 22) == MONDAY);       // 22 March
    assert(dayOfWeek(SUNDAY, FALSE, 3, 23) == TUESDAY);      // 23 March
    assert(dayOfWeek(SUNDAY, FALSE, 3, 24) == WEDNESDAY);    // 24 March
    assert(dayOfWeek(SUNDAY, FALSE, 3, 25) == THURSDAY);     // 25 March
    assert(dayOfWeek(SUNDAY, FALSE, 3, 26) == FRIDAY);       // 26 March
    assert(dayOfWeek(SUNDAY, FALSE, 3, 27) == SATURDAY);     // 27 March
    assert(dayOfWeek(SUNDAY, FALSE, 3, 28) == SUNDAY);       // 28 March
    assert(dayOfWeek(SUNDAY, FALSE, 3, 29) == MONDAY);       // 29 March
    assert(dayOfWeek(SUNDAY, FALSE, 3, 30) == TUESDAY);      // 30 March
    assert(dayOfWeek(SUNDAY, FALSE, 3, 31) == WEDNESDAY);    // 31 March
    assert(dayOfWeek(SUNDAY, FALSE, 4, 1) == THURSDAY);      // 1 April
    assert(dayOfWeek(SUNDAY, FALSE, 4, 2) == FRIDAY);        // 2 April
    assert(dayOfWeek(SUNDAY, FALSE, 4, 3) == SATURDAY);      // 3 April
    assert(dayOfWeek(SUNDAY, FALSE, 4, 4) == SUNDAY);        // 4 April
    assert(dayOfWeek(SUNDAY, FALSE, 4, 5) == MONDAY);        // 5 April
    assert(dayOfWeek(SUNDAY, FALSE, 4, 6) == TUESDAY);       // 6 April
    assert(dayOfWeek(SUNDAY, FALSE, 4, 7) == WEDNESDAY);     // 7 April
    assert(dayOfWeek(SUNDAY, FALSE, 4, 8) == THURSDAY);      // 8 April
    assert(dayOfWeek(SUNDAY, FALSE, 4, 9) == FRIDAY);        // 9 April
    assert(dayOfWeek(SUNDAY, FALSE, 4, 10) == SATURDAY);     // 10 April
    assert(dayOfWeek(SUNDAY, FALSE, 4, 11) == SUNDAY);       // 11 April
    assert(dayOfWeek(SUNDAY, FALSE, 4, 12) == MONDAY);       // 12 April
    assert(dayOfWeek(SUNDAY, FALSE, 4, 13) == TUESDAY);      // 13 April
    assert(dayOfWeek(SUNDAY, FALSE, 4, 14) == WEDNESDAY);    // 14 April
    assert(dayOfWeek(SUNDAY, FALSE, 4, 15) == THURSDAY);     // 15 April
    assert(dayOfWeek(SUNDAY, FALSE, 4, 16) == FRIDAY);       // 16 April
    assert(dayOfWeek(SUNDAY, FALSE, 4, 17) == SATURDAY);     // 17 April
    assert(dayOfWeek(SUNDAY, FALSE, 4, 18) == SUNDAY);       // 18 April
    assert(dayOfWeek(SUNDAY, FALSE, 4, 19) == MONDAY);       // 19 April
    assert(dayOfWeek(SUNDAY, FALSE, 4, 20) == TUESDAY);      // 20 April
    assert(dayOfWeek(SUNDAY, FALSE, 4, 21) == WEDNESDAY);    // 21 April
    assert(dayOfWeek(SUNDAY, FALSE, 4, 22) == THURSDAY);     // 22 April
    assert(dayOfWeek(SUNDAY, FALSE, 4, 23) == FRIDAY);       // 23 April
    assert(dayOfWeek(SUNDAY, FALSE, 4, 24) == SATURDAY);     // 24 April
    assert(dayOfWeek(SUNDAY, FALSE, 4, 25) == SUNDAY);       // 25 April
    assert(dayOfWeek(SUNDAY, FALSE, 4, 26) == MONDAY);       // 26 April
    assert(dayOfWeek(SUNDAY, FALSE, 4, 27) == TUESDAY);      // 27 April
    assert(dayOfWeek(SUNDAY, FALSE, 4, 28) == WEDNESDAY);    // 28 April
    assert(dayOfWeek(SUNDAY, FALSE, 4, 29) == THURSDAY);     // 29 April
    assert(dayOfWeek(SUNDAY, FALSE, 4, 30) == FRIDAY);       // 30 April
    assert(dayOfWeek(SUNDAY, FALSE, 5, 1) == SATURDAY);      // 1 May
    assert(dayOfWeek(SUNDAY, FALSE, 5, 2) == SUNDAY);        // 2 May
    assert(dayOfWeek(SUNDAY, FALSE, 5, 3) == MONDAY);        // 3 May
    assert(dayOfWeek(SUNDAY, FALSE, 5, 4) == TUESDAY);       // 4 May
    assert(dayOfWeek(SUNDAY, FALSE, 5, 5) == WEDNESDAY);     // 5 May
    assert(dayOfWeek(SUNDAY, FALSE, 5, 6) == THURSDAY);      // 6 May
    assert(dayOfWeek(SUNDAY, FALSE, 5, 7) == FRIDAY);        // 7 May
    assert(dayOfWeek(SUNDAY, FALSE, 5, 8) == SATURDAY);      // 8 May
    assert(dayOfWeek(SUNDAY, FALSE, 5, 9) == SUNDAY);        // 9 May
    assert(dayOfWeek(SUNDAY, FALSE, 5, 10) == MONDAY);       // 10 May
    assert(dayOfWeek(SUNDAY, FALSE, 5, 11) == TUESDAY);      // 11 May
    assert(dayOfWeek(SUNDAY, FALSE, 5, 12) == WEDNESDAY);    // 12 May
    assert(dayOfWeek(SUNDAY, FALSE, 5, 13) == THURSDAY);     // 13 May
    assert(dayOfWeek(SUNDAY, FALSE, 5, 14) == FRIDAY);       // 14 May
    assert(dayOfWeek(SUNDAY, FALSE, 5, 15) == SATURDAY);     // 15 May
    assert(dayOfWeek(SUNDAY, FALSE, 5, 16) == SUNDAY);       // 16 May
    assert(dayOfWeek(SUNDAY, FALSE, 5, 17) == MONDAY);       // 17 May
    assert(dayOfWeek(SUNDAY, FALSE, 5, 18) == TUESDAY);      // 18 May
    assert(dayOfWeek(SUNDAY, FALSE, 5, 19) == WEDNESDAY);    // 19 May
    assert(dayOfWeek(SUNDAY, FALSE, 5, 20) == THURSDAY);     // 20 May
    assert(dayOfWeek(SUNDAY, FALSE, 5, 21) == FRIDAY);       // 21 May
    assert(dayOfWeek(SUNDAY, FALSE, 5, 22) == SATURDAY);     // 22 May
    assert(dayOfWeek(SUNDAY, FALSE, 5, 23) == SUNDAY);       // 23 May
    assert(dayOfWeek(SUNDAY, FALSE, 5, 24) == MONDAY);       // 24 May
    assert(dayOfWeek(SUNDAY, FALSE, 5, 25) == TUESDAY);      // 25 May
    assert(dayOfWeek(SUNDAY, FALSE, 5, 26) == WEDNESDAY);    // 26 May
    assert(dayOfWeek(SUNDAY, FALSE, 5, 27) == THURSDAY);     // 27 May
    assert(dayOfWeek(SUNDAY, FALSE, 5, 28) == FRIDAY);       // 28 May
    assert(dayOfWeek(SUNDAY, FALSE, 5, 29) == SATURDAY);     // 29 May
    assert(dayOfWeek(SUNDAY, FALSE, 5, 30) == SUNDAY);       // 30 May
    assert(dayOfWeek(SUNDAY, FALSE, 5, 31) == MONDAY);       // 31 May
    assert(dayOfWeek(SUNDAY, FALSE, 6, 1) == TUESDAY);       // 1 June
    assert(dayOfWeek(SUNDAY, FALSE, 6, 2) == WEDNESDAY);     // 2 June
    assert(dayOfWeek(SUNDAY, FALSE, 6, 3) == THURSDAY);      // 3 June
    assert(dayOfWeek(SUNDAY, FALSE, 6, 4) == FRIDAY);        // 4 June
    assert(dayOfWeek(SUNDAY, FALSE, 6, 5) == SATURDAY);      // 5 June
    assert(dayOfWeek(SUNDAY, FALSE, 6, 6) == SUNDAY);        // 6 June
    assert(dayOfWeek(SUNDAY, FALSE, 6, 7) == MONDAY);        // 7 June
    assert(dayOfWeek(SUNDAY, FALSE, 6, 8) == TUESDAY);       // 8 June
    assert(dayOfWeek(SUNDAY, FALSE, 6, 9) == WEDNESDAY);     // 9 June
    assert(dayOfWeek(SUNDAY, FALSE, 6, 10) == THURSDAY);     // 10 June
    assert(dayOfWeek(SUNDAY, FALSE, 6, 11) == FRIDAY);       // 11 June
    assert(dayOfWeek(SUNDAY, FALSE, 6, 12) == SATURDAY);     // 12 June
    assert(dayOfWeek(SUNDAY, FALSE, 6, 13) == SUNDAY);       // 13 June
    assert(dayOfWeek(SUNDAY, FALSE, 6, 14) == MONDAY);       // 14 June
    assert(dayOfWeek(SUNDAY, FALSE, 6, 15) == TUESDAY);      // 15 June
    assert(dayOfWeek(SUNDAY, FALSE, 6, 16) == WEDNESDAY);    // 16 June
    assert(dayOfWeek(SUNDAY, FALSE, 6, 17) == THURSDAY);     // 17 June
    assert(dayOfWeek(SUNDAY, FALSE, 6, 18) == FRIDAY);       // 18 June
    assert(dayOfWeek(SUNDAY, FALSE, 6, 19) == SATURDAY);     // 19 June
    assert(dayOfWeek(SUNDAY, FALSE, 6, 20) == SUNDAY);       // 20 June
    assert(dayOfWeek(SUNDAY, FALSE, 6, 21) == MONDAY);       // 21 June
    assert(dayOfWeek(SUNDAY, FALSE, 6, 22) == TUESDAY);      // 22 June
    assert(dayOfWeek(SUNDAY, FALSE, 6, 23) == WEDNESDAY);    // 23 June
    assert(dayOfWeek(SUNDAY, FALSE, 6, 24) == THURSDAY);     // 24 June
    assert(dayOfWeek(SUNDAY, FALSE, 6, 25) == FRIDAY);       // 25 June
    assert(dayOfWeek(SUNDAY, FALSE, 6, 26) == SATURDAY);     // 26 June
    assert(dayOfWeek(SUNDAY, FALSE, 6, 27) == SUNDAY);       // 27 June
    assert(dayOfWeek(SUNDAY, FALSE, 6, 28) == MONDAY);       // 28 June
    assert(dayOfWeek(SUNDAY, FALSE, 6, 29) == TUESDAY);      // 29 June
    assert(dayOfWeek(SUNDAY, FALSE, 6, 30) == WEDNESDAY);    // 30 June
    assert(dayOfWeek(SUNDAY, FALSE, 7, 1) == THURSDAY);      // 1 July
    assert(dayOfWeek(SUNDAY, FALSE, 7, 2) == FRIDAY);        // 2 July
    assert(dayOfWeek(SUNDAY, FALSE, 7, 3) == SATURDAY);      // 3 July
    assert(dayOfWeek(SUNDAY, FALSE, 7, 4) == SUNDAY);        // 4 July
    assert(dayOfWeek(SUNDAY, FALSE, 7, 5) == MONDAY);        // 5 July
    assert(dayOfWeek(SUNDAY, FALSE, 7, 6) == TUESDAY);       // 6 July
    assert(dayOfWeek(SUNDAY, FALSE, 7, 7) == WEDNESDAY);     // 7 July
    assert(dayOfWeek(SUNDAY, FALSE, 7, 8) == THURSDAY);      // 8 July
    assert(dayOfWeek(SUNDAY, FALSE, 7, 9) == FRIDAY);        // 9 July
    assert(dayOfWeek(SUNDAY, FALSE, 7, 10) == SATURDAY);     // 10 July
    assert(dayOfWeek(SUNDAY, FALSE, 7, 11) == SUNDAY);       // 11 July
    assert(dayOfWeek(SUNDAY, FALSE, 7, 12) == MONDAY);       // 12 July
    assert(dayOfWeek(SUNDAY, FALSE, 7, 13) == TUESDAY);      // 13 July
    assert(dayOfWeek(SUNDAY, FALSE, 7, 14) == WEDNESDAY);    // 14 July
    assert(dayOfWeek(SUNDAY, FALSE, 7, 15) == THURSDAY);     // 15 July
    assert(dayOfWeek(SUNDAY, FALSE, 7, 16) == FRIDAY);       // 16 July
    assert(dayOfWeek(SUNDAY, FALSE, 7, 17) == SATURDAY);     // 17 July
    assert(dayOfWeek(SUNDAY, FALSE, 7, 18) == SUNDAY);       // 18 July
    assert(dayOfWeek(SUNDAY, FALSE, 7, 19) == MONDAY);       // 19 July
    assert(dayOfWeek(SUNDAY, FALSE, 7, 20) == TUESDAY);      // 20 July
    assert(dayOfWeek(SUNDAY, FALSE, 7, 21) == WEDNESDAY);    // 21 July
    assert(dayOfWeek(SUNDAY, FALSE, 7, 22) == THURSDAY);     // 22 July
    assert(dayOfWeek(SUNDAY, FALSE, 7, 23) == FRIDAY);       // 23 July
    assert(dayOfWeek(SUNDAY, FALSE, 7, 24) == SATURDAY);     // 24 July
    assert(dayOfWeek(SUNDAY, FALSE, 7, 25) == SUNDAY);       // 25 July
    assert(dayOfWeek(SUNDAY, FALSE, 7, 26) == MONDAY);       // 26 July
    assert(dayOfWeek(SUNDAY, FALSE, 7, 27) == TUESDAY);      // 27 July
    assert(dayOfWeek(SUNDAY, FALSE, 7, 28) == WEDNESDAY);    // 28 July
    assert(dayOfWeek(SUNDAY, FALSE, 7, 29) == THURSDAY);     // 29 July
    assert(dayOfWeek(SUNDAY, FALSE, 7, 30) == FRIDAY);       // 30 July
    assert(dayOfWeek(SUNDAY, FALSE, 7, 31) == SATURDAY);     // 31 July
    assert(dayOfWeek(SUNDAY, FALSE, 8, 1) == SUNDAY);        // 1 August
    assert(dayOfWeek(SUNDAY, FALSE, 8, 2) == MONDAY);        // 2 August
    assert(dayOfWeek(SUNDAY, FALSE, 8, 3) == TUESDAY);       // 3 August
    assert(dayOfWeek(SUNDAY, FALSE, 8, 4) == WEDNESDAY);     // 4 August
    assert(dayOfWeek(SUNDAY, FALSE, 8, 5) == THURSDAY);      // 5 August
    assert(dayOfWeek(SUNDAY, FALSE, 8, 6) == FRIDAY);        // 6 August
    assert(dayOfWeek(SUNDAY, FALSE, 8, 7) == SATURDAY);      // 7 August
    assert(dayOfWeek(SUNDAY, FALSE, 8, 8) == SUNDAY);        // 8 August
    assert(dayOfWeek(SUNDAY, FALSE, 8, 9) == MONDAY);        // 9 August
    assert(dayOfWeek(SUNDAY, FALSE, 8, 10) == TUESDAY);      // 10 August
    assert(dayOfWeek(SUNDAY, FALSE, 8, 11) == WEDNESDAY);    // 11 August
    assert(dayOfWeek(SUNDAY, FALSE, 8, 12) == THURSDAY);     // 12 August
    assert(dayOfWeek(SUNDAY, FALSE, 8, 13) == FRIDAY);       // 13 August
    assert(dayOfWeek(SUNDAY, FALSE, 8, 14) == SATURDAY);     // 14 August
    assert(dayOfWeek(SUNDAY, FALSE, 8, 15) == SUNDAY);       // 15 August
    assert(dayOfWeek(SUNDAY, FALSE, 8, 16) == MONDAY);       // 16 August
    assert(dayOfWeek(SUNDAY, FALSE, 8, 17) == TUESDAY);      // 17 August
    assert(dayOfWeek(SUNDAY, FALSE, 8, 18) == WEDNESDAY);    // 18 August
    assert(dayOfWeek(SUNDAY, FALSE, 8, 19) == THURSDAY);     // 19 August
    assert(dayOfWeek(SUNDAY, FALSE, 8, 20) == FRIDAY);       // 20 August
    assert(dayOfWeek(SUNDAY, FALSE, 8, 21) == SATURDAY);     // 21 August
    assert(dayOfWeek(SUNDAY, FALSE, 8, 22) == SUNDAY);       // 22 August
    assert(dayOfWeek(SUNDAY, FALSE, 8, 23) == MONDAY);       // 23 August
    assert(dayOfWeek(SUNDAY, FALSE, 8, 24) == TUESDAY);      // 24 August
    assert(dayOfWeek(SUNDAY, FALSE, 8, 25) == WEDNESDAY);    // 25 August
    assert(dayOfWeek(SUNDAY, FALSE, 8, 26) == THURSDAY);     // 26 August
    assert(dayOfWeek(SUNDAY, FALSE, 8, 27) == FRIDAY);       // 27 August
    assert(dayOfWeek(SUNDAY, FALSE, 8, 28) == SATURDAY);     // 28 August
    assert(dayOfWeek(SUNDAY, FALSE, 8, 29) == SUNDAY);       // 29 August
    assert(dayOfWeek(SUNDAY, FALSE, 8, 30) == MONDAY);       // 30 August
    assert(dayOfWeek(SUNDAY, FALSE, 8, 31) == TUESDAY);      // 31 August
    assert(dayOfWeek(SUNDAY, FALSE, 9, 1) == WEDNESDAY);     // 1 September
    assert(dayOfWeek(SUNDAY, FALSE, 9, 2) == THURSDAY);      // 2 September
    assert(dayOfWeek(SUNDAY, FALSE, 9, 3) == FRIDAY);        // 3 September
    assert(dayOfWeek(SUNDAY, FALSE, 9, 4) == SATURDAY);      // 4 September
    assert(dayOfWeek(SUNDAY, FALSE, 9, 5) == SUNDAY);        // 5 September
    assert(dayOfWeek(SUNDAY, FALSE, 9, 6) == MONDAY);        // 6 September
    assert(dayOfWeek(SUNDAY, FALSE, 9, 7) == TUESDAY);       // 7 September
    assert(dayOfWeek(SUNDAY, FALSE, 9, 8) == WEDNESDAY);     // 8 September
    assert(dayOfWeek(SUNDAY, FALSE, 9, 9) == THURSDAY);      // 9 September
    assert(dayOfWeek(SUNDAY, FALSE, 9, 10) == FRIDAY);       // 10 September
    assert(dayOfWeek(SUNDAY, FALSE, 9, 11) == SATURDAY);     // 11 September
    assert(dayOfWeek(SUNDAY, FALSE, 9, 12) == SUNDAY);       // 12 September
    assert(dayOfWeek(SUNDAY, FALSE, 9, 13) == MONDAY);       // 13 September
    assert(dayOfWeek(SUNDAY, FALSE, 9, 14) == TUESDAY);      // 14 September
    assert(dayOfWeek(SUNDAY, FALSE, 9, 15) == WEDNESDAY);    // 15 September
    assert(dayOfWeek(SUNDAY, FALSE, 9, 16) == THURSDAY);     // 16 September
    assert(dayOfWeek(SUNDAY, FALSE, 9, 17) == FRIDAY);       // 17 September
    assert(dayOfWeek(SUNDAY, FALSE, 9, 18) == SATURDAY);     // 18 September
    assert(dayOfWeek(SUNDAY, FALSE, 9, 19) == SUNDAY);       // 19 September
    assert(dayOfWeek(SUNDAY, FALSE, 9, 20) == MONDAY);       // 20 September
    assert(dayOfWeek(SUNDAY, FALSE, 9, 21) == TUESDAY);      // 21 September
    assert(dayOfWeek(SUNDAY, FALSE, 9, 22) == WEDNESDAY);    // 22 September
    assert(dayOfWeek(SUNDAY, FALSE, 9, 23) == THURSDAY);     // 23 September
    assert(dayOfWeek(SUNDAY, FALSE, 9, 24) == FRIDAY);       // 24 September
    assert(dayOfWeek(SUNDAY, FALSE, 9, 25) == SATURDAY);     // 25 September
    assert(dayOfWeek(SUNDAY, FALSE, 9, 26) == SUNDAY);       // 26 September
    assert(dayOfWeek(SUNDAY, FALSE, 9, 27) == MONDAY);       // 27 September
    assert(dayOfWeek(SUNDAY, FALSE, 9, 28) == TUESDAY);      // 28 September
    assert(dayOfWeek(SUNDAY, FALSE, 9, 29) == WEDNESDAY);    // 29 September
    assert(dayOfWeek(SUNDAY, FALSE, 9, 30) == THURSDAY);     // 30 September
    assert(dayOfWeek(SUNDAY, FALSE, 10, 1) == FRIDAY);       // 1 October
    assert(dayOfWeek(SUNDAY, FALSE, 10, 2) == SATURDAY);     // 2 October
    assert(dayOfWeek(SUNDAY, FALSE, 10, 3) == SUNDAY);       // 3 October
    assert(dayOfWeek(SUNDAY, FALSE, 10, 4) == MONDAY);       // 4 October
    assert(dayOfWeek(SUNDAY, FALSE, 10, 5) == TUESDAY);      // 5 October
    assert(dayOfWeek(SUNDAY, FALSE, 10, 6) == WEDNESDAY);    // 6 October
    assert(dayOfWeek(SUNDAY, FALSE, 10, 7) == THURSDAY);     // 7 October
    assert(dayOfWeek(SUNDAY, FALSE, 10, 8) == FRIDAY);       // 8 October
    assert(dayOfWeek(SUNDAY, FALSE, 10, 9) == SATURDAY);     // 9 October
    assert(dayOfWeek(SUNDAY, FALSE, 10, 10) == SUNDAY);      // 10 October
    assert(dayOfWeek(SUNDAY, FALSE, 10, 11) == MONDAY);      // 11 October
    assert(dayOfWeek(SUNDAY, FALSE, 10, 12) == TUESDAY);     // 12 October
    assert(dayOfWeek(SUNDAY, FALSE, 10, 13) == WEDNESDAY);   // 13 October
    assert(dayOfWeek(SUNDAY, FALSE, 10, 14) == THURSDAY);    // 14 October
    assert(dayOfWeek(SUNDAY, FALSE, 10, 15) == FRIDAY);      // 15 October
    assert(dayOfWeek(SUNDAY, FALSE, 10, 16) == SATURDAY);    // 16 October
    assert(dayOfWeek(SUNDAY, FALSE, 10, 17) == SUNDAY);      // 17 October
    assert(dayOfWeek(SUNDAY, FALSE, 10, 18) == MONDAY);      // 18 October
    assert(dayOfWeek(SUNDAY, FALSE, 10, 19) == TUESDAY);     // 19 October
    assert(dayOfWeek(SUNDAY, FALSE, 10, 20) == WEDNESDAY);   // 20 October
    assert(dayOfWeek(SUNDAY, FALSE, 10, 21) == THURSDAY);    // 21 October
    assert(dayOfWeek(SUNDAY, FALSE, 10, 22) == FRIDAY);      // 22 October
    assert(dayOfWeek(SUNDAY, FALSE, 10, 23) == SATURDAY);    // 23 October
    assert(dayOfWeek(SUNDAY, FALSE, 10, 24) == SUNDAY);      // 24 October
    assert(dayOfWeek(SUNDAY, FALSE, 10, 25) == MONDAY);      // 25 October
    assert(dayOfWeek(SUNDAY, FALSE, 10, 26) == TUESDAY);     // 26 October
    assert(dayOfWeek(SUNDAY, FALSE, 10, 27) == WEDNESDAY);   // 27 October
    assert(dayOfWeek(SUNDAY, FALSE, 10, 28) == THURSDAY);    // 28 October
    assert(dayOfWeek(SUNDAY, FALSE, 10, 29) == FRIDAY);      // 29 October
    assert(dayOfWeek(SUNDAY, FALSE, 10, 30) == SATURDAY);    // 30 October
    assert(dayOfWeek(SUNDAY, FALSE, 10, 31) == SUNDAY);      // 31 October
    assert(dayOfWeek(SUNDAY, FALSE, 11, 1) == MONDAY);       // 1 November
    assert(dayOfWeek(SUNDAY, FALSE, 11, 2) == TUESDAY);      // 2 November
    assert(dayOfWeek(SUNDAY, FALSE, 11, 3) == WEDNESDAY);    // 3 November
    assert(dayOfWeek(SUNDAY, FALSE, 11, 4) == THURSDAY);     // 4 November
    assert(dayOfWeek(SUNDAY, FALSE, 11, 5) == FRIDAY);       // 5 November
    assert(dayOfWeek(SUNDAY, FALSE, 11, 6) == SATURDAY);     // 6 November
    assert(dayOfWeek(SUNDAY, FALSE, 11, 7) == SUNDAY);       // 7 November
    assert(dayOfWeek(SUNDAY, FALSE, 11, 8) == MONDAY);       // 8 November
    assert(dayOfWeek(SUNDAY, FALSE, 11, 9) == TUESDAY);      // 9 November
    assert(dayOfWeek(SUNDAY, FALSE, 11, 10) == WEDNESDAY);   // 10 November
    assert(dayOfWeek(SUNDAY, FALSE, 11, 11) == THURSDAY);    // 11 November
    assert(dayOfWeek(SUNDAY, FALSE, 11, 12) == FRIDAY);      // 12 November
    assert(dayOfWeek(SUNDAY, FALSE, 11, 13) == SATURDAY);    // 13 November
    assert(dayOfWeek(SUNDAY, FALSE, 11, 14) == SUNDAY);      // 14 November
    assert(dayOfWeek(SUNDAY, FALSE, 11, 15) == MONDAY);      // 15 November
    assert(dayOfWeek(SUNDAY, FALSE, 11, 16) == TUESDAY);     // 16 November
    assert(dayOfWeek(SUNDAY, FALSE, 11, 17) == WEDNESDAY);   // 17 November
    assert(dayOfWeek(SUNDAY, FALSE, 11, 18) == THURSDAY);    // 18 November
    assert(dayOfWeek(SUNDAY, FALSE, 11, 19) == FRIDAY);      // 19 November
    assert(dayOfWeek(SUNDAY, FALSE, 11, 20) == SATURDAY);    // 20 November
    assert(dayOfWeek(SUNDAY, FALSE, 11, 21) == SUNDAY);      // 21 November
    assert(dayOfWeek(SUNDAY, FALSE, 11, 22) == MONDAY);      // 22 November
    assert(dayOfWeek(SUNDAY, FALSE, 11, 23) == TUESDAY);     // 23 November
    assert(dayOfWeek(SUNDAY, FALSE, 11, 24) == WEDNESDAY);   // 24 November
    assert(dayOfWeek(SUNDAY, FALSE, 11, 25) == THURSDAY);    // 25 November
    assert(dayOfWeek(SUNDAY, FALSE, 11, 26) == FRIDAY);      // 26 November
    assert(dayOfWeek(SUNDAY, FALSE, 11, 27) == SATURDAY);    // 27 November
    assert(dayOfWeek(SUNDAY, FALSE, 11, 28) == SUNDAY);      // 28 November
    assert(dayOfWeek(SUNDAY, FALSE, 11, 29) == MONDAY);      // 29 November
    assert(dayOfWeek(SUNDAY, FALSE, 11, 30) == TUESDAY);     // 30 November
    assert(dayOfWeek(SUNDAY, FALSE, 12, 1) == WEDNESDAY);    // 1 December
    assert(dayOfWeek(SUNDAY, FALSE, 12, 2) == THURSDAY);     // 2 December
    assert(dayOfWeek(SUNDAY, FALSE, 12, 3) == FRIDAY);       // 3 December
    assert(dayOfWeek(SUNDAY, FALSE, 12, 4) == SATURDAY);     // 4 December
    assert(dayOfWeek(SUNDAY, FALSE, 12, 5) == SUNDAY);       // 5 December
    assert(dayOfWeek(SUNDAY, FALSE, 12, 6) == MONDAY);       // 6 December
    assert(dayOfWeek(SUNDAY, FALSE, 12, 7) == TUESDAY);      // 7 December
    assert(dayOfWeek(SUNDAY, FALSE, 12, 8) == WEDNESDAY);    // 8 December
    assert(dayOfWeek(SUNDAY, FALSE, 12, 9) == THURSDAY);     // 9 December
    assert(dayOfWeek(SUNDAY, FALSE, 12, 10) == FRIDAY);      // 10 December
    assert(dayOfWeek(SUNDAY, FALSE, 12, 11) == SATURDAY);    // 11 December
    assert(dayOfWeek(SUNDAY, FALSE, 12, 12) == SUNDAY);      // 12 December
    assert(dayOfWeek(SUNDAY, FALSE, 12, 13) == MONDAY);      // 13 December
    assert(dayOfWeek(SUNDAY, FALSE, 12, 14) == TUESDAY);     // 14 December
    assert(dayOfWeek(SUNDAY, FALSE, 12, 15) == WEDNESDAY);   // 15 December
    assert(dayOfWeek(SUNDAY, FALSE, 12, 16) == THURSDAY);    // 16 December
    assert(dayOfWeek(SUNDAY, FALSE, 12, 17) == FRIDAY);      // 17 December
    assert(dayOfWeek(SUNDAY, FALSE, 12, 18) == SATURDAY);    // 18 December
    assert(dayOfWeek(SUNDAY, FALSE, 12, 19) == SUNDAY);      // 19 December
    assert(dayOfWeek(SUNDAY, FALSE, 12, 20) == MONDAY);      // 20 December
    assert(dayOfWeek(SUNDAY, FALSE, 12, 21) == TUESDAY);     // 21 December
    assert(dayOfWeek(SUNDAY, FALSE, 12, 22) == WEDNESDAY);   // 22 December
    assert(dayOfWeek(SUNDAY, FALSE, 12, 23) == THURSDAY);    // 23 December
    assert(dayOfWeek(SUNDAY, FALSE, 12, 24) == FRIDAY);      // 24 December
    assert(dayOfWeek(SUNDAY, FALSE, 12, 25) == SATURDAY);    // 25 December
    assert(dayOfWeek(SUNDAY, FALSE, 12, 26) == SUNDAY);      // 26 December
    assert(dayOfWeek(SUNDAY, FALSE, 12, 27) == MONDAY);      // 27 December
    assert(dayOfWeek(SUNDAY, FALSE, 12, 28) == TUESDAY);     // 28 December
    assert(dayOfWeek(SUNDAY, FALSE, 12, 29) == WEDNESDAY);   // 29 December
    assert(dayOfWeek(SUNDAY, FALSE, 12, 30) == THURSDAY);    // 30 December
    assert(dayOfWeek(SUNDAY, FALSE, 12, 31) == FRIDAY);      // 31 December
    // Doomsday = MONDAY, leapyear = No
    assert(dayOfWeek(MONDAY, FALSE, 1, 1) == SATURDAY);      // 1 January
    assert(dayOfWeek(MONDAY, FALSE, 1, 2) == SUNDAY);        // 2 January
    assert(dayOfWeek(MONDAY, FALSE, 1, 3) == MONDAY);        // 3 January
    assert(dayOfWeek(MONDAY, FALSE, 1, 4) == TUESDAY);       // 4 January
    assert(dayOfWeek(MONDAY, FALSE, 1, 5) == WEDNESDAY);     // 5 January
    assert(dayOfWeek(MONDAY, FALSE, 1, 6) == THURSDAY);      // 6 January
    assert(dayOfWeek(MONDAY, FALSE, 1, 7) == FRIDAY);        // 7 January
    assert(dayOfWeek(MONDAY, FALSE, 1, 8) == SATURDAY);      // 8 January
    assert(dayOfWeek(MONDAY, FALSE, 1, 9) == SUNDAY);        // 9 January
    assert(dayOfWeek(MONDAY, FALSE, 1, 10) == MONDAY);       // 10 January
    assert(dayOfWeek(MONDAY, FALSE, 1, 11) == TUESDAY);      // 11 January
    assert(dayOfWeek(MONDAY, FALSE, 1, 12) == WEDNESDAY);    // 12 January
    assert(dayOfWeek(MONDAY, FALSE, 1, 13) == THURSDAY);     // 13 January
    assert(dayOfWeek(MONDAY, FALSE, 1, 14) == FRIDAY);       // 14 January
    assert(dayOfWeek(MONDAY, FALSE, 1, 15) == SATURDAY);     // 15 January
    assert(dayOfWeek(MONDAY, FALSE, 1, 16) == SUNDAY);       // 16 January
    assert(dayOfWeek(MONDAY, FALSE, 1, 17) == MONDAY);       // 17 January
    assert(dayOfWeek(MONDAY, FALSE, 1, 18) == TUESDAY);      // 18 January
    assert(dayOfWeek(MONDAY, FALSE, 1, 19) == WEDNESDAY);    // 19 January
    assert(dayOfWeek(MONDAY, FALSE, 1, 20) == THURSDAY);     // 20 January
    assert(dayOfWeek(MONDAY, FALSE, 1, 21) == FRIDAY);       // 21 January
    assert(dayOfWeek(MONDAY, FALSE, 1, 22) == SATURDAY);     // 22 January
    assert(dayOfWeek(MONDAY, FALSE, 1, 23) == SUNDAY);       // 23 January
    assert(dayOfWeek(MONDAY, FALSE, 1, 24) == MONDAY);       // 24 January
    assert(dayOfWeek(MONDAY, FALSE, 1, 25) == TUESDAY);      // 25 January
    assert(dayOfWeek(MONDAY, FALSE, 1, 26) == WEDNESDAY);    // 26 January
    assert(dayOfWeek(MONDAY, FALSE, 1, 27) == THURSDAY);     // 27 January
    assert(dayOfWeek(MONDAY, FALSE, 1, 28) == FRIDAY);       // 28 January
    assert(dayOfWeek(MONDAY, FALSE, 1, 29) == SATURDAY);     // 29 January
    assert(dayOfWeek(MONDAY, FALSE, 1, 30) == SUNDAY);       // 30 January
    assert(dayOfWeek(MONDAY, FALSE, 1, 31) == MONDAY);       // 31 January
    assert(dayOfWeek(MONDAY, FALSE, 2, 1) == TUESDAY);       // 1 February
    assert(dayOfWeek(MONDAY, FALSE, 2, 2) == WEDNESDAY);     // 2 February
    assert(dayOfWeek(MONDAY, FALSE, 2, 3) == THURSDAY);      // 3 February
    assert(dayOfWeek(MONDAY, FALSE, 2, 4) == FRIDAY);        // 4 February
    assert(dayOfWeek(MONDAY, FALSE, 2, 5) == SATURDAY);      // 5 February
    assert(dayOfWeek(MONDAY, FALSE, 2, 6) == SUNDAY);        // 6 February
    assert(dayOfWeek(MONDAY, FALSE, 2, 7) == MONDAY);        // 7 February
    assert(dayOfWeek(MONDAY, FALSE, 2, 8) == TUESDAY);       // 8 February
    assert(dayOfWeek(MONDAY, FALSE, 2, 9) == WEDNESDAY);     // 9 February
    assert(dayOfWeek(MONDAY, FALSE, 2, 10) == THURSDAY);     // 10 February
    assert(dayOfWeek(MONDAY, FALSE, 2, 11) == FRIDAY);       // 11 February
    assert(dayOfWeek(MONDAY, FALSE, 2, 12) == SATURDAY);     // 12 February
    assert(dayOfWeek(MONDAY, FALSE, 2, 13) == SUNDAY);       // 13 February
    assert(dayOfWeek(MONDAY, FALSE, 2, 14) == MONDAY);       // 14 February
    assert(dayOfWeek(MONDAY, FALSE, 2, 15) == TUESDAY);      // 15 February
    assert(dayOfWeek(MONDAY, FALSE, 2, 16) == WEDNESDAY);    // 16 February
    assert(dayOfWeek(MONDAY, FALSE, 2, 17) == THURSDAY);     // 17 February
    assert(dayOfWeek(MONDAY, FALSE, 2, 18) == FRIDAY);       // 18 February
    assert(dayOfWeek(MONDAY, FALSE, 2, 19) == SATURDAY);     // 19 February
    assert(dayOfWeek(MONDAY, FALSE, 2, 20) == SUNDAY);       // 20 February
    assert(dayOfWeek(MONDAY, FALSE, 2, 21) == MONDAY);       // 21 February
    assert(dayOfWeek(MONDAY, FALSE, 2, 22) == TUESDAY);      // 22 February
    assert(dayOfWeek(MONDAY, FALSE, 2, 23) == WEDNESDAY);    // 23 February
    assert(dayOfWeek(MONDAY, FALSE, 2, 24) == THURSDAY);     // 24 February
    assert(dayOfWeek(MONDAY, FALSE, 2, 25) == FRIDAY);       // 25 February
    assert(dayOfWeek(MONDAY, FALSE, 2, 26) == SATURDAY);     // 26 February
    assert(dayOfWeek(MONDAY, FALSE, 2, 27) == SUNDAY);       // 27 February
    assert(dayOfWeek(MONDAY, FALSE, 2, 28) == MONDAY);       // 28 February
    assert(dayOfWeek(MONDAY, FALSE, 3, 1) == TUESDAY);       // 1 March
    assert(dayOfWeek(MONDAY, FALSE, 3, 2) == WEDNESDAY);     // 2 March
    assert(dayOfWeek(MONDAY, FALSE, 3, 3) == THURSDAY);      // 3 March
    assert(dayOfWeek(MONDAY, FALSE, 3, 4) == FRIDAY);        // 4 March
    assert(dayOfWeek(MONDAY, FALSE, 3, 5) == SATURDAY);      // 5 March
    assert(dayOfWeek(MONDAY, FALSE, 3, 6) == SUNDAY);        // 6 March
    assert(dayOfWeek(MONDAY, FALSE, 3, 7) == MONDAY);        // 7 March
    assert(dayOfWeek(MONDAY, FALSE, 3, 8) == TUESDAY);       // 8 March
    assert(dayOfWeek(MONDAY, FALSE, 3, 9) == WEDNESDAY);     // 9 March
    assert(dayOfWeek(MONDAY, FALSE, 3, 10) == THURSDAY);     // 10 March
    assert(dayOfWeek(MONDAY, FALSE, 3, 11) == FRIDAY);       // 11 March
    assert(dayOfWeek(MONDAY, FALSE, 3, 12) == SATURDAY);     // 12 March
    assert(dayOfWeek(MONDAY, FALSE, 3, 13) == SUNDAY);       // 13 March
    assert(dayOfWeek(MONDAY, FALSE, 3, 14) == MONDAY);       // 14 March
    assert(dayOfWeek(MONDAY, FALSE, 3, 15) == TUESDAY);      // 15 March
    assert(dayOfWeek(MONDAY, FALSE, 3, 16) == WEDNESDAY);    // 16 March
    assert(dayOfWeek(MONDAY, FALSE, 3, 17) == THURSDAY);     // 17 March
    assert(dayOfWeek(MONDAY, FALSE, 3, 18) == FRIDAY);       // 18 March
    assert(dayOfWeek(MONDAY, FALSE, 3, 19) == SATURDAY);     // 19 March
    assert(dayOfWeek(MONDAY, FALSE, 3, 20) == SUNDAY);       // 20 March
    assert(dayOfWeek(MONDAY, FALSE, 3, 21) == MONDAY);       // 21 March
    assert(dayOfWeek(MONDAY, FALSE, 3, 22) == TUESDAY);      // 22 March
    assert(dayOfWeek(MONDAY, FALSE, 3, 23) == WEDNESDAY);    // 23 March
    assert(dayOfWeek(MONDAY, FALSE, 3, 24) == THURSDAY);     // 24 March
    assert(dayOfWeek(MONDAY, FALSE, 3, 25) == FRIDAY);       // 25 March
    assert(dayOfWeek(MONDAY, FALSE, 3, 26) == SATURDAY);     // 26 March
    assert(dayOfWeek(MONDAY, FALSE, 3, 27) == SUNDAY);       // 27 March
    assert(dayOfWeek(MONDAY, FALSE, 3, 28) == MONDAY);       // 28 March
    assert(dayOfWeek(MONDAY, FALSE, 3, 29) == TUESDAY);      // 29 March
    assert(dayOfWeek(MONDAY, FALSE, 3, 30) == WEDNESDAY);    // 30 March
    assert(dayOfWeek(MONDAY, FALSE, 3, 31) == THURSDAY);     // 31 March
    assert(dayOfWeek(MONDAY, FALSE, 4, 1) == FRIDAY);        // 1 April
    assert(dayOfWeek(MONDAY, FALSE, 4, 2) == SATURDAY);      // 2 April
    assert(dayOfWeek(MONDAY, FALSE, 4, 3) == SUNDAY);        // 3 April
    assert(dayOfWeek(MONDAY, FALSE, 4, 4) == MONDAY);        // 4 April
    assert(dayOfWeek(MONDAY, FALSE, 4, 5) == TUESDAY);       // 5 April
    assert(dayOfWeek(MONDAY, FALSE, 4, 6) == WEDNESDAY);     // 6 April
    assert(dayOfWeek(MONDAY, FALSE, 4, 7) == THURSDAY);      // 7 April
    assert(dayOfWeek(MONDAY, FALSE, 4, 8) == FRIDAY);        // 8 April
    assert(dayOfWeek(MONDAY, FALSE, 4, 9) == SATURDAY);      // 9 April
    assert(dayOfWeek(MONDAY, FALSE, 4, 10) == SUNDAY);       // 10 April
    assert(dayOfWeek(MONDAY, FALSE, 4, 11) == MONDAY);       // 11 April
    assert(dayOfWeek(MONDAY, FALSE, 4, 12) == TUESDAY);      // 12 April
    assert(dayOfWeek(MONDAY, FALSE, 4, 13) == WEDNESDAY);    // 13 April
    assert(dayOfWeek(MONDAY, FALSE, 4, 14) == THURSDAY);     // 14 April
    assert(dayOfWeek(MONDAY, FALSE, 4, 15) == FRIDAY);       // 15 April
    assert(dayOfWeek(MONDAY, FALSE, 4, 16) == SATURDAY);     // 16 April
    assert(dayOfWeek(MONDAY, FALSE, 4, 17) == SUNDAY);       // 17 April
    assert(dayOfWeek(MONDAY, FALSE, 4, 18) == MONDAY);       // 18 April
    assert(dayOfWeek(MONDAY, FALSE, 4, 19) == TUESDAY);      // 19 April
    assert(dayOfWeek(MONDAY, FALSE, 4, 20) == WEDNESDAY);    // 20 April
    assert(dayOfWeek(MONDAY, FALSE, 4, 21) == THURSDAY);     // 21 April
    assert(dayOfWeek(MONDAY, FALSE, 4, 22) == FRIDAY);       // 22 April
    assert(dayOfWeek(MONDAY, FALSE, 4, 23) == SATURDAY);     // 23 April
    assert(dayOfWeek(MONDAY, FALSE, 4, 24) == SUNDAY);       // 24 April
    assert(dayOfWeek(MONDAY, FALSE, 4, 25) == MONDAY);       // 25 April
    assert(dayOfWeek(MONDAY, FALSE, 4, 26) == TUESDAY);      // 26 April
    assert(dayOfWeek(MONDAY, FALSE, 4, 27) == WEDNESDAY);    // 27 April
    assert(dayOfWeek(MONDAY, FALSE, 4, 28) == THURSDAY);     // 28 April
    assert(dayOfWeek(MONDAY, FALSE, 4, 29) == FRIDAY);       // 29 April
    assert(dayOfWeek(MONDAY, FALSE, 4, 30) == SATURDAY);     // 30 April
    assert(dayOfWeek(MONDAY, FALSE, 5, 1) == SUNDAY);        // 1 May
    assert(dayOfWeek(MONDAY, FALSE, 5, 2) == MONDAY);        // 2 May
    assert(dayOfWeek(MONDAY, FALSE, 5, 3) == TUESDAY);       // 3 May
    assert(dayOfWeek(MONDAY, FALSE, 5, 4) == WEDNESDAY);     // 4 May
    assert(dayOfWeek(MONDAY, FALSE, 5, 5) == THURSDAY);      // 5 May
    assert(dayOfWeek(MONDAY, FALSE, 5, 6) == FRIDAY);        // 6 May
    assert(dayOfWeek(MONDAY, FALSE, 5, 7) == SATURDAY);      // 7 May
    assert(dayOfWeek(MONDAY, FALSE, 5, 8) == SUNDAY);        // 8 May
    assert(dayOfWeek(MONDAY, FALSE, 5, 9) == MONDAY);        // 9 May
    assert(dayOfWeek(MONDAY, FALSE, 5, 10) == TUESDAY);      // 10 May
    assert(dayOfWeek(MONDAY, FALSE, 5, 11) == WEDNESDAY);    // 11 May
    assert(dayOfWeek(MONDAY, FALSE, 5, 12) == THURSDAY);     // 12 May
    assert(dayOfWeek(MONDAY, FALSE, 5, 13) == FRIDAY);       // 13 May
    assert(dayOfWeek(MONDAY, FALSE, 5, 14) == SATURDAY);     // 14 May
    assert(dayOfWeek(MONDAY, FALSE, 5, 15) == SUNDAY);       // 15 May
    assert(dayOfWeek(MONDAY, FALSE, 5, 16) == MONDAY);       // 16 May
    assert(dayOfWeek(MONDAY, FALSE, 5, 17) == TUESDAY);      // 17 May
    assert(dayOfWeek(MONDAY, FALSE, 5, 18) == WEDNESDAY);    // 18 May
    assert(dayOfWeek(MONDAY, FALSE, 5, 19) == THURSDAY);     // 19 May
    assert(dayOfWeek(MONDAY, FALSE, 5, 20) == FRIDAY);       // 20 May
    assert(dayOfWeek(MONDAY, FALSE, 5, 21) == SATURDAY);     // 21 May
    assert(dayOfWeek(MONDAY, FALSE, 5, 22) == SUNDAY);       // 22 May
    assert(dayOfWeek(MONDAY, FALSE, 5, 23) == MONDAY);       // 23 May
    assert(dayOfWeek(MONDAY, FALSE, 5, 24) == TUESDAY);      // 24 May
    assert(dayOfWeek(MONDAY, FALSE, 5, 25) == WEDNESDAY);    // 25 May
    assert(dayOfWeek(MONDAY, FALSE, 5, 26) == THURSDAY);     // 26 May
    assert(dayOfWeek(MONDAY, FALSE, 5, 27) == FRIDAY);       // 27 May
    assert(dayOfWeek(MONDAY, FALSE, 5, 28) == SATURDAY);     // 28 May
    assert(dayOfWeek(MONDAY, FALSE, 5, 29) == SUNDAY);       // 29 May
    assert(dayOfWeek(MONDAY, FALSE, 5, 30) == MONDAY);       // 30 May
    assert(dayOfWeek(MONDAY, FALSE, 5, 31) == TUESDAY);      // 31 May
    assert(dayOfWeek(MONDAY, FALSE, 6, 1) == WEDNESDAY);     // 1 June
    assert(dayOfWeek(MONDAY, FALSE, 6, 2) == THURSDAY);      // 2 June
    assert(dayOfWeek(MONDAY, FALSE, 6, 3) == FRIDAY);        // 3 June
    assert(dayOfWeek(MONDAY, FALSE, 6, 4) == SATURDAY);      // 4 June
    assert(dayOfWeek(MONDAY, FALSE, 6, 5) == SUNDAY);        // 5 June
    assert(dayOfWeek(MONDAY, FALSE, 6, 6) == MONDAY);        // 6 June
    assert(dayOfWeek(MONDAY, FALSE, 6, 7) == TUESDAY);       // 7 June
    assert(dayOfWeek(MONDAY, FALSE, 6, 8) == WEDNESDAY);     // 8 June
    assert(dayOfWeek(MONDAY, FALSE, 6, 9) == THURSDAY);      // 9 June
    assert(dayOfWeek(MONDAY, FALSE, 6, 10) == FRIDAY);       // 10 June
    assert(dayOfWeek(MONDAY, FALSE, 6, 11) == SATURDAY);     // 11 June
    assert(dayOfWeek(MONDAY, FALSE, 6, 12) == SUNDAY);       // 12 June
    assert(dayOfWeek(MONDAY, FALSE, 6, 13) == MONDAY);       // 13 June
    assert(dayOfWeek(MONDAY, FALSE, 6, 14) == TUESDAY);      // 14 June
    assert(dayOfWeek(MONDAY, FALSE, 6, 15) == WEDNESDAY);    // 15 June
    assert(dayOfWeek(MONDAY, FALSE, 6, 16) == THURSDAY);     // 16 June
    assert(dayOfWeek(MONDAY, FALSE, 6, 17) == FRIDAY);       // 17 June
    assert(dayOfWeek(MONDAY, FALSE, 6, 18) == SATURDAY);     // 18 June
    assert(dayOfWeek(MONDAY, FALSE, 6, 19) == SUNDAY);       // 19 June
    assert(dayOfWeek(MONDAY, FALSE, 6, 20) == MONDAY);       // 20 June
    assert(dayOfWeek(MONDAY, FALSE, 6, 21) == TUESDAY);      // 21 June
    assert(dayOfWeek(MONDAY, FALSE, 6, 22) == WEDNESDAY);    // 22 June
    assert(dayOfWeek(MONDAY, FALSE, 6, 23) == THURSDAY);     // 23 June
    assert(dayOfWeek(MONDAY, FALSE, 6, 24) == FRIDAY);       // 24 June
    assert(dayOfWeek(MONDAY, FALSE, 6, 25) == SATURDAY);     // 25 June
    assert(dayOfWeek(MONDAY, FALSE, 6, 26) == SUNDAY);       // 26 June
    assert(dayOfWeek(MONDAY, FALSE, 6, 27) == MONDAY);       // 27 June
    assert(dayOfWeek(MONDAY, FALSE, 6, 28) == TUESDAY);      // 28 June
    assert(dayOfWeek(MONDAY, FALSE, 6, 29) == WEDNESDAY);    // 29 June
    assert(dayOfWeek(MONDAY, FALSE, 6, 30) == THURSDAY);     // 30 June
    assert(dayOfWeek(MONDAY, FALSE, 7, 1) == FRIDAY);        // 1 July
    assert(dayOfWeek(MONDAY, FALSE, 7, 2) == SATURDAY);      // 2 July
    assert(dayOfWeek(MONDAY, FALSE, 7, 3) == SUNDAY);        // 3 July
    assert(dayOfWeek(MONDAY, FALSE, 7, 4) == MONDAY);        // 4 July
    assert(dayOfWeek(MONDAY, FALSE, 7, 5) == TUESDAY);       // 5 July
    assert(dayOfWeek(MONDAY, FALSE, 7, 6) == WEDNESDAY);     // 6 July
    assert(dayOfWeek(MONDAY, FALSE, 7, 7) == THURSDAY);      // 7 July
    assert(dayOfWeek(MONDAY, FALSE, 7, 8) == FRIDAY);        // 8 July
    assert(dayOfWeek(MONDAY, FALSE, 7, 9) == SATURDAY);      // 9 July
    assert(dayOfWeek(MONDAY, FALSE, 7, 10) == SUNDAY);       // 10 July
    assert(dayOfWeek(MONDAY, FALSE, 7, 11) == MONDAY);       // 11 July
    assert(dayOfWeek(MONDAY, FALSE, 7, 12) == TUESDAY);      // 12 July
    assert(dayOfWeek(MONDAY, FALSE, 7, 13) == WEDNESDAY);    // 13 July
    assert(dayOfWeek(MONDAY, FALSE, 7, 14) == THURSDAY);     // 14 July
    assert(dayOfWeek(MONDAY, FALSE, 7, 15) == FRIDAY);       // 15 July
    assert(dayOfWeek(MONDAY, FALSE, 7, 16) == SATURDAY);     // 16 July
    assert(dayOfWeek(MONDAY, FALSE, 7, 17) == SUNDAY);       // 17 July
    assert(dayOfWeek(MONDAY, FALSE, 7, 18) == MONDAY);       // 18 July
    assert(dayOfWeek(MONDAY, FALSE, 7, 19) == TUESDAY);      // 19 July
    assert(dayOfWeek(MONDAY, FALSE, 7, 20) == WEDNESDAY);    // 20 July
    assert(dayOfWeek(MONDAY, FALSE, 7, 21) == THURSDAY);     // 21 July
    assert(dayOfWeek(MONDAY, FALSE, 7, 22) == FRIDAY);       // 22 July
    assert(dayOfWeek(MONDAY, FALSE, 7, 23) == SATURDAY);     // 23 July
    assert(dayOfWeek(MONDAY, FALSE, 7, 24) == SUNDAY);       // 24 July
    assert(dayOfWeek(MONDAY, FALSE, 7, 25) == MONDAY);       // 25 July
    assert(dayOfWeek(MONDAY, FALSE, 7, 26) == TUESDAY);      // 26 July
    assert(dayOfWeek(MONDAY, FALSE, 7, 27) == WEDNESDAY);    // 27 July
    assert(dayOfWeek(MONDAY, FALSE, 7, 28) == THURSDAY);     // 28 July
    assert(dayOfWeek(MONDAY, FALSE, 7, 29) == FRIDAY);       // 29 July
    assert(dayOfWeek(MONDAY, FALSE, 7, 30) == SATURDAY);     // 30 July
    assert(dayOfWeek(MONDAY, FALSE, 7, 31) == SUNDAY);       // 31 July
    assert(dayOfWeek(MONDAY, FALSE, 8, 1) == MONDAY);        // 1 August
    assert(dayOfWeek(MONDAY, FALSE, 8, 2) == TUESDAY);       // 2 August
    assert(dayOfWeek(MONDAY, FALSE, 8, 3) == WEDNESDAY);     // 3 August
    assert(dayOfWeek(MONDAY, FALSE, 8, 4) == THURSDAY);      // 4 August
    assert(dayOfWeek(MONDAY, FALSE, 8, 5) == FRIDAY);        // 5 August
    assert(dayOfWeek(MONDAY, FALSE, 8, 6) == SATURDAY);      // 6 August
    assert(dayOfWeek(MONDAY, FALSE, 8, 7) == SUNDAY);        // 7 August
    assert(dayOfWeek(MONDAY, FALSE, 8, 8) == MONDAY);        // 8 August
    assert(dayOfWeek(MONDAY, FALSE, 8, 9) == TUESDAY);       // 9 August
    assert(dayOfWeek(MONDAY, FALSE, 8, 10) == WEDNESDAY);    // 10 August
    assert(dayOfWeek(MONDAY, FALSE, 8, 11) == THURSDAY);     // 11 August
    assert(dayOfWeek(MONDAY, FALSE, 8, 12) == FRIDAY);       // 12 August
    assert(dayOfWeek(MONDAY, FALSE, 8, 13) == SATURDAY);     // 13 August
    assert(dayOfWeek(MONDAY, FALSE, 8, 14) == SUNDAY);       // 14 August
    assert(dayOfWeek(MONDAY, FALSE, 8, 15) == MONDAY);       // 15 August
    assert(dayOfWeek(MONDAY, FALSE, 8, 16) == TUESDAY);      // 16 August
    assert(dayOfWeek(MONDAY, FALSE, 8, 17) == WEDNESDAY);    // 17 August
    assert(dayOfWeek(MONDAY, FALSE, 8, 18) == THURSDAY);     // 18 August
    assert(dayOfWeek(MONDAY, FALSE, 8, 19) == FRIDAY);       // 19 August
    assert(dayOfWeek(MONDAY, FALSE, 8, 20) == SATURDAY);     // 20 August
    assert(dayOfWeek(MONDAY, FALSE, 8, 21) == SUNDAY);       // 21 August
    assert(dayOfWeek(MONDAY, FALSE, 8, 22) == MONDAY);       // 22 August
    assert(dayOfWeek(MONDAY, FALSE, 8, 23) == TUESDAY);      // 23 August
    assert(dayOfWeek(MONDAY, FALSE, 8, 24) == WEDNESDAY);    // 24 August
    assert(dayOfWeek(MONDAY, FALSE, 8, 25) == THURSDAY);     // 25 August
    assert(dayOfWeek(MONDAY, FALSE, 8, 26) == FRIDAY);       // 26 August
    assert(dayOfWeek(MONDAY, FALSE, 8, 27) == SATURDAY);     // 27 August
    assert(dayOfWeek(MONDAY, FALSE, 8, 28) == SUNDAY);       // 28 August
    assert(dayOfWeek(MONDAY, FALSE, 8, 29) == MONDAY);       // 29 August
    assert(dayOfWeek(MONDAY, FALSE, 8, 30) == TUESDAY);      // 30 August
    assert(dayOfWeek(MONDAY, FALSE, 8, 31) == WEDNESDAY);    // 31 August
    assert(dayOfWeek(MONDAY, FALSE, 9, 1) == THURSDAY);      // 1 September
    assert(dayOfWeek(MONDAY, FALSE, 9, 2) == FRIDAY);        // 2 September
    assert(dayOfWeek(MONDAY, FALSE, 9, 3) == SATURDAY);      // 3 September
    assert(dayOfWeek(MONDAY, FALSE, 9, 4) == SUNDAY);        // 4 September
    assert(dayOfWeek(MONDAY, FALSE, 9, 5) == MONDAY);        // 5 September
    assert(dayOfWeek(MONDAY, FALSE, 9, 6) == TUESDAY);       // 6 September
    assert(dayOfWeek(MONDAY, FALSE, 9, 7) == WEDNESDAY);     // 7 September
    assert(dayOfWeek(MONDAY, FALSE, 9, 8) == THURSDAY);      // 8 September
    assert(dayOfWeek(MONDAY, FALSE, 9, 9) == FRIDAY);        // 9 September
    assert(dayOfWeek(MONDAY, FALSE, 9, 10) == SATURDAY);     // 10 September
    assert(dayOfWeek(MONDAY, FALSE, 9, 11) == SUNDAY);       // 11 September
    assert(dayOfWeek(MONDAY, FALSE, 9, 12) == MONDAY);       // 12 September
    assert(dayOfWeek(MONDAY, FALSE, 9, 13) == TUESDAY);      // 13 September
    assert(dayOfWeek(MONDAY, FALSE, 9, 14) == WEDNESDAY);    // 14 September
    assert(dayOfWeek(MONDAY, FALSE, 9, 15) == THURSDAY);     // 15 September
    assert(dayOfWeek(MONDAY, FALSE, 9, 16) == FRIDAY);       // 16 September
    assert(dayOfWeek(MONDAY, FALSE, 9, 17) == SATURDAY);     // 17 September
    assert(dayOfWeek(MONDAY, FALSE, 9, 18) == SUNDAY);       // 18 September
    assert(dayOfWeek(MONDAY, FALSE, 9, 19) == MONDAY);       // 19 September
    assert(dayOfWeek(MONDAY, FALSE, 9, 20) == TUESDAY);      // 20 September
    assert(dayOfWeek(MONDAY, FALSE, 9, 21) == WEDNESDAY);    // 21 September
    assert(dayOfWeek(MONDAY, FALSE, 9, 22) == THURSDAY);     // 22 September
    assert(dayOfWeek(MONDAY, FALSE, 9, 23) == FRIDAY);       // 23 September
    assert(dayOfWeek(MONDAY, FALSE, 9, 24) == SATURDAY);     // 24 September
    assert(dayOfWeek(MONDAY, FALSE, 9, 25) == SUNDAY);       // 25 September
    assert(dayOfWeek(MONDAY, FALSE, 9, 26) == MONDAY);       // 26 September
    assert(dayOfWeek(MONDAY, FALSE, 9, 27) == TUESDAY);      // 27 September
    assert(dayOfWeek(MONDAY, FALSE, 9, 28) == WEDNESDAY);    // 28 September
    assert(dayOfWeek(MONDAY, FALSE, 9, 29) == THURSDAY);     // 29 September
    assert(dayOfWeek(MONDAY, FALSE, 9, 30) == FRIDAY);       // 30 September
    assert(dayOfWeek(MONDAY, FALSE, 10, 1) == SATURDAY);     // 1 October
    assert(dayOfWeek(MONDAY, FALSE, 10, 2) == SUNDAY);       // 2 October
    assert(dayOfWeek(MONDAY, FALSE, 10, 3) == MONDAY);       // 3 October
    assert(dayOfWeek(MONDAY, FALSE, 10, 4) == TUESDAY);      // 4 October
    assert(dayOfWeek(MONDAY, FALSE, 10, 5) == WEDNESDAY);    // 5 October
    assert(dayOfWeek(MONDAY, FALSE, 10, 6) == THURSDAY);     // 6 October
    assert(dayOfWeek(MONDAY, FALSE, 10, 7) == FRIDAY);       // 7 October
    assert(dayOfWeek(MONDAY, FALSE, 10, 8) == SATURDAY);     // 8 October
    assert(dayOfWeek(MONDAY, FALSE, 10, 9) == SUNDAY);       // 9 October
    assert(dayOfWeek(MONDAY, FALSE, 10, 10) == MONDAY);      // 10 October
    assert(dayOfWeek(MONDAY, FALSE, 10, 11) == TUESDAY);     // 11 October
    assert(dayOfWeek(MONDAY, FALSE, 10, 12) == WEDNESDAY);   // 12 October
    assert(dayOfWeek(MONDAY, FALSE, 10, 13) == THURSDAY);    // 13 October
    assert(dayOfWeek(MONDAY, FALSE, 10, 14) == FRIDAY);      // 14 October
    assert(dayOfWeek(MONDAY, FALSE, 10, 15) == SATURDAY);    // 15 October
    assert(dayOfWeek(MONDAY, FALSE, 10, 16) == SUNDAY);      // 16 October
    assert(dayOfWeek(MONDAY, FALSE, 10, 17) == MONDAY);      // 17 October
    assert(dayOfWeek(MONDAY, FALSE, 10, 18) == TUESDAY);     // 18 October
    assert(dayOfWeek(MONDAY, FALSE, 10, 19) == WEDNESDAY);   // 19 October
    assert(dayOfWeek(MONDAY, FALSE, 10, 20) == THURSDAY);    // 20 October
    assert(dayOfWeek(MONDAY, FALSE, 10, 21) == FRIDAY);      // 21 October
    assert(dayOfWeek(MONDAY, FALSE, 10, 22) == SATURDAY);    // 22 October
    assert(dayOfWeek(MONDAY, FALSE, 10, 23) == SUNDAY);      // 23 October
    assert(dayOfWeek(MONDAY, FALSE, 10, 24) == MONDAY);      // 24 October
    assert(dayOfWeek(MONDAY, FALSE, 10, 25) == TUESDAY);     // 25 October
    assert(dayOfWeek(MONDAY, FALSE, 10, 26) == WEDNESDAY);   // 26 October
    assert(dayOfWeek(MONDAY, FALSE, 10, 27) == THURSDAY);    // 27 October
    assert(dayOfWeek(MONDAY, FALSE, 10, 28) == FRIDAY);      // 28 October
    assert(dayOfWeek(MONDAY, FALSE, 10, 29) == SATURDAY);    // 29 October
    assert(dayOfWeek(MONDAY, FALSE, 10, 30) == SUNDAY);      // 30 October
    assert(dayOfWeek(MONDAY, FALSE, 10, 31) == MONDAY);      // 31 October
    assert(dayOfWeek(MONDAY, FALSE, 11, 1) == TUESDAY);      // 1 November
    assert(dayOfWeek(MONDAY, FALSE, 11, 2) == WEDNESDAY);    // 2 November
    assert(dayOfWeek(MONDAY, FALSE, 11, 3) == THURSDAY);     // 3 November
    assert(dayOfWeek(MONDAY, FALSE, 11, 4) == FRIDAY);       // 4 November
    assert(dayOfWeek(MONDAY, FALSE, 11, 5) == SATURDAY);     // 5 November
    assert(dayOfWeek(MONDAY, FALSE, 11, 6) == SUNDAY);       // 6 November
    assert(dayOfWeek(MONDAY, FALSE, 11, 7) == MONDAY);       // 7 November
    assert(dayOfWeek(MONDAY, FALSE, 11, 8) == TUESDAY);      // 8 November
    assert(dayOfWeek(MONDAY, FALSE, 11, 9) == WEDNESDAY);    // 9 November
    assert(dayOfWeek(MONDAY, FALSE, 11, 10) == THURSDAY);    // 10 November
    assert(dayOfWeek(MONDAY, FALSE, 11, 11) == FRIDAY);      // 11 November
    assert(dayOfWeek(MONDAY, FALSE, 11, 12) == SATURDAY);    // 12 November
    assert(dayOfWeek(MONDAY, FALSE, 11, 13) == SUNDAY);      // 13 November
    assert(dayOfWeek(MONDAY, FALSE, 11, 14) == MONDAY);      // 14 November
    assert(dayOfWeek(MONDAY, FALSE, 11, 15) == TUESDAY);     // 15 November
    assert(dayOfWeek(MONDAY, FALSE, 11, 16) == WEDNESDAY);   // 16 November
    assert(dayOfWeek(MONDAY, FALSE, 11, 17) == THURSDAY);    // 17 November
    assert(dayOfWeek(MONDAY, FALSE, 11, 18) == FRIDAY);      // 18 November
    assert(dayOfWeek(MONDAY, FALSE, 11, 19) == SATURDAY);    // 19 November
    assert(dayOfWeek(MONDAY, FALSE, 11, 20) == SUNDAY);      // 20 November
    assert(dayOfWeek(MONDAY, FALSE, 11, 21) == MONDAY);      // 21 November
    assert(dayOfWeek(MONDAY, FALSE, 11, 22) == TUESDAY);     // 22 November
    assert(dayOfWeek(MONDAY, FALSE, 11, 23) == WEDNESDAY);   // 23 November
    assert(dayOfWeek(MONDAY, FALSE, 11, 24) == THURSDAY);    // 24 November
    assert(dayOfWeek(MONDAY, FALSE, 11, 25) == FRIDAY);      // 25 November
    assert(dayOfWeek(MONDAY, FALSE, 11, 26) == SATURDAY);    // 26 November
    assert(dayOfWeek(MONDAY, FALSE, 11, 27) == SUNDAY);      // 27 November
    assert(dayOfWeek(MONDAY, FALSE, 11, 28) == MONDAY);      // 28 November
    assert(dayOfWeek(MONDAY, FALSE, 11, 29) == TUESDAY);     // 29 November
    assert(dayOfWeek(MONDAY, FALSE, 11, 30) == WEDNESDAY);   // 30 November
    assert(dayOfWeek(MONDAY, FALSE, 12, 1) == THURSDAY);     // 1 December
    assert(dayOfWeek(MONDAY, FALSE, 12, 2) == FRIDAY);       // 2 December
    assert(dayOfWeek(MONDAY, FALSE, 12, 3) == SATURDAY);     // 3 December
    assert(dayOfWeek(MONDAY, FALSE, 12, 4) == SUNDAY);       // 4 December
    assert(dayOfWeek(MONDAY, FALSE, 12, 5) == MONDAY);       // 5 December
    assert(dayOfWeek(MONDAY, FALSE, 12, 6) == TUESDAY);      // 6 December
    assert(dayOfWeek(MONDAY, FALSE, 12, 7) == WEDNESDAY);    // 7 December
    assert(dayOfWeek(MONDAY, FALSE, 12, 8) == THURSDAY);     // 8 December
    assert(dayOfWeek(MONDAY, FALSE, 12, 9) == FRIDAY);       // 9 December
    assert(dayOfWeek(MONDAY, FALSE, 12, 10) == SATURDAY);    // 10 December
    assert(dayOfWeek(MONDAY, FALSE, 12, 11) == SUNDAY);      // 11 December
    assert(dayOfWeek(MONDAY, FALSE, 12, 12) == MONDAY);      // 12 December
    assert(dayOfWeek(MONDAY, FALSE, 12, 13) == TUESDAY);     // 13 December
    assert(dayOfWeek(MONDAY, FALSE, 12, 14) == WEDNESDAY);   // 14 December
    assert(dayOfWeek(MONDAY, FALSE, 12, 15) == THURSDAY);    // 15 December
    assert(dayOfWeek(MONDAY, FALSE, 12, 16) == FRIDAY);      // 16 December
    assert(dayOfWeek(MONDAY, FALSE, 12, 17) == SATURDAY);    // 17 December
    assert(dayOfWeek(MONDAY, FALSE, 12, 18) == SUNDAY);      // 18 December
    assert(dayOfWeek(MONDAY, FALSE, 12, 19) == MONDAY);      // 19 December
    assert(dayOfWeek(MONDAY, FALSE, 12, 20) == TUESDAY);     // 20 December
    assert(dayOfWeek(MONDAY, FALSE, 12, 21) == WEDNESDAY);   // 21 December
    assert(dayOfWeek(MONDAY, FALSE, 12, 22) == THURSDAY);    // 22 December
    assert(dayOfWeek(MONDAY, FALSE, 12, 23) == FRIDAY);      // 23 December
    assert(dayOfWeek(MONDAY, FALSE, 12, 24) == SATURDAY);    // 24 December
    assert(dayOfWeek(MONDAY, FALSE, 12, 25) == SUNDAY);      // 25 December
    assert(dayOfWeek(MONDAY, FALSE, 12, 26) == MONDAY);      // 26 December
    assert(dayOfWeek(MONDAY, FALSE, 12, 27) == TUESDAY);     // 27 December
    assert(dayOfWeek(MONDAY, FALSE, 12, 28) == WEDNESDAY);   // 28 December
    assert(dayOfWeek(MONDAY, FALSE, 12, 29) == THURSDAY);    // 29 December
    assert(dayOfWeek(MONDAY, FALSE, 12, 30) == FRIDAY);      // 30 December
    assert(dayOfWeek(MONDAY, FALSE, 12, 31) == SATURDAY);    // 31 December
    // Doomsday = TUESDAY, leapyear = No
    assert(dayOfWeek(TUESDAY, FALSE, 1, 1) == SUNDAY);       // 1 January
    assert(dayOfWeek(TUESDAY, FALSE, 1, 2) == MONDAY);       // 2 January
    assert(dayOfWeek(TUESDAY, FALSE, 1, 3) == TUESDAY);      // 3 January
    assert(dayOfWeek(TUESDAY, FALSE, 1, 4) == WEDNESDAY);    // 4 January
    assert(dayOfWeek(TUESDAY, FALSE, 1, 5) == THURSDAY);     // 5 January
    assert(dayOfWeek(TUESDAY, FALSE, 1, 6) == FRIDAY);       // 6 January
    assert(dayOfWeek(TUESDAY, FALSE, 1, 7) == SATURDAY);     // 7 January
    assert(dayOfWeek(TUESDAY, FALSE, 1, 8) == SUNDAY);       // 8 January
    assert(dayOfWeek(TUESDAY, FALSE, 1, 9) == MONDAY);       // 9 January
    assert(dayOfWeek(TUESDAY, FALSE, 1, 10) == TUESDAY);     // 10 January
    assert(dayOfWeek(TUESDAY, FALSE, 1, 11) == WEDNESDAY);   // 11 January
    assert(dayOfWeek(TUESDAY, FALSE, 1, 12) == THURSDAY);    // 12 January
    assert(dayOfWeek(TUESDAY, FALSE, 1, 13) == FRIDAY);      // 13 January
    assert(dayOfWeek(TUESDAY, FALSE, 1, 14) == SATURDAY);    // 14 January
    assert(dayOfWeek(TUESDAY, FALSE, 1, 15) == SUNDAY);      // 15 January
    assert(dayOfWeek(TUESDAY, FALSE, 1, 16) == MONDAY);      // 16 January
    assert(dayOfWeek(TUESDAY, FALSE, 1, 17) == TUESDAY);     // 17 January
    assert(dayOfWeek(TUESDAY, FALSE, 1, 18) == WEDNESDAY);   // 18 January
    assert(dayOfWeek(TUESDAY, FALSE, 1, 19) == THURSDAY);    // 19 January
    assert(dayOfWeek(TUESDAY, FALSE, 1, 20) == FRIDAY);      // 20 January
    assert(dayOfWeek(TUESDAY, FALSE, 1, 21) == SATURDAY);    // 21 January
    assert(dayOfWeek(TUESDAY, FALSE, 1, 22) == SUNDAY);      // 22 January
    assert(dayOfWeek(TUESDAY, FALSE, 1, 23) == MONDAY);      // 23 January
    assert(dayOfWeek(TUESDAY, FALSE, 1, 24) == TUESDAY);     // 24 January
    assert(dayOfWeek(TUESDAY, FALSE, 1, 25) == WEDNESDAY);   // 25 January
    assert(dayOfWeek(TUESDAY, FALSE, 1, 26) == THURSDAY);    // 26 January
    assert(dayOfWeek(TUESDAY, FALSE, 1, 27) == FRIDAY);      // 27 January
    assert(dayOfWeek(TUESDAY, FALSE, 1, 28) == SATURDAY);    // 28 January
    assert(dayOfWeek(TUESDAY, FALSE, 1, 29) == SUNDAY);      // 29 January
    assert(dayOfWeek(TUESDAY, FALSE, 1, 30) == MONDAY);      // 30 January
    assert(dayOfWeek(TUESDAY, FALSE, 1, 31) == TUESDAY);     // 31 January
    assert(dayOfWeek(TUESDAY, FALSE, 2, 1) == WEDNESDAY);    // 1 February
    assert(dayOfWeek(TUESDAY, FALSE, 2, 2) == THURSDAY);     // 2 February
    assert(dayOfWeek(TUESDAY, FALSE, 2, 3) == FRIDAY);       // 3 February
    assert(dayOfWeek(TUESDAY, FALSE, 2, 4) == SATURDAY);     // 4 February
    assert(dayOfWeek(TUESDAY, FALSE, 2, 5) == SUNDAY);       // 5 February
    assert(dayOfWeek(TUESDAY, FALSE, 2, 6) == MONDAY);       // 6 February
    assert(dayOfWeek(TUESDAY, FALSE, 2, 7) == TUESDAY);      // 7 February
    assert(dayOfWeek(TUESDAY, FALSE, 2, 8) == WEDNESDAY);    // 8 February
    assert(dayOfWeek(TUESDAY, FALSE, 2, 9) == THURSDAY);     // 9 February
    assert(dayOfWeek(TUESDAY, FALSE, 2, 10) == FRIDAY);      // 10 February
    assert(dayOfWeek(TUESDAY, FALSE, 2, 11) == SATURDAY);    // 11 February
    assert(dayOfWeek(TUESDAY, FALSE, 2, 12) == SUNDAY);      // 12 February
    assert(dayOfWeek(TUESDAY, FALSE, 2, 13) == MONDAY);      // 13 February
    assert(dayOfWeek(TUESDAY, FALSE, 2, 14) == TUESDAY);     // 14 February
    assert(dayOfWeek(TUESDAY, FALSE, 2, 15) == WEDNESDAY);   // 15 February
    assert(dayOfWeek(TUESDAY, FALSE, 2, 16) == THURSDAY);    // 16 February
    assert(dayOfWeek(TUESDAY, FALSE, 2, 17) == FRIDAY);      // 17 February
    assert(dayOfWeek(TUESDAY, FALSE, 2, 18) == SATURDAY);    // 18 February
    assert(dayOfWeek(TUESDAY, FALSE, 2, 19) == SUNDAY);      // 19 February
    assert(dayOfWeek(TUESDAY, FALSE, 2, 20) == MONDAY);      // 20 February
    assert(dayOfWeek(TUESDAY, FALSE, 2, 21) == TUESDAY);     // 21 February
    assert(dayOfWeek(TUESDAY, FALSE, 2, 22) == WEDNESDAY);   // 22 February
    assert(dayOfWeek(TUESDAY, FALSE, 2, 23) == THURSDAY);    // 23 February
    assert(dayOfWeek(TUESDAY, FALSE, 2, 24) == FRIDAY);      // 24 February
    assert(dayOfWeek(TUESDAY, FALSE, 2, 25) == SATURDAY);    // 25 February
    assert(dayOfWeek(TUESDAY, FALSE, 2, 26) == SUNDAY);      // 26 February
    assert(dayOfWeek(TUESDAY, FALSE, 2, 27) == MONDAY);      // 27 February
    assert(dayOfWeek(TUESDAY, FALSE, 2, 28) == TUESDAY);     // 28 February
    assert(dayOfWeek(TUESDAY, FALSE, 3, 1) == WEDNESDAY);    // 1 March
    assert(dayOfWeek(TUESDAY, FALSE, 3, 2) == THURSDAY);     // 2 March
    assert(dayOfWeek(TUESDAY, FALSE, 3, 3) == FRIDAY);       // 3 March
    assert(dayOfWeek(TUESDAY, FALSE, 3, 4) == SATURDAY);     // 4 March
    assert(dayOfWeek(TUESDAY, FALSE, 3, 5) == SUNDAY);       // 5 March
    assert(dayOfWeek(TUESDAY, FALSE, 3, 6) == MONDAY);       // 6 March
    assert(dayOfWeek(TUESDAY, FALSE, 3, 7) == TUESDAY);      // 7 March
    assert(dayOfWeek(TUESDAY, FALSE, 3, 8) == WEDNESDAY);    // 8 March
    assert(dayOfWeek(TUESDAY, FALSE, 3, 9) == THURSDAY);     // 9 March
    assert(dayOfWeek(TUESDAY, FALSE, 3, 10) == FRIDAY);      // 10 March
    assert(dayOfWeek(TUESDAY, FALSE, 3, 11) == SATURDAY);    // 11 March
    assert(dayOfWeek(TUESDAY, FALSE, 3, 12) == SUNDAY);      // 12 March
    assert(dayOfWeek(TUESDAY, FALSE, 3, 13) == MONDAY);      // 13 March
    assert(dayOfWeek(TUESDAY, FALSE, 3, 14) == TUESDAY);     // 14 March
    assert(dayOfWeek(TUESDAY, FALSE, 3, 15) == WEDNESDAY);   // 15 March
    assert(dayOfWeek(TUESDAY, FALSE, 3, 16) == THURSDAY);    // 16 March
    assert(dayOfWeek(TUESDAY, FALSE, 3, 17) == FRIDAY);      // 17 March
    assert(dayOfWeek(TUESDAY, FALSE, 3, 18) == SATURDAY);    // 18 March
    assert(dayOfWeek(TUESDAY, FALSE, 3, 19) == SUNDAY);      // 19 March
    assert(dayOfWeek(TUESDAY, FALSE, 3, 20) == MONDAY);      // 20 March
    assert(dayOfWeek(TUESDAY, FALSE, 3, 21) == TUESDAY);     // 21 March
    assert(dayOfWeek(TUESDAY, FALSE, 3, 22) == WEDNESDAY);   // 22 March
    assert(dayOfWeek(TUESDAY, FALSE, 3, 23) == THURSDAY);    // 23 March
    assert(dayOfWeek(TUESDAY, FALSE, 3, 24) == FRIDAY);      // 24 March
    assert(dayOfWeek(TUESDAY, FALSE, 3, 25) == SATURDAY);    // 25 March
    assert(dayOfWeek(TUESDAY, FALSE, 3, 26) == SUNDAY);      // 26 March
    assert(dayOfWeek(TUESDAY, FALSE, 3, 27) == MONDAY);      // 27 March
    assert(dayOfWeek(TUESDAY, FALSE, 3, 28) == TUESDAY);     // 28 March
    assert(dayOfWeek(TUESDAY, FALSE, 3, 29) == WEDNESDAY);   // 29 March
    assert(dayOfWeek(TUESDAY, FALSE, 3, 30) == THURSDAY);    // 30 March
    assert(dayOfWeek(TUESDAY, FALSE, 3, 31) == FRIDAY);      // 31 March
    assert(dayOfWeek(TUESDAY, FALSE, 4, 1) == SATURDAY);     // 1 April
    assert(dayOfWeek(TUESDAY, FALSE, 4, 2) == SUNDAY);       // 2 April
    assert(dayOfWeek(TUESDAY, FALSE, 4, 3) == MONDAY);       // 3 April
    assert(dayOfWeek(TUESDAY, FALSE, 4, 4) == TUESDAY);      // 4 April
    assert(dayOfWeek(TUESDAY, FALSE, 4, 5) == WEDNESDAY);    // 5 April
    assert(dayOfWeek(TUESDAY, FALSE, 4, 6) == THURSDAY);     // 6 April
    assert(dayOfWeek(TUESDAY, FALSE, 4, 7) == FRIDAY);       // 7 April
    assert(dayOfWeek(TUESDAY, FALSE, 4, 8) == SATURDAY);     // 8 April
    assert(dayOfWeek(TUESDAY, FALSE, 4, 9) == SUNDAY);       // 9 April
    assert(dayOfWeek(TUESDAY, FALSE, 4, 10) == MONDAY);      // 10 April
    assert(dayOfWeek(TUESDAY, FALSE, 4, 11) == TUESDAY);     // 11 April
    assert(dayOfWeek(TUESDAY, FALSE, 4, 12) == WEDNESDAY);   // 12 April
    assert(dayOfWeek(TUESDAY, FALSE, 4, 13) == THURSDAY);    // 13 April
    assert(dayOfWeek(TUESDAY, FALSE, 4, 14) == FRIDAY);      // 14 April
    assert(dayOfWeek(TUESDAY, FALSE, 4, 15) == SATURDAY);    // 15 April
    assert(dayOfWeek(TUESDAY, FALSE, 4, 16) == SUNDAY);      // 16 April
    assert(dayOfWeek(TUESDAY, FALSE, 4, 17) == MONDAY);      // 17 April
    assert(dayOfWeek(TUESDAY, FALSE, 4, 18) == TUESDAY);     // 18 April
    assert(dayOfWeek(TUESDAY, FALSE, 4, 19) == WEDNESDAY);   // 19 April
    assert(dayOfWeek(TUESDAY, FALSE, 4, 20) == THURSDAY);    // 20 April
    assert(dayOfWeek(TUESDAY, FALSE, 4, 21) == FRIDAY);      // 21 April
    assert(dayOfWeek(TUESDAY, FALSE, 4, 22) == SATURDAY);    // 22 April
    assert(dayOfWeek(TUESDAY, FALSE, 4, 23) == SUNDAY);      // 23 April
    assert(dayOfWeek(TUESDAY, FALSE, 4, 24) == MONDAY);      // 24 April
    assert(dayOfWeek(TUESDAY, FALSE, 4, 25) == TUESDAY);     // 25 April
    assert(dayOfWeek(TUESDAY, FALSE, 4, 26) == WEDNESDAY);   // 26 April
    assert(dayOfWeek(TUESDAY, FALSE, 4, 27) == THURSDAY);    // 27 April
    assert(dayOfWeek(TUESDAY, FALSE, 4, 28) == FRIDAY);      // 28 April
    assert(dayOfWeek(TUESDAY, FALSE, 4, 29) == SATURDAY);    // 29 April
    assert(dayOfWeek(TUESDAY, FALSE, 4, 30) == SUNDAY);      // 30 April
    assert(dayOfWeek(TUESDAY, FALSE, 5, 1) == MONDAY);       // 1 May
    assert(dayOfWeek(TUESDAY, FALSE, 5, 2) == TUESDAY);      // 2 May
    assert(dayOfWeek(TUESDAY, FALSE, 5, 3) == WEDNESDAY);    // 3 May
    assert(dayOfWeek(TUESDAY, FALSE, 5, 4) == THURSDAY);     // 4 May
    assert(dayOfWeek(TUESDAY, FALSE, 5, 5) == FRIDAY);       // 5 May
    assert(dayOfWeek(TUESDAY, FALSE, 5, 6) == SATURDAY);     // 6 May
    assert(dayOfWeek(TUESDAY, FALSE, 5, 7) == SUNDAY);       // 7 May
    assert(dayOfWeek(TUESDAY, FALSE, 5, 8) == MONDAY);       // 8 May
    assert(dayOfWeek(TUESDAY, FALSE, 5, 9) == TUESDAY);      // 9 May
    assert(dayOfWeek(TUESDAY, FALSE, 5, 10) == WEDNESDAY);   // 10 May
    assert(dayOfWeek(TUESDAY, FALSE, 5, 11) == THURSDAY);    // 11 May
    assert(dayOfWeek(TUESDAY, FALSE, 5, 12) == FRIDAY);      // 12 May
    assert(dayOfWeek(TUESDAY, FALSE, 5, 13) == SATURDAY);    // 13 May
    assert(dayOfWeek(TUESDAY, FALSE, 5, 14) == SUNDAY);      // 14 May
    assert(dayOfWeek(TUESDAY, FALSE, 5, 15) == MONDAY);      // 15 May
    assert(dayOfWeek(TUESDAY, FALSE, 5, 16) == TUESDAY);     // 16 May
    assert(dayOfWeek(TUESDAY, FALSE, 5, 17) == WEDNESDAY);   // 17 May
    assert(dayOfWeek(TUESDAY, FALSE, 5, 18) == THURSDAY);    // 18 May
    assert(dayOfWeek(TUESDAY, FALSE, 5, 19) == FRIDAY);      // 19 May
    assert(dayOfWeek(TUESDAY, FALSE, 5, 20) == SATURDAY);    // 20 May
    assert(dayOfWeek(TUESDAY, FALSE, 5, 21) == SUNDAY);      // 21 May
    assert(dayOfWeek(TUESDAY, FALSE, 5, 22) == MONDAY);      // 22 May
    assert(dayOfWeek(TUESDAY, FALSE, 5, 23) == TUESDAY);     // 23 May
    assert(dayOfWeek(TUESDAY, FALSE, 5, 24) == WEDNESDAY);   // 24 May
    assert(dayOfWeek(TUESDAY, FALSE, 5, 25) == THURSDAY);    // 25 May
    assert(dayOfWeek(TUESDAY, FALSE, 5, 26) == FRIDAY);      // 26 May
    assert(dayOfWeek(TUESDAY, FALSE, 5, 27) == SATURDAY);    // 27 May
    assert(dayOfWeek(TUESDAY, FALSE, 5, 28) == SUNDAY);      // 28 May
    assert(dayOfWeek(TUESDAY, FALSE, 5, 29) == MONDAY);      // 29 May
    assert(dayOfWeek(TUESDAY, FALSE, 5, 30) == TUESDAY);     // 30 May
    assert(dayOfWeek(TUESDAY, FALSE, 5, 31) == WEDNESDAY);   // 31 May
    assert(dayOfWeek(TUESDAY, FALSE, 6, 1) == THURSDAY);     // 1 June
    assert(dayOfWeek(TUESDAY, FALSE, 6, 2) == FRIDAY);       // 2 June
    assert(dayOfWeek(TUESDAY, FALSE, 6, 3) == SATURDAY);     // 3 June
    assert(dayOfWeek(TUESDAY, FALSE, 6, 4) == SUNDAY);       // 4 June
    assert(dayOfWeek(TUESDAY, FALSE, 6, 5) == MONDAY);       // 5 June
    assert(dayOfWeek(TUESDAY, FALSE, 6, 6) == TUESDAY);      // 6 June
    assert(dayOfWeek(TUESDAY, FALSE, 6, 7) == WEDNESDAY);    // 7 June
    assert(dayOfWeek(TUESDAY, FALSE, 6, 8) == THURSDAY);     // 8 June
    assert(dayOfWeek(TUESDAY, FALSE, 6, 9) == FRIDAY);       // 9 June
    assert(dayOfWeek(TUESDAY, FALSE, 6, 10) == SATURDAY);    // 10 June
    assert(dayOfWeek(TUESDAY, FALSE, 6, 11) == SUNDAY);      // 11 June
    assert(dayOfWeek(TUESDAY, FALSE, 6, 12) == MONDAY);      // 12 June
    assert(dayOfWeek(TUESDAY, FALSE, 6, 13) == TUESDAY);     // 13 June
    assert(dayOfWeek(TUESDAY, FALSE, 6, 14) == WEDNESDAY);   // 14 June
    assert(dayOfWeek(TUESDAY, FALSE, 6, 15) == THURSDAY);    // 15 June
    assert(dayOfWeek(TUESDAY, FALSE, 6, 16) == FRIDAY);      // 16 June
    assert(dayOfWeek(TUESDAY, FALSE, 6, 17) == SATURDAY);    // 17 June
    assert(dayOfWeek(TUESDAY, FALSE, 6, 18) == SUNDAY);      // 18 June
    assert(dayOfWeek(TUESDAY, FALSE, 6, 19) == MONDAY);      // 19 June
    assert(dayOfWeek(TUESDAY, FALSE, 6, 20) == TUESDAY);     // 20 June
    assert(dayOfWeek(TUESDAY, FALSE, 6, 21) == WEDNESDAY);   // 21 June
    assert(dayOfWeek(TUESDAY, FALSE, 6, 22) == THURSDAY);    // 22 June
    assert(dayOfWeek(TUESDAY, FALSE, 6, 23) == FRIDAY);      // 23 June
    assert(dayOfWeek(TUESDAY, FALSE, 6, 24) == SATURDAY);    // 24 June
    assert(dayOfWeek(TUESDAY, FALSE, 6, 25) == SUNDAY);      // 25 June
    assert(dayOfWeek(TUESDAY, FALSE, 6, 26) == MONDAY);      // 26 June
    assert(dayOfWeek(TUESDAY, FALSE, 6, 27) == TUESDAY);     // 27 June
    assert(dayOfWeek(TUESDAY, FALSE, 6, 28) == WEDNESDAY);   // 28 June
    assert(dayOfWeek(TUESDAY, FALSE, 6, 29) == THURSDAY);    // 29 June
    assert(dayOfWeek(TUESDAY, FALSE, 6, 30) == FRIDAY);      // 30 June
    assert(dayOfWeek(TUESDAY, FALSE, 7, 1) == SATURDAY);     // 1 July
    assert(dayOfWeek(TUESDAY, FALSE, 7, 2) == SUNDAY);       // 2 July
    assert(dayOfWeek(TUESDAY, FALSE, 7, 3) == MONDAY);       // 3 July
    assert(dayOfWeek(TUESDAY, FALSE, 7, 4) == TUESDAY);      // 4 July
    assert(dayOfWeek(TUESDAY, FALSE, 7, 5) == WEDNESDAY);    // 5 July
    assert(dayOfWeek(TUESDAY, FALSE, 7, 6) == THURSDAY);     // 6 July
    assert(dayOfWeek(TUESDAY, FALSE, 7, 7) == FRIDAY);       // 7 July
    assert(dayOfWeek(TUESDAY, FALSE, 7, 8) == SATURDAY);     // 8 July
    assert(dayOfWeek(TUESDAY, FALSE, 7, 9) == SUNDAY);       // 9 July
    assert(dayOfWeek(TUESDAY, FALSE, 7, 10) == MONDAY);      // 10 July
    assert(dayOfWeek(TUESDAY, FALSE, 7, 11) == TUESDAY);     // 11 July
    assert(dayOfWeek(TUESDAY, FALSE, 7, 12) == WEDNESDAY);   // 12 July
    assert(dayOfWeek(TUESDAY, FALSE, 7, 13) == THURSDAY);    // 13 July
    assert(dayOfWeek(TUESDAY, FALSE, 7, 14) == FRIDAY);      // 14 July
    assert(dayOfWeek(TUESDAY, FALSE, 7, 15) == SATURDAY);    // 15 July
    assert(dayOfWeek(TUESDAY, FALSE, 7, 16) == SUNDAY);      // 16 July
    assert(dayOfWeek(TUESDAY, FALSE, 7, 17) == MONDAY);      // 17 July
    assert(dayOfWeek(TUESDAY, FALSE, 7, 18) == TUESDAY);     // 18 July
    assert(dayOfWeek(TUESDAY, FALSE, 7, 19) == WEDNESDAY);   // 19 July
    assert(dayOfWeek(TUESDAY, FALSE, 7, 20) == THURSDAY);    // 20 July
    assert(dayOfWeek(TUESDAY, FALSE, 7, 21) == FRIDAY);      // 21 July
    assert(dayOfWeek(TUESDAY, FALSE, 7, 22) == SATURDAY);    // 22 July
    assert(dayOfWeek(TUESDAY, FALSE, 7, 23) == SUNDAY);      // 23 July
    assert(dayOfWeek(TUESDAY, FALSE, 7, 24) == MONDAY);      // 24 July
    assert(dayOfWeek(TUESDAY, FALSE, 7, 25) == TUESDAY);     // 25 July
    assert(dayOfWeek(TUESDAY, FALSE, 7, 26) == WEDNESDAY);   // 26 July
    assert(dayOfWeek(TUESDAY, FALSE, 7, 27) == THURSDAY);    // 27 July
    assert(dayOfWeek(TUESDAY, FALSE, 7, 28) == FRIDAY);      // 28 July
    assert(dayOfWeek(TUESDAY, FALSE, 7, 29) == SATURDAY);    // 29 July
    assert(dayOfWeek(TUESDAY, FALSE, 7, 30) == SUNDAY);      // 30 July
    assert(dayOfWeek(TUESDAY, FALSE, 7, 31) == MONDAY);      // 31 July
    assert(dayOfWeek(TUESDAY, FALSE, 8, 1) == TUESDAY);      // 1 August
    assert(dayOfWeek(TUESDAY, FALSE, 8, 2) == WEDNESDAY);    // 2 August
    assert(dayOfWeek(TUESDAY, FALSE, 8, 3) == THURSDAY);     // 3 August
    assert(dayOfWeek(TUESDAY, FALSE, 8, 4) == FRIDAY);       // 4 August
    assert(dayOfWeek(TUESDAY, FALSE, 8, 5) == SATURDAY);     // 5 August
    assert(dayOfWeek(TUESDAY, FALSE, 8, 6) == SUNDAY);       // 6 August
    assert(dayOfWeek(TUESDAY, FALSE, 8, 7) == MONDAY);       // 7 August
    assert(dayOfWeek(TUESDAY, FALSE, 8, 8) == TUESDAY);      // 8 August
    assert(dayOfWeek(TUESDAY, FALSE, 8, 9) == WEDNESDAY);    // 9 August
    assert(dayOfWeek(TUESDAY, FALSE, 8, 10) == THURSDAY);    // 10 August
    assert(dayOfWeek(TUESDAY, FALSE, 8, 11) == FRIDAY);      // 11 August
    assert(dayOfWeek(TUESDAY, FALSE, 8, 12) == SATURDAY);    // 12 August
    assert(dayOfWeek(TUESDAY, FALSE, 8, 13) == SUNDAY);      // 13 August
    assert(dayOfWeek(TUESDAY, FALSE, 8, 14) == MONDAY);      // 14 August
    assert(dayOfWeek(TUESDAY, FALSE, 8, 15) == TUESDAY);     // 15 August
    assert(dayOfWeek(TUESDAY, FALSE, 8, 16) == WEDNESDAY);   // 16 August
    assert(dayOfWeek(TUESDAY, FALSE, 8, 17) == THURSDAY);    // 17 August
    assert(dayOfWeek(TUESDAY, FALSE, 8, 18) == FRIDAY);      // 18 August
    assert(dayOfWeek(TUESDAY, FALSE, 8, 19) == SATURDAY);    // 19 August
    assert(dayOfWeek(TUESDAY, FALSE, 8, 20) == SUNDAY);      // 20 August
    assert(dayOfWeek(TUESDAY, FALSE, 8, 21) == MONDAY);      // 21 August
    assert(dayOfWeek(TUESDAY, FALSE, 8, 22) == TUESDAY);     // 22 August
    assert(dayOfWeek(TUESDAY, FALSE, 8, 23) == WEDNESDAY);   // 23 August
    assert(dayOfWeek(TUESDAY, FALSE, 8, 24) == THURSDAY);    // 24 August
    assert(dayOfWeek(TUESDAY, FALSE, 8, 25) == FRIDAY);      // 25 August
    assert(dayOfWeek(TUESDAY, FALSE, 8, 26) == SATURDAY);    // 26 August
    assert(dayOfWeek(TUESDAY, FALSE, 8, 27) == SUNDAY);      // 27 August
    assert(dayOfWeek(TUESDAY, FALSE, 8, 28) == MONDAY);      // 28 August
    assert(dayOfWeek(TUESDAY, FALSE, 8, 29) == TUESDAY);     // 29 August
    assert(dayOfWeek(TUESDAY, FALSE, 8, 30) == WEDNESDAY);   // 30 August
    assert(dayOfWeek(TUESDAY, FALSE, 8, 31) == THURSDAY);    // 31 August
    assert(dayOfWeek(TUESDAY, FALSE, 9, 1) == FRIDAY);       // 1 September
    assert(dayOfWeek(TUESDAY, FALSE, 9, 2) == SATURDAY);     // 2 September
    assert(dayOfWeek(TUESDAY, FALSE, 9, 3) == SUNDAY);       // 3 September
    assert(dayOfWeek(TUESDAY, FALSE, 9, 4) == MONDAY);       // 4 September
    assert(dayOfWeek(TUESDAY, FALSE, 9, 5) == TUESDAY);      // 5 September
    assert(dayOfWeek(TUESDAY, FALSE, 9, 6) == WEDNESDAY);    // 6 September
    assert(dayOfWeek(TUESDAY, FALSE, 9, 7) == THURSDAY);     // 7 September
    assert(dayOfWeek(TUESDAY, FALSE, 9, 8) == FRIDAY);       // 8 September
    assert(dayOfWeek(TUESDAY, FALSE, 9, 9) == SATURDAY);     // 9 September
    assert(dayOfWeek(TUESDAY, FALSE, 9, 10) == SUNDAY);      // 10 September
    assert(dayOfWeek(TUESDAY, FALSE, 9, 11) == MONDAY);      // 11 September
    assert(dayOfWeek(TUESDAY, FALSE, 9, 12) == TUESDAY);     // 12 September
    assert(dayOfWeek(TUESDAY, FALSE, 9, 13) == WEDNESDAY);   // 13 September
    assert(dayOfWeek(TUESDAY, FALSE, 9, 14) == THURSDAY);    // 14 September
    assert(dayOfWeek(TUESDAY, FALSE, 9, 15) == FRIDAY);      // 15 September
    assert(dayOfWeek(TUESDAY, FALSE, 9, 16) == SATURDAY);    // 16 September
    assert(dayOfWeek(TUESDAY, FALSE, 9, 17) == SUNDAY);      // 17 September
    assert(dayOfWeek(TUESDAY, FALSE, 9, 18) == MONDAY);      // 18 September
    assert(dayOfWeek(TUESDAY, FALSE, 9, 19) == TUESDAY);     // 19 September
    assert(dayOfWeek(TUESDAY, FALSE, 9, 20) == WEDNESDAY);   // 20 September
    assert(dayOfWeek(TUESDAY, FALSE, 9, 21) == THURSDAY);    // 21 September
    assert(dayOfWeek(TUESDAY, FALSE, 9, 22) == FRIDAY);      // 22 September
    assert(dayOfWeek(TUESDAY, FALSE, 9, 23) == SATURDAY);    // 23 September
    assert(dayOfWeek(TUESDAY, FALSE, 9, 24) == SUNDAY);      // 24 September
    assert(dayOfWeek(TUESDAY, FALSE, 9, 25) == MONDAY);      // 25 September
    assert(dayOfWeek(TUESDAY, FALSE, 9, 26) == TUESDAY);     // 26 September
    assert(dayOfWeek(TUESDAY, FALSE, 9, 27) == WEDNESDAY);   // 27 September
    assert(dayOfWeek(TUESDAY, FALSE, 9, 28) == THURSDAY);    // 28 September
    assert(dayOfWeek(TUESDAY, FALSE, 9, 29) == FRIDAY);      // 29 September
    assert(dayOfWeek(TUESDAY, FALSE, 9, 30) == SATURDAY);    // 30 September
    assert(dayOfWeek(TUESDAY, FALSE, 10, 1) == SUNDAY);      // 1 October
    assert(dayOfWeek(TUESDAY, FALSE, 10, 2) == MONDAY);      // 2 October
    assert(dayOfWeek(TUESDAY, FALSE, 10, 3) == TUESDAY);     // 3 October
    assert(dayOfWeek(TUESDAY, FALSE, 10, 4) == WEDNESDAY);   // 4 October
    assert(dayOfWeek(TUESDAY, FALSE, 10, 5) == THURSDAY);    // 5 October
    assert(dayOfWeek(TUESDAY, FALSE, 10, 6) == FRIDAY);      // 6 October
    assert(dayOfWeek(TUESDAY, FALSE, 10, 7) == SATURDAY);    // 7 October
    assert(dayOfWeek(TUESDAY, FALSE, 10, 8) == SUNDAY);      // 8 October
    assert(dayOfWeek(TUESDAY, FALSE, 10, 9) == MONDAY);      // 9 October
    assert(dayOfWeek(TUESDAY, FALSE, 10, 10) == TUESDAY);    // 10 October
    assert(dayOfWeek(TUESDAY, FALSE, 10, 11) == WEDNESDAY);  // 11 October
    assert(dayOfWeek(TUESDAY, FALSE, 10, 12) == THURSDAY);   // 12 October
    assert(dayOfWeek(TUESDAY, FALSE, 10, 13) == FRIDAY);     // 13 October
    assert(dayOfWeek(TUESDAY, FALSE, 10, 14) == SATURDAY);   // 14 October
    assert(dayOfWeek(TUESDAY, FALSE, 10, 15) == SUNDAY);     // 15 October
    assert(dayOfWeek(TUESDAY, FALSE, 10, 16) == MONDAY);     // 16 October
    assert(dayOfWeek(TUESDAY, FALSE, 10, 17) == TUESDAY);    // 17 October
    assert(dayOfWeek(TUESDAY, FALSE, 10, 18) == WEDNESDAY);  // 18 October
    assert(dayOfWeek(TUESDAY, FALSE, 10, 19) == THURSDAY);   // 19 October
    assert(dayOfWeek(TUESDAY, FALSE, 10, 20) == FRIDAY);     // 20 October
    assert(dayOfWeek(TUESDAY, FALSE, 10, 21) == SATURDAY);   // 21 October
    assert(dayOfWeek(TUESDAY, FALSE, 10, 22) == SUNDAY);     // 22 October
    assert(dayOfWeek(TUESDAY, FALSE, 10, 23) == MONDAY);     // 23 October
    assert(dayOfWeek(TUESDAY, FALSE, 10, 24) == TUESDAY);    // 24 October
    assert(dayOfWeek(TUESDAY, FALSE, 10, 25) == WEDNESDAY);  // 25 October
    assert(dayOfWeek(TUESDAY, FALSE, 10, 26) == THURSDAY);   // 26 October
    assert(dayOfWeek(TUESDAY, FALSE, 10, 27) == FRIDAY);     // 27 October
    assert(dayOfWeek(TUESDAY, FALSE, 10, 28) == SATURDAY);   // 28 October
    assert(dayOfWeek(TUESDAY, FALSE, 10, 29) == SUNDAY);     // 29 October
    assert(dayOfWeek(TUESDAY, FALSE, 10, 30) == MONDAY);     // 30 October
    assert(dayOfWeek(TUESDAY, FALSE, 10, 31) == TUESDAY);    // 31 October
    assert(dayOfWeek(TUESDAY, FALSE, 11, 1) == WEDNESDAY);   // 1 November
    assert(dayOfWeek(TUESDAY, FALSE, 11, 2) == THURSDAY);    // 2 November
    assert(dayOfWeek(TUESDAY, FALSE, 11, 3) == FRIDAY);      // 3 November
    assert(dayOfWeek(TUESDAY, FALSE, 11, 4) == SATURDAY);    // 4 November
    assert(dayOfWeek(TUESDAY, FALSE, 11, 5) == SUNDAY);      // 5 November
    assert(dayOfWeek(TUESDAY, FALSE, 11, 6) == MONDAY);      // 6 November
    assert(dayOfWeek(TUESDAY, FALSE, 11, 7) == TUESDAY);     // 7 November
    assert(dayOfWeek(TUESDAY, FALSE, 11, 8) == WEDNESDAY);   // 8 November
    assert(dayOfWeek(TUESDAY, FALSE, 11, 9) == THURSDAY);    // 9 November
    assert(dayOfWeek(TUESDAY, FALSE, 11, 10) == FRIDAY);     // 10 November
    assert(dayOfWeek(TUESDAY, FALSE, 11, 11) == SATURDAY);   // 11 November
    assert(dayOfWeek(TUESDAY, FALSE, 11, 12) == SUNDAY);     // 12 November
    assert(dayOfWeek(TUESDAY, FALSE, 11, 13) == MONDAY);     // 13 November
    assert(dayOfWeek(TUESDAY, FALSE, 11, 14) == TUESDAY);    // 14 November
    assert(dayOfWeek(TUESDAY, FALSE, 11, 15) == WEDNESDAY);  // 15 November
    assert(dayOfWeek(TUESDAY, FALSE, 11, 16) == THURSDAY);   // 16 November
    assert(dayOfWeek(TUESDAY, FALSE, 11, 17) == FRIDAY);     // 17 November
    assert(dayOfWeek(TUESDAY, FALSE, 11, 18) == SATURDAY);   // 18 November
    assert(dayOfWeek(TUESDAY, FALSE, 11, 19) == SUNDAY);     // 19 November
    assert(dayOfWeek(TUESDAY, FALSE, 11, 20) == MONDAY);     // 20 November
    assert(dayOfWeek(TUESDAY, FALSE, 11, 21) == TUESDAY);    // 21 November
    assert(dayOfWeek(TUESDAY, FALSE, 11, 22) == WEDNESDAY);  // 22 November
    assert(dayOfWeek(TUESDAY, FALSE, 11, 23) == THURSDAY);   // 23 November
    assert(dayOfWeek(TUESDAY, FALSE, 11, 24) == FRIDAY);     // 24 November
    assert(dayOfWeek(TUESDAY, FALSE, 11, 25) == SATURDAY);   // 25 November
    assert(dayOfWeek(TUESDAY, FALSE, 11, 26) == SUNDAY);     // 26 November
    assert(dayOfWeek(TUESDAY, FALSE, 11, 27) == MONDAY);     // 27 November
    assert(dayOfWeek(TUESDAY, FALSE, 11, 28) == TUESDAY);    // 28 November
    assert(dayOfWeek(TUESDAY, FALSE, 11, 29) == WEDNESDAY);  // 29 November
    assert(dayOfWeek(TUESDAY, FALSE, 11, 30) == THURSDAY);   // 30 November
    assert(dayOfWeek(TUESDAY, FALSE, 12, 1) == FRIDAY);      // 1 December
    assert(dayOfWeek(TUESDAY, FALSE, 12, 2) == SATURDAY);    // 2 December
    assert(dayOfWeek(TUESDAY, FALSE, 12, 3) == SUNDAY);      // 3 December
    assert(dayOfWeek(TUESDAY, FALSE, 12, 4) == MONDAY);      // 4 December
    assert(dayOfWeek(TUESDAY, FALSE, 12, 5) == TUESDAY);     // 5 December
    assert(dayOfWeek(TUESDAY, FALSE, 12, 6) == WEDNESDAY);   // 6 December
    assert(dayOfWeek(TUESDAY, FALSE, 12, 7) == THURSDAY);    // 7 December
    assert(dayOfWeek(TUESDAY, FALSE, 12, 8) == FRIDAY);      // 8 December
    assert(dayOfWeek(TUESDAY, FALSE, 12, 9) == SATURDAY);    // 9 December
    assert(dayOfWeek(TUESDAY, FALSE, 12, 10) == SUNDAY);     // 10 December
    assert(dayOfWeek(TUESDAY, FALSE, 12, 11) == MONDAY);     // 11 December
    assert(dayOfWeek(TUESDAY, FALSE, 12, 12) == TUESDAY);    // 12 December
    assert(dayOfWeek(TUESDAY, FALSE, 12, 13) == WEDNESDAY);  // 13 December
    assert(dayOfWeek(TUESDAY, FALSE, 12, 14) == THURSDAY);   // 14 December
    assert(dayOfWeek(TUESDAY, FALSE, 12, 15) == FRIDAY);     // 15 December
    assert(dayOfWeek(TUESDAY, FALSE, 12, 16) == SATURDAY);   // 16 December
    assert(dayOfWeek(TUESDAY, FALSE, 12, 17) == SUNDAY);     // 17 December
    assert(dayOfWeek(TUESDAY, FALSE, 12, 18) == MONDAY);     // 18 December
    assert(dayOfWeek(TUESDAY, FALSE, 12, 19) == TUESDAY);    // 19 December
    assert(dayOfWeek(TUESDAY, FALSE, 12, 20) == WEDNESDAY);  // 20 December
    assert(dayOfWeek(TUESDAY, FALSE, 12, 21) == THURSDAY);   // 21 December
    assert(dayOfWeek(TUESDAY, FALSE, 12, 22) == FRIDAY);     // 22 December
    assert(dayOfWeek(TUESDAY, FALSE, 12, 23) == SATURDAY);   // 23 December
    assert(dayOfWeek(TUESDAY, FALSE, 12, 24) == SUNDAY);     // 24 December
    assert(dayOfWeek(TUESDAY, FALSE, 12, 25) == MONDAY);     // 25 December
    assert(dayOfWeek(TUESDAY, FALSE, 12, 26) == TUESDAY);    // 26 December
    assert(dayOfWeek(TUESDAY, FALSE, 12, 27) == WEDNESDAY);  // 27 December
    assert(dayOfWeek(TUESDAY, FALSE, 12, 28) == THURSDAY);   // 28 December
    assert(dayOfWeek(TUESDAY, FALSE, 12, 29) == FRIDAY);     // 29 December
    assert(dayOfWeek(TUESDAY, FALSE, 12, 30) == SATURDAY);   // 30 December
    assert(dayOfWeek(TUESDAY, FALSE, 12, 31) == SUNDAY);     // 31 December
    // Doomsday = WEDNESDAY, leapyear = No
    assert(dayOfWeek(WEDNESDAY, FALSE, 1, 1) == MONDAY);     // 1 January
    assert(dayOfWeek(WEDNESDAY, FALSE, 1, 2) == TUESDAY);    // 2 January
    assert(dayOfWeek(WEDNESDAY, FALSE, 1, 3) == WEDNESDAY);  // 3 January
    assert(dayOfWeek(WEDNESDAY, FALSE, 1, 4) == THURSDAY);   // 4 January
    assert(dayOfWeek(WEDNESDAY, FALSE, 1, 5) == FRIDAY);     // 5 January
    assert(dayOfWeek(WEDNESDAY, FALSE, 1, 6) == SATURDAY);   // 6 January
    assert(dayOfWeek(WEDNESDAY, FALSE, 1, 7) == SUNDAY);     // 7 January
    assert(dayOfWeek(WEDNESDAY, FALSE, 1, 8) == MONDAY);     // 8 January
    assert(dayOfWeek(WEDNESDAY, FALSE, 1, 9) == TUESDAY);    // 9 January
    assert(dayOfWeek(WEDNESDAY, FALSE, 1, 10) == WEDNESDAY); // 10 January
    assert(dayOfWeek(WEDNESDAY, FALSE, 1, 11) == THURSDAY);  // 11 January
    assert(dayOfWeek(WEDNESDAY, FALSE, 1, 12) == FRIDAY);    // 12 January
    assert(dayOfWeek(WEDNESDAY, FALSE, 1, 13) == SATURDAY);  // 13 January
    assert(dayOfWeek(WEDNESDAY, FALSE, 1, 14) == SUNDAY);    // 14 January
    assert(dayOfWeek(WEDNESDAY, FALSE, 1, 15) == MONDAY);    // 15 January
    assert(dayOfWeek(WEDNESDAY, FALSE, 1, 16) == TUESDAY);   // 16 January
    assert(dayOfWeek(WEDNESDAY, FALSE, 1, 17) == WEDNESDAY); // 17 January
    assert(dayOfWeek(WEDNESDAY, FALSE, 1, 18) == THURSDAY);  // 18 January
    assert(dayOfWeek(WEDNESDAY, FALSE, 1, 19) == FRIDAY);    // 19 January
    assert(dayOfWeek(WEDNESDAY, FALSE, 1, 20) == SATURDAY);  // 20 January
    assert(dayOfWeek(WEDNESDAY, FALSE, 1, 21) == SUNDAY);    // 21 January
    assert(dayOfWeek(WEDNESDAY, FALSE, 1, 22) == MONDAY);    // 22 January
    assert(dayOfWeek(WEDNESDAY, FALSE, 1, 23) == TUESDAY);   // 23 January
    assert(dayOfWeek(WEDNESDAY, FALSE, 1, 24) == WEDNESDAY); // 24 January
    assert(dayOfWeek(WEDNESDAY, FALSE, 1, 25) == THURSDAY);  // 25 January
    assert(dayOfWeek(WEDNESDAY, FALSE, 1, 26) == FRIDAY);    // 26 January
    assert(dayOfWeek(WEDNESDAY, FALSE, 1, 27) == SATURDAY);  // 27 January
    assert(dayOfWeek(WEDNESDAY, FALSE, 1, 28) == SUNDAY);    // 28 January
    assert(dayOfWeek(WEDNESDAY, FALSE, 1, 29) == MONDAY);    // 29 January
    assert(dayOfWeek(WEDNESDAY, FALSE, 1, 30) == TUESDAY);   // 30 January
    assert(dayOfWeek(WEDNESDAY, FALSE, 1, 31) == WEDNESDAY); // 31 January
    assert(dayOfWeek(WEDNESDAY, FALSE, 2, 1) == THURSDAY);   // 1 February
    assert(dayOfWeek(WEDNESDAY, FALSE, 2, 2) == FRIDAY);     // 2 February
    assert(dayOfWeek(WEDNESDAY, FALSE, 2, 3) == SATURDAY);   // 3 February
    assert(dayOfWeek(WEDNESDAY, FALSE, 2, 4) == SUNDAY);     // 4 February
    assert(dayOfWeek(WEDNESDAY, FALSE, 2, 5) == MONDAY);     // 5 February
    assert(dayOfWeek(WEDNESDAY, FALSE, 2, 6) == TUESDAY);    // 6 February
    assert(dayOfWeek(WEDNESDAY, FALSE, 2, 7) == WEDNESDAY);  // 7 February
    assert(dayOfWeek(WEDNESDAY, FALSE, 2, 8) == THURSDAY);   // 8 February
    assert(dayOfWeek(WEDNESDAY, FALSE, 2, 9) == FRIDAY);     // 9 February
    assert(dayOfWeek(WEDNESDAY, FALSE, 2, 10) == SATURDAY);  // 10 February
    assert(dayOfWeek(WEDNESDAY, FALSE, 2, 11) == SUNDAY);    // 11 February
    assert(dayOfWeek(WEDNESDAY, FALSE, 2, 12) == MONDAY);    // 12 February
    assert(dayOfWeek(WEDNESDAY, FALSE, 2, 13) == TUESDAY);   // 13 February
    assert(dayOfWeek(WEDNESDAY, FALSE, 2, 14) == WEDNESDAY); // 14 February
    assert(dayOfWeek(WEDNESDAY, FALSE, 2, 15) == THURSDAY);  // 15 February
    assert(dayOfWeek(WEDNESDAY, FALSE, 2, 16) == FRIDAY);    // 16 February
    assert(dayOfWeek(WEDNESDAY, FALSE, 2, 17) == SATURDAY);  // 17 February
    assert(dayOfWeek(WEDNESDAY, FALSE, 2, 18) == SUNDAY);    // 18 February
    assert(dayOfWeek(WEDNESDAY, FALSE, 2, 19) == MONDAY);    // 19 February
    assert(dayOfWeek(WEDNESDAY, FALSE, 2, 20) == TUESDAY);   // 20 February
    assert(dayOfWeek(WEDNESDAY, FALSE, 2, 21) == WEDNESDAY); // 21 February
    assert(dayOfWeek(WEDNESDAY, FALSE, 2, 22) == THURSDAY);  // 22 February
    assert(dayOfWeek(WEDNESDAY, FALSE, 2, 23) == FRIDAY);    // 23 February
    assert(dayOfWeek(WEDNESDAY, FALSE, 2, 24) == SATURDAY);  // 24 February
    assert(dayOfWeek(WEDNESDAY, FALSE, 2, 25) == SUNDAY);    // 25 February
    assert(dayOfWeek(WEDNESDAY, FALSE, 2, 26) == MONDAY);    // 26 February
    assert(dayOfWeek(WEDNESDAY, FALSE, 2, 27) == TUESDAY);   // 27 February
    assert(dayOfWeek(WEDNESDAY, FALSE, 2, 28) == WEDNESDAY); // 28 February
    assert(dayOfWeek(WEDNESDAY, FALSE, 3, 1) == THURSDAY);   // 1 March
    assert(dayOfWeek(WEDNESDAY, FALSE, 3, 2) == FRIDAY);     // 2 March
    assert(dayOfWeek(WEDNESDAY, FALSE, 3, 3) == SATURDAY);   // 3 March
    assert(dayOfWeek(WEDNESDAY, FALSE, 3, 4) == SUNDAY);     // 4 March
    assert(dayOfWeek(WEDNESDAY, FALSE, 3, 5) == MONDAY);     // 5 March
    assert(dayOfWeek(WEDNESDAY, FALSE, 3, 6) == TUESDAY);    // 6 March
    assert(dayOfWeek(WEDNESDAY, FALSE, 3, 7) == WEDNESDAY);  // 7 March
    assert(dayOfWeek(WEDNESDAY, FALSE, 3, 8) == THURSDAY);   // 8 March
    assert(dayOfWeek(WEDNESDAY, FALSE, 3, 9) == FRIDAY);     // 9 March
    assert(dayOfWeek(WEDNESDAY, FALSE, 3, 10) == SATURDAY);  // 10 March
    assert(dayOfWeek(WEDNESDAY, FALSE, 3, 11) == SUNDAY);    // 11 March
    assert(dayOfWeek(WEDNESDAY, FALSE, 3, 12) == MONDAY);    // 12 March
    assert(dayOfWeek(WEDNESDAY, FALSE, 3, 13) == TUESDAY);   // 13 March
    assert(dayOfWeek(WEDNESDAY, FALSE, 3, 14) == WEDNESDAY); // 14 March
    assert(dayOfWeek(WEDNESDAY, FALSE, 3, 15) == THURSDAY);  // 15 March
    assert(dayOfWeek(WEDNESDAY, FALSE, 3, 16) == FRIDAY);    // 16 March
    assert(dayOfWeek(WEDNESDAY, FALSE, 3, 17) == SATURDAY);  // 17 March
    assert(dayOfWeek(WEDNESDAY, FALSE, 3, 18) == SUNDAY);    // 18 March
    assert(dayOfWeek(WEDNESDAY, FALSE, 3, 19) == MONDAY);    // 19 March
    assert(dayOfWeek(WEDNESDAY, FALSE, 3, 20) == TUESDAY);   // 20 March
    assert(dayOfWeek(WEDNESDAY, FALSE, 3, 21) == WEDNESDAY); // 21 March
    assert(dayOfWeek(WEDNESDAY, FALSE, 3, 22) == THURSDAY);  // 22 March
    assert(dayOfWeek(WEDNESDAY, FALSE, 3, 23) == FRIDAY);    // 23 March
    assert(dayOfWeek(WEDNESDAY, FALSE, 3, 24) == SATURDAY);  // 24 March
    assert(dayOfWeek(WEDNESDAY, FALSE, 3, 25) == SUNDAY);    // 25 March
    assert(dayOfWeek(WEDNESDAY, FALSE, 3, 26) == MONDAY);    // 26 March
    assert(dayOfWeek(WEDNESDAY, FALSE, 3, 27) == TUESDAY);   // 27 March
    assert(dayOfWeek(WEDNESDAY, FALSE, 3, 28) == WEDNESDAY); // 28 March
    assert(dayOfWeek(WEDNESDAY, FALSE, 3, 29) == THURSDAY);  // 29 March
    assert(dayOfWeek(WEDNESDAY, FALSE, 3, 30) == FRIDAY);    // 30 March
    assert(dayOfWeek(WEDNESDAY, FALSE, 3, 31) == SATURDAY);  // 31 March
    assert(dayOfWeek(WEDNESDAY, FALSE, 4, 1) == SUNDAY);     // 1 April
    assert(dayOfWeek(WEDNESDAY, FALSE, 4, 2) == MONDAY);     // 2 April
    assert(dayOfWeek(WEDNESDAY, FALSE, 4, 3) == TUESDAY);    // 3 April
    assert(dayOfWeek(WEDNESDAY, FALSE, 4, 4) == WEDNESDAY);  // 4 April
    assert(dayOfWeek(WEDNESDAY, FALSE, 4, 5) == THURSDAY);   // 5 April
    assert(dayOfWeek(WEDNESDAY, FALSE, 4, 6) == FRIDAY);     // 6 April
    assert(dayOfWeek(WEDNESDAY, FALSE, 4, 7) == SATURDAY);   // 7 April
    assert(dayOfWeek(WEDNESDAY, FALSE, 4, 8) == SUNDAY);     // 8 April
    assert(dayOfWeek(WEDNESDAY, FALSE, 4, 9) == MONDAY);     // 9 April
    assert(dayOfWeek(WEDNESDAY, FALSE, 4, 10) == TUESDAY);   // 10 April
    assert(dayOfWeek(WEDNESDAY, FALSE, 4, 11) == WEDNESDAY); // 11 April
    assert(dayOfWeek(WEDNESDAY, FALSE, 4, 12) == THURSDAY);  // 12 April
    assert(dayOfWeek(WEDNESDAY, FALSE, 4, 13) == FRIDAY);    // 13 April
    assert(dayOfWeek(WEDNESDAY, FALSE, 4, 14) == SATURDAY);  // 14 April
    assert(dayOfWeek(WEDNESDAY, FALSE, 4, 15) == SUNDAY);    // 15 April
    assert(dayOfWeek(WEDNESDAY, FALSE, 4, 16) == MONDAY);    // 16 April
    assert(dayOfWeek(WEDNESDAY, FALSE, 4, 17) == TUESDAY);   // 17 April
    assert(dayOfWeek(WEDNESDAY, FALSE, 4, 18) == WEDNESDAY); // 18 April
    assert(dayOfWeek(WEDNESDAY, FALSE, 4, 19) == THURSDAY);  // 19 April
    assert(dayOfWeek(WEDNESDAY, FALSE, 4, 20) == FRIDAY);    // 20 April
    assert(dayOfWeek(WEDNESDAY, FALSE, 4, 21) == SATURDAY);  // 21 April
    assert(dayOfWeek(WEDNESDAY, FALSE, 4, 22) == SUNDAY);    // 22 April
    assert(dayOfWeek(WEDNESDAY, FALSE, 4, 23) == MONDAY);    // 23 April
    assert(dayOfWeek(WEDNESDAY, FALSE, 4, 24) == TUESDAY);   // 24 April
    assert(dayOfWeek(WEDNESDAY, FALSE, 4, 25) == WEDNESDAY); // 25 April
    assert(dayOfWeek(WEDNESDAY, FALSE, 4, 26) == THURSDAY);  // 26 April
    assert(dayOfWeek(WEDNESDAY, FALSE, 4, 27) == FRIDAY);    // 27 April
    assert(dayOfWeek(WEDNESDAY, FALSE, 4, 28) == SATURDAY);  // 28 April
    assert(dayOfWeek(WEDNESDAY, FALSE, 4, 29) == SUNDAY);    // 29 April
    assert(dayOfWeek(WEDNESDAY, FALSE, 4, 30) == MONDAY);    // 30 April
    assert(dayOfWeek(WEDNESDAY, FALSE, 5, 1) == TUESDAY);    // 1 May
    assert(dayOfWeek(WEDNESDAY, FALSE, 5, 2) == WEDNESDAY);  // 2 May
    assert(dayOfWeek(WEDNESDAY, FALSE, 5, 3) == THURSDAY);   // 3 May
    assert(dayOfWeek(WEDNESDAY, FALSE, 5, 4) == FRIDAY);     // 4 May
    assert(dayOfWeek(WEDNESDAY, FALSE, 5, 5) == SATURDAY);   // 5 May
    assert(dayOfWeek(WEDNESDAY, FALSE, 5, 6) == SUNDAY);     // 6 May
    assert(dayOfWeek(WEDNESDAY, FALSE, 5, 7) == MONDAY);     // 7 May
    assert(dayOfWeek(WEDNESDAY, FALSE, 5, 8) == TUESDAY);    // 8 May
    assert(dayOfWeek(WEDNESDAY, FALSE, 5, 9) == WEDNESDAY);  // 9 May
    assert(dayOfWeek(WEDNESDAY, FALSE, 5, 10) == THURSDAY);  // 10 May
    assert(dayOfWeek(WEDNESDAY, FALSE, 5, 11) == FRIDAY);    // 11 May
    assert(dayOfWeek(WEDNESDAY, FALSE, 5, 12) == SATURDAY);  // 12 May
    assert(dayOfWeek(WEDNESDAY, FALSE, 5, 13) == SUNDAY);    // 13 May
    assert(dayOfWeek(WEDNESDAY, FALSE, 5, 14) == MONDAY);    // 14 May
    assert(dayOfWeek(WEDNESDAY, FALSE, 5, 15) == TUESDAY);   // 15 May
    assert(dayOfWeek(WEDNESDAY, FALSE, 5, 16) == WEDNESDAY); // 16 May
    assert(dayOfWeek(WEDNESDAY, FALSE, 5, 17) == THURSDAY);  // 17 May
    assert(dayOfWeek(WEDNESDAY, FALSE, 5, 18) == FRIDAY);    // 18 May
    assert(dayOfWeek(WEDNESDAY, FALSE, 5, 19) == SATURDAY);  // 19 May
    assert(dayOfWeek(WEDNESDAY, FALSE, 5, 20) == SUNDAY);    // 20 May
    assert(dayOfWeek(WEDNESDAY, FALSE, 5, 21) == MONDAY);    // 21 May
    assert(dayOfWeek(WEDNESDAY, FALSE, 5, 22) == TUESDAY);   // 22 May
    assert(dayOfWeek(WEDNESDAY, FALSE, 5, 23) == WEDNESDAY); // 23 May
    assert(dayOfWeek(WEDNESDAY, FALSE, 5, 24) == THURSDAY);  // 24 May
    assert(dayOfWeek(WEDNESDAY, FALSE, 5, 25) == FRIDAY);    // 25 May
    assert(dayOfWeek(WEDNESDAY, FALSE, 5, 26) == SATURDAY);  // 26 May
    assert(dayOfWeek(WEDNESDAY, FALSE, 5, 27) == SUNDAY);    // 27 May
    assert(dayOfWeek(WEDNESDAY, FALSE, 5, 28) == MONDAY);    // 28 May
    assert(dayOfWeek(WEDNESDAY, FALSE, 5, 29) == TUESDAY);   // 29 May
    assert(dayOfWeek(WEDNESDAY, FALSE, 5, 30) == WEDNESDAY); // 30 May
    assert(dayOfWeek(WEDNESDAY, FALSE, 5, 31) == THURSDAY);  // 31 May
    assert(dayOfWeek(WEDNESDAY, FALSE, 6, 1) == FRIDAY);     // 1 June
    assert(dayOfWeek(WEDNESDAY, FALSE, 6, 2) == SATURDAY);   // 2 June
    assert(dayOfWeek(WEDNESDAY, FALSE, 6, 3) == SUNDAY);     // 3 June
    assert(dayOfWeek(WEDNESDAY, FALSE, 6, 4) == MONDAY);     // 4 June
    assert(dayOfWeek(WEDNESDAY, FALSE, 6, 5) == TUESDAY);    // 5 June
    assert(dayOfWeek(WEDNESDAY, FALSE, 6, 6) == WEDNESDAY);  // 6 June
    assert(dayOfWeek(WEDNESDAY, FALSE, 6, 7) == THURSDAY);   // 7 June
    assert(dayOfWeek(WEDNESDAY, FALSE, 6, 8) == FRIDAY);     // 8 June
    assert(dayOfWeek(WEDNESDAY, FALSE, 6, 9) == SATURDAY);   // 9 June
    assert(dayOfWeek(WEDNESDAY, FALSE, 6, 10) == SUNDAY);    // 10 June
    assert(dayOfWeek(WEDNESDAY, FALSE, 6, 11) == MONDAY);    // 11 June
    assert(dayOfWeek(WEDNESDAY, FALSE, 6, 12) == TUESDAY);   // 12 June
    assert(dayOfWeek(WEDNESDAY, FALSE, 6, 13) == WEDNESDAY); // 13 June
    assert(dayOfWeek(WEDNESDAY, FALSE, 6, 14) == THURSDAY);  // 14 June
    assert(dayOfWeek(WEDNESDAY, FALSE, 6, 15) == FRIDAY);    // 15 June
    assert(dayOfWeek(WEDNESDAY, FALSE, 6, 16) == SATURDAY);  // 16 June
    assert(dayOfWeek(WEDNESDAY, FALSE, 6, 17) == SUNDAY);    // 17 June
    assert(dayOfWeek(WEDNESDAY, FALSE, 6, 18) == MONDAY);    // 18 June
    assert(dayOfWeek(WEDNESDAY, FALSE, 6, 19) == TUESDAY);   // 19 June
    assert(dayOfWeek(WEDNESDAY, FALSE, 6, 20) == WEDNESDAY); // 20 June
    assert(dayOfWeek(WEDNESDAY, FALSE, 6, 21) == THURSDAY);  // 21 June
    assert(dayOfWeek(WEDNESDAY, FALSE, 6, 22) == FRIDAY);    // 22 June
    assert(dayOfWeek(WEDNESDAY, FALSE, 6, 23) == SATURDAY);  // 23 June
    assert(dayOfWeek(WEDNESDAY, FALSE, 6, 24) == SUNDAY);    // 24 June
    assert(dayOfWeek(WEDNESDAY, FALSE, 6, 25) == MONDAY);    // 25 June
    assert(dayOfWeek(WEDNESDAY, FALSE, 6, 26) == TUESDAY);   // 26 June
    assert(dayOfWeek(WEDNESDAY, FALSE, 6, 27) == WEDNESDAY); // 27 June
    assert(dayOfWeek(WEDNESDAY, FALSE, 6, 28) == THURSDAY);  // 28 June
    assert(dayOfWeek(WEDNESDAY, FALSE, 6, 29) == FRIDAY);    // 29 June
    assert(dayOfWeek(WEDNESDAY, FALSE, 6, 30) == SATURDAY);  // 30 June
    assert(dayOfWeek(WEDNESDAY, FALSE, 7, 1) == SUNDAY);     // 1 July
    assert(dayOfWeek(WEDNESDAY, FALSE, 7, 2) == MONDAY);     // 2 July
    assert(dayOfWeek(WEDNESDAY, FALSE, 7, 3) == TUESDAY);    // 3 July
    assert(dayOfWeek(WEDNESDAY, FALSE, 7, 4) == WEDNESDAY);  // 4 July
    assert(dayOfWeek(WEDNESDAY, FALSE, 7, 5) == THURSDAY);   // 5 July
    assert(dayOfWeek(WEDNESDAY, FALSE, 7, 6) == FRIDAY);     // 6 July
    assert(dayOfWeek(WEDNESDAY, FALSE, 7, 7) == SATURDAY);   // 7 July
    assert(dayOfWeek(WEDNESDAY, FALSE, 7, 8) == SUNDAY);     // 8 July
    assert(dayOfWeek(WEDNESDAY, FALSE, 7, 9) == MONDAY);     // 9 July
    assert(dayOfWeek(WEDNESDAY, FALSE, 7, 10) == TUESDAY);   // 10 July
    assert(dayOfWeek(WEDNESDAY, FALSE, 7, 11) == WEDNESDAY); // 11 July
    assert(dayOfWeek(WEDNESDAY, FALSE, 7, 12) == THURSDAY);  // 12 July
    assert(dayOfWeek(WEDNESDAY, FALSE, 7, 13) == FRIDAY);    // 13 July
    assert(dayOfWeek(WEDNESDAY, FALSE, 7, 14) == SATURDAY);  // 14 July
    assert(dayOfWeek(WEDNESDAY, FALSE, 7, 15) == SUNDAY);    // 15 July
    assert(dayOfWeek(WEDNESDAY, FALSE, 7, 16) == MONDAY);    // 16 July
    assert(dayOfWeek(WEDNESDAY, FALSE, 7, 17) == TUESDAY);   // 17 July
    assert(dayOfWeek(WEDNESDAY, FALSE, 7, 18) == WEDNESDAY); // 18 July
    assert(dayOfWeek(WEDNESDAY, FALSE, 7, 19) == THURSDAY);  // 19 July
    assert(dayOfWeek(WEDNESDAY, FALSE, 7, 20) == FRIDAY);    // 20 July
    assert(dayOfWeek(WEDNESDAY, FALSE, 7, 21) == SATURDAY);  // 21 July
    assert(dayOfWeek(WEDNESDAY, FALSE, 7, 22) == SUNDAY);    // 22 July
    assert(dayOfWeek(WEDNESDAY, FALSE, 7, 23) == MONDAY);    // 23 July
    assert(dayOfWeek(WEDNESDAY, FALSE, 7, 24) == TUESDAY);   // 24 July
    assert(dayOfWeek(WEDNESDAY, FALSE, 7, 25) == WEDNESDAY); // 25 July
    assert(dayOfWeek(WEDNESDAY, FALSE, 7, 26) == THURSDAY);  // 26 July
    assert(dayOfWeek(WEDNESDAY, FALSE, 7, 27) == FRIDAY);    // 27 July
    assert(dayOfWeek(WEDNESDAY, FALSE, 7, 28) == SATURDAY);  // 28 July
    assert(dayOfWeek(WEDNESDAY, FALSE, 7, 29) == SUNDAY);    // 29 July
    assert(dayOfWeek(WEDNESDAY, FALSE, 7, 30) == MONDAY);    // 30 July
    assert(dayOfWeek(WEDNESDAY, FALSE, 7, 31) == TUESDAY);   // 31 July
    assert(dayOfWeek(WEDNESDAY, FALSE, 8, 1) == WEDNESDAY);  // 1 August
    assert(dayOfWeek(WEDNESDAY, FALSE, 8, 2) == THURSDAY);   // 2 August
    assert(dayOfWeek(WEDNESDAY, FALSE, 8, 3) == FRIDAY);     // 3 August
    assert(dayOfWeek(WEDNESDAY, FALSE, 8, 4) == SATURDAY);   // 4 August
    assert(dayOfWeek(WEDNESDAY, FALSE, 8, 5) == SUNDAY);     // 5 August
    assert(dayOfWeek(WEDNESDAY, FALSE, 8, 6) == MONDAY);     // 6 August
    assert(dayOfWeek(WEDNESDAY, FALSE, 8, 7) == TUESDAY);    // 7 August
    assert(dayOfWeek(WEDNESDAY, FALSE, 8, 8) == WEDNESDAY);  // 8 August
    assert(dayOfWeek(WEDNESDAY, FALSE, 8, 9) == THURSDAY);   // 9 August
    assert(dayOfWeek(WEDNESDAY, FALSE, 8, 10) == FRIDAY);    // 10 August
    assert(dayOfWeek(WEDNESDAY, FALSE, 8, 11) == SATURDAY);  // 11 August
    assert(dayOfWeek(WEDNESDAY, FALSE, 8, 12) == SUNDAY);    // 12 August
    assert(dayOfWeek(WEDNESDAY, FALSE, 8, 13) == MONDAY);    // 13 August
    assert(dayOfWeek(WEDNESDAY, FALSE, 8, 14) == TUESDAY);   // 14 August
    assert(dayOfWeek(WEDNESDAY, FALSE, 8, 15) == WEDNESDAY); // 15 August
    assert(dayOfWeek(WEDNESDAY, FALSE, 8, 16) == THURSDAY);  // 16 August
    assert(dayOfWeek(WEDNESDAY, FALSE, 8, 17) == FRIDAY);    // 17 August
    assert(dayOfWeek(WEDNESDAY, FALSE, 8, 18) == SATURDAY);  // 18 August
    assert(dayOfWeek(WEDNESDAY, FALSE, 8, 19) == SUNDAY);    // 19 August
    assert(dayOfWeek(WEDNESDAY, FALSE, 8, 20) == MONDAY);    // 20 August
    assert(dayOfWeek(WEDNESDAY, FALSE, 8, 21) == TUESDAY);   // 21 August
    assert(dayOfWeek(WEDNESDAY, FALSE, 8, 22) == WEDNESDAY); // 22 August
    assert(dayOfWeek(WEDNESDAY, FALSE, 8, 23) == THURSDAY);  // 23 August
    assert(dayOfWeek(WEDNESDAY, FALSE, 8, 24) == FRIDAY);    // 24 August
    assert(dayOfWeek(WEDNESDAY, FALSE, 8, 25) == SATURDAY);  // 25 August
    assert(dayOfWeek(WEDNESDAY, FALSE, 8, 26) == SUNDAY);    // 26 August
    assert(dayOfWeek(WEDNESDAY, FALSE, 8, 27) == MONDAY);    // 27 August
    assert(dayOfWeek(WEDNESDAY, FALSE, 8, 28) == TUESDAY);   // 28 August
    assert(dayOfWeek(WEDNESDAY, FALSE, 8, 29) == WEDNESDAY); // 29 August
    assert(dayOfWeek(WEDNESDAY, FALSE, 8, 30) == THURSDAY);  // 30 August
    assert(dayOfWeek(WEDNESDAY, FALSE, 8, 31) == FRIDAY);    // 31 August
    assert(dayOfWeek(WEDNESDAY, FALSE, 9, 1) == SATURDAY);   // 1 September
    assert(dayOfWeek(WEDNESDAY, FALSE, 9, 2) == SUNDAY);     // 2 September
    assert(dayOfWeek(WEDNESDAY, FALSE, 9, 3) == MONDAY);     // 3 September
    assert(dayOfWeek(WEDNESDAY, FALSE, 9, 4) == TUESDAY);    // 4 September
    assert(dayOfWeek(WEDNESDAY, FALSE, 9, 5) == WEDNESDAY);  // 5 September
    assert(dayOfWeek(WEDNESDAY, FALSE, 9, 6) == THURSDAY);   // 6 September
    assert(dayOfWeek(WEDNESDAY, FALSE, 9, 7) == FRIDAY);     // 7 September
    assert(dayOfWeek(WEDNESDAY, FALSE, 9, 8) == SATURDAY);   // 8 September
    assert(dayOfWeek(WEDNESDAY, FALSE, 9, 9) == SUNDAY);     // 9 September
    assert(dayOfWeek(WEDNESDAY, FALSE, 9, 10) == MONDAY);    // 10 September
    assert(dayOfWeek(WEDNESDAY, FALSE, 9, 11) == TUESDAY);   // 11 September
    assert(dayOfWeek(WEDNESDAY, FALSE, 9, 12) == WEDNESDAY); // 12 September
    assert(dayOfWeek(WEDNESDAY, FALSE, 9, 13) == THURSDAY);  // 13 September
    assert(dayOfWeek(WEDNESDAY, FALSE, 9, 14) == FRIDAY);    // 14 September
    assert(dayOfWeek(WEDNESDAY, FALSE, 9, 15) == SATURDAY);  // 15 September
    assert(dayOfWeek(WEDNESDAY, FALSE, 9, 16) == SUNDAY);    // 16 September
    assert(dayOfWeek(WEDNESDAY, FALSE, 9, 17) == MONDAY);    // 17 September
    assert(dayOfWeek(WEDNESDAY, FALSE, 9, 18) == TUESDAY);   // 18 September
    assert(dayOfWeek(WEDNESDAY, FALSE, 9, 19) == WEDNESDAY); // 19 September
    assert(dayOfWeek(WEDNESDAY, FALSE, 9, 20) == THURSDAY);  // 20 September
    assert(dayOfWeek(WEDNESDAY, FALSE, 9, 21) == FRIDAY);    // 21 September
    assert(dayOfWeek(WEDNESDAY, FALSE, 9, 22) == SATURDAY);  // 22 September
    assert(dayOfWeek(WEDNESDAY, FALSE, 9, 23) == SUNDAY);    // 23 September
    assert(dayOfWeek(WEDNESDAY, FALSE, 9, 24) == MONDAY);    // 24 September
    assert(dayOfWeek(WEDNESDAY, FALSE, 9, 25) == TUESDAY);   // 25 September
    assert(dayOfWeek(WEDNESDAY, FALSE, 9, 26) == WEDNESDAY); // 26 September
    assert(dayOfWeek(WEDNESDAY, FALSE, 9, 27) == THURSDAY);  // 27 September
    assert(dayOfWeek(WEDNESDAY, FALSE, 9, 28) == FRIDAY);    // 28 September
    assert(dayOfWeek(WEDNESDAY, FALSE, 9, 29) == SATURDAY);  // 29 September
    assert(dayOfWeek(WEDNESDAY, FALSE, 9, 30) == SUNDAY);    // 30 September
    assert(dayOfWeek(WEDNESDAY, FALSE, 10, 1) == MONDAY);    // 1 October
    assert(dayOfWeek(WEDNESDAY, FALSE, 10, 2) == TUESDAY);   // 2 October
    assert(dayOfWeek(WEDNESDAY, FALSE, 10, 3) == WEDNESDAY); // 3 October
    assert(dayOfWeek(WEDNESDAY, FALSE, 10, 4) == THURSDAY);  // 4 October
    assert(dayOfWeek(WEDNESDAY, FALSE, 10, 5) == FRIDAY);    // 5 October
    assert(dayOfWeek(WEDNESDAY, FALSE, 10, 6) == SATURDAY);  // 6 October
    assert(dayOfWeek(WEDNESDAY, FALSE, 10, 7) == SUNDAY);    // 7 October
    assert(dayOfWeek(WEDNESDAY, FALSE, 10, 8) == MONDAY);    // 8 October
    assert(dayOfWeek(WEDNESDAY, FALSE, 10, 9) == TUESDAY);   // 9 October
    assert(dayOfWeek(WEDNESDAY, FALSE, 10, 10) == WEDNESDAY);// 10 October
    assert(dayOfWeek(WEDNESDAY, FALSE, 10, 11) == THURSDAY); // 11 October
    assert(dayOfWeek(WEDNESDAY, FALSE, 10, 12) == FRIDAY);   // 12 October
    assert(dayOfWeek(WEDNESDAY, FALSE, 10, 13) == SATURDAY); // 13 October
    assert(dayOfWeek(WEDNESDAY, FALSE, 10, 14) == SUNDAY);   // 14 October
    assert(dayOfWeek(WEDNESDAY, FALSE, 10, 15) == MONDAY);   // 15 October
    assert(dayOfWeek(WEDNESDAY, FALSE, 10, 16) == TUESDAY);  // 16 October
    assert(dayOfWeek(WEDNESDAY, FALSE, 10, 17) == WEDNESDAY);// 17 October
    assert(dayOfWeek(WEDNESDAY, FALSE, 10, 18) == THURSDAY); // 18 October
    assert(dayOfWeek(WEDNESDAY, FALSE, 10, 19) == FRIDAY);   // 19 October
    assert(dayOfWeek(WEDNESDAY, FALSE, 10, 20) == SATURDAY); // 20 October
    assert(dayOfWeek(WEDNESDAY, FALSE, 10, 21) == SUNDAY);   // 21 October
    assert(dayOfWeek(WEDNESDAY, FALSE, 10, 22) == MONDAY);   // 22 October
    assert(dayOfWeek(WEDNESDAY, FALSE, 10, 23) == TUESDAY);  // 23 October
    assert(dayOfWeek(WEDNESDAY, FALSE, 10, 24) == WEDNESDAY);// 24 October
    assert(dayOfWeek(WEDNESDAY, FALSE, 10, 25) == THURSDAY); // 25 October
    assert(dayOfWeek(WEDNESDAY, FALSE, 10, 26) == FRIDAY);   // 26 October
    assert(dayOfWeek(WEDNESDAY, FALSE, 10, 27) == SATURDAY); // 27 October
    assert(dayOfWeek(WEDNESDAY, FALSE, 10, 28) == SUNDAY);   // 28 October
    assert(dayOfWeek(WEDNESDAY, FALSE, 10, 29) == MONDAY);   // 29 October
    assert(dayOfWeek(WEDNESDAY, FALSE, 10, 30) == TUESDAY);  // 30 October
    assert(dayOfWeek(WEDNESDAY, FALSE, 10, 31) == WEDNESDAY);// 31 October
    assert(dayOfWeek(WEDNESDAY, FALSE, 11, 1) == THURSDAY);  // 1 November
    assert(dayOfWeek(WEDNESDAY, FALSE, 11, 2) == FRIDAY);    // 2 November
    assert(dayOfWeek(WEDNESDAY, FALSE, 11, 3) == SATURDAY);  // 3 November
    assert(dayOfWeek(WEDNESDAY, FALSE, 11, 4) == SUNDAY);    // 4 November
    assert(dayOfWeek(WEDNESDAY, FALSE, 11, 5) == MONDAY);    // 5 November
    assert(dayOfWeek(WEDNESDAY, FALSE, 11, 6) == TUESDAY);   // 6 November
    assert(dayOfWeek(WEDNESDAY, FALSE, 11, 7) == WEDNESDAY); // 7 November
    assert(dayOfWeek(WEDNESDAY, FALSE, 11, 8) == THURSDAY);  // 8 November
    assert(dayOfWeek(WEDNESDAY, FALSE, 11, 9) == FRIDAY);    // 9 November
    assert(dayOfWeek(WEDNESDAY, FALSE, 11, 10) == SATURDAY); // 10 November
    assert(dayOfWeek(WEDNESDAY, FALSE, 11, 11) == SUNDAY);   // 11 November
    assert(dayOfWeek(WEDNESDAY, FALSE, 11, 12) == MONDAY);   // 12 November
    assert(dayOfWeek(WEDNESDAY, FALSE, 11, 13) == TUESDAY);  // 13 November
    assert(dayOfWeek(WEDNESDAY, FALSE, 11, 14) == WEDNESDAY);// 14 November
    assert(dayOfWeek(WEDNESDAY, FALSE, 11, 15) == THURSDAY); // 15 November
    assert(dayOfWeek(WEDNESDAY, FALSE, 11, 16) == FRIDAY);   // 16 November
    assert(dayOfWeek(WEDNESDAY, FALSE, 11, 17) == SATURDAY); // 17 November
    assert(dayOfWeek(WEDNESDAY, FALSE, 11, 18) == SUNDAY);   // 18 November
    assert(dayOfWeek(WEDNESDAY, FALSE, 11, 19) == MONDAY);   // 19 November
    assert(dayOfWeek(WEDNESDAY, FALSE, 11, 20) == TUESDAY);  // 20 November
    assert(dayOfWeek(WEDNESDAY, FALSE, 11, 21) == WEDNESDAY);// 21 November
    assert(dayOfWeek(WEDNESDAY, FALSE, 11, 22) == THURSDAY); // 22 November
    assert(dayOfWeek(WEDNESDAY, FALSE, 11, 23) == FRIDAY);   // 23 November
    assert(dayOfWeek(WEDNESDAY, FALSE, 11, 24) == SATURDAY); // 24 November
    assert(dayOfWeek(WEDNESDAY, FALSE, 11, 25) == SUNDAY);   // 25 November
    assert(dayOfWeek(WEDNESDAY, FALSE, 11, 26) == MONDAY);   // 26 November
    assert(dayOfWeek(WEDNESDAY, FALSE, 11, 27) == TUESDAY);  // 27 November
    assert(dayOfWeek(WEDNESDAY, FALSE, 11, 28) == WEDNESDAY);// 28 November
    assert(dayOfWeek(WEDNESDAY, FALSE, 11, 29) == THURSDAY); // 29 November
    assert(dayOfWeek(WEDNESDAY, FALSE, 11, 30) == FRIDAY);   // 30 November
    assert(dayOfWeek(WEDNESDAY, FALSE, 12, 1) == SATURDAY);  // 1 December
    assert(dayOfWeek(WEDNESDAY, FALSE, 12, 2) == SUNDAY);    // 2 December
    assert(dayOfWeek(WEDNESDAY, FALSE, 12, 3) == MONDAY);    // 3 December
    assert(dayOfWeek(WEDNESDAY, FALSE, 12, 4) == TUESDAY);   // 4 December
    assert(dayOfWeek(WEDNESDAY, FALSE, 12, 5) == WEDNESDAY); // 5 December
    assert(dayOfWeek(WEDNESDAY, FALSE, 12, 6) == THURSDAY);  // 6 December
    assert(dayOfWeek(WEDNESDAY, FALSE, 12, 7) == FRIDAY);    // 7 December
    assert(dayOfWeek(WEDNESDAY, FALSE, 12, 8) == SATURDAY);  // 8 December
    assert(dayOfWeek(WEDNESDAY, FALSE, 12, 9) == SUNDAY);    // 9 December
    assert(dayOfWeek(WEDNESDAY, FALSE, 12, 10) == MONDAY);   // 10 December
    assert(dayOfWeek(WEDNESDAY, FALSE, 12, 11) == TUESDAY);  // 11 December
    assert(dayOfWeek(WEDNESDAY, FALSE, 12, 12) == WEDNESDAY);// 12 December
    assert(dayOfWeek(WEDNESDAY, FALSE, 12, 13) == THURSDAY); // 13 December
    assert(dayOfWeek(WEDNESDAY, FALSE, 12, 14) == FRIDAY);   // 14 December
    assert(dayOfWeek(WEDNESDAY, FALSE, 12, 15) == SATURDAY); // 15 December
    assert(dayOfWeek(WEDNESDAY, FALSE, 12, 16) == SUNDAY);   // 16 December
    assert(dayOfWeek(WEDNESDAY, FALSE, 12, 17) == MONDAY);   // 17 December
    assert(dayOfWeek(WEDNESDAY, FALSE, 12, 18) == TUESDAY);  // 18 December
    assert(dayOfWeek(WEDNESDAY, FALSE, 12, 19) == WEDNESDAY);// 19 December
    assert(dayOfWeek(WEDNESDAY, FALSE, 12, 20) == THURSDAY); // 20 December
    assert(dayOfWeek(WEDNESDAY, FALSE, 12, 21) == FRIDAY);   // 21 December
    assert(dayOfWeek(WEDNESDAY, FALSE, 12, 22) == SATURDAY); // 22 December
    assert(dayOfWeek(WEDNESDAY, FALSE, 12, 23) == SUNDAY);   // 23 December
    assert(dayOfWeek(WEDNESDAY, FALSE, 12, 24) == MONDAY);   // 24 December
    assert(dayOfWeek(WEDNESDAY, FALSE, 12, 25) == TUESDAY);  // 25 December
    assert(dayOfWeek(WEDNESDAY, FALSE, 12, 26) == WEDNESDAY);// 26 December
    assert(dayOfWeek(WEDNESDAY, FALSE, 12, 27) == THURSDAY); // 27 December
    assert(dayOfWeek(WEDNESDAY, FALSE, 12, 28) == FRIDAY);   // 28 December
    assert(dayOfWeek(WEDNESDAY, FALSE, 12, 29) == SATURDAY); // 29 December
    assert(dayOfWeek(WEDNESDAY, FALSE, 12, 30) == SUNDAY);   // 30 December
    assert(dayOfWeek(WEDNESDAY, FALSE, 12, 31) == MONDAY);   // 31 December
    // Doomsday = THURSDAY, leapyear = Yes
    assert(dayOfWeek(THURSDAY, TRUE, 1, 1) == MONDAY);      // 1 January
    assert(dayOfWeek(THURSDAY, TRUE, 1, 2) == TUESDAY);     // 2 January
    assert(dayOfWeek(THURSDAY, TRUE, 1, 3) == WEDNESDAY);   // 3 January
    assert(dayOfWeek(THURSDAY, TRUE, 1, 4) == THURSDAY);    // 4 January
    assert(dayOfWeek(THURSDAY, TRUE, 1, 5) == FRIDAY);      // 5 January
    assert(dayOfWeek(THURSDAY, TRUE, 1, 6) == SATURDAY);    // 6 January
    assert(dayOfWeek(THURSDAY, TRUE, 1, 7) == SUNDAY);      // 7 January
    assert(dayOfWeek(THURSDAY, TRUE, 1, 8) == MONDAY);      // 8 January
    assert(dayOfWeek(THURSDAY, TRUE, 1, 9) == TUESDAY);     // 9 January
    assert(dayOfWeek(THURSDAY, TRUE, 1, 10) == WEDNESDAY);  // 10 January
    assert(dayOfWeek(THURSDAY, TRUE, 1, 11) == THURSDAY);   // 11 January
    assert(dayOfWeek(THURSDAY, TRUE, 1, 12) == FRIDAY);     // 12 January
    assert(dayOfWeek(THURSDAY, TRUE, 1, 13) == SATURDAY);   // 13 January
    assert(dayOfWeek(THURSDAY, TRUE, 1, 14) == SUNDAY);     // 14 January
    assert(dayOfWeek(THURSDAY, TRUE, 1, 15) == MONDAY);     // 15 January
    assert(dayOfWeek(THURSDAY, TRUE, 1, 16) == TUESDAY);    // 16 January
    assert(dayOfWeek(THURSDAY, TRUE, 1, 17) == WEDNESDAY);  // 17 January
    assert(dayOfWeek(THURSDAY, TRUE, 1, 18) == THURSDAY);   // 18 January
    assert(dayOfWeek(THURSDAY, TRUE, 1, 19) == FRIDAY);     // 19 January
    assert(dayOfWeek(THURSDAY, TRUE, 1, 20) == SATURDAY);   // 20 January
    assert(dayOfWeek(THURSDAY, TRUE, 1, 21) == SUNDAY);     // 21 January
    assert(dayOfWeek(THURSDAY, TRUE, 1, 22) == MONDAY);     // 22 January
    assert(dayOfWeek(THURSDAY, TRUE, 1, 23) == TUESDAY);    // 23 January
    assert(dayOfWeek(THURSDAY, TRUE, 1, 24) == WEDNESDAY);  // 24 January
    assert(dayOfWeek(THURSDAY, TRUE, 1, 25) == THURSDAY);   // 25 January
    assert(dayOfWeek(THURSDAY, TRUE, 1, 26) == FRIDAY);     // 26 January
    assert(dayOfWeek(THURSDAY, TRUE, 1, 27) == SATURDAY);   // 27 January
    assert(dayOfWeek(THURSDAY, TRUE, 1, 28) == SUNDAY);     // 28 January
    assert(dayOfWeek(THURSDAY, TRUE, 1, 29) == MONDAY);     // 29 January
    assert(dayOfWeek(THURSDAY, TRUE, 1, 30) == TUESDAY);    // 30 January
    assert(dayOfWeek(THURSDAY, TRUE, 1, 31) == WEDNESDAY);  // 31 January
    assert(dayOfWeek(THURSDAY, TRUE, 2, 1) == THURSDAY);    // 1 February
    assert(dayOfWeek(THURSDAY, TRUE, 2, 2) == FRIDAY);      // 2 February
    assert(dayOfWeek(THURSDAY, TRUE, 2, 3) == SATURDAY);    // 3 February
    assert(dayOfWeek(THURSDAY, TRUE, 2, 4) == SUNDAY);      // 4 February
    assert(dayOfWeek(THURSDAY, TRUE, 2, 5) == MONDAY);      // 5 February
    assert(dayOfWeek(THURSDAY, TRUE, 2, 6) == TUESDAY);     // 6 February
    assert(dayOfWeek(THURSDAY, TRUE, 2, 7) == WEDNESDAY);   // 7 February
    assert(dayOfWeek(THURSDAY, TRUE, 2, 8) == THURSDAY);    // 8 February
    assert(dayOfWeek(THURSDAY, TRUE, 2, 9) == FRIDAY);      // 9 February
    assert(dayOfWeek(THURSDAY, TRUE, 2, 10) == SATURDAY);   // 10 February
    assert(dayOfWeek(THURSDAY, TRUE, 2, 11) == SUNDAY);     // 11 February
    assert(dayOfWeek(THURSDAY, TRUE, 2, 12) == MONDAY);     // 12 February
    assert(dayOfWeek(THURSDAY, TRUE, 2, 13) == TUESDAY);    // 13 February
    assert(dayOfWeek(THURSDAY, TRUE, 2, 14) == WEDNESDAY);  // 14 February
    assert(dayOfWeek(THURSDAY, TRUE, 2, 15) == THURSDAY);   // 15 February
    assert(dayOfWeek(THURSDAY, TRUE, 2, 16) == FRIDAY);     // 16 February
    assert(dayOfWeek(THURSDAY, TRUE, 2, 17) == SATURDAY);   // 17 February
    assert(dayOfWeek(THURSDAY, TRUE, 2, 18) == SUNDAY);     // 18 February
    assert(dayOfWeek(THURSDAY, TRUE, 2, 19) == MONDAY);     // 19 February
    assert(dayOfWeek(THURSDAY, TRUE, 2, 20) == TUESDAY);    // 20 February
    assert(dayOfWeek(THURSDAY, TRUE, 2, 21) == WEDNESDAY);  // 21 February
    assert(dayOfWeek(THURSDAY, TRUE, 2, 22) == THURSDAY);   // 22 February
    assert(dayOfWeek(THURSDAY, TRUE, 2, 23) == FRIDAY);     // 23 February
    assert(dayOfWeek(THURSDAY, TRUE, 2, 24) == SATURDAY);   // 24 February
    assert(dayOfWeek(THURSDAY, TRUE, 2, 25) == SUNDAY);     // 25 February
    assert(dayOfWeek(THURSDAY, TRUE, 2, 26) == MONDAY);     // 26 February
    assert(dayOfWeek(THURSDAY, TRUE, 2, 27) == TUESDAY);    // 27 February
    assert(dayOfWeek(THURSDAY, TRUE, 2, 28) == WEDNESDAY);  // 28 February
    assert(dayOfWeek(THURSDAY, TRUE, 2, 29) == THURSDAY);   // 29 February
    assert(dayOfWeek(THURSDAY, TRUE, 3, 1) == FRIDAY);      // 1 March
    assert(dayOfWeek(THURSDAY, TRUE, 3, 2) == SATURDAY);    // 2 March
    assert(dayOfWeek(THURSDAY, TRUE, 3, 3) == SUNDAY);      // 3 March
    assert(dayOfWeek(THURSDAY, TRUE, 3, 4) == MONDAY);      // 4 March
    assert(dayOfWeek(THURSDAY, TRUE, 3, 5) == TUESDAY);     // 5 March
    assert(dayOfWeek(THURSDAY, TRUE, 3, 6) == WEDNESDAY);   // 6 March
    assert(dayOfWeek(THURSDAY, TRUE, 3, 7) == THURSDAY);    // 7 March
    assert(dayOfWeek(THURSDAY, TRUE, 3, 8) == FRIDAY);      // 8 March
    assert(dayOfWeek(THURSDAY, TRUE, 3, 9) == SATURDAY);    // 9 March
    assert(dayOfWeek(THURSDAY, TRUE, 3, 10) == SUNDAY);     // 10 March
    assert(dayOfWeek(THURSDAY, TRUE, 3, 11) == MONDAY);     // 11 March
    assert(dayOfWeek(THURSDAY, TRUE, 3, 12) == TUESDAY);    // 12 March
    assert(dayOfWeek(THURSDAY, TRUE, 3, 13) == WEDNESDAY);  // 13 March
    assert(dayOfWeek(THURSDAY, TRUE, 3, 14) == THURSDAY);   // 14 March
    assert(dayOfWeek(THURSDAY, TRUE, 3, 15) == FRIDAY);     // 15 March
    assert(dayOfWeek(THURSDAY, TRUE, 3, 16) == SATURDAY);   // 16 March
    assert(dayOfWeek(THURSDAY, TRUE, 3, 17) == SUNDAY);     // 17 March
    assert(dayOfWeek(THURSDAY, TRUE, 3, 18) == MONDAY);     // 18 March
    assert(dayOfWeek(THURSDAY, TRUE, 3, 19) == TUESDAY);    // 19 March
    assert(dayOfWeek(THURSDAY, TRUE, 3, 20) == WEDNESDAY);  // 20 March
    assert(dayOfWeek(THURSDAY, TRUE, 3, 21) == THURSDAY);   // 21 March
    assert(dayOfWeek(THURSDAY, TRUE, 3, 22) == FRIDAY);     // 22 March
    assert(dayOfWeek(THURSDAY, TRUE, 3, 23) == SATURDAY);   // 23 March
    assert(dayOfWeek(THURSDAY, TRUE, 3, 24) == SUNDAY);     // 24 March
    assert(dayOfWeek(THURSDAY, TRUE, 3, 25) == MONDAY);     // 25 March
    assert(dayOfWeek(THURSDAY, TRUE, 3, 26) == TUESDAY);    // 26 March
    assert(dayOfWeek(THURSDAY, TRUE, 3, 27) == WEDNESDAY);  // 27 March
    assert(dayOfWeek(THURSDAY, TRUE, 3, 28) == THURSDAY);   // 28 March
    assert(dayOfWeek(THURSDAY, TRUE, 3, 29) == FRIDAY);     // 29 March
    assert(dayOfWeek(THURSDAY, TRUE, 3, 30) == SATURDAY);   // 30 March
    assert(dayOfWeek(THURSDAY, TRUE, 3, 31) == SUNDAY);     // 31 March
    assert(dayOfWeek(THURSDAY, TRUE, 4, 1) == MONDAY);      // 1 April
    assert(dayOfWeek(THURSDAY, TRUE, 4, 2) == TUESDAY);     // 2 April
    assert(dayOfWeek(THURSDAY, TRUE, 4, 3) == WEDNESDAY);   // 3 April
    assert(dayOfWeek(THURSDAY, TRUE, 4, 4) == THURSDAY);    // 4 April
    assert(dayOfWeek(THURSDAY, TRUE, 4, 5) == FRIDAY);      // 5 April
    assert(dayOfWeek(THURSDAY, TRUE, 4, 6) == SATURDAY);    // 6 April
    assert(dayOfWeek(THURSDAY, TRUE, 4, 7) == SUNDAY);      // 7 April
    assert(dayOfWeek(THURSDAY, TRUE, 4, 8) == MONDAY);      // 8 April
    assert(dayOfWeek(THURSDAY, TRUE, 4, 9) == TUESDAY);     // 9 April
    assert(dayOfWeek(THURSDAY, TRUE, 4, 10) == WEDNESDAY);  // 10 April
    assert(dayOfWeek(THURSDAY, TRUE, 4, 11) == THURSDAY);   // 11 April
    assert(dayOfWeek(THURSDAY, TRUE, 4, 12) == FRIDAY);     // 12 April
    assert(dayOfWeek(THURSDAY, TRUE, 4, 13) == SATURDAY);   // 13 April
    assert(dayOfWeek(THURSDAY, TRUE, 4, 14) == SUNDAY);     // 14 April
    assert(dayOfWeek(THURSDAY, TRUE, 4, 15) == MONDAY);     // 15 April
    assert(dayOfWeek(THURSDAY, TRUE, 4, 16) == TUESDAY);    // 16 April
    assert(dayOfWeek(THURSDAY, TRUE, 4, 17) == WEDNESDAY);  // 17 April
    assert(dayOfWeek(THURSDAY, TRUE, 4, 18) == THURSDAY);   // 18 April
    assert(dayOfWeek(THURSDAY, TRUE, 4, 19) == FRIDAY);     // 19 April
    assert(dayOfWeek(THURSDAY, TRUE, 4, 20) == SATURDAY);   // 20 April
    assert(dayOfWeek(THURSDAY, TRUE, 4, 21) == SUNDAY);     // 21 April
    assert(dayOfWeek(THURSDAY, TRUE, 4, 22) == MONDAY);     // 22 April
    assert(dayOfWeek(THURSDAY, TRUE, 4, 23) == TUESDAY);    // 23 April
    assert(dayOfWeek(THURSDAY, TRUE, 4, 24) == WEDNESDAY);  // 24 April
    assert(dayOfWeek(THURSDAY, TRUE, 4, 25) == THURSDAY);   // 25 April
    assert(dayOfWeek(THURSDAY, TRUE, 4, 26) == FRIDAY);     // 26 April
    assert(dayOfWeek(THURSDAY, TRUE, 4, 27) == SATURDAY);   // 27 April
    assert(dayOfWeek(THURSDAY, TRUE, 4, 28) == SUNDAY);     // 28 April
    assert(dayOfWeek(THURSDAY, TRUE, 4, 29) == MONDAY);     // 29 April
    assert(dayOfWeek(THURSDAY, TRUE, 4, 30) == TUESDAY);    // 30 April
    assert(dayOfWeek(THURSDAY, TRUE, 5, 1) == WEDNESDAY);   // 1 May
    assert(dayOfWeek(THURSDAY, TRUE, 5, 2) == THURSDAY);    // 2 May
    assert(dayOfWeek(THURSDAY, TRUE, 5, 3) == FRIDAY);      // 3 May
    assert(dayOfWeek(THURSDAY, TRUE, 5, 4) == SATURDAY);    // 4 May
    assert(dayOfWeek(THURSDAY, TRUE, 5, 5) == SUNDAY);      // 5 May
    assert(dayOfWeek(THURSDAY, TRUE, 5, 6) == MONDAY);      // 6 May
    assert(dayOfWeek(THURSDAY, TRUE, 5, 7) == TUESDAY);     // 7 May
    assert(dayOfWeek(THURSDAY, TRUE, 5, 8) == WEDNESDAY);   // 8 May
    assert(dayOfWeek(THURSDAY, TRUE, 5, 9) == THURSDAY);    // 9 May
    assert(dayOfWeek(THURSDAY, TRUE, 5, 10) == FRIDAY);     // 10 May
    assert(dayOfWeek(THURSDAY, TRUE, 5, 11) == SATURDAY);   // 11 May
    assert(dayOfWeek(THURSDAY, TRUE, 5, 12) == SUNDAY);     // 12 May
    assert(dayOfWeek(THURSDAY, TRUE, 5, 13) == MONDAY);     // 13 May
    assert(dayOfWeek(THURSDAY, TRUE, 5, 14) == TUESDAY);    // 14 May
    assert(dayOfWeek(THURSDAY, TRUE, 5, 15) == WEDNESDAY);  // 15 May
    assert(dayOfWeek(THURSDAY, TRUE, 5, 16) == THURSDAY);   // 16 May
    assert(dayOfWeek(THURSDAY, TRUE, 5, 17) == FRIDAY);     // 17 May
    assert(dayOfWeek(THURSDAY, TRUE, 5, 18) == SATURDAY);   // 18 May
    assert(dayOfWeek(THURSDAY, TRUE, 5, 19) == SUNDAY);     // 19 May
    assert(dayOfWeek(THURSDAY, TRUE, 5, 20) == MONDAY);     // 20 May
    assert(dayOfWeek(THURSDAY, TRUE, 5, 21) == TUESDAY);    // 21 May
    assert(dayOfWeek(THURSDAY, TRUE, 5, 22) == WEDNESDAY);  // 22 May
    assert(dayOfWeek(THURSDAY, TRUE, 5, 23) == THURSDAY);   // 23 May
    assert(dayOfWeek(THURSDAY, TRUE, 5, 24) == FRIDAY);     // 24 May
    assert(dayOfWeek(THURSDAY, TRUE, 5, 25) == SATURDAY);   // 25 May
    assert(dayOfWeek(THURSDAY, TRUE, 5, 26) == SUNDAY);     // 26 May
    assert(dayOfWeek(THURSDAY, TRUE, 5, 27) == MONDAY);     // 27 May
    assert(dayOfWeek(THURSDAY, TRUE, 5, 28) == TUESDAY);    // 28 May
    assert(dayOfWeek(THURSDAY, TRUE, 5, 29) == WEDNESDAY);  // 29 May
    assert(dayOfWeek(THURSDAY, TRUE, 5, 30) == THURSDAY);   // 30 May
    assert(dayOfWeek(THURSDAY, TRUE, 5, 31) == FRIDAY);     // 31 May
    assert(dayOfWeek(THURSDAY, TRUE, 6, 1) == SATURDAY);    // 1 June
    assert(dayOfWeek(THURSDAY, TRUE, 6, 2) == SUNDAY);      // 2 June
    assert(dayOfWeek(THURSDAY, TRUE, 6, 3) == MONDAY);      // 3 June
    assert(dayOfWeek(THURSDAY, TRUE, 6, 4) == TUESDAY);     // 4 June
    assert(dayOfWeek(THURSDAY, TRUE, 6, 5) == WEDNESDAY);   // 5 June
    assert(dayOfWeek(THURSDAY, TRUE, 6, 6) == THURSDAY);    // 6 June
    assert(dayOfWeek(THURSDAY, TRUE, 6, 7) == FRIDAY);      // 7 June
    assert(dayOfWeek(THURSDAY, TRUE, 6, 8) == SATURDAY);    // 8 June
    assert(dayOfWeek(THURSDAY, TRUE, 6, 9) == SUNDAY);      // 9 June
    assert(dayOfWeek(THURSDAY, TRUE, 6, 10) == MONDAY);     // 10 June
    assert(dayOfWeek(THURSDAY, TRUE, 6, 11) == TUESDAY);    // 11 June
    assert(dayOfWeek(THURSDAY, TRUE, 6, 12) == WEDNESDAY);  // 12 June
    assert(dayOfWeek(THURSDAY, TRUE, 6, 13) == THURSDAY);   // 13 June
    assert(dayOfWeek(THURSDAY, TRUE, 6, 14) == FRIDAY);     // 14 June
    assert(dayOfWeek(THURSDAY, TRUE, 6, 15) == SATURDAY);   // 15 June
    assert(dayOfWeek(THURSDAY, TRUE, 6, 16) == SUNDAY);     // 16 June
    assert(dayOfWeek(THURSDAY, TRUE, 6, 17) == MONDAY);     // 17 June
    assert(dayOfWeek(THURSDAY, TRUE, 6, 18) == TUESDAY);    // 18 June
    assert(dayOfWeek(THURSDAY, TRUE, 6, 19) == WEDNESDAY);  // 19 June
    assert(dayOfWeek(THURSDAY, TRUE, 6, 20) == THURSDAY);   // 20 June
    assert(dayOfWeek(THURSDAY, TRUE, 6, 21) == FRIDAY);     // 21 June
    assert(dayOfWeek(THURSDAY, TRUE, 6, 22) == SATURDAY);   // 22 June
    assert(dayOfWeek(THURSDAY, TRUE, 6, 23) == SUNDAY);     // 23 June
    assert(dayOfWeek(THURSDAY, TRUE, 6, 24) == MONDAY);     // 24 June
    assert(dayOfWeek(THURSDAY, TRUE, 6, 25) == TUESDAY);    // 25 June
    assert(dayOfWeek(THURSDAY, TRUE, 6, 26) == WEDNESDAY);  // 26 June
    assert(dayOfWeek(THURSDAY, TRUE, 6, 27) == THURSDAY);   // 27 June
    assert(dayOfWeek(THURSDAY, TRUE, 6, 28) == FRIDAY);     // 28 June
    assert(dayOfWeek(THURSDAY, TRUE, 6, 29) == SATURDAY);   // 29 June
    assert(dayOfWeek(THURSDAY, TRUE, 6, 30) == SUNDAY);     // 30 June
    assert(dayOfWeek(THURSDAY, TRUE, 7, 1) == MONDAY);      // 1 July
    assert(dayOfWeek(THURSDAY, TRUE, 7, 2) == TUESDAY);     // 2 July
    assert(dayOfWeek(THURSDAY, TRUE, 7, 3) == WEDNESDAY);   // 3 July
    assert(dayOfWeek(THURSDAY, TRUE, 7, 4) == THURSDAY);    // 4 July
    assert(dayOfWeek(THURSDAY, TRUE, 7, 5) == FRIDAY);      // 5 July
    assert(dayOfWeek(THURSDAY, TRUE, 7, 6) == SATURDAY);    // 6 July
    assert(dayOfWeek(THURSDAY, TRUE, 7, 7) == SUNDAY);      // 7 July
    assert(dayOfWeek(THURSDAY, TRUE, 7, 8) == MONDAY);      // 8 July
    assert(dayOfWeek(THURSDAY, TRUE, 7, 9) == TUESDAY);     // 9 July
    assert(dayOfWeek(THURSDAY, TRUE, 7, 10) == WEDNESDAY);  // 10 July
    assert(dayOfWeek(THURSDAY, TRUE, 7, 11) == THURSDAY);   // 11 July
    assert(dayOfWeek(THURSDAY, TRUE, 7, 12) == FRIDAY);     // 12 July
    assert(dayOfWeek(THURSDAY, TRUE, 7, 13) == SATURDAY);   // 13 July
    assert(dayOfWeek(THURSDAY, TRUE, 7, 14) == SUNDAY);     // 14 July
    assert(dayOfWeek(THURSDAY, TRUE, 7, 15) == MONDAY);     // 15 July
    assert(dayOfWeek(THURSDAY, TRUE, 7, 16) == TUESDAY);    // 16 July
    assert(dayOfWeek(THURSDAY, TRUE, 7, 17) == WEDNESDAY);  // 17 July
    assert(dayOfWeek(THURSDAY, TRUE, 7, 18) == THURSDAY);   // 18 July
    assert(dayOfWeek(THURSDAY, TRUE, 7, 19) == FRIDAY);     // 19 July
    assert(dayOfWeek(THURSDAY, TRUE, 7, 20) == SATURDAY);   // 20 July
    assert(dayOfWeek(THURSDAY, TRUE, 7, 21) == SUNDAY);     // 21 July
    assert(dayOfWeek(THURSDAY, TRUE, 7, 22) == MONDAY);     // 22 July
    assert(dayOfWeek(THURSDAY, TRUE, 7, 23) == TUESDAY);    // 23 July
    assert(dayOfWeek(THURSDAY, TRUE, 7, 24) == WEDNESDAY);  // 24 July
    assert(dayOfWeek(THURSDAY, TRUE, 7, 25) == THURSDAY);   // 25 July
    assert(dayOfWeek(THURSDAY, TRUE, 7, 26) == FRIDAY);     // 26 July
    assert(dayOfWeek(THURSDAY, TRUE, 7, 27) == SATURDAY);   // 27 July
    assert(dayOfWeek(THURSDAY, TRUE, 7, 28) == SUNDAY);     // 28 July
    assert(dayOfWeek(THURSDAY, TRUE, 7, 29) == MONDAY);     // 29 July
    assert(dayOfWeek(THURSDAY, TRUE, 7, 30) == TUESDAY);    // 30 July
    assert(dayOfWeek(THURSDAY, TRUE, 7, 31) == WEDNESDAY);  // 31 July
    assert(dayOfWeek(THURSDAY, TRUE, 8, 1) == THURSDAY);    // 1 August
    assert(dayOfWeek(THURSDAY, TRUE, 8, 2) == FRIDAY);      // 2 August
    assert(dayOfWeek(THURSDAY, TRUE, 8, 3) == SATURDAY);    // 3 August
    assert(dayOfWeek(THURSDAY, TRUE, 8, 4) == SUNDAY);      // 4 August
    assert(dayOfWeek(THURSDAY, TRUE, 8, 5) == MONDAY);      // 5 August
    assert(dayOfWeek(THURSDAY, TRUE, 8, 6) == TUESDAY);     // 6 August
    assert(dayOfWeek(THURSDAY, TRUE, 8, 7) == WEDNESDAY);   // 7 August
    assert(dayOfWeek(THURSDAY, TRUE, 8, 8) == THURSDAY);    // 8 August
    assert(dayOfWeek(THURSDAY, TRUE, 8, 9) == FRIDAY);      // 9 August
    assert(dayOfWeek(THURSDAY, TRUE, 8, 10) == SATURDAY);   // 10 August
    assert(dayOfWeek(THURSDAY, TRUE, 8, 11) == SUNDAY);     // 11 August
    assert(dayOfWeek(THURSDAY, TRUE, 8, 12) == MONDAY);     // 12 August
    assert(dayOfWeek(THURSDAY, TRUE, 8, 13) == TUESDAY);    // 13 August
    assert(dayOfWeek(THURSDAY, TRUE, 8, 14) == WEDNESDAY);  // 14 August
    assert(dayOfWeek(THURSDAY, TRUE, 8, 15) == THURSDAY);   // 15 August
    assert(dayOfWeek(THURSDAY, TRUE, 8, 16) == FRIDAY);     // 16 August
    assert(dayOfWeek(THURSDAY, TRUE, 8, 17) == SATURDAY);   // 17 August
    assert(dayOfWeek(THURSDAY, TRUE, 8, 18) == SUNDAY);     // 18 August
    assert(dayOfWeek(THURSDAY, TRUE, 8, 19) == MONDAY);     // 19 August
    assert(dayOfWeek(THURSDAY, TRUE, 8, 20) == TUESDAY);    // 20 August
    assert(dayOfWeek(THURSDAY, TRUE, 8, 21) == WEDNESDAY);  // 21 August
    assert(dayOfWeek(THURSDAY, TRUE, 8, 22) == THURSDAY);   // 22 August
    assert(dayOfWeek(THURSDAY, TRUE, 8, 23) == FRIDAY);     // 23 August
    assert(dayOfWeek(THURSDAY, TRUE, 8, 24) == SATURDAY);   // 24 August
    assert(dayOfWeek(THURSDAY, TRUE, 8, 25) == SUNDAY);     // 25 August
    assert(dayOfWeek(THURSDAY, TRUE, 8, 26) == MONDAY);     // 26 August
    assert(dayOfWeek(THURSDAY, TRUE, 8, 27) == TUESDAY);    // 27 August
    assert(dayOfWeek(THURSDAY, TRUE, 8, 28) == WEDNESDAY);  // 28 August
    assert(dayOfWeek(THURSDAY, TRUE, 8, 29) == THURSDAY);   // 29 August
    assert(dayOfWeek(THURSDAY, TRUE, 8, 30) == FRIDAY);     // 30 August
    assert(dayOfWeek(THURSDAY, TRUE, 8, 31) == SATURDAY);   // 31 August
    assert(dayOfWeek(THURSDAY, TRUE, 9, 1) == SUNDAY);      // 1 September
    assert(dayOfWeek(THURSDAY, TRUE, 9, 2) == MONDAY);      // 2 September
    assert(dayOfWeek(THURSDAY, TRUE, 9, 3) == TUESDAY);     // 3 September
    assert(dayOfWeek(THURSDAY, TRUE, 9, 4) == WEDNESDAY);   // 4 September
    assert(dayOfWeek(THURSDAY, TRUE, 9, 5) == THURSDAY);    // 5 September
    assert(dayOfWeek(THURSDAY, TRUE, 9, 6) == FRIDAY);      // 6 September
    assert(dayOfWeek(THURSDAY, TRUE, 9, 7) == SATURDAY);    // 7 September
    assert(dayOfWeek(THURSDAY, TRUE, 9, 8) == SUNDAY);      // 8 September
    assert(dayOfWeek(THURSDAY, TRUE, 9, 9) == MONDAY);      // 9 September
    assert(dayOfWeek(THURSDAY, TRUE, 9, 10) == TUESDAY);    // 10 September
    assert(dayOfWeek(THURSDAY, TRUE, 9, 11) == WEDNESDAY);  // 11 September
    assert(dayOfWeek(THURSDAY, TRUE, 9, 12) == THURSDAY);   // 12 September
    assert(dayOfWeek(THURSDAY, TRUE, 9, 13) == FRIDAY);     // 13 September
    assert(dayOfWeek(THURSDAY, TRUE, 9, 14) == SATURDAY);   // 14 September
    assert(dayOfWeek(THURSDAY, TRUE, 9, 15) == SUNDAY);     // 15 September
    assert(dayOfWeek(THURSDAY, TRUE, 9, 16) == MONDAY);     // 16 September
    assert(dayOfWeek(THURSDAY, TRUE, 9, 17) == TUESDAY);    // 17 September
    assert(dayOfWeek(THURSDAY, TRUE, 9, 18) == WEDNESDAY);  // 18 September
    assert(dayOfWeek(THURSDAY, TRUE, 9, 19) == THURSDAY);   // 19 September
    assert(dayOfWeek(THURSDAY, TRUE, 9, 20) == FRIDAY);     // 20 September
    assert(dayOfWeek(THURSDAY, TRUE, 9, 21) == SATURDAY);   // 21 September
    assert(dayOfWeek(THURSDAY, TRUE, 9, 22) == SUNDAY);     // 22 September
    assert(dayOfWeek(THURSDAY, TRUE, 9, 23) == MONDAY);     // 23 September
    assert(dayOfWeek(THURSDAY, TRUE, 9, 24) == TUESDAY);    // 24 September
    assert(dayOfWeek(THURSDAY, TRUE, 9, 25) == WEDNESDAY);  // 25 September
    assert(dayOfWeek(THURSDAY, TRUE, 9, 26) == THURSDAY);   // 26 September
    assert(dayOfWeek(THURSDAY, TRUE, 9, 27) == FRIDAY);     // 27 September
    assert(dayOfWeek(THURSDAY, TRUE, 9, 28) == SATURDAY);   // 28 September
    assert(dayOfWeek(THURSDAY, TRUE, 9, 29) == SUNDAY);     // 29 September
    assert(dayOfWeek(THURSDAY, TRUE, 9, 30) == MONDAY);     // 30 September
    assert(dayOfWeek(THURSDAY, TRUE, 10, 1) == TUESDAY);    // 1 October
    assert(dayOfWeek(THURSDAY, TRUE, 10, 2) == WEDNESDAY);  // 2 October
    assert(dayOfWeek(THURSDAY, TRUE, 10, 3) == THURSDAY);   // 3 October
    assert(dayOfWeek(THURSDAY, TRUE, 10, 4) == FRIDAY);     // 4 October
    assert(dayOfWeek(THURSDAY, TRUE, 10, 5) == SATURDAY);   // 5 October
    assert(dayOfWeek(THURSDAY, TRUE, 10, 6) == SUNDAY);     // 6 October
    assert(dayOfWeek(THURSDAY, TRUE, 10, 7) == MONDAY);     // 7 October
    assert(dayOfWeek(THURSDAY, TRUE, 10, 8) == TUESDAY);    // 8 October
    assert(dayOfWeek(THURSDAY, TRUE, 10, 9) == WEDNESDAY);  // 9 October
    assert(dayOfWeek(THURSDAY, TRUE, 10, 10) == THURSDAY);  // 10 October
    assert(dayOfWeek(THURSDAY, TRUE, 10, 11) == FRIDAY);    // 11 October
    assert(dayOfWeek(THURSDAY, TRUE, 10, 12) == SATURDAY);  // 12 October
    assert(dayOfWeek(THURSDAY, TRUE, 10, 13) == SUNDAY);    // 13 October
    assert(dayOfWeek(THURSDAY, TRUE, 10, 14) == MONDAY);    // 14 October
    assert(dayOfWeek(THURSDAY, TRUE, 10, 15) == TUESDAY);   // 15 October
    assert(dayOfWeek(THURSDAY, TRUE, 10, 16) == WEDNESDAY); // 16 October
    assert(dayOfWeek(THURSDAY, TRUE, 10, 17) == THURSDAY);  // 17 October
    assert(dayOfWeek(THURSDAY, TRUE, 10, 18) == FRIDAY);    // 18 October
    assert(dayOfWeek(THURSDAY, TRUE, 10, 19) == SATURDAY);  // 19 October
    assert(dayOfWeek(THURSDAY, TRUE, 10, 20) == SUNDAY);    // 20 October
    assert(dayOfWeek(THURSDAY, TRUE, 10, 21) == MONDAY);    // 21 October
    assert(dayOfWeek(THURSDAY, TRUE, 10, 22) == TUESDAY);   // 22 October
    assert(dayOfWeek(THURSDAY, TRUE, 10, 23) == WEDNESDAY); // 23 October
    assert(dayOfWeek(THURSDAY, TRUE, 10, 24) == THURSDAY);  // 24 October
    assert(dayOfWeek(THURSDAY, TRUE, 10, 25) == FRIDAY);    // 25 October
    assert(dayOfWeek(THURSDAY, TRUE, 10, 26) == SATURDAY);  // 26 October
    assert(dayOfWeek(THURSDAY, TRUE, 10, 27) == SUNDAY);    // 27 October
    assert(dayOfWeek(THURSDAY, TRUE, 10, 28) == MONDAY);    // 28 October
    assert(dayOfWeek(THURSDAY, TRUE, 10, 29) == TUESDAY);   // 29 October
    assert(dayOfWeek(THURSDAY, TRUE, 10, 30) == WEDNESDAY); // 30 October
    assert(dayOfWeek(THURSDAY, TRUE, 10, 31) == THURSDAY);  // 31 October
    assert(dayOfWeek(THURSDAY, TRUE, 11, 1) == FRIDAY);     // 1 November
    assert(dayOfWeek(THURSDAY, TRUE, 11, 2) == SATURDAY);   // 2 November
    assert(dayOfWeek(THURSDAY, TRUE, 11, 3) == SUNDAY);     // 3 November
    assert(dayOfWeek(THURSDAY, TRUE, 11, 4) == MONDAY);     // 4 November
    assert(dayOfWeek(THURSDAY, TRUE, 11, 5) == TUESDAY);    // 5 November
    assert(dayOfWeek(THURSDAY, TRUE, 11, 6) == WEDNESDAY);  // 6 November
    assert(dayOfWeek(THURSDAY, TRUE, 11, 7) == THURSDAY);   // 7 November
    assert(dayOfWeek(THURSDAY, TRUE, 11, 8) == FRIDAY);     // 8 November
    assert(dayOfWeek(THURSDAY, TRUE, 11, 9) == SATURDAY);   // 9 November
    assert(dayOfWeek(THURSDAY, TRUE, 11, 10) == SUNDAY);    // 10 November
    assert(dayOfWeek(THURSDAY, TRUE, 11, 11) == MONDAY);    // 11 November
    assert(dayOfWeek(THURSDAY, TRUE, 11, 12) == TUESDAY);   // 12 November
    assert(dayOfWeek(THURSDAY, TRUE, 11, 13) == WEDNESDAY); // 13 November
    assert(dayOfWeek(THURSDAY, TRUE, 11, 14) == THURSDAY);  // 14 November
    assert(dayOfWeek(THURSDAY, TRUE, 11, 15) == FRIDAY);    // 15 November
    assert(dayOfWeek(THURSDAY, TRUE, 11, 16) == SATURDAY);  // 16 November
    assert(dayOfWeek(THURSDAY, TRUE, 11, 17) == SUNDAY);    // 17 November
    assert(dayOfWeek(THURSDAY, TRUE, 11, 18) == MONDAY);    // 18 November
    assert(dayOfWeek(THURSDAY, TRUE, 11, 19) == TUESDAY);   // 19 November
    assert(dayOfWeek(THURSDAY, TRUE, 11, 20) == WEDNESDAY); // 20 November
    assert(dayOfWeek(THURSDAY, TRUE, 11, 21) == THURSDAY);  // 21 November
    assert(dayOfWeek(THURSDAY, TRUE, 11, 22) == FRIDAY);    // 22 November
    assert(dayOfWeek(THURSDAY, TRUE, 11, 23) == SATURDAY);  // 23 November
    assert(dayOfWeek(THURSDAY, TRUE, 11, 24) == SUNDAY);    // 24 November
    assert(dayOfWeek(THURSDAY, TRUE, 11, 25) == MONDAY);    // 25 November
    assert(dayOfWeek(THURSDAY, TRUE, 11, 26) == TUESDAY);   // 26 November
    assert(dayOfWeek(THURSDAY, TRUE, 11, 27) == WEDNESDAY); // 27 November
    assert(dayOfWeek(THURSDAY, TRUE, 11, 28) == THURSDAY);  // 28 November
    assert(dayOfWeek(THURSDAY, TRUE, 11, 29) == FRIDAY);    // 29 November
    assert(dayOfWeek(THURSDAY, TRUE, 11, 30) == SATURDAY);  // 30 November
    assert(dayOfWeek(THURSDAY, TRUE, 12, 1) == SUNDAY);     // 1 December
    assert(dayOfWeek(THURSDAY, TRUE, 12, 2) == MONDAY);     // 2 December
    assert(dayOfWeek(THURSDAY, TRUE, 12, 3) == TUESDAY);    // 3 December
    assert(dayOfWeek(THURSDAY, TRUE, 12, 4) == WEDNESDAY);  // 4 December
    assert(dayOfWeek(THURSDAY, TRUE, 12, 5) == THURSDAY);   // 5 December
    assert(dayOfWeek(THURSDAY, TRUE, 12, 6) == FRIDAY);     // 6 December
    assert(dayOfWeek(THURSDAY, TRUE, 12, 7) == SATURDAY);   // 7 December
    assert(dayOfWeek(THURSDAY, TRUE, 12, 8) == SUNDAY);     // 8 December
    assert(dayOfWeek(THURSDAY, TRUE, 12, 9) == MONDAY);     // 9 December
    assert(dayOfWeek(THURSDAY, TRUE, 12, 10) == TUESDAY);   // 10 December
    assert(dayOfWeek(THURSDAY, TRUE, 12, 11) == WEDNESDAY); // 11 December
    assert(dayOfWeek(THURSDAY, TRUE, 12, 12) == THURSDAY);  // 12 December
    assert(dayOfWeek(THURSDAY, TRUE, 12, 13) == FRIDAY);    // 13 December
    assert(dayOfWeek(THURSDAY, TRUE, 12, 14) == SATURDAY);  // 14 December
    assert(dayOfWeek(THURSDAY, TRUE, 12, 15) == SUNDAY);    // 15 December
    assert(dayOfWeek(THURSDAY, TRUE, 12, 16) == MONDAY);    // 16 December
    assert(dayOfWeek(THURSDAY, TRUE, 12, 17) == TUESDAY);   // 17 December
    assert(dayOfWeek(THURSDAY, TRUE, 12, 18) == WEDNESDAY); // 18 December
    assert(dayOfWeek(THURSDAY, TRUE, 12, 19) == THURSDAY);  // 19 December
    assert(dayOfWeek(THURSDAY, TRUE, 12, 20) == FRIDAY);    // 20 December
    assert(dayOfWeek(THURSDAY, TRUE, 12, 21) == SATURDAY);  // 21 December
    assert(dayOfWeek(THURSDAY, TRUE, 12, 22) == SUNDAY);    // 22 December
    assert(dayOfWeek(THURSDAY, TRUE, 12, 23) == MONDAY);    // 23 December
    assert(dayOfWeek(THURSDAY, TRUE, 12, 24) == TUESDAY);   // 24 December
    assert(dayOfWeek(THURSDAY, TRUE, 12, 25) == WEDNESDAY); // 25 December
    assert(dayOfWeek(THURSDAY, TRUE, 12, 26) == THURSDAY);  // 26 December
    assert(dayOfWeek(THURSDAY, TRUE, 12, 27) == FRIDAY);    // 27 December
    assert(dayOfWeek(THURSDAY, TRUE, 12, 28) == SATURDAY);  // 28 December
    assert(dayOfWeek(THURSDAY, TRUE, 12, 29) == SUNDAY);    // 29 December
    assert(dayOfWeek(THURSDAY, TRUE, 12, 30) == MONDAY);    // 30 December
    assert(dayOfWeek(THURSDAY, TRUE, 12, 31) == TUESDAY);   // 31 December
    // Doomsday = FRIDAY, leapyear = Yes
    assert(dayOfWeek(FRIDAY, TRUE, 1, 1) == TUESDAY);       // 1 January
    assert(dayOfWeek(FRIDAY, TRUE, 1, 2) == WEDNESDAY);     // 2 January
    assert(dayOfWeek(FRIDAY, TRUE, 1, 3) == THURSDAY);      // 3 January
    assert(dayOfWeek(FRIDAY, TRUE, 1, 4) == FRIDAY);        // 4 January
    assert(dayOfWeek(FRIDAY, TRUE, 1, 5) == SATURDAY);      // 5 January
    assert(dayOfWeek(FRIDAY, TRUE, 1, 6) == SUNDAY);        // 6 January
    assert(dayOfWeek(FRIDAY, TRUE, 1, 7) == MONDAY);        // 7 January
    assert(dayOfWeek(FRIDAY, TRUE, 1, 8) == TUESDAY);       // 8 January
    assert(dayOfWeek(FRIDAY, TRUE, 1, 9) == WEDNESDAY);     // 9 January
    assert(dayOfWeek(FRIDAY, TRUE, 1, 10) == THURSDAY);     // 10 January
    assert(dayOfWeek(FRIDAY, TRUE, 1, 11) == FRIDAY);       // 11 January
    assert(dayOfWeek(FRIDAY, TRUE, 1, 12) == SATURDAY);     // 12 January
    assert(dayOfWeek(FRIDAY, TRUE, 1, 13) == SUNDAY);       // 13 January
    assert(dayOfWeek(FRIDAY, TRUE, 1, 14) == MONDAY);       // 14 January
    assert(dayOfWeek(FRIDAY, TRUE, 1, 15) == TUESDAY);      // 15 January
    assert(dayOfWeek(FRIDAY, TRUE, 1, 16) == WEDNESDAY);    // 16 January
    assert(dayOfWeek(FRIDAY, TRUE, 1, 17) == THURSDAY);     // 17 January
    assert(dayOfWeek(FRIDAY, TRUE, 1, 18) == FRIDAY);       // 18 January
    assert(dayOfWeek(FRIDAY, TRUE, 1, 19) == SATURDAY);     // 19 January
    assert(dayOfWeek(FRIDAY, TRUE, 1, 20) == SUNDAY);       // 20 January
    assert(dayOfWeek(FRIDAY, TRUE, 1, 21) == MONDAY);       // 21 January
    assert(dayOfWeek(FRIDAY, TRUE, 1, 22) == TUESDAY);      // 22 January
    assert(dayOfWeek(FRIDAY, TRUE, 1, 23) == WEDNESDAY);    // 23 January
    assert(dayOfWeek(FRIDAY, TRUE, 1, 24) == THURSDAY);     // 24 January
    assert(dayOfWeek(FRIDAY, TRUE, 1, 25) == FRIDAY);       // 25 January
    assert(dayOfWeek(FRIDAY, TRUE, 1, 26) == SATURDAY);     // 26 January
    assert(dayOfWeek(FRIDAY, TRUE, 1, 27) == SUNDAY);       // 27 January
    assert(dayOfWeek(FRIDAY, TRUE, 1, 28) == MONDAY);       // 28 January
    assert(dayOfWeek(FRIDAY, TRUE, 1, 29) == TUESDAY);      // 29 January
    assert(dayOfWeek(FRIDAY, TRUE, 1, 30) == WEDNESDAY);    // 30 January
    assert(dayOfWeek(FRIDAY, TRUE, 1, 31) == THURSDAY);     // 31 January
    assert(dayOfWeek(FRIDAY, TRUE, 2, 1) == FRIDAY);        // 1 February
    assert(dayOfWeek(FRIDAY, TRUE, 2, 2) == SATURDAY);      // 2 February
    assert(dayOfWeek(FRIDAY, TRUE, 2, 3) == SUNDAY);        // 3 February
    assert(dayOfWeek(FRIDAY, TRUE, 2, 4) == MONDAY);        // 4 February
    assert(dayOfWeek(FRIDAY, TRUE, 2, 5) == TUESDAY);       // 5 February
    assert(dayOfWeek(FRIDAY, TRUE, 2, 6) == WEDNESDAY);     // 6 February
    assert(dayOfWeek(FRIDAY, TRUE, 2, 7) == THURSDAY);      // 7 February
    assert(dayOfWeek(FRIDAY, TRUE, 2, 8) == FRIDAY);        // 8 February
    assert(dayOfWeek(FRIDAY, TRUE, 2, 9) == SATURDAY);      // 9 February
    assert(dayOfWeek(FRIDAY, TRUE, 2, 10) == SUNDAY);       // 10 February
    assert(dayOfWeek(FRIDAY, TRUE, 2, 11) == MONDAY);       // 11 February
    assert(dayOfWeek(FRIDAY, TRUE, 2, 12) == TUESDAY);      // 12 February
    assert(dayOfWeek(FRIDAY, TRUE, 2, 13) == WEDNESDAY);    // 13 February
    assert(dayOfWeek(FRIDAY, TRUE, 2, 14) == THURSDAY);     // 14 February
    assert(dayOfWeek(FRIDAY, TRUE, 2, 15) == FRIDAY);       // 15 February
    assert(dayOfWeek(FRIDAY, TRUE, 2, 16) == SATURDAY);     // 16 February
    assert(dayOfWeek(FRIDAY, TRUE, 2, 17) == SUNDAY);       // 17 February
    assert(dayOfWeek(FRIDAY, TRUE, 2, 18) == MONDAY);       // 18 February
    assert(dayOfWeek(FRIDAY, TRUE, 2, 19) == TUESDAY);      // 19 February
    assert(dayOfWeek(FRIDAY, TRUE, 2, 20) == WEDNESDAY);    // 20 February
    assert(dayOfWeek(FRIDAY, TRUE, 2, 21) == THURSDAY);     // 21 February
    assert(dayOfWeek(FRIDAY, TRUE, 2, 22) == FRIDAY);       // 22 February
    assert(dayOfWeek(FRIDAY, TRUE, 2, 23) == SATURDAY);     // 23 February
    assert(dayOfWeek(FRIDAY, TRUE, 2, 24) == SUNDAY);       // 24 February
    assert(dayOfWeek(FRIDAY, TRUE, 2, 25) == MONDAY);       // 25 February
    assert(dayOfWeek(FRIDAY, TRUE, 2, 26) == TUESDAY);      // 26 February
    assert(dayOfWeek(FRIDAY, TRUE, 2, 27) == WEDNESDAY);    // 27 February
    assert(dayOfWeek(FRIDAY, TRUE, 2, 28) == THURSDAY);     // 28 February
    assert(dayOfWeek(FRIDAY, TRUE, 2, 29) == FRIDAY);       // 29 February
    assert(dayOfWeek(FRIDAY, TRUE, 3, 1) == SATURDAY);      // 1 March
    assert(dayOfWeek(FRIDAY, TRUE, 3, 2) == SUNDAY);        // 2 March
    assert(dayOfWeek(FRIDAY, TRUE, 3, 3) == MONDAY);        // 3 March
    assert(dayOfWeek(FRIDAY, TRUE, 3, 4) == TUESDAY);       // 4 March
    assert(dayOfWeek(FRIDAY, TRUE, 3, 5) == WEDNESDAY);     // 5 March
    assert(dayOfWeek(FRIDAY, TRUE, 3, 6) == THURSDAY);      // 6 March
    assert(dayOfWeek(FRIDAY, TRUE, 3, 7) == FRIDAY);        // 7 March
    assert(dayOfWeek(FRIDAY, TRUE, 3, 8) == SATURDAY);      // 8 March
    assert(dayOfWeek(FRIDAY, TRUE, 3, 9) == SUNDAY);        // 9 March
    assert(dayOfWeek(FRIDAY, TRUE, 3, 10) == MONDAY);       // 10 March
    assert(dayOfWeek(FRIDAY, TRUE, 3, 11) == TUESDAY);      // 11 March
    assert(dayOfWeek(FRIDAY, TRUE, 3, 12) == WEDNESDAY);    // 12 March
    assert(dayOfWeek(FRIDAY, TRUE, 3, 13) == THURSDAY);     // 13 March
    assert(dayOfWeek(FRIDAY, TRUE, 3, 14) == FRIDAY);       // 14 March
    assert(dayOfWeek(FRIDAY, TRUE, 3, 15) == SATURDAY);     // 15 March
    assert(dayOfWeek(FRIDAY, TRUE, 3, 16) == SUNDAY);       // 16 March
    assert(dayOfWeek(FRIDAY, TRUE, 3, 17) == MONDAY);       // 17 March
    assert(dayOfWeek(FRIDAY, TRUE, 3, 18) == TUESDAY);      // 18 March
    assert(dayOfWeek(FRIDAY, TRUE, 3, 19) == WEDNESDAY);    // 19 March
    assert(dayOfWeek(FRIDAY, TRUE, 3, 20) == THURSDAY);     // 20 March
    assert(dayOfWeek(FRIDAY, TRUE, 3, 21) == FRIDAY);       // 21 March
    assert(dayOfWeek(FRIDAY, TRUE, 3, 22) == SATURDAY);     // 22 March
    assert(dayOfWeek(FRIDAY, TRUE, 3, 23) == SUNDAY);       // 23 March
    assert(dayOfWeek(FRIDAY, TRUE, 3, 24) == MONDAY);       // 24 March
    assert(dayOfWeek(FRIDAY, TRUE, 3, 25) == TUESDAY);      // 25 March
    assert(dayOfWeek(FRIDAY, TRUE, 3, 26) == WEDNESDAY);    // 26 March
    assert(dayOfWeek(FRIDAY, TRUE, 3, 27) == THURSDAY);     // 27 March
    assert(dayOfWeek(FRIDAY, TRUE, 3, 28) == FRIDAY);       // 28 March
    assert(dayOfWeek(FRIDAY, TRUE, 3, 29) == SATURDAY);     // 29 March
    assert(dayOfWeek(FRIDAY, TRUE, 3, 30) == SUNDAY);       // 30 March
    assert(dayOfWeek(FRIDAY, TRUE, 3, 31) == MONDAY);       // 31 March
    assert(dayOfWeek(FRIDAY, TRUE, 4, 1) == TUESDAY);       // 1 April
    assert(dayOfWeek(FRIDAY, TRUE, 4, 2) == WEDNESDAY);     // 2 April
    assert(dayOfWeek(FRIDAY, TRUE, 4, 3) == THURSDAY);      // 3 April
    assert(dayOfWeek(FRIDAY, TRUE, 4, 4) == FRIDAY);        // 4 April
    assert(dayOfWeek(FRIDAY, TRUE, 4, 5) == SATURDAY);      // 5 April
    assert(dayOfWeek(FRIDAY, TRUE, 4, 6) == SUNDAY);        // 6 April
    assert(dayOfWeek(FRIDAY, TRUE, 4, 7) == MONDAY);        // 7 April
    assert(dayOfWeek(FRIDAY, TRUE, 4, 8) == TUESDAY);       // 8 April
    assert(dayOfWeek(FRIDAY, TRUE, 4, 9) == WEDNESDAY);     // 9 April
    assert(dayOfWeek(FRIDAY, TRUE, 4, 10) == THURSDAY);     // 10 April
    assert(dayOfWeek(FRIDAY, TRUE, 4, 11) == FRIDAY);       // 11 April
    assert(dayOfWeek(FRIDAY, TRUE, 4, 12) == SATURDAY);     // 12 April
    assert(dayOfWeek(FRIDAY, TRUE, 4, 13) == SUNDAY);       // 13 April
    assert(dayOfWeek(FRIDAY, TRUE, 4, 14) == MONDAY);       // 14 April
    assert(dayOfWeek(FRIDAY, TRUE, 4, 15) == TUESDAY);      // 15 April
    assert(dayOfWeek(FRIDAY, TRUE, 4, 16) == WEDNESDAY);    // 16 April
    assert(dayOfWeek(FRIDAY, TRUE, 4, 17) == THURSDAY);     // 17 April
    assert(dayOfWeek(FRIDAY, TRUE, 4, 18) == FRIDAY);       // 18 April
    assert(dayOfWeek(FRIDAY, TRUE, 4, 19) == SATURDAY);     // 19 April
    assert(dayOfWeek(FRIDAY, TRUE, 4, 20) == SUNDAY);       // 20 April
    assert(dayOfWeek(FRIDAY, TRUE, 4, 21) == MONDAY);       // 21 April
    assert(dayOfWeek(FRIDAY, TRUE, 4, 22) == TUESDAY);      // 22 April
    assert(dayOfWeek(FRIDAY, TRUE, 4, 23) == WEDNESDAY);    // 23 April
    assert(dayOfWeek(FRIDAY, TRUE, 4, 24) == THURSDAY);     // 24 April
    assert(dayOfWeek(FRIDAY, TRUE, 4, 25) == FRIDAY);       // 25 April
    assert(dayOfWeek(FRIDAY, TRUE, 4, 26) == SATURDAY);     // 26 April
    assert(dayOfWeek(FRIDAY, TRUE, 4, 27) == SUNDAY);       // 27 April
    assert(dayOfWeek(FRIDAY, TRUE, 4, 28) == MONDAY);       // 28 April
    assert(dayOfWeek(FRIDAY, TRUE, 4, 29) == TUESDAY);      // 29 April
    assert(dayOfWeek(FRIDAY, TRUE, 4, 30) == WEDNESDAY);    // 30 April
    assert(dayOfWeek(FRIDAY, TRUE, 5, 1) == THURSDAY);      // 1 May
    assert(dayOfWeek(FRIDAY, TRUE, 5, 2) == FRIDAY);        // 2 May
    assert(dayOfWeek(FRIDAY, TRUE, 5, 3) == SATURDAY);      // 3 May
    assert(dayOfWeek(FRIDAY, TRUE, 5, 4) == SUNDAY);        // 4 May
    assert(dayOfWeek(FRIDAY, TRUE, 5, 5) == MONDAY);        // 5 May
    assert(dayOfWeek(FRIDAY, TRUE, 5, 6) == TUESDAY);       // 6 May
    assert(dayOfWeek(FRIDAY, TRUE, 5, 7) == WEDNESDAY);     // 7 May
    assert(dayOfWeek(FRIDAY, TRUE, 5, 8) == THURSDAY);      // 8 May
    assert(dayOfWeek(FRIDAY, TRUE, 5, 9) == FRIDAY);        // 9 May
    assert(dayOfWeek(FRIDAY, TRUE, 5, 10) == SATURDAY);     // 10 May
    assert(dayOfWeek(FRIDAY, TRUE, 5, 11) == SUNDAY);       // 11 May
    assert(dayOfWeek(FRIDAY, TRUE, 5, 12) == MONDAY);       // 12 May
    assert(dayOfWeek(FRIDAY, TRUE, 5, 13) == TUESDAY);      // 13 May
    assert(dayOfWeek(FRIDAY, TRUE, 5, 14) == WEDNESDAY);    // 14 May
    assert(dayOfWeek(FRIDAY, TRUE, 5, 15) == THURSDAY);     // 15 May
    assert(dayOfWeek(FRIDAY, TRUE, 5, 16) == FRIDAY);       // 16 May
    assert(dayOfWeek(FRIDAY, TRUE, 5, 17) == SATURDAY);     // 17 May
    assert(dayOfWeek(FRIDAY, TRUE, 5, 18) == SUNDAY);       // 18 May
    assert(dayOfWeek(FRIDAY, TRUE, 5, 19) == MONDAY);       // 19 May
    assert(dayOfWeek(FRIDAY, TRUE, 5, 20) == TUESDAY);      // 20 May
    assert(dayOfWeek(FRIDAY, TRUE, 5, 21) == WEDNESDAY);    // 21 May
    assert(dayOfWeek(FRIDAY, TRUE, 5, 22) == THURSDAY);     // 22 May
    assert(dayOfWeek(FRIDAY, TRUE, 5, 23) == FRIDAY);       // 23 May
    assert(dayOfWeek(FRIDAY, TRUE, 5, 24) == SATURDAY);     // 24 May
    assert(dayOfWeek(FRIDAY, TRUE, 5, 25) == SUNDAY);       // 25 May
    assert(dayOfWeek(FRIDAY, TRUE, 5, 26) == MONDAY);       // 26 May
    assert(dayOfWeek(FRIDAY, TRUE, 5, 27) == TUESDAY);      // 27 May
    assert(dayOfWeek(FRIDAY, TRUE, 5, 28) == WEDNESDAY);    // 28 May
    assert(dayOfWeek(FRIDAY, TRUE, 5, 29) == THURSDAY);     // 29 May
    assert(dayOfWeek(FRIDAY, TRUE, 5, 30) == FRIDAY);       // 30 May
    assert(dayOfWeek(FRIDAY, TRUE, 5, 31) == SATURDAY);     // 31 May
    assert(dayOfWeek(FRIDAY, TRUE, 6, 1) == SUNDAY);        // 1 June
    assert(dayOfWeek(FRIDAY, TRUE, 6, 2) == MONDAY);        // 2 June
    assert(dayOfWeek(FRIDAY, TRUE, 6, 3) == TUESDAY);       // 3 June
    assert(dayOfWeek(FRIDAY, TRUE, 6, 4) == WEDNESDAY);     // 4 June
    assert(dayOfWeek(FRIDAY, TRUE, 6, 5) == THURSDAY);      // 5 June
    assert(dayOfWeek(FRIDAY, TRUE, 6, 6) == FRIDAY);        // 6 June
    assert(dayOfWeek(FRIDAY, TRUE, 6, 7) == SATURDAY);      // 7 June
    assert(dayOfWeek(FRIDAY, TRUE, 6, 8) == SUNDAY);        // 8 June
    assert(dayOfWeek(FRIDAY, TRUE, 6, 9) == MONDAY);        // 9 June
    assert(dayOfWeek(FRIDAY, TRUE, 6, 10) == TUESDAY);      // 10 June
    assert(dayOfWeek(FRIDAY, TRUE, 6, 11) == WEDNESDAY);    // 11 June
    assert(dayOfWeek(FRIDAY, TRUE, 6, 12) == THURSDAY);     // 12 June
    assert(dayOfWeek(FRIDAY, TRUE, 6, 13) == FRIDAY);       // 13 June
    assert(dayOfWeek(FRIDAY, TRUE, 6, 14) == SATURDAY);     // 14 June
    assert(dayOfWeek(FRIDAY, TRUE, 6, 15) == SUNDAY);       // 15 June
    assert(dayOfWeek(FRIDAY, TRUE, 6, 16) == MONDAY);       // 16 June
    assert(dayOfWeek(FRIDAY, TRUE, 6, 17) == TUESDAY);      // 17 June
    assert(dayOfWeek(FRIDAY, TRUE, 6, 18) == WEDNESDAY);    // 18 June
    assert(dayOfWeek(FRIDAY, TRUE, 6, 19) == THURSDAY);     // 19 June
    assert(dayOfWeek(FRIDAY, TRUE, 6, 20) == FRIDAY);       // 20 June
    assert(dayOfWeek(FRIDAY, TRUE, 6, 21) == SATURDAY);     // 21 June
    assert(dayOfWeek(FRIDAY, TRUE, 6, 22) == SUNDAY);       // 22 June
    assert(dayOfWeek(FRIDAY, TRUE, 6, 23) == MONDAY);       // 23 June
    assert(dayOfWeek(FRIDAY, TRUE, 6, 24) == TUESDAY);      // 24 June
    assert(dayOfWeek(FRIDAY, TRUE, 6, 25) == WEDNESDAY);    // 25 June
    assert(dayOfWeek(FRIDAY, TRUE, 6, 26) == THURSDAY);     // 26 June
    assert(dayOfWeek(FRIDAY, TRUE, 6, 27) == FRIDAY);       // 27 June
    assert(dayOfWeek(FRIDAY, TRUE, 6, 28) == SATURDAY);     // 28 June
    assert(dayOfWeek(FRIDAY, TRUE, 6, 29) == SUNDAY);       // 29 June
    assert(dayOfWeek(FRIDAY, TRUE, 6, 30) == MONDAY);       // 30 June
    assert(dayOfWeek(FRIDAY, TRUE, 7, 1) == TUESDAY);       // 1 July
    assert(dayOfWeek(FRIDAY, TRUE, 7, 2) == WEDNESDAY);     // 2 July
    assert(dayOfWeek(FRIDAY, TRUE, 7, 3) == THURSDAY);      // 3 July
    assert(dayOfWeek(FRIDAY, TRUE, 7, 4) == FRIDAY);        // 4 July
    assert(dayOfWeek(FRIDAY, TRUE, 7, 5) == SATURDAY);      // 5 July
    assert(dayOfWeek(FRIDAY, TRUE, 7, 6) == SUNDAY);        // 6 July
    assert(dayOfWeek(FRIDAY, TRUE, 7, 7) == MONDAY);        // 7 July
    assert(dayOfWeek(FRIDAY, TRUE, 7, 8) == TUESDAY);       // 8 July
    assert(dayOfWeek(FRIDAY, TRUE, 7, 9) == WEDNESDAY);     // 9 July
    assert(dayOfWeek(FRIDAY, TRUE, 7, 10) == THURSDAY);     // 10 July
    assert(dayOfWeek(FRIDAY, TRUE, 7, 11) == FRIDAY);       // 11 July
    assert(dayOfWeek(FRIDAY, TRUE, 7, 12) == SATURDAY);     // 12 July
    assert(dayOfWeek(FRIDAY, TRUE, 7, 13) == SUNDAY);       // 13 July
    assert(dayOfWeek(FRIDAY, TRUE, 7, 14) == MONDAY);       // 14 July
    assert(dayOfWeek(FRIDAY, TRUE, 7, 15) == TUESDAY);      // 15 July
    assert(dayOfWeek(FRIDAY, TRUE, 7, 16) == WEDNESDAY);    // 16 July
    assert(dayOfWeek(FRIDAY, TRUE, 7, 17) == THURSDAY);     // 17 July
    assert(dayOfWeek(FRIDAY, TRUE, 7, 18) == FRIDAY);       // 18 July
    assert(dayOfWeek(FRIDAY, TRUE, 7, 19) == SATURDAY);     // 19 July
    assert(dayOfWeek(FRIDAY, TRUE, 7, 20) == SUNDAY);       // 20 July
    assert(dayOfWeek(FRIDAY, TRUE, 7, 21) == MONDAY);       // 21 July
    assert(dayOfWeek(FRIDAY, TRUE, 7, 22) == TUESDAY);      // 22 July
    assert(dayOfWeek(FRIDAY, TRUE, 7, 23) == WEDNESDAY);    // 23 July
    assert(dayOfWeek(FRIDAY, TRUE, 7, 24) == THURSDAY);     // 24 July
    assert(dayOfWeek(FRIDAY, TRUE, 7, 25) == FRIDAY);       // 25 July
    assert(dayOfWeek(FRIDAY, TRUE, 7, 26) == SATURDAY);     // 26 July
    assert(dayOfWeek(FRIDAY, TRUE, 7, 27) == SUNDAY);       // 27 July
    assert(dayOfWeek(FRIDAY, TRUE, 7, 28) == MONDAY);       // 28 July
    assert(dayOfWeek(FRIDAY, TRUE, 7, 29) == TUESDAY);      // 29 July
    assert(dayOfWeek(FRIDAY, TRUE, 7, 30) == WEDNESDAY);    // 30 July
    assert(dayOfWeek(FRIDAY, TRUE, 7, 31) == THURSDAY);     // 31 July
    assert(dayOfWeek(FRIDAY, TRUE, 8, 1) == FRIDAY);        // 1 August
    assert(dayOfWeek(FRIDAY, TRUE, 8, 2) == SATURDAY);      // 2 August
    assert(dayOfWeek(FRIDAY, TRUE, 8, 3) == SUNDAY);        // 3 August
    assert(dayOfWeek(FRIDAY, TRUE, 8, 4) == MONDAY);        // 4 August
    assert(dayOfWeek(FRIDAY, TRUE, 8, 5) == TUESDAY);       // 5 August
    assert(dayOfWeek(FRIDAY, TRUE, 8, 6) == WEDNESDAY);     // 6 August
    assert(dayOfWeek(FRIDAY, TRUE, 8, 7) == THURSDAY);      // 7 August
    assert(dayOfWeek(FRIDAY, TRUE, 8, 8) == FRIDAY);        // 8 August
    assert(dayOfWeek(FRIDAY, TRUE, 8, 9) == SATURDAY);      // 9 August
    assert(dayOfWeek(FRIDAY, TRUE, 8, 10) == SUNDAY);       // 10 August
    assert(dayOfWeek(FRIDAY, TRUE, 8, 11) == MONDAY);       // 11 August
    assert(dayOfWeek(FRIDAY, TRUE, 8, 12) == TUESDAY);      // 12 August
    assert(dayOfWeek(FRIDAY, TRUE, 8, 13) == WEDNESDAY);    // 13 August
    assert(dayOfWeek(FRIDAY, TRUE, 8, 14) == THURSDAY);     // 14 August
    assert(dayOfWeek(FRIDAY, TRUE, 8, 15) == FRIDAY);       // 15 August
    assert(dayOfWeek(FRIDAY, TRUE, 8, 16) == SATURDAY);     // 16 August
    assert(dayOfWeek(FRIDAY, TRUE, 8, 17) == SUNDAY);       // 17 August
    assert(dayOfWeek(FRIDAY, TRUE, 8, 18) == MONDAY);       // 18 August
    assert(dayOfWeek(FRIDAY, TRUE, 8, 19) == TUESDAY);      // 19 August
    assert(dayOfWeek(FRIDAY, TRUE, 8, 20) == WEDNESDAY);    // 20 August
    assert(dayOfWeek(FRIDAY, TRUE, 8, 21) == THURSDAY);     // 21 August
    assert(dayOfWeek(FRIDAY, TRUE, 8, 22) == FRIDAY);       // 22 August
    assert(dayOfWeek(FRIDAY, TRUE, 8, 23) == SATURDAY);     // 23 August
    assert(dayOfWeek(FRIDAY, TRUE, 8, 24) == SUNDAY);       // 24 August
    assert(dayOfWeek(FRIDAY, TRUE, 8, 25) == MONDAY);       // 25 August
    assert(dayOfWeek(FRIDAY, TRUE, 8, 26) == TUESDAY);      // 26 August
    assert(dayOfWeek(FRIDAY, TRUE, 8, 27) == WEDNESDAY);    // 27 August
    assert(dayOfWeek(FRIDAY, TRUE, 8, 28) == THURSDAY);     // 28 August
    assert(dayOfWeek(FRIDAY, TRUE, 8, 29) == FRIDAY);       // 29 August
    assert(dayOfWeek(FRIDAY, TRUE, 8, 30) == SATURDAY);     // 30 August
    assert(dayOfWeek(FRIDAY, TRUE, 8, 31) == SUNDAY);       // 31 August
    assert(dayOfWeek(FRIDAY, TRUE, 9, 1) == MONDAY);        // 1 September
    assert(dayOfWeek(FRIDAY, TRUE, 9, 2) == TUESDAY);       // 2 September
    assert(dayOfWeek(FRIDAY, TRUE, 9, 3) == WEDNESDAY);     // 3 September
    assert(dayOfWeek(FRIDAY, TRUE, 9, 4) == THURSDAY);      // 4 September
    assert(dayOfWeek(FRIDAY, TRUE, 9, 5) == FRIDAY);        // 5 September
    assert(dayOfWeek(FRIDAY, TRUE, 9, 6) == SATURDAY);      // 6 September
    assert(dayOfWeek(FRIDAY, TRUE, 9, 7) == SUNDAY);        // 7 September
    assert(dayOfWeek(FRIDAY, TRUE, 9, 8) == MONDAY);        // 8 September
    assert(dayOfWeek(FRIDAY, TRUE, 9, 9) == TUESDAY);       // 9 September
    assert(dayOfWeek(FRIDAY, TRUE, 9, 10) == WEDNESDAY);    // 10 September
    assert(dayOfWeek(FRIDAY, TRUE, 9, 11) == THURSDAY);     // 11 September
    assert(dayOfWeek(FRIDAY, TRUE, 9, 12) == FRIDAY);       // 12 September
    assert(dayOfWeek(FRIDAY, TRUE, 9, 13) == SATURDAY);     // 13 September
    assert(dayOfWeek(FRIDAY, TRUE, 9, 14) == SUNDAY);       // 14 September
    assert(dayOfWeek(FRIDAY, TRUE, 9, 15) == MONDAY);       // 15 September
    assert(dayOfWeek(FRIDAY, TRUE, 9, 16) == TUESDAY);      // 16 September
    assert(dayOfWeek(FRIDAY, TRUE, 9, 17) == WEDNESDAY);    // 17 September
    assert(dayOfWeek(FRIDAY, TRUE, 9, 18) == THURSDAY);     // 18 September
    assert(dayOfWeek(FRIDAY, TRUE, 9, 19) == FRIDAY);       // 19 September
    assert(dayOfWeek(FRIDAY, TRUE, 9, 20) == SATURDAY);     // 20 September
    assert(dayOfWeek(FRIDAY, TRUE, 9, 21) == SUNDAY);       // 21 September
    assert(dayOfWeek(FRIDAY, TRUE, 9, 22) == MONDAY);       // 22 September
    assert(dayOfWeek(FRIDAY, TRUE, 9, 23) == TUESDAY);      // 23 September
    assert(dayOfWeek(FRIDAY, TRUE, 9, 24) == WEDNESDAY);    // 24 September
    assert(dayOfWeek(FRIDAY, TRUE, 9, 25) == THURSDAY);     // 25 September
    assert(dayOfWeek(FRIDAY, TRUE, 9, 26) == FRIDAY);       // 26 September
    assert(dayOfWeek(FRIDAY, TRUE, 9, 27) == SATURDAY);     // 27 September
    assert(dayOfWeek(FRIDAY, TRUE, 9, 28) == SUNDAY);       // 28 September
    assert(dayOfWeek(FRIDAY, TRUE, 9, 29) == MONDAY);       // 29 September
    assert(dayOfWeek(FRIDAY, TRUE, 9, 30) == TUESDAY);      // 30 September
    assert(dayOfWeek(FRIDAY, TRUE, 10, 1) == WEDNESDAY);    // 1 October
    assert(dayOfWeek(FRIDAY, TRUE, 10, 2) == THURSDAY);     // 2 October
    assert(dayOfWeek(FRIDAY, TRUE, 10, 3) == FRIDAY);       // 3 October
    assert(dayOfWeek(FRIDAY, TRUE, 10, 4) == SATURDAY);     // 4 October
    assert(dayOfWeek(FRIDAY, TRUE, 10, 5) == SUNDAY);       // 5 October
    assert(dayOfWeek(FRIDAY, TRUE, 10, 6) == MONDAY);       // 6 October
    assert(dayOfWeek(FRIDAY, TRUE, 10, 7) == TUESDAY);      // 7 October
    assert(dayOfWeek(FRIDAY, TRUE, 10, 8) == WEDNESDAY);    // 8 October
    assert(dayOfWeek(FRIDAY, TRUE, 10, 9) == THURSDAY);     // 9 October
    assert(dayOfWeek(FRIDAY, TRUE, 10, 10) == FRIDAY);      // 10 October
    assert(dayOfWeek(FRIDAY, TRUE, 10, 11) == SATURDAY);    // 11 October
    assert(dayOfWeek(FRIDAY, TRUE, 10, 12) == SUNDAY);      // 12 October
    assert(dayOfWeek(FRIDAY, TRUE, 10, 13) == MONDAY);      // 13 October
    assert(dayOfWeek(FRIDAY, TRUE, 10, 14) == TUESDAY);     // 14 October
    assert(dayOfWeek(FRIDAY, TRUE, 10, 15) == WEDNESDAY);   // 15 October
    assert(dayOfWeek(FRIDAY, TRUE, 10, 16) == THURSDAY);    // 16 October
    assert(dayOfWeek(FRIDAY, TRUE, 10, 17) == FRIDAY);      // 17 October
    assert(dayOfWeek(FRIDAY, TRUE, 10, 18) == SATURDAY);    // 18 October
    assert(dayOfWeek(FRIDAY, TRUE, 10, 19) == SUNDAY);      // 19 October
    assert(dayOfWeek(FRIDAY, TRUE, 10, 20) == MONDAY);      // 20 October
    assert(dayOfWeek(FRIDAY, TRUE, 10, 21) == TUESDAY);     // 21 October
    assert(dayOfWeek(FRIDAY, TRUE, 10, 22) == WEDNESDAY);   // 22 October
    assert(dayOfWeek(FRIDAY, TRUE, 10, 23) == THURSDAY);    // 23 October
    assert(dayOfWeek(FRIDAY, TRUE, 10, 24) == FRIDAY);      // 24 October
    assert(dayOfWeek(FRIDAY, TRUE, 10, 25) == SATURDAY);    // 25 October
    assert(dayOfWeek(FRIDAY, TRUE, 10, 26) == SUNDAY);      // 26 October
    assert(dayOfWeek(FRIDAY, TRUE, 10, 27) == MONDAY);      // 27 October
    assert(dayOfWeek(FRIDAY, TRUE, 10, 28) == TUESDAY);     // 28 October
    assert(dayOfWeek(FRIDAY, TRUE, 10, 29) == WEDNESDAY);   // 29 October
    assert(dayOfWeek(FRIDAY, TRUE, 10, 30) == THURSDAY);    // 30 October
    assert(dayOfWeek(FRIDAY, TRUE, 10, 31) == FRIDAY);      // 31 October
    assert(dayOfWeek(FRIDAY, TRUE, 11, 1) == SATURDAY);     // 1 November
    assert(dayOfWeek(FRIDAY, TRUE, 11, 2) == SUNDAY);       // 2 November
    assert(dayOfWeek(FRIDAY, TRUE, 11, 3) == MONDAY);       // 3 November
    assert(dayOfWeek(FRIDAY, TRUE, 11, 4) == TUESDAY);      // 4 November
    assert(dayOfWeek(FRIDAY, TRUE, 11, 5) == WEDNESDAY);    // 5 November
    assert(dayOfWeek(FRIDAY, TRUE, 11, 6) == THURSDAY);     // 6 November
    assert(dayOfWeek(FRIDAY, TRUE, 11, 7) == FRIDAY);       // 7 November
    assert(dayOfWeek(FRIDAY, TRUE, 11, 8) == SATURDAY);     // 8 November
    assert(dayOfWeek(FRIDAY, TRUE, 11, 9) == SUNDAY);       // 9 November
    assert(dayOfWeek(FRIDAY, TRUE, 11, 10) == MONDAY);      // 10 November
    assert(dayOfWeek(FRIDAY, TRUE, 11, 11) == TUESDAY);     // 11 November
    assert(dayOfWeek(FRIDAY, TRUE, 11, 12) == WEDNESDAY);   // 12 November
    assert(dayOfWeek(FRIDAY, TRUE, 11, 13) == THURSDAY);    // 13 November
    assert(dayOfWeek(FRIDAY, TRUE, 11, 14) == FRIDAY);      // 14 November
    assert(dayOfWeek(FRIDAY, TRUE, 11, 15) == SATURDAY);    // 15 November
    assert(dayOfWeek(FRIDAY, TRUE, 11, 16) == SUNDAY);      // 16 November
    assert(dayOfWeek(FRIDAY, TRUE, 11, 17) == MONDAY);      // 17 November
    assert(dayOfWeek(FRIDAY, TRUE, 11, 18) == TUESDAY);     // 18 November
    assert(dayOfWeek(FRIDAY, TRUE, 11, 19) == WEDNESDAY);   // 19 November
    assert(dayOfWeek(FRIDAY, TRUE, 11, 20) == THURSDAY);    // 20 November
    assert(dayOfWeek(FRIDAY, TRUE, 11, 21) == FRIDAY);      // 21 November
    assert(dayOfWeek(FRIDAY, TRUE, 11, 22) == SATURDAY);    // 22 November
    assert(dayOfWeek(FRIDAY, TRUE, 11, 23) == SUNDAY);      // 23 November
    assert(dayOfWeek(FRIDAY, TRUE, 11, 24) == MONDAY);      // 24 November
    assert(dayOfWeek(FRIDAY, TRUE, 11, 25) == TUESDAY);     // 25 November
    assert(dayOfWeek(FRIDAY, TRUE, 11, 26) == WEDNESDAY);   // 26 November
    assert(dayOfWeek(FRIDAY, TRUE, 11, 27) == THURSDAY);    // 27 November
    assert(dayOfWeek(FRIDAY, TRUE, 11, 28) == FRIDAY);      // 28 November
    assert(dayOfWeek(FRIDAY, TRUE, 11, 29) == SATURDAY);    // 29 November
    assert(dayOfWeek(FRIDAY, TRUE, 11, 30) == SUNDAY);      // 30 November
    assert(dayOfWeek(FRIDAY, TRUE, 12, 1) == MONDAY);       // 1 December
    assert(dayOfWeek(FRIDAY, TRUE, 12, 2) == TUESDAY);      // 2 December
    assert(dayOfWeek(FRIDAY, TRUE, 12, 3) == WEDNESDAY);    // 3 December
    assert(dayOfWeek(FRIDAY, TRUE, 12, 4) == THURSDAY);     // 4 December
    assert(dayOfWeek(FRIDAY, TRUE, 12, 5) == FRIDAY);       // 5 December
    assert(dayOfWeek(FRIDAY, TRUE, 12, 6) == SATURDAY);     // 6 December
    assert(dayOfWeek(FRIDAY, TRUE, 12, 7) == SUNDAY);       // 7 December
    assert(dayOfWeek(FRIDAY, TRUE, 12, 8) == MONDAY);       // 8 December
    assert(dayOfWeek(FRIDAY, TRUE, 12, 9) == TUESDAY);      // 9 December
    assert(dayOfWeek(FRIDAY, TRUE, 12, 10) == WEDNESDAY);   // 10 December
    assert(dayOfWeek(FRIDAY, TRUE, 12, 11) == THURSDAY);    // 11 December
    assert(dayOfWeek(FRIDAY, TRUE, 12, 12) == FRIDAY);      // 12 December
    assert(dayOfWeek(FRIDAY, TRUE, 12, 13) == SATURDAY);    // 13 December
    assert(dayOfWeek(FRIDAY, TRUE, 12, 14) == SUNDAY);      // 14 December
    assert(dayOfWeek(FRIDAY, TRUE, 12, 15) == MONDAY);      // 15 December
    assert(dayOfWeek(FRIDAY, TRUE, 12, 16) == TUESDAY);     // 16 December
    assert(dayOfWeek(FRIDAY, TRUE, 12, 17) == WEDNESDAY);   // 17 December
    assert(dayOfWeek(FRIDAY, TRUE, 12, 18) == THURSDAY);    // 18 December
    assert(dayOfWeek(FRIDAY, TRUE, 12, 19) == FRIDAY);      // 19 December
    assert(dayOfWeek(FRIDAY, TRUE, 12, 20) == SATURDAY);    // 20 December
    assert(dayOfWeek(FRIDAY, TRUE, 12, 21) == SUNDAY);      // 21 December
    assert(dayOfWeek(FRIDAY, TRUE, 12, 22) == MONDAY);      // 22 December
    assert(dayOfWeek(FRIDAY, TRUE, 12, 23) == TUESDAY);     // 23 December
    assert(dayOfWeek(FRIDAY, TRUE, 12, 24) == WEDNESDAY);   // 24 December
    assert(dayOfWeek(FRIDAY, TRUE, 12, 25) == THURSDAY);    // 25 December
    assert(dayOfWeek(FRIDAY, TRUE, 12, 26) == FRIDAY);      // 26 December
    assert(dayOfWeek(FRIDAY, TRUE, 12, 27) == SATURDAY);    // 27 December
    assert(dayOfWeek(FRIDAY, TRUE, 12, 28) == SUNDAY);      // 28 December
    assert(dayOfWeek(FRIDAY, TRUE, 12, 29) == MONDAY);      // 29 December
    assert(dayOfWeek(FRIDAY, TRUE, 12, 30) == TUESDAY);     // 30 December
    assert(dayOfWeek(FRIDAY, TRUE, 12, 31) == WEDNESDAY);   // 31 December
    // Doomsday = SATURDAY, leapyear = Yes
    assert(dayOfWeek(SATURDAY, TRUE, 1, 1) == WEDNESDAY);   // 1 January
    assert(dayOfWeek(SATURDAY, TRUE, 1, 2) == THURSDAY);    // 2 January
    assert(dayOfWeek(SATURDAY, TRUE, 1, 3) == FRIDAY);      // 3 January
    assert(dayOfWeek(SATURDAY, TRUE, 1, 4) == SATURDAY);    // 4 January
    assert(dayOfWeek(SATURDAY, TRUE, 1, 5) == SUNDAY);      // 5 January
    assert(dayOfWeek(SATURDAY, TRUE, 1, 6) == MONDAY);      // 6 January
    assert(dayOfWeek(SATURDAY, TRUE, 1, 7) == TUESDAY);     // 7 January
    assert(dayOfWeek(SATURDAY, TRUE, 1, 8) == WEDNESDAY);   // 8 January
    assert(dayOfWeek(SATURDAY, TRUE, 1, 9) == THURSDAY);    // 9 January
    assert(dayOfWeek(SATURDAY, TRUE, 1, 10) == FRIDAY);     // 10 January
    assert(dayOfWeek(SATURDAY, TRUE, 1, 11) == SATURDAY);   // 11 January
    assert(dayOfWeek(SATURDAY, TRUE, 1, 12) == SUNDAY);     // 12 January
    assert(dayOfWeek(SATURDAY, TRUE, 1, 13) == MONDAY);     // 13 January
    assert(dayOfWeek(SATURDAY, TRUE, 1, 14) == TUESDAY);    // 14 January
    assert(dayOfWeek(SATURDAY, TRUE, 1, 15) == WEDNESDAY);  // 15 January
    assert(dayOfWeek(SATURDAY, TRUE, 1, 16) == THURSDAY);   // 16 January
    assert(dayOfWeek(SATURDAY, TRUE, 1, 17) == FRIDAY);     // 17 January
    assert(dayOfWeek(SATURDAY, TRUE, 1, 18) == SATURDAY);   // 18 January
    assert(dayOfWeek(SATURDAY, TRUE, 1, 19) == SUNDAY);     // 19 January
    assert(dayOfWeek(SATURDAY, TRUE, 1, 20) == MONDAY);     // 20 January
    assert(dayOfWeek(SATURDAY, TRUE, 1, 21) == TUESDAY);    // 21 January
    assert(dayOfWeek(SATURDAY, TRUE, 1, 22) == WEDNESDAY);  // 22 January
    assert(dayOfWeek(SATURDAY, TRUE, 1, 23) == THURSDAY);   // 23 January
    assert(dayOfWeek(SATURDAY, TRUE, 1, 24) == FRIDAY);     // 24 January
    assert(dayOfWeek(SATURDAY, TRUE, 1, 25) == SATURDAY);   // 25 January
    assert(dayOfWeek(SATURDAY, TRUE, 1, 26) == SUNDAY);     // 26 January
    assert(dayOfWeek(SATURDAY, TRUE, 1, 27) == MONDAY);     // 27 January
    assert(dayOfWeek(SATURDAY, TRUE, 1, 28) == TUESDAY);    // 28 January
    assert(dayOfWeek(SATURDAY, TRUE, 1, 29) == WEDNESDAY);  // 29 January
    assert(dayOfWeek(SATURDAY, TRUE, 1, 30) == THURSDAY);   // 30 January
    assert(dayOfWeek(SATURDAY, TRUE, 1, 31) == FRIDAY);     // 31 January
    assert(dayOfWeek(SATURDAY, TRUE, 2, 1) == SATURDAY);    // 1 February
    assert(dayOfWeek(SATURDAY, TRUE, 2, 2) == SUNDAY);      // 2 February
    assert(dayOfWeek(SATURDAY, TRUE, 2, 3) == MONDAY);      // 3 February
    assert(dayOfWeek(SATURDAY, TRUE, 2, 4) == TUESDAY);     // 4 February
    assert(dayOfWeek(SATURDAY, TRUE, 2, 5) == WEDNESDAY);   // 5 February
    assert(dayOfWeek(SATURDAY, TRUE, 2, 6) == THURSDAY);    // 6 February
    assert(dayOfWeek(SATURDAY, TRUE, 2, 7) == FRIDAY);      // 7 February
    assert(dayOfWeek(SATURDAY, TRUE, 2, 8) == SATURDAY);    // 8 February
    assert(dayOfWeek(SATURDAY, TRUE, 2, 9) == SUNDAY);      // 9 February
    assert(dayOfWeek(SATURDAY, TRUE, 2, 10) == MONDAY);     // 10 February
    assert(dayOfWeek(SATURDAY, TRUE, 2, 11) == TUESDAY);    // 11 February
    assert(dayOfWeek(SATURDAY, TRUE, 2, 12) == WEDNESDAY);  // 12 February
    assert(dayOfWeek(SATURDAY, TRUE, 2, 13) == THURSDAY);   // 13 February
    assert(dayOfWeek(SATURDAY, TRUE, 2, 14) == FRIDAY);     // 14 February
    assert(dayOfWeek(SATURDAY, TRUE, 2, 15) == SATURDAY);   // 15 February
    assert(dayOfWeek(SATURDAY, TRUE, 2, 16) == SUNDAY);     // 16 February
    assert(dayOfWeek(SATURDAY, TRUE, 2, 17) == MONDAY);     // 17 February
    assert(dayOfWeek(SATURDAY, TRUE, 2, 18) == TUESDAY);    // 18 February
    assert(dayOfWeek(SATURDAY, TRUE, 2, 19) == WEDNESDAY);  // 19 February
    assert(dayOfWeek(SATURDAY, TRUE, 2, 20) == THURSDAY);   // 20 February
    assert(dayOfWeek(SATURDAY, TRUE, 2, 21) == FRIDAY);     // 21 February
    assert(dayOfWeek(SATURDAY, TRUE, 2, 22) == SATURDAY);   // 22 February
    assert(dayOfWeek(SATURDAY, TRUE, 2, 23) == SUNDAY);     // 23 February
    assert(dayOfWeek(SATURDAY, TRUE, 2, 24) == MONDAY);     // 24 February
    assert(dayOfWeek(SATURDAY, TRUE, 2, 25) == TUESDAY);    // 25 February
    assert(dayOfWeek(SATURDAY, TRUE, 2, 26) == WEDNESDAY);  // 26 February
    assert(dayOfWeek(SATURDAY, TRUE, 2, 27) == THURSDAY);   // 27 February
    assert(dayOfWeek(SATURDAY, TRUE, 2, 28) == FRIDAY);     // 28 February
    assert(dayOfWeek(SATURDAY, TRUE, 2, 29) == SATURDAY);   // 29 February
    assert(dayOfWeek(SATURDAY, TRUE, 3, 1) == SUNDAY);      // 1 March
    assert(dayOfWeek(SATURDAY, TRUE, 3, 2) == MONDAY);      // 2 March
    assert(dayOfWeek(SATURDAY, TRUE, 3, 3) == TUESDAY);     // 3 March
    assert(dayOfWeek(SATURDAY, TRUE, 3, 4) == WEDNESDAY);   // 4 March
    assert(dayOfWeek(SATURDAY, TRUE, 3, 5) == THURSDAY);    // 5 March
    assert(dayOfWeek(SATURDAY, TRUE, 3, 6) == FRIDAY);      // 6 March
    assert(dayOfWeek(SATURDAY, TRUE, 3, 7) == SATURDAY);    // 7 March
    assert(dayOfWeek(SATURDAY, TRUE, 3, 8) == SUNDAY);      // 8 March
    assert(dayOfWeek(SATURDAY, TRUE, 3, 9) == MONDAY);      // 9 March
    assert(dayOfWeek(SATURDAY, TRUE, 3, 10) == TUESDAY);    // 10 March
    assert(dayOfWeek(SATURDAY, TRUE, 3, 11) == WEDNESDAY);  // 11 March
    assert(dayOfWeek(SATURDAY, TRUE, 3, 12) == THURSDAY);   // 12 March
    assert(dayOfWeek(SATURDAY, TRUE, 3, 13) == FRIDAY);     // 13 March
    assert(dayOfWeek(SATURDAY, TRUE, 3, 14) == SATURDAY);   // 14 March
    assert(dayOfWeek(SATURDAY, TRUE, 3, 15) == SUNDAY);     // 15 March
    assert(dayOfWeek(SATURDAY, TRUE, 3, 16) == MONDAY);     // 16 March
    assert(dayOfWeek(SATURDAY, TRUE, 3, 17) == TUESDAY);    // 17 March
    assert(dayOfWeek(SATURDAY, TRUE, 3, 18) == WEDNESDAY);  // 18 March
    assert(dayOfWeek(SATURDAY, TRUE, 3, 19) == THURSDAY);   // 19 March
    assert(dayOfWeek(SATURDAY, TRUE, 3, 20) == FRIDAY);     // 20 March
    assert(dayOfWeek(SATURDAY, TRUE, 3, 21) == SATURDAY);   // 21 March
    assert(dayOfWeek(SATURDAY, TRUE, 3, 22) == SUNDAY);     // 22 March
    assert(dayOfWeek(SATURDAY, TRUE, 3, 23) == MONDAY);     // 23 March
    assert(dayOfWeek(SATURDAY, TRUE, 3, 24) == TUESDAY);    // 24 March
    assert(dayOfWeek(SATURDAY, TRUE, 3, 25) == WEDNESDAY);  // 25 March
    assert(dayOfWeek(SATURDAY, TRUE, 3, 26) == THURSDAY);   // 26 March
    assert(dayOfWeek(SATURDAY, TRUE, 3, 27) == FRIDAY);     // 27 March
    assert(dayOfWeek(SATURDAY, TRUE, 3, 28) == SATURDAY);   // 28 March
    assert(dayOfWeek(SATURDAY, TRUE, 3, 29) == SUNDAY);     // 29 March
    assert(dayOfWeek(SATURDAY, TRUE, 3, 30) == MONDAY);     // 30 March
    assert(dayOfWeek(SATURDAY, TRUE, 3, 31) == TUESDAY);    // 31 March
    assert(dayOfWeek(SATURDAY, TRUE, 4, 1) == WEDNESDAY);   // 1 April
    assert(dayOfWeek(SATURDAY, TRUE, 4, 2) == THURSDAY);    // 2 April
    assert(dayOfWeek(SATURDAY, TRUE, 4, 3) == FRIDAY);      // 3 April
    assert(dayOfWeek(SATURDAY, TRUE, 4, 4) == SATURDAY);    // 4 April
    assert(dayOfWeek(SATURDAY, TRUE, 4, 5) == SUNDAY);      // 5 April
    assert(dayOfWeek(SATURDAY, TRUE, 4, 6) == MONDAY);      // 6 April
    assert(dayOfWeek(SATURDAY, TRUE, 4, 7) == TUESDAY);     // 7 April
    assert(dayOfWeek(SATURDAY, TRUE, 4, 8) == WEDNESDAY);   // 8 April
    assert(dayOfWeek(SATURDAY, TRUE, 4, 9) == THURSDAY);    // 9 April
    assert(dayOfWeek(SATURDAY, TRUE, 4, 10) == FRIDAY);     // 10 April
    assert(dayOfWeek(SATURDAY, TRUE, 4, 11) == SATURDAY);   // 11 April
    assert(dayOfWeek(SATURDAY, TRUE, 4, 12) == SUNDAY);     // 12 April
    assert(dayOfWeek(SATURDAY, TRUE, 4, 13) == MONDAY);     // 13 April
    assert(dayOfWeek(SATURDAY, TRUE, 4, 14) == TUESDAY);    // 14 April
    assert(dayOfWeek(SATURDAY, TRUE, 4, 15) == WEDNESDAY);  // 15 April
    assert(dayOfWeek(SATURDAY, TRUE, 4, 16) == THURSDAY);   // 16 April
    assert(dayOfWeek(SATURDAY, TRUE, 4, 17) == FRIDAY);     // 17 April
    assert(dayOfWeek(SATURDAY, TRUE, 4, 18) == SATURDAY);   // 18 April
    assert(dayOfWeek(SATURDAY, TRUE, 4, 19) == SUNDAY);     // 19 April
    assert(dayOfWeek(SATURDAY, TRUE, 4, 20) == MONDAY);     // 20 April
    assert(dayOfWeek(SATURDAY, TRUE, 4, 21) == TUESDAY);    // 21 April
    assert(dayOfWeek(SATURDAY, TRUE, 4, 22) == WEDNESDAY);  // 22 April
    assert(dayOfWeek(SATURDAY, TRUE, 4, 23) == THURSDAY);   // 23 April
    assert(dayOfWeek(SATURDAY, TRUE, 4, 24) == FRIDAY);     // 24 April
    assert(dayOfWeek(SATURDAY, TRUE, 4, 25) == SATURDAY);   // 25 April
    assert(dayOfWeek(SATURDAY, TRUE, 4, 26) == SUNDAY);     // 26 April
    assert(dayOfWeek(SATURDAY, TRUE, 4, 27) == MONDAY);     // 27 April
    assert(dayOfWeek(SATURDAY, TRUE, 4, 28) == TUESDAY);    // 28 April
    assert(dayOfWeek(SATURDAY, TRUE, 4, 29) == WEDNESDAY);  // 29 April
    assert(dayOfWeek(SATURDAY, TRUE, 4, 30) == THURSDAY);   // 30 April
    assert(dayOfWeek(SATURDAY, TRUE, 5, 1) == FRIDAY);      // 1 May
    assert(dayOfWeek(SATURDAY, TRUE, 5, 2) == SATURDAY);    // 2 May
    assert(dayOfWeek(SATURDAY, TRUE, 5, 3) == SUNDAY);      // 3 May
    assert(dayOfWeek(SATURDAY, TRUE, 5, 4) == MONDAY);      // 4 May
    assert(dayOfWeek(SATURDAY, TRUE, 5, 5) == TUESDAY);     // 5 May
    assert(dayOfWeek(SATURDAY, TRUE, 5, 6) == WEDNESDAY);   // 6 May
    assert(dayOfWeek(SATURDAY, TRUE, 5, 7) == THURSDAY);    // 7 May
    assert(dayOfWeek(SATURDAY, TRUE, 5, 8) == FRIDAY);      // 8 May
    assert(dayOfWeek(SATURDAY, TRUE, 5, 9) == SATURDAY);    // 9 May
    assert(dayOfWeek(SATURDAY, TRUE, 5, 10) == SUNDAY);     // 10 May
    assert(dayOfWeek(SATURDAY, TRUE, 5, 11) == MONDAY);     // 11 May
    assert(dayOfWeek(SATURDAY, TRUE, 5, 12) == TUESDAY);    // 12 May
    assert(dayOfWeek(SATURDAY, TRUE, 5, 13) == WEDNESDAY);  // 13 May
    assert(dayOfWeek(SATURDAY, TRUE, 5, 14) == THURSDAY);   // 14 May
    assert(dayOfWeek(SATURDAY, TRUE, 5, 15) == FRIDAY);     // 15 May
    assert(dayOfWeek(SATURDAY, TRUE, 5, 16) == SATURDAY);   // 16 May
    assert(dayOfWeek(SATURDAY, TRUE, 5, 17) == SUNDAY);     // 17 May
    assert(dayOfWeek(SATURDAY, TRUE, 5, 18) == MONDAY);     // 18 May
    assert(dayOfWeek(SATURDAY, TRUE, 5, 19) == TUESDAY);    // 19 May
    assert(dayOfWeek(SATURDAY, TRUE, 5, 20) == WEDNESDAY);  // 20 May
    assert(dayOfWeek(SATURDAY, TRUE, 5, 21) == THURSDAY);   // 21 May
    assert(dayOfWeek(SATURDAY, TRUE, 5, 22) == FRIDAY);     // 22 May
    assert(dayOfWeek(SATURDAY, TRUE, 5, 23) == SATURDAY);   // 23 May
    assert(dayOfWeek(SATURDAY, TRUE, 5, 24) == SUNDAY);     // 24 May
    assert(dayOfWeek(SATURDAY, TRUE, 5, 25) == MONDAY);     // 25 May
    assert(dayOfWeek(SATURDAY, TRUE, 5, 26) == TUESDAY);    // 26 May
    assert(dayOfWeek(SATURDAY, TRUE, 5, 27) == WEDNESDAY);  // 27 May
    assert(dayOfWeek(SATURDAY, TRUE, 5, 28) == THURSDAY);   // 28 May
    assert(dayOfWeek(SATURDAY, TRUE, 5, 29) == FRIDAY);     // 29 May
    assert(dayOfWeek(SATURDAY, TRUE, 5, 30) == SATURDAY);   // 30 May
    assert(dayOfWeek(SATURDAY, TRUE, 5, 31) == SUNDAY);     // 31 May
    assert(dayOfWeek(SATURDAY, TRUE, 6, 1) == MONDAY);      // 1 June
    assert(dayOfWeek(SATURDAY, TRUE, 6, 2) == TUESDAY);     // 2 June
    assert(dayOfWeek(SATURDAY, TRUE, 6, 3) == WEDNESDAY);   // 3 June
    assert(dayOfWeek(SATURDAY, TRUE, 6, 4) == THURSDAY);    // 4 June
    assert(dayOfWeek(SATURDAY, TRUE, 6, 5) == FRIDAY);      // 5 June
    assert(dayOfWeek(SATURDAY, TRUE, 6, 6) == SATURDAY);    // 6 June
    assert(dayOfWeek(SATURDAY, TRUE, 6, 7) == SUNDAY);      // 7 June
    assert(dayOfWeek(SATURDAY, TRUE, 6, 8) == MONDAY);      // 8 June
    assert(dayOfWeek(SATURDAY, TRUE, 6, 9) == TUESDAY);     // 9 June
    assert(dayOfWeek(SATURDAY, TRUE, 6, 10) == WEDNESDAY);  // 10 June
    assert(dayOfWeek(SATURDAY, TRUE, 6, 11) == THURSDAY);   // 11 June
    assert(dayOfWeek(SATURDAY, TRUE, 6, 12) == FRIDAY);     // 12 June
    assert(dayOfWeek(SATURDAY, TRUE, 6, 13) == SATURDAY);   // 13 June
    assert(dayOfWeek(SATURDAY, TRUE, 6, 14) == SUNDAY);     // 14 June
    assert(dayOfWeek(SATURDAY, TRUE, 6, 15) == MONDAY);     // 15 June
    assert(dayOfWeek(SATURDAY, TRUE, 6, 16) == TUESDAY);    // 16 June
    assert(dayOfWeek(SATURDAY, TRUE, 6, 17) == WEDNESDAY);  // 17 June
    assert(dayOfWeek(SATURDAY, TRUE, 6, 18) == THURSDAY);   // 18 June
    assert(dayOfWeek(SATURDAY, TRUE, 6, 19) == FRIDAY);     // 19 June
    assert(dayOfWeek(SATURDAY, TRUE, 6, 20) == SATURDAY);   // 20 June
    assert(dayOfWeek(SATURDAY, TRUE, 6, 21) == SUNDAY);     // 21 June
    assert(dayOfWeek(SATURDAY, TRUE, 6, 22) == MONDAY);     // 22 June
    assert(dayOfWeek(SATURDAY, TRUE, 6, 23) == TUESDAY);    // 23 June
    assert(dayOfWeek(SATURDAY, TRUE, 6, 24) == WEDNESDAY);  // 24 June
    assert(dayOfWeek(SATURDAY, TRUE, 6, 25) == THURSDAY);   // 25 June
    assert(dayOfWeek(SATURDAY, TRUE, 6, 26) == FRIDAY);     // 26 June
    assert(dayOfWeek(SATURDAY, TRUE, 6, 27) == SATURDAY);   // 27 June
    assert(dayOfWeek(SATURDAY, TRUE, 6, 28) == SUNDAY);     // 28 June
    assert(dayOfWeek(SATURDAY, TRUE, 6, 29) == MONDAY);     // 29 June
    assert(dayOfWeek(SATURDAY, TRUE, 6, 30) == TUESDAY);    // 30 June
    assert(dayOfWeek(SATURDAY, TRUE, 7, 1) == WEDNESDAY);   // 1 July
    assert(dayOfWeek(SATURDAY, TRUE, 7, 2) == THURSDAY);    // 2 July
    assert(dayOfWeek(SATURDAY, TRUE, 7, 3) == FRIDAY);      // 3 July
    assert(dayOfWeek(SATURDAY, TRUE, 7, 4) == SATURDAY);    // 4 July
    assert(dayOfWeek(SATURDAY, TRUE, 7, 5) == SUNDAY);      // 5 July
    assert(dayOfWeek(SATURDAY, TRUE, 7, 6) == MONDAY);      // 6 July
    assert(dayOfWeek(SATURDAY, TRUE, 7, 7) == TUESDAY);     // 7 July
    assert(dayOfWeek(SATURDAY, TRUE, 7, 8) == WEDNESDAY);   // 8 July
    assert(dayOfWeek(SATURDAY, TRUE, 7, 9) == THURSDAY);    // 9 July
    assert(dayOfWeek(SATURDAY, TRUE, 7, 10) == FRIDAY);     // 10 July
    assert(dayOfWeek(SATURDAY, TRUE, 7, 11) == SATURDAY);   // 11 July
    assert(dayOfWeek(SATURDAY, TRUE, 7, 12) == SUNDAY);     // 12 July
    assert(dayOfWeek(SATURDAY, TRUE, 7, 13) == MONDAY);     // 13 July
    assert(dayOfWeek(SATURDAY, TRUE, 7, 14) == TUESDAY);    // 14 July
    assert(dayOfWeek(SATURDAY, TRUE, 7, 15) == WEDNESDAY);  // 15 July
    assert(dayOfWeek(SATURDAY, TRUE, 7, 16) == THURSDAY);   // 16 July
    assert(dayOfWeek(SATURDAY, TRUE, 7, 17) == FRIDAY);     // 17 July
    assert(dayOfWeek(SATURDAY, TRUE, 7, 18) == SATURDAY);   // 18 July
    assert(dayOfWeek(SATURDAY, TRUE, 7, 19) == SUNDAY);     // 19 July
    assert(dayOfWeek(SATURDAY, TRUE, 7, 20) == MONDAY);     // 20 July
    assert(dayOfWeek(SATURDAY, TRUE, 7, 21) == TUESDAY);    // 21 July
    assert(dayOfWeek(SATURDAY, TRUE, 7, 22) == WEDNESDAY);  // 22 July
    assert(dayOfWeek(SATURDAY, TRUE, 7, 23) == THURSDAY);   // 23 July
    assert(dayOfWeek(SATURDAY, TRUE, 7, 24) == FRIDAY);     // 24 July
    assert(dayOfWeek(SATURDAY, TRUE, 7, 25) == SATURDAY);   // 25 July
    assert(dayOfWeek(SATURDAY, TRUE, 7, 26) == SUNDAY);     // 26 July
    assert(dayOfWeek(SATURDAY, TRUE, 7, 27) == MONDAY);     // 27 July
    assert(dayOfWeek(SATURDAY, TRUE, 7, 28) == TUESDAY);    // 28 July
    assert(dayOfWeek(SATURDAY, TRUE, 7, 29) == WEDNESDAY);  // 29 July
    assert(dayOfWeek(SATURDAY, TRUE, 7, 30) == THURSDAY);   // 30 July
    assert(dayOfWeek(SATURDAY, TRUE, 7, 31) == FRIDAY);     // 31 July
    assert(dayOfWeek(SATURDAY, TRUE, 8, 1) == SATURDAY);    // 1 August
    assert(dayOfWeek(SATURDAY, TRUE, 8, 2) == SUNDAY);      // 2 August
    assert(dayOfWeek(SATURDAY, TRUE, 8, 3) == MONDAY);      // 3 August
    assert(dayOfWeek(SATURDAY, TRUE, 8, 4) == TUESDAY);     // 4 August
    assert(dayOfWeek(SATURDAY, TRUE, 8, 5) == WEDNESDAY);   // 5 August
    assert(dayOfWeek(SATURDAY, TRUE, 8, 6) == THURSDAY);    // 6 August
    assert(dayOfWeek(SATURDAY, TRUE, 8, 7) == FRIDAY);      // 7 August
    assert(dayOfWeek(SATURDAY, TRUE, 8, 8) == SATURDAY);    // 8 August
    assert(dayOfWeek(SATURDAY, TRUE, 8, 9) == SUNDAY);      // 9 August
    assert(dayOfWeek(SATURDAY, TRUE, 8, 10) == MONDAY);     // 10 August
    assert(dayOfWeek(SATURDAY, TRUE, 8, 11) == TUESDAY);    // 11 August
    assert(dayOfWeek(SATURDAY, TRUE, 8, 12) == WEDNESDAY);  // 12 August
    assert(dayOfWeek(SATURDAY, TRUE, 8, 13) == THURSDAY);   // 13 August
    assert(dayOfWeek(SATURDAY, TRUE, 8, 14) == FRIDAY);     // 14 August
    assert(dayOfWeek(SATURDAY, TRUE, 8, 15) == SATURDAY);   // 15 August
    assert(dayOfWeek(SATURDAY, TRUE, 8, 16) == SUNDAY);     // 16 August
    assert(dayOfWeek(SATURDAY, TRUE, 8, 17) == MONDAY);     // 17 August
    assert(dayOfWeek(SATURDAY, TRUE, 8, 18) == TUESDAY);    // 18 August
    assert(dayOfWeek(SATURDAY, TRUE, 8, 19) == WEDNESDAY);  // 19 August
    assert(dayOfWeek(SATURDAY, TRUE, 8, 20) == THURSDAY);   // 20 August
    assert(dayOfWeek(SATURDAY, TRUE, 8, 21) == FRIDAY);     // 21 August
    assert(dayOfWeek(SATURDAY, TRUE, 8, 22) == SATURDAY);   // 22 August
    assert(dayOfWeek(SATURDAY, TRUE, 8, 23) == SUNDAY);     // 23 August
    assert(dayOfWeek(SATURDAY, TRUE, 8, 24) == MONDAY);     // 24 August
    assert(dayOfWeek(SATURDAY, TRUE, 8, 25) == TUESDAY);    // 25 August
    assert(dayOfWeek(SATURDAY, TRUE, 8, 26) == WEDNESDAY);  // 26 August
    assert(dayOfWeek(SATURDAY, TRUE, 8, 27) == THURSDAY);   // 27 August
    assert(dayOfWeek(SATURDAY, TRUE, 8, 28) == FRIDAY);     // 28 August
    assert(dayOfWeek(SATURDAY, TRUE, 8, 29) == SATURDAY);   // 29 August
    assert(dayOfWeek(SATURDAY, TRUE, 8, 30) == SUNDAY);     // 30 August
    assert(dayOfWeek(SATURDAY, TRUE, 8, 31) == MONDAY);     // 31 August
    assert(dayOfWeek(SATURDAY, TRUE, 9, 1) == TUESDAY);     // 1 September
    assert(dayOfWeek(SATURDAY, TRUE, 9, 2) == WEDNESDAY);   // 2 September
    assert(dayOfWeek(SATURDAY, TRUE, 9, 3) == THURSDAY);    // 3 September
    assert(dayOfWeek(SATURDAY, TRUE, 9, 4) == FRIDAY);      // 4 September
    assert(dayOfWeek(SATURDAY, TRUE, 9, 5) == SATURDAY);    // 5 September
    assert(dayOfWeek(SATURDAY, TRUE, 9, 6) == SUNDAY);      // 6 September
    assert(dayOfWeek(SATURDAY, TRUE, 9, 7) == MONDAY);      // 7 September
    assert(dayOfWeek(SATURDAY, TRUE, 9, 8) == TUESDAY);     // 8 September
    assert(dayOfWeek(SATURDAY, TRUE, 9, 9) == WEDNESDAY);   // 9 September
    assert(dayOfWeek(SATURDAY, TRUE, 9, 10) == THURSDAY);   // 10 September
    assert(dayOfWeek(SATURDAY, TRUE, 9, 11) == FRIDAY);     // 11 September
    assert(dayOfWeek(SATURDAY, TRUE, 9, 12) == SATURDAY);   // 12 September
    assert(dayOfWeek(SATURDAY, TRUE, 9, 13) == SUNDAY);     // 13 September
    assert(dayOfWeek(SATURDAY, TRUE, 9, 14) == MONDAY);     // 14 September
    assert(dayOfWeek(SATURDAY, TRUE, 9, 15) == TUESDAY);    // 15 September
    assert(dayOfWeek(SATURDAY, TRUE, 9, 16) == WEDNESDAY);  // 16 September
    assert(dayOfWeek(SATURDAY, TRUE, 9, 17) == THURSDAY);   // 17 September
    assert(dayOfWeek(SATURDAY, TRUE, 9, 18) == FRIDAY);     // 18 September
    assert(dayOfWeek(SATURDAY, TRUE, 9, 19) == SATURDAY);   // 19 September
    assert(dayOfWeek(SATURDAY, TRUE, 9, 20) == SUNDAY);     // 20 September
    assert(dayOfWeek(SATURDAY, TRUE, 9, 21) == MONDAY);     // 21 September
    assert(dayOfWeek(SATURDAY, TRUE, 9, 22) == TUESDAY);    // 22 September
    assert(dayOfWeek(SATURDAY, TRUE, 9, 23) == WEDNESDAY);  // 23 September
    assert(dayOfWeek(SATURDAY, TRUE, 9, 24) == THURSDAY);   // 24 September
    assert(dayOfWeek(SATURDAY, TRUE, 9, 25) == FRIDAY);     // 25 September
    assert(dayOfWeek(SATURDAY, TRUE, 9, 26) == SATURDAY);   // 26 September
    assert(dayOfWeek(SATURDAY, TRUE, 9, 27) == SUNDAY);     // 27 September
    assert(dayOfWeek(SATURDAY, TRUE, 9, 28) == MONDAY);     // 28 September
    assert(dayOfWeek(SATURDAY, TRUE, 9, 29) == TUESDAY);    // 29 September
    assert(dayOfWeek(SATURDAY, TRUE, 9, 30) == WEDNESDAY);  // 30 September
    assert(dayOfWeek(SATURDAY, TRUE, 10, 1) == THURSDAY);   // 1 October
    assert(dayOfWeek(SATURDAY, TRUE, 10, 2) == FRIDAY);     // 2 October
    assert(dayOfWeek(SATURDAY, TRUE, 10, 3) == SATURDAY);   // 3 October
    assert(dayOfWeek(SATURDAY, TRUE, 10, 4) == SUNDAY);     // 4 October
    assert(dayOfWeek(SATURDAY, TRUE, 10, 5) == MONDAY);     // 5 October
    assert(dayOfWeek(SATURDAY, TRUE, 10, 6) == TUESDAY);    // 6 October
    assert(dayOfWeek(SATURDAY, TRUE, 10, 7) == WEDNESDAY);  // 7 October
    assert(dayOfWeek(SATURDAY, TRUE, 10, 8) == THURSDAY);   // 8 October
    assert(dayOfWeek(SATURDAY, TRUE, 10, 9) == FRIDAY);     // 9 October
    assert(dayOfWeek(SATURDAY, TRUE, 10, 10) == SATURDAY);  // 10 October
    assert(dayOfWeek(SATURDAY, TRUE, 10, 11) == SUNDAY);    // 11 October
    assert(dayOfWeek(SATURDAY, TRUE, 10, 12) == MONDAY);    // 12 October
    assert(dayOfWeek(SATURDAY, TRUE, 10, 13) == TUESDAY);   // 13 October
    assert(dayOfWeek(SATURDAY, TRUE, 10, 14) == WEDNESDAY); // 14 October
    assert(dayOfWeek(SATURDAY, TRUE, 10, 15) == THURSDAY);  // 15 October
    assert(dayOfWeek(SATURDAY, TRUE, 10, 16) == FRIDAY);    // 16 October
    assert(dayOfWeek(SATURDAY, TRUE, 10, 17) == SATURDAY);  // 17 October
    assert(dayOfWeek(SATURDAY, TRUE, 10, 18) == SUNDAY);    // 18 October
    assert(dayOfWeek(SATURDAY, TRUE, 10, 19) == MONDAY);    // 19 October
    assert(dayOfWeek(SATURDAY, TRUE, 10, 20) == TUESDAY);   // 20 October
    assert(dayOfWeek(SATURDAY, TRUE, 10, 21) == WEDNESDAY); // 21 October
    assert(dayOfWeek(SATURDAY, TRUE, 10, 22) == THURSDAY);  // 22 October
    assert(dayOfWeek(SATURDAY, TRUE, 10, 23) == FRIDAY);    // 23 October
    assert(dayOfWeek(SATURDAY, TRUE, 10, 24) == SATURDAY);  // 24 October
    assert(dayOfWeek(SATURDAY, TRUE, 10, 25) == SUNDAY);    // 25 October
    assert(dayOfWeek(SATURDAY, TRUE, 10, 26) == MONDAY);    // 26 October
    assert(dayOfWeek(SATURDAY, TRUE, 10, 27) == TUESDAY);   // 27 October
    assert(dayOfWeek(SATURDAY, TRUE, 10, 28) == WEDNESDAY); // 28 October
    assert(dayOfWeek(SATURDAY, TRUE, 10, 29) == THURSDAY);  // 29 October
    assert(dayOfWeek(SATURDAY, TRUE, 10, 30) == FRIDAY);    // 30 October
    assert(dayOfWeek(SATURDAY, TRUE, 10, 31) == SATURDAY);  // 31 October
    assert(dayOfWeek(SATURDAY, TRUE, 11, 1) == SUNDAY);     // 1 November
    assert(dayOfWeek(SATURDAY, TRUE, 11, 2) == MONDAY);     // 2 November
    assert(dayOfWeek(SATURDAY, TRUE, 11, 3) == TUESDAY);    // 3 November
    assert(dayOfWeek(SATURDAY, TRUE, 11, 4) == WEDNESDAY);  // 4 November
    assert(dayOfWeek(SATURDAY, TRUE, 11, 5) == THURSDAY);   // 5 November
    assert(dayOfWeek(SATURDAY, TRUE, 11, 6) == FRIDAY);     // 6 November
    assert(dayOfWeek(SATURDAY, TRUE, 11, 7) == SATURDAY);   // 7 November
    assert(dayOfWeek(SATURDAY, TRUE, 11, 8) == SUNDAY);     // 8 November
    assert(dayOfWeek(SATURDAY, TRUE, 11, 9) == MONDAY);     // 9 November
    assert(dayOfWeek(SATURDAY, TRUE, 11, 10) == TUESDAY);   // 10 November
    assert(dayOfWeek(SATURDAY, TRUE, 11, 11) == WEDNESDAY); // 11 November
    assert(dayOfWeek(SATURDAY, TRUE, 11, 12) == THURSDAY);  // 12 November
    assert(dayOfWeek(SATURDAY, TRUE, 11, 13) == FRIDAY);    // 13 November
    assert(dayOfWeek(SATURDAY, TRUE, 11, 14) == SATURDAY);  // 14 November
    assert(dayOfWeek(SATURDAY, TRUE, 11, 15) == SUNDAY);    // 15 November
    assert(dayOfWeek(SATURDAY, TRUE, 11, 16) == MONDAY);    // 16 November
    assert(dayOfWeek(SATURDAY, TRUE, 11, 17) == TUESDAY);   // 17 November
    assert(dayOfWeek(SATURDAY, TRUE, 11, 18) == WEDNESDAY); // 18 November
    assert(dayOfWeek(SATURDAY, TRUE, 11, 19) == THURSDAY);  // 19 November
    assert(dayOfWeek(SATURDAY, TRUE, 11, 20) == FRIDAY);    // 20 November
    assert(dayOfWeek(SATURDAY, TRUE, 11, 21) == SATURDAY);  // 21 November
    assert(dayOfWeek(SATURDAY, TRUE, 11, 22) == SUNDAY);    // 22 November
    assert(dayOfWeek(SATURDAY, TRUE, 11, 23) == MONDAY);    // 23 November
    assert(dayOfWeek(SATURDAY, TRUE, 11, 24) == TUESDAY);   // 24 November
    assert(dayOfWeek(SATURDAY, TRUE, 11, 25) == WEDNESDAY); // 25 November
    assert(dayOfWeek(SATURDAY, TRUE, 11, 26) == THURSDAY);  // 26 November
    assert(dayOfWeek(SATURDAY, TRUE, 11, 27) == FRIDAY);    // 27 November
    assert(dayOfWeek(SATURDAY, TRUE, 11, 28) == SATURDAY);  // 28 November
    assert(dayOfWeek(SATURDAY, TRUE, 11, 29) == SUNDAY);    // 29 November
    assert(dayOfWeek(SATURDAY, TRUE, 11, 30) == MONDAY);    // 30 November
    assert(dayOfWeek(SATURDAY, TRUE, 12, 1) == TUESDAY);    // 1 December
    assert(dayOfWeek(SATURDAY, TRUE, 12, 2) == WEDNESDAY);  // 2 December
    assert(dayOfWeek(SATURDAY, TRUE, 12, 3) == THURSDAY);   // 3 December
    assert(dayOfWeek(SATURDAY, TRUE, 12, 4) == FRIDAY);     // 4 December
    assert(dayOfWeek(SATURDAY, TRUE, 12, 5) == SATURDAY);   // 5 December
    assert(dayOfWeek(SATURDAY, TRUE, 12, 6) == SUNDAY);     // 6 December
    assert(dayOfWeek(SATURDAY, TRUE, 12, 7) == MONDAY);     // 7 December
    assert(dayOfWeek(SATURDAY, TRUE, 12, 8) == TUESDAY);    // 8 December
    assert(dayOfWeek(SATURDAY, TRUE, 12, 9) == WEDNESDAY);  // 9 December
    assert(dayOfWeek(SATURDAY, TRUE, 12, 10) == THURSDAY);  // 10 December
    assert(dayOfWeek(SATURDAY, TRUE, 12, 11) == FRIDAY);    // 11 December
    assert(dayOfWeek(SATURDAY, TRUE, 12, 12) == SATURDAY);  // 12 December
    assert(dayOfWeek(SATURDAY, TRUE, 12, 13) == SUNDAY);    // 13 December
    assert(dayOfWeek(SATURDAY, TRUE, 12, 14) == MONDAY);    // 14 December
    assert(dayOfWeek(SATURDAY, TRUE, 12, 15) == TUESDAY);   // 15 December
    assert(dayOfWeek(SATURDAY, TRUE, 12, 16) == WEDNESDAY); // 16 December
    assert(dayOfWeek(SATURDAY, TRUE, 12, 17) == THURSDAY);  // 17 December
    assert(dayOfWeek(SATURDAY, TRUE, 12, 18) == FRIDAY);    // 18 December
    assert(dayOfWeek(SATURDAY, TRUE, 12, 19) == SATURDAY);  // 19 December
    assert(dayOfWeek(SATURDAY, TRUE, 12, 20) == SUNDAY);    // 20 December
    assert(dayOfWeek(SATURDAY, TRUE, 12, 21) == MONDAY);    // 21 December
    assert(dayOfWeek(SATURDAY, TRUE, 12, 22) == TUESDAY);   // 22 December
    assert(dayOfWeek(SATURDAY, TRUE, 12, 23) == WEDNESDAY); // 23 December
    assert(dayOfWeek(SATURDAY, TRUE, 12, 24) == THURSDAY);  // 24 December
    assert(dayOfWeek(SATURDAY, TRUE, 12, 25) == FRIDAY);    // 25 December
    assert(dayOfWeek(SATURDAY, TRUE, 12, 26) == SATURDAY);  // 26 December
    assert(dayOfWeek(SATURDAY, TRUE, 12, 27) == SUNDAY);    // 27 December
    assert(dayOfWeek(SATURDAY, TRUE, 12, 28) == MONDAY);    // 28 December
    assert(dayOfWeek(SATURDAY, TRUE, 12, 29) == TUESDAY);   // 29 December
    assert(dayOfWeek(SATURDAY, TRUE, 12, 30) == WEDNESDAY); // 30 December
    assert(dayOfWeek(SATURDAY, TRUE, 12, 31) == THURSDAY);  // 31 December
    // Doomsday = SUNDAY, leapyear = Yes
    assert(dayOfWeek(SUNDAY, TRUE, 1, 1) == THURSDAY);      // 1 January
    assert(dayOfWeek(SUNDAY, TRUE, 1, 2) == FRIDAY);        // 2 January
    assert(dayOfWeek(SUNDAY, TRUE, 1, 3) == SATURDAY);      // 3 January
    assert(dayOfWeek(SUNDAY, TRUE, 1, 4) == SUNDAY);        // 4 January
    assert(dayOfWeek(SUNDAY, TRUE, 1, 5) == MONDAY);        // 5 January
    assert(dayOfWeek(SUNDAY, TRUE, 1, 6) == TUESDAY);       // 6 January
    assert(dayOfWeek(SUNDAY, TRUE, 1, 7) == WEDNESDAY);     // 7 January
    assert(dayOfWeek(SUNDAY, TRUE, 1, 8) == THURSDAY);      // 8 January
    assert(dayOfWeek(SUNDAY, TRUE, 1, 9) == FRIDAY);        // 9 January
    assert(dayOfWeek(SUNDAY, TRUE, 1, 10) == SATURDAY);     // 10 January
    assert(dayOfWeek(SUNDAY, TRUE, 1, 11) == SUNDAY);       // 11 January
    assert(dayOfWeek(SUNDAY, TRUE, 1, 12) == MONDAY);       // 12 January
    assert(dayOfWeek(SUNDAY, TRUE, 1, 13) == TUESDAY);      // 13 January
    assert(dayOfWeek(SUNDAY, TRUE, 1, 14) == WEDNESDAY);    // 14 January
    assert(dayOfWeek(SUNDAY, TRUE, 1, 15) == THURSDAY);     // 15 January
    assert(dayOfWeek(SUNDAY, TRUE, 1, 16) == FRIDAY);       // 16 January
    assert(dayOfWeek(SUNDAY, TRUE, 1, 17) == SATURDAY);     // 17 January
    assert(dayOfWeek(SUNDAY, TRUE, 1, 18) == SUNDAY);       // 18 January
    assert(dayOfWeek(SUNDAY, TRUE, 1, 19) == MONDAY);       // 19 January
    assert(dayOfWeek(SUNDAY, TRUE, 1, 20) == TUESDAY);      // 20 January
    assert(dayOfWeek(SUNDAY, TRUE, 1, 21) == WEDNESDAY);    // 21 January
    assert(dayOfWeek(SUNDAY, TRUE, 1, 22) == THURSDAY);     // 22 January
    assert(dayOfWeek(SUNDAY, TRUE, 1, 23) == FRIDAY);       // 23 January
    assert(dayOfWeek(SUNDAY, TRUE, 1, 24) == SATURDAY);     // 24 January
    assert(dayOfWeek(SUNDAY, TRUE, 1, 25) == SUNDAY);       // 25 January
    assert(dayOfWeek(SUNDAY, TRUE, 1, 26) == MONDAY);       // 26 January
    assert(dayOfWeek(SUNDAY, TRUE, 1, 27) == TUESDAY);      // 27 January
    assert(dayOfWeek(SUNDAY, TRUE, 1, 28) == WEDNESDAY);    // 28 January
    assert(dayOfWeek(SUNDAY, TRUE, 1, 29) == THURSDAY);     // 29 January
    assert(dayOfWeek(SUNDAY, TRUE, 1, 30) == FRIDAY);       // 30 January
    assert(dayOfWeek(SUNDAY, TRUE, 1, 31) == SATURDAY);     // 31 January
    assert(dayOfWeek(SUNDAY, TRUE, 2, 1) == SUNDAY);        // 1 February
    assert(dayOfWeek(SUNDAY, TRUE, 2, 2) == MONDAY);        // 2 February
    assert(dayOfWeek(SUNDAY, TRUE, 2, 3) == TUESDAY);       // 3 February
    assert(dayOfWeek(SUNDAY, TRUE, 2, 4) == WEDNESDAY);     // 4 February
    assert(dayOfWeek(SUNDAY, TRUE, 2, 5) == THURSDAY);      // 5 February
    assert(dayOfWeek(SUNDAY, TRUE, 2, 6) == FRIDAY);        // 6 February
    assert(dayOfWeek(SUNDAY, TRUE, 2, 7) == SATURDAY);      // 7 February
    assert(dayOfWeek(SUNDAY, TRUE, 2, 8) == SUNDAY);        // 8 February
    assert(dayOfWeek(SUNDAY, TRUE, 2, 9) == MONDAY);        // 9 February
    assert(dayOfWeek(SUNDAY, TRUE, 2, 10) == TUESDAY);      // 10 February
    assert(dayOfWeek(SUNDAY, TRUE, 2, 11) == WEDNESDAY);    // 11 February
    assert(dayOfWeek(SUNDAY, TRUE, 2, 12) == THURSDAY);     // 12 February
    assert(dayOfWeek(SUNDAY, TRUE, 2, 13) == FRIDAY);       // 13 February
    assert(dayOfWeek(SUNDAY, TRUE, 2, 14) == SATURDAY);     // 14 February
    assert(dayOfWeek(SUNDAY, TRUE, 2, 15) == SUNDAY);       // 15 February
    assert(dayOfWeek(SUNDAY, TRUE, 2, 16) == MONDAY);       // 16 February
    assert(dayOfWeek(SUNDAY, TRUE, 2, 17) == TUESDAY);      // 17 February
    assert(dayOfWeek(SUNDAY, TRUE, 2, 18) == WEDNESDAY);    // 18 February
    assert(dayOfWeek(SUNDAY, TRUE, 2, 19) == THURSDAY);     // 19 February
    assert(dayOfWeek(SUNDAY, TRUE, 2, 20) == FRIDAY);       // 20 February
    assert(dayOfWeek(SUNDAY, TRUE, 2, 21) == SATURDAY);     // 21 February
    assert(dayOfWeek(SUNDAY, TRUE, 2, 22) == SUNDAY);       // 22 February
    assert(dayOfWeek(SUNDAY, TRUE, 2, 23) == MONDAY);       // 23 February
    assert(dayOfWeek(SUNDAY, TRUE, 2, 24) == TUESDAY);      // 24 February
    assert(dayOfWeek(SUNDAY, TRUE, 2, 25) == WEDNESDAY);    // 25 February
    assert(dayOfWeek(SUNDAY, TRUE, 2, 26) == THURSDAY);     // 26 February
    assert(dayOfWeek(SUNDAY, TRUE, 2, 27) == FRIDAY);       // 27 February
    assert(dayOfWeek(SUNDAY, TRUE, 2, 28) == SATURDAY);     // 28 February
    assert(dayOfWeek(SUNDAY, TRUE, 2, 29) == SUNDAY);       // 29 February
    assert(dayOfWeek(SUNDAY, TRUE, 3, 1) == MONDAY);        // 1 March
    assert(dayOfWeek(SUNDAY, TRUE, 3, 2) == TUESDAY);       // 2 March
    assert(dayOfWeek(SUNDAY, TRUE, 3, 3) == WEDNESDAY);     // 3 March
    assert(dayOfWeek(SUNDAY, TRUE, 3, 4) == THURSDAY);      // 4 March
    assert(dayOfWeek(SUNDAY, TRUE, 3, 5) == FRIDAY);        // 5 March
    assert(dayOfWeek(SUNDAY, TRUE, 3, 6) == SATURDAY);      // 6 March
    assert(dayOfWeek(SUNDAY, TRUE, 3, 7) == SUNDAY);        // 7 March
    assert(dayOfWeek(SUNDAY, TRUE, 3, 8) == MONDAY);        // 8 March
    assert(dayOfWeek(SUNDAY, TRUE, 3, 9) == TUESDAY);       // 9 March
    assert(dayOfWeek(SUNDAY, TRUE, 3, 10) == WEDNESDAY);    // 10 March
    assert(dayOfWeek(SUNDAY, TRUE, 3, 11) == THURSDAY);     // 11 March
    assert(dayOfWeek(SUNDAY, TRUE, 3, 12) == FRIDAY);       // 12 March
    assert(dayOfWeek(SUNDAY, TRUE, 3, 13) == SATURDAY);     // 13 March
    assert(dayOfWeek(SUNDAY, TRUE, 3, 14) == SUNDAY);       // 14 March
    assert(dayOfWeek(SUNDAY, TRUE, 3, 15) == MONDAY);       // 15 March
    assert(dayOfWeek(SUNDAY, TRUE, 3, 16) == TUESDAY);      // 16 March
    assert(dayOfWeek(SUNDAY, TRUE, 3, 17) == WEDNESDAY);    // 17 March
    assert(dayOfWeek(SUNDAY, TRUE, 3, 18) == THURSDAY);     // 18 March
    assert(dayOfWeek(SUNDAY, TRUE, 3, 19) == FRIDAY);       // 19 March
    assert(dayOfWeek(SUNDAY, TRUE, 3, 20) == SATURDAY);     // 20 March
    assert(dayOfWeek(SUNDAY, TRUE, 3, 21) == SUNDAY);       // 21 March
    assert(dayOfWeek(SUNDAY, TRUE, 3, 22) == MONDAY);       // 22 March
    assert(dayOfWeek(SUNDAY, TRUE, 3, 23) == TUESDAY);      // 23 March
    assert(dayOfWeek(SUNDAY, TRUE, 3, 24) == WEDNESDAY);    // 24 March
    assert(dayOfWeek(SUNDAY, TRUE, 3, 25) == THURSDAY);     // 25 March
    assert(dayOfWeek(SUNDAY, TRUE, 3, 26) == FRIDAY);       // 26 March
    assert(dayOfWeek(SUNDAY, TRUE, 3, 27) == SATURDAY);     // 27 March
    assert(dayOfWeek(SUNDAY, TRUE, 3, 28) == SUNDAY);       // 28 March
    assert(dayOfWeek(SUNDAY, TRUE, 3, 29) == MONDAY);       // 29 March
    assert(dayOfWeek(SUNDAY, TRUE, 3, 30) == TUESDAY);      // 30 March
    assert(dayOfWeek(SUNDAY, TRUE, 3, 31) == WEDNESDAY);    // 31 March
    assert(dayOfWeek(SUNDAY, TRUE, 4, 1) == THURSDAY);      // 1 April
    assert(dayOfWeek(SUNDAY, TRUE, 4, 2) == FRIDAY);        // 2 April
    assert(dayOfWeek(SUNDAY, TRUE, 4, 3) == SATURDAY);      // 3 April
    assert(dayOfWeek(SUNDAY, TRUE, 4, 4) == SUNDAY);        // 4 April
    assert(dayOfWeek(SUNDAY, TRUE, 4, 5) == MONDAY);        // 5 April
    assert(dayOfWeek(SUNDAY, TRUE, 4, 6) == TUESDAY);       // 6 April
    assert(dayOfWeek(SUNDAY, TRUE, 4, 7) == WEDNESDAY);     // 7 April
    assert(dayOfWeek(SUNDAY, TRUE, 4, 8) == THURSDAY);      // 8 April
    assert(dayOfWeek(SUNDAY, TRUE, 4, 9) == FRIDAY);        // 9 April
    assert(dayOfWeek(SUNDAY, TRUE, 4, 10) == SATURDAY);     // 10 April
    assert(dayOfWeek(SUNDAY, TRUE, 4, 11) == SUNDAY);       // 11 April
    assert(dayOfWeek(SUNDAY, TRUE, 4, 12) == MONDAY);       // 12 April
    assert(dayOfWeek(SUNDAY, TRUE, 4, 13) == TUESDAY);      // 13 April
    assert(dayOfWeek(SUNDAY, TRUE, 4, 14) == WEDNESDAY);    // 14 April
    assert(dayOfWeek(SUNDAY, TRUE, 4, 15) == THURSDAY);     // 15 April
    assert(dayOfWeek(SUNDAY, TRUE, 4, 16) == FRIDAY);       // 16 April
    assert(dayOfWeek(SUNDAY, TRUE, 4, 17) == SATURDAY);     // 17 April
    assert(dayOfWeek(SUNDAY, TRUE, 4, 18) == SUNDAY);       // 18 April
    assert(dayOfWeek(SUNDAY, TRUE, 4, 19) == MONDAY);       // 19 April
    assert(dayOfWeek(SUNDAY, TRUE, 4, 20) == TUESDAY);      // 20 April
    assert(dayOfWeek(SUNDAY, TRUE, 4, 21) == WEDNESDAY);    // 21 April
    assert(dayOfWeek(SUNDAY, TRUE, 4, 22) == THURSDAY);     // 22 April
    assert(dayOfWeek(SUNDAY, TRUE, 4, 23) == FRIDAY);       // 23 April
    assert(dayOfWeek(SUNDAY, TRUE, 4, 24) == SATURDAY);     // 24 April
    assert(dayOfWeek(SUNDAY, TRUE, 4, 25) == SUNDAY);       // 25 April
    assert(dayOfWeek(SUNDAY, TRUE, 4, 26) == MONDAY);       // 26 April
    assert(dayOfWeek(SUNDAY, TRUE, 4, 27) == TUESDAY);      // 27 April
    assert(dayOfWeek(SUNDAY, TRUE, 4, 28) == WEDNESDAY);    // 28 April
    assert(dayOfWeek(SUNDAY, TRUE, 4, 29) == THURSDAY);     // 29 April
    assert(dayOfWeek(SUNDAY, TRUE, 4, 30) == FRIDAY);       // 30 April
    assert(dayOfWeek(SUNDAY, TRUE, 5, 1) == SATURDAY);      // 1 May
    assert(dayOfWeek(SUNDAY, TRUE, 5, 2) == SUNDAY);        // 2 May
    assert(dayOfWeek(SUNDAY, TRUE, 5, 3) == MONDAY);        // 3 May
    assert(dayOfWeek(SUNDAY, TRUE, 5, 4) == TUESDAY);       // 4 May
    assert(dayOfWeek(SUNDAY, TRUE, 5, 5) == WEDNESDAY);     // 5 May
    assert(dayOfWeek(SUNDAY, TRUE, 5, 6) == THURSDAY);      // 6 May
    assert(dayOfWeek(SUNDAY, TRUE, 5, 7) == FRIDAY);        // 7 May
    assert(dayOfWeek(SUNDAY, TRUE, 5, 8) == SATURDAY);      // 8 May
    assert(dayOfWeek(SUNDAY, TRUE, 5, 9) == SUNDAY);        // 9 May
    assert(dayOfWeek(SUNDAY, TRUE, 5, 10) == MONDAY);       // 10 May
    assert(dayOfWeek(SUNDAY, TRUE, 5, 11) == TUESDAY);      // 11 May
    assert(dayOfWeek(SUNDAY, TRUE, 5, 12) == WEDNESDAY);    // 12 May
    assert(dayOfWeek(SUNDAY, TRUE, 5, 13) == THURSDAY);     // 13 May
    assert(dayOfWeek(SUNDAY, TRUE, 5, 14) == FRIDAY);       // 14 May
    assert(dayOfWeek(SUNDAY, TRUE, 5, 15) == SATURDAY);     // 15 May
    assert(dayOfWeek(SUNDAY, TRUE, 5, 16) == SUNDAY);       // 16 May
    assert(dayOfWeek(SUNDAY, TRUE, 5, 17) == MONDAY);       // 17 May
    assert(dayOfWeek(SUNDAY, TRUE, 5, 18) == TUESDAY);      // 18 May
    assert(dayOfWeek(SUNDAY, TRUE, 5, 19) == WEDNESDAY);    // 19 May
    assert(dayOfWeek(SUNDAY, TRUE, 5, 20) == THURSDAY);     // 20 May
    assert(dayOfWeek(SUNDAY, TRUE, 5, 21) == FRIDAY);       // 21 May
    assert(dayOfWeek(SUNDAY, TRUE, 5, 22) == SATURDAY);     // 22 May
    assert(dayOfWeek(SUNDAY, TRUE, 5, 23) == SUNDAY);       // 23 May
    assert(dayOfWeek(SUNDAY, TRUE, 5, 24) == MONDAY);       // 24 May
    assert(dayOfWeek(SUNDAY, TRUE, 5, 25) == TUESDAY);      // 25 May
    assert(dayOfWeek(SUNDAY, TRUE, 5, 26) == WEDNESDAY);    // 26 May
    assert(dayOfWeek(SUNDAY, TRUE, 5, 27) == THURSDAY);     // 27 May
    assert(dayOfWeek(SUNDAY, TRUE, 5, 28) == FRIDAY);       // 28 May
    assert(dayOfWeek(SUNDAY, TRUE, 5, 29) == SATURDAY);     // 29 May
    assert(dayOfWeek(SUNDAY, TRUE, 5, 30) == SUNDAY);       // 30 May
    assert(dayOfWeek(SUNDAY, TRUE, 5, 31) == MONDAY);       // 31 May
    assert(dayOfWeek(SUNDAY, TRUE, 6, 1) == TUESDAY);       // 1 June
    assert(dayOfWeek(SUNDAY, TRUE, 6, 2) == WEDNESDAY);     // 2 June
    assert(dayOfWeek(SUNDAY, TRUE, 6, 3) == THURSDAY);      // 3 June
    assert(dayOfWeek(SUNDAY, TRUE, 6, 4) == FRIDAY);        // 4 June
    assert(dayOfWeek(SUNDAY, TRUE, 6, 5) == SATURDAY);      // 5 June
    assert(dayOfWeek(SUNDAY, TRUE, 6, 6) == SUNDAY);        // 6 June
    assert(dayOfWeek(SUNDAY, TRUE, 6, 7) == MONDAY);        // 7 June
    assert(dayOfWeek(SUNDAY, TRUE, 6, 8) == TUESDAY);       // 8 June
    assert(dayOfWeek(SUNDAY, TRUE, 6, 9) == WEDNESDAY);     // 9 June
    assert(dayOfWeek(SUNDAY, TRUE, 6, 10) == THURSDAY);     // 10 June
    assert(dayOfWeek(SUNDAY, TRUE, 6, 11) == FRIDAY);       // 11 June
    assert(dayOfWeek(SUNDAY, TRUE, 6, 12) == SATURDAY);     // 12 June
    assert(dayOfWeek(SUNDAY, TRUE, 6, 13) == SUNDAY);       // 13 June
    assert(dayOfWeek(SUNDAY, TRUE, 6, 14) == MONDAY);       // 14 June
    assert(dayOfWeek(SUNDAY, TRUE, 6, 15) == TUESDAY);      // 15 June
    assert(dayOfWeek(SUNDAY, TRUE, 6, 16) == WEDNESDAY);    // 16 June
    assert(dayOfWeek(SUNDAY, TRUE, 6, 17) == THURSDAY);     // 17 June
    assert(dayOfWeek(SUNDAY, TRUE, 6, 18) == FRIDAY);       // 18 June
    assert(dayOfWeek(SUNDAY, TRUE, 6, 19) == SATURDAY);     // 19 June
    assert(dayOfWeek(SUNDAY, TRUE, 6, 20) == SUNDAY);       // 20 June
    assert(dayOfWeek(SUNDAY, TRUE, 6, 21) == MONDAY);       // 21 June
    assert(dayOfWeek(SUNDAY, TRUE, 6, 22) == TUESDAY);      // 22 June
    assert(dayOfWeek(SUNDAY, TRUE, 6, 23) == WEDNESDAY);    // 23 June
    assert(dayOfWeek(SUNDAY, TRUE, 6, 24) == THURSDAY);     // 24 June
    assert(dayOfWeek(SUNDAY, TRUE, 6, 25) == FRIDAY);       // 25 June
    assert(dayOfWeek(SUNDAY, TRUE, 6, 26) == SATURDAY);     // 26 June
    assert(dayOfWeek(SUNDAY, TRUE, 6, 27) == SUNDAY);       // 27 June
    assert(dayOfWeek(SUNDAY, TRUE, 6, 28) == MONDAY);       // 28 June
    assert(dayOfWeek(SUNDAY, TRUE, 6, 29) == TUESDAY);      // 29 June
    assert(dayOfWeek(SUNDAY, TRUE, 6, 30) == WEDNESDAY);    // 30 June
    assert(dayOfWeek(SUNDAY, TRUE, 7, 1) == THURSDAY);      // 1 July
    assert(dayOfWeek(SUNDAY, TRUE, 7, 2) == FRIDAY);        // 2 July
    assert(dayOfWeek(SUNDAY, TRUE, 7, 3) == SATURDAY);      // 3 July
    assert(dayOfWeek(SUNDAY, TRUE, 7, 4) == SUNDAY);        // 4 July
    assert(dayOfWeek(SUNDAY, TRUE, 7, 5) == MONDAY);        // 5 July
    assert(dayOfWeek(SUNDAY, TRUE, 7, 6) == TUESDAY);       // 6 July
    assert(dayOfWeek(SUNDAY, TRUE, 7, 7) == WEDNESDAY);     // 7 July
    assert(dayOfWeek(SUNDAY, TRUE, 7, 8) == THURSDAY);      // 8 July
    assert(dayOfWeek(SUNDAY, TRUE, 7, 9) == FRIDAY);        // 9 July
    assert(dayOfWeek(SUNDAY, TRUE, 7, 10) == SATURDAY);     // 10 July
    assert(dayOfWeek(SUNDAY, TRUE, 7, 11) == SUNDAY);       // 11 July
    assert(dayOfWeek(SUNDAY, TRUE, 7, 12) == MONDAY);       // 12 July
    assert(dayOfWeek(SUNDAY, TRUE, 7, 13) == TUESDAY);      // 13 July
    assert(dayOfWeek(SUNDAY, TRUE, 7, 14) == WEDNESDAY);    // 14 July
    assert(dayOfWeek(SUNDAY, TRUE, 7, 15) == THURSDAY);     // 15 July
    assert(dayOfWeek(SUNDAY, TRUE, 7, 16) == FRIDAY);       // 16 July
    assert(dayOfWeek(SUNDAY, TRUE, 7, 17) == SATURDAY);     // 17 July
    assert(dayOfWeek(SUNDAY, TRUE, 7, 18) == SUNDAY);       // 18 July
    assert(dayOfWeek(SUNDAY, TRUE, 7, 19) == MONDAY);       // 19 July
    assert(dayOfWeek(SUNDAY, TRUE, 7, 20) == TUESDAY);      // 20 July
    assert(dayOfWeek(SUNDAY, TRUE, 7, 21) == WEDNESDAY);    // 21 July
    assert(dayOfWeek(SUNDAY, TRUE, 7, 22) == THURSDAY);     // 22 July
    assert(dayOfWeek(SUNDAY, TRUE, 7, 23) == FRIDAY);       // 23 July
    assert(dayOfWeek(SUNDAY, TRUE, 7, 24) == SATURDAY);     // 24 July
    assert(dayOfWeek(SUNDAY, TRUE, 7, 25) == SUNDAY);       // 25 July
    assert(dayOfWeek(SUNDAY, TRUE, 7, 26) == MONDAY);       // 26 July
    assert(dayOfWeek(SUNDAY, TRUE, 7, 27) == TUESDAY);      // 27 July
    assert(dayOfWeek(SUNDAY, TRUE, 7, 28) == WEDNESDAY);    // 28 July
    assert(dayOfWeek(SUNDAY, TRUE, 7, 29) == THURSDAY);     // 29 July
    assert(dayOfWeek(SUNDAY, TRUE, 7, 30) == FRIDAY);       // 30 July
    assert(dayOfWeek(SUNDAY, TRUE, 7, 31) == SATURDAY);     // 31 July
    assert(dayOfWeek(SUNDAY, TRUE, 8, 1) == SUNDAY);        // 1 August
    assert(dayOfWeek(SUNDAY, TRUE, 8, 2) == MONDAY);        // 2 August
    assert(dayOfWeek(SUNDAY, TRUE, 8, 3) == TUESDAY);       // 3 August
    assert(dayOfWeek(SUNDAY, TRUE, 8, 4) == WEDNESDAY);     // 4 August
    assert(dayOfWeek(SUNDAY, TRUE, 8, 5) == THURSDAY);      // 5 August
    assert(dayOfWeek(SUNDAY, TRUE, 8, 6) == FRIDAY);        // 6 August
    assert(dayOfWeek(SUNDAY, TRUE, 8, 7) == SATURDAY);      // 7 August
    assert(dayOfWeek(SUNDAY, TRUE, 8, 8) == SUNDAY);        // 8 August
    assert(dayOfWeek(SUNDAY, TRUE, 8, 9) == MONDAY);        // 9 August
    assert(dayOfWeek(SUNDAY, TRUE, 8, 10) == TUESDAY);      // 10 August
    assert(dayOfWeek(SUNDAY, TRUE, 8, 11) == WEDNESDAY);    // 11 August
    assert(dayOfWeek(SUNDAY, TRUE, 8, 12) == THURSDAY);     // 12 August
    assert(dayOfWeek(SUNDAY, TRUE, 8, 13) == FRIDAY);       // 13 August
    assert(dayOfWeek(SUNDAY, TRUE, 8, 14) == SATURDAY);     // 14 August
    assert(dayOfWeek(SUNDAY, TRUE, 8, 15) == SUNDAY);       // 15 August
    assert(dayOfWeek(SUNDAY, TRUE, 8, 16) == MONDAY);       // 16 August
    assert(dayOfWeek(SUNDAY, TRUE, 8, 17) == TUESDAY);      // 17 August
    assert(dayOfWeek(SUNDAY, TRUE, 8, 18) == WEDNESDAY);    // 18 August
    assert(dayOfWeek(SUNDAY, TRUE, 8, 19) == THURSDAY);     // 19 August
    assert(dayOfWeek(SUNDAY, TRUE, 8, 20) == FRIDAY);       // 20 August
    assert(dayOfWeek(SUNDAY, TRUE, 8, 21) == SATURDAY);     // 21 August
    assert(dayOfWeek(SUNDAY, TRUE, 8, 22) == SUNDAY);       // 22 August
    assert(dayOfWeek(SUNDAY, TRUE, 8, 23) == MONDAY);       // 23 August
    assert(dayOfWeek(SUNDAY, TRUE, 8, 24) == TUESDAY);      // 24 August
    assert(dayOfWeek(SUNDAY, TRUE, 8, 25) == WEDNESDAY);    // 25 August
    assert(dayOfWeek(SUNDAY, TRUE, 8, 26) == THURSDAY);     // 26 August
    assert(dayOfWeek(SUNDAY, TRUE, 8, 27) == FRIDAY);       // 27 August
    assert(dayOfWeek(SUNDAY, TRUE, 8, 28) == SATURDAY);     // 28 August
    assert(dayOfWeek(SUNDAY, TRUE, 8, 29) == SUNDAY);       // 29 August
    assert(dayOfWeek(SUNDAY, TRUE, 8, 30) == MONDAY);       // 30 August
    assert(dayOfWeek(SUNDAY, TRUE, 8, 31) == TUESDAY);      // 31 August
    assert(dayOfWeek(SUNDAY, TRUE, 9, 1) == WEDNESDAY);     // 1 September
    assert(dayOfWeek(SUNDAY, TRUE, 9, 2) == THURSDAY);      // 2 September
    assert(dayOfWeek(SUNDAY, TRUE, 9, 3) == FRIDAY);        // 3 September
    assert(dayOfWeek(SUNDAY, TRUE, 9, 4) == SATURDAY);      // 4 September
    assert(dayOfWeek(SUNDAY, TRUE, 9, 5) == SUNDAY);        // 5 September
    assert(dayOfWeek(SUNDAY, TRUE, 9, 6) == MONDAY);        // 6 September
    assert(dayOfWeek(SUNDAY, TRUE, 9, 7) == TUESDAY);       // 7 September
    assert(dayOfWeek(SUNDAY, TRUE, 9, 8) == WEDNESDAY);     // 8 September
    assert(dayOfWeek(SUNDAY, TRUE, 9, 9) == THURSDAY);      // 9 September
    assert(dayOfWeek(SUNDAY, TRUE, 9, 10) == FRIDAY);       // 10 September
    assert(dayOfWeek(SUNDAY, TRUE, 9, 11) == SATURDAY);     // 11 September
    assert(dayOfWeek(SUNDAY, TRUE, 9, 12) == SUNDAY);       // 12 September
    assert(dayOfWeek(SUNDAY, TRUE, 9, 13) == MONDAY);       // 13 September
    assert(dayOfWeek(SUNDAY, TRUE, 9, 14) == TUESDAY);      // 14 September
    assert(dayOfWeek(SUNDAY, TRUE, 9, 15) == WEDNESDAY);    // 15 September
    assert(dayOfWeek(SUNDAY, TRUE, 9, 16) == THURSDAY);     // 16 September
    assert(dayOfWeek(SUNDAY, TRUE, 9, 17) == FRIDAY);       // 17 September
    assert(dayOfWeek(SUNDAY, TRUE, 9, 18) == SATURDAY);     // 18 September
    assert(dayOfWeek(SUNDAY, TRUE, 9, 19) == SUNDAY);       // 19 September
    assert(dayOfWeek(SUNDAY, TRUE, 9, 20) == MONDAY);       // 20 September
    assert(dayOfWeek(SUNDAY, TRUE, 9, 21) == TUESDAY);      // 21 September
    assert(dayOfWeek(SUNDAY, TRUE, 9, 22) == WEDNESDAY);    // 22 September
    assert(dayOfWeek(SUNDAY, TRUE, 9, 23) == THURSDAY);     // 23 September
    assert(dayOfWeek(SUNDAY, TRUE, 9, 24) == FRIDAY);       // 24 September
    assert(dayOfWeek(SUNDAY, TRUE, 9, 25) == SATURDAY);     // 25 September
    assert(dayOfWeek(SUNDAY, TRUE, 9, 26) == SUNDAY);       // 26 September
    assert(dayOfWeek(SUNDAY, TRUE, 9, 27) == MONDAY);       // 27 September
    assert(dayOfWeek(SUNDAY, TRUE, 9, 28) == TUESDAY);      // 28 September
    assert(dayOfWeek(SUNDAY, TRUE, 9, 29) == WEDNESDAY);    // 29 September
    assert(dayOfWeek(SUNDAY, TRUE, 9, 30) == THURSDAY);     // 30 September
    assert(dayOfWeek(SUNDAY, TRUE, 10, 1) == FRIDAY);       // 1 October
    assert(dayOfWeek(SUNDAY, TRUE, 10, 2) == SATURDAY);     // 2 October
    assert(dayOfWeek(SUNDAY, TRUE, 10, 3) == SUNDAY);       // 3 October
    assert(dayOfWeek(SUNDAY, TRUE, 10, 4) == MONDAY);       // 4 October
    assert(dayOfWeek(SUNDAY, TRUE, 10, 5) == TUESDAY);      // 5 October
    assert(dayOfWeek(SUNDAY, TRUE, 10, 6) == WEDNESDAY);    // 6 October
    assert(dayOfWeek(SUNDAY, TRUE, 10, 7) == THURSDAY);     // 7 October
    assert(dayOfWeek(SUNDAY, TRUE, 10, 8) == FRIDAY);       // 8 October
    assert(dayOfWeek(SUNDAY, TRUE, 10, 9) == SATURDAY);     // 9 October
    assert(dayOfWeek(SUNDAY, TRUE, 10, 10) == SUNDAY);      // 10 October
    assert(dayOfWeek(SUNDAY, TRUE, 10, 11) == MONDAY);      // 11 October
    assert(dayOfWeek(SUNDAY, TRUE, 10, 12) == TUESDAY);     // 12 October
    assert(dayOfWeek(SUNDAY, TRUE, 10, 13) == WEDNESDAY);   // 13 October
    assert(dayOfWeek(SUNDAY, TRUE, 10, 14) == THURSDAY);    // 14 October
    assert(dayOfWeek(SUNDAY, TRUE, 10, 15) == FRIDAY);      // 15 October
    assert(dayOfWeek(SUNDAY, TRUE, 10, 16) == SATURDAY);    // 16 October
    assert(dayOfWeek(SUNDAY, TRUE, 10, 17) == SUNDAY);      // 17 October
    assert(dayOfWeek(SUNDAY, TRUE, 10, 18) == MONDAY);      // 18 October
    assert(dayOfWeek(SUNDAY, TRUE, 10, 19) == TUESDAY);     // 19 October
    assert(dayOfWeek(SUNDAY, TRUE, 10, 20) == WEDNESDAY);   // 20 October
    assert(dayOfWeek(SUNDAY, TRUE, 10, 21) == THURSDAY);    // 21 October
    assert(dayOfWeek(SUNDAY, TRUE, 10, 22) == FRIDAY);      // 22 October
    assert(dayOfWeek(SUNDAY, TRUE, 10, 23) == SATURDAY);    // 23 October
    assert(dayOfWeek(SUNDAY, TRUE, 10, 24) == SUNDAY);      // 24 October
    assert(dayOfWeek(SUNDAY, TRUE, 10, 25) == MONDAY);      // 25 October
    assert(dayOfWeek(SUNDAY, TRUE, 10, 26) == TUESDAY);     // 26 October
    assert(dayOfWeek(SUNDAY, TRUE, 10, 27) == WEDNESDAY);   // 27 October
    assert(dayOfWeek(SUNDAY, TRUE, 10, 28) == THURSDAY);    // 28 October
    assert(dayOfWeek(SUNDAY, TRUE, 10, 29) == FRIDAY);      // 29 October
    assert(dayOfWeek(SUNDAY, TRUE, 10, 30) == SATURDAY);    // 30 October
    assert(dayOfWeek(SUNDAY, TRUE, 10, 31) == SUNDAY);      // 31 October
    assert(dayOfWeek(SUNDAY, TRUE, 11, 1) == MONDAY);       // 1 November
    assert(dayOfWeek(SUNDAY, TRUE, 11, 2) == TUESDAY);      // 2 November
    assert(dayOfWeek(SUNDAY, TRUE, 11, 3) == WEDNESDAY);    // 3 November
    assert(dayOfWeek(SUNDAY, TRUE, 11, 4) == THURSDAY);     // 4 November
    assert(dayOfWeek(SUNDAY, TRUE, 11, 5) == FRIDAY);       // 5 November
    assert(dayOfWeek(SUNDAY, TRUE, 11, 6) == SATURDAY);     // 6 November
    assert(dayOfWeek(SUNDAY, TRUE, 11, 7) == SUNDAY);       // 7 November
    assert(dayOfWeek(SUNDAY, TRUE, 11, 8) == MONDAY);       // 8 November
    assert(dayOfWeek(SUNDAY, TRUE, 11, 9) == TUESDAY);      // 9 November
    assert(dayOfWeek(SUNDAY, TRUE, 11, 10) == WEDNESDAY);   // 10 November
    assert(dayOfWeek(SUNDAY, TRUE, 11, 11) == THURSDAY);    // 11 November
    assert(dayOfWeek(SUNDAY, TRUE, 11, 12) == FRIDAY);      // 12 November
    assert(dayOfWeek(SUNDAY, TRUE, 11, 13) == SATURDAY);    // 13 November
    assert(dayOfWeek(SUNDAY, TRUE, 11, 14) == SUNDAY);      // 14 November
    assert(dayOfWeek(SUNDAY, TRUE, 11, 15) == MONDAY);      // 15 November
    assert(dayOfWeek(SUNDAY, TRUE, 11, 16) == TUESDAY);     // 16 November
    assert(dayOfWeek(SUNDAY, TRUE, 11, 17) == WEDNESDAY);   // 17 November
    
 
    printf ("All tests passed - You are Awesome!\n");
}