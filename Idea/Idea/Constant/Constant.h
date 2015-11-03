//
//  Constant.h
//  Idea
//
//  Created by Nilesh Kotkar on 11/2/15.
//  Copyright (c) 2015 iProgrammer Pvt Ltd. All rights reserved.
//

#ifndef Idea_Constant_h
#define Idea_Constant_h


#define IS_IPAD (UI_USER_INTERFACE_IDIOM() != UIUserInterfaceIdiomPhone)

#define IS_IPHONE (!IS_IPAD)

#define IS_OS_8_OR_LATER ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)

#define IOS_NEWER_OR_EQUAL_TO_7 ( [ [ [ UIDevice currentDevice ] systemVersion ] floatValue ] >= 7.0 )

#endif
