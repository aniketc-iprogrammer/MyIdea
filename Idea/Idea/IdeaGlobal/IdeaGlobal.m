//
//  IdeaGlobal.m
//  Idea
//
//  Created by Nilesh Kotkar on 11/2/15.
//  Copyright (c) 2015 iProgrammer Pvt Ltd. All rights reserved.
//

#import "IdeaGlobal.h"

@implementation IdeaGlobal

+(UIColor *)navigationBarColor
{
    return [UIColor colorWithRed:209.0f/255 green:32/255 blue:38/255 alpha:1.0];
}

+(AppDelegate *)appdelegate;
{
    return (AppDelegate *)[UIApplication sharedApplication].delegate;
}

@end
