//
//  KYRokuyo.h
//  KYRokuyo
//
//  Created by kyasu on 08/02/14.
//
//  Copyright (c) 2008 Keietsu Yasuhara
//  License: MIT
//

#import <UIKit/UIKit.h>

@interface KYRokuyo : NSObject {
}

@property (assign, nonatomic) int kyuMonth;	// With 'inMonth' corresponding lunar calendar month
@property (assign, nonatomic) int kyuDay;	// With 'inDay' corresponding lunar calendar day

- (id)init;
- (NSString *)sinrekiToRokuyoWithYear:(int)inYear month:(int)inMonth day:(int)inDay;

@end
