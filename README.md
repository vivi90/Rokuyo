# rokuyo
A class, that dermines the so called 'Rokuyou' from a gregorian calendar date with the help of the lunar calendar.
Contains a sample.

## License
MIT

## KYRokuyo class usage
      Required files:
      KYRokuyo.h
      KYRokuyo.m
      kyureki.plist
      
      // Method
      // Gets the lunar calendar table from the plist
      - (id)init
      // Determines the lunar calendar by date and returns the 'Rokuyou'
      - (NSString *)sinrekiToRokuyoWithYear:(int)inYear month:(int)inMonth day:(int)inDay
    
      // Properties
      kyuMonth;	// Month of lunar calendar
      kyuDay;	// Day of lunar calendar
 
      // Content of plist
    [
      [
        {"#year" : "2007"},
        {"01" : "1113191201"},
        {"02" : "1214180101"},
        ...
        {"12" : "1022101101"}
      ],
      ...
      [
        {"#year" : "2022"},
        {"01" : "1129031201"},
        ...
        {"12" : "1108231201"}
      ],
     ]
    
    Each month with a value of no more than 10 digits
      MMDDccmmdd: The corresponding lunar calendar date to the beginning day of the month at the gregorian celendar
      mmddCCmmdd: The days, that changes in one month to the next month by the lunar calendar (When don't changes to the next month, then '99' is written.)
      mmddccMMDD: CC days of the lunar calendar date (When don't changes to the next month, then '0000' is written.)
    Example:
    The 1st of December 2022 is the 8th of November at the lunar calendar.
    The 23rd of December changes to the 1st of December at the lunar calendar.
      ---> "1108231201"  
    
    In the case, that the moon changes two times in a month, 16 digits will be assumed
      MMDDccmmddccmmdd: The corresponding lunar calendar date to the beginning day of the month at the gregorian celendar
      mmddCCmmddccmmdd: The days, that changes in one month to the next month by the lunar calendar
      mmddccMMDDccmmdd: CC days of the lunar calendar date
      mmddccmmddCCmmdd: The days, that changes in one month to the next month by the lunar calendar (2 times)
      mmddccMMddccMMDD: CC days of the lunar calendar date
    Example:
    The 1st of December 2005 is the 30th of October at the lunar calendar.
    The 2nd of December changes to the 1st of November at the lunar calendar.
    The 31st of December changes to the 1st of December at the lunar calendar.
      ---> "1030021101311201"

## Credits
Created by kyasu (Keietsu Yasuhara <kyasu@mac.com>).
See: https://github.com/kyasusoft/Rokuyo
Translated from japanese to english by Vivien Richter <vivien-richter@outlook.de>.
See: https://github.com/vivi90/Rokuyo
