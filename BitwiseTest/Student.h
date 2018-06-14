//
//  Student.h
//  BitwiseTest
//
//  Created by Admin on 14.06.2018.
//  Copyright © 2018 SergioLechini. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    StudentSubjectTypeBiology       = 1 << 0,
    StudentSubjectTypeMath          = 1 << 1,
    StudentSubjectTypeDevelopment   = 1 << 2,
    StudentSubjectTypeEngineering   = 1 << 3,
    StudentSubjectTypeArt           = 1 << 4,
    StudentSubjectTypePsyhology     = 1 << 5,
    StudentSubjectTypeAnatomy       = 1 << 6
} StudentSubjectType;

@interface Student : NSObject

@property (assign, nonatomic) StudentSubjectType subjectType;

//@property (assign, nonatomic) BOOL studiesBiology;
//@property (assign, nonatomic) BOOL studiesMath;
//@property (assign, nonatomic) BOOL studiesDevelopment;
//@property (assign, nonatomic) BOOL studiesEngineering;
//@property (assign, nonatomic) BOOL studiesArt;
//@property (assign, nonatomic) BOOL studiesPsyhology;
//@property (assign, nonatomic) BOOL studiesAnatomy;

@end
