-- Keep a log of any SQL queries you execute as you solve the mystery.

/*  Theft of duck took place at '10:15am'
    3 witnesses interviewed who were present at the time
    All of them mention the 'Bakery'
    littering at 16:36 / probably irrelevant
*/

SELECT street, day, month, description
FROM crime_scene_reports
WHERE (
    street = 'Humphrey Street' AND
    day = 28 AND
    month = 7
);

/*  According to Ruth: thief left from bakery parking lot by car after 10 min of theft (check bakery security footage from '10:15 - 10:25 am')
    According to Eugene: recognized thief -> thief withdrawed money from 'Leggett Street ATM'
    According to Raymond: Thief talked to someone for 'LESS THAN 1 MINUTE'. Thief 'PLANNED TO LEAVE BY EARLIEST FLIGHT TOMORROW -> ON JULY 29'
                          person on the phone possibly bought the flight ticket
*/

SELECT transcript, name, day, month
FROM interviews
WHERE (
    day = 28 AND
    month = 7
);


SELECT name, passport_number, license_plate
FROM people
WHERE id IN (SELECT person_id FROM bank_accounts);
