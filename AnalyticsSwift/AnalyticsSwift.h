//
//  AnalyticsSwift.h
//  AnalyticsSwift
//
//  Created by Prateek Srivastava on 2015-06-10.
//  Copyright (c) 2015 Segment. All rights reserved.
//

#import <TargetConditionals.h>

#if TARGET_OS_IPHONE || TARGET_OS_TV
    #import <UIKit/UIKit.h>
#else
    #import <AppKit/AppKit.h>
#endif

//! Project version number for AnalyticsSwift.
FOUNDATION_EXPORT double AnalyticsSwiftVersionNumber;

//! Project version string for AnalyticsSwift.
FOUNDATION_EXPORT const unsigned char AnalyticsSwiftVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <AnalyticsSwift/PublicHeader.h>


