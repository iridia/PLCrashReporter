/*
 * Author: Landon Fuller <landonf@plausiblelabs.com>
 *
 * Copyright (c) 2008 Plausible Labs Cooperative, Inc.
 * All rights reserved.
 */

#import <Foundation/Foundation.h>

@interface PLCrashReporter : NSObject {
@private
    /** YES if the crash reporter has been enabled */
    BOOL _enabled;
}

+ (PLCrashReporter *) sharedReporter;

- (BOOL) enableCrashReporter;
- (BOOL) enableCrashReporterAndReturnError: (NSError **) outError;

@end