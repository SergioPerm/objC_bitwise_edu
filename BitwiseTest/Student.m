//
//  Student.m
//  BitwiseTest
//
//  Created by Admin on 14.06.2018.
//  Copyright © 2018 SergioLechini. All rights reserved.
//

#import "Student.h"

@implementation Student

- (NSString*) answerByType:(StudentSubjectType) type {
    return self.subjectType & type ? @"yes" : @"no";
}

- (NSString*) description {
    
    return [NSString stringWithFormat:@"Student studies:\n"
                                        "Biology = %@\n"
                                        "Math = %@\n"
                                        "Development = %@\n"
                                        "Engineering = %@\n"
                                        "Art = %@\n"
                                        "Psyhology = %@\n"
                                        "Anatomy = %@",
                                        [self answerByType:StudentSubjectTypeBiology],
                                        [self answerByType:StudentSubjectTypeMath],
                                        [self answerByType:StudentSubjectTypeDevelopment],
                                        [self answerByType:StudentSubjectTypeEngineering],
                                        [self answerByType:StudentSubjectTypeArt],
                                        [self answerByType:StudentSubjectTypePsyhology],
                                        [self answerByType:StudentSubjectTypeAnatomy]];
    
}

@end
