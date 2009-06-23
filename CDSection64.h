// -*- mode: ObjC -*-

//  This file is part of class-dump, a utility for examining the Objective-C segment of Mach-O files.
//  Copyright (C) 1997-1998, 2000-2001, 2004-2009 Steve Nygard.

#import <Foundation/Foundation.h>
#include <mach-o/loader.h>

@class CDDataCursor, CDMachOFile, CDLCSegment64;

@interface CDSection64 : NSObject
{
    CDLCSegment64 *nonretainedSegment;

    struct section_64 section;

    NSString *segmentName;
    NSString *sectionName;
}

- (id)initWithDataCursor:(CDDataCursor *)cursor segment:(CDLCSegment64 *)aSegment;
- (void)dealloc;

- (CDLCSegment64 *)segment;
- (CDMachOFile *)machOFile;

- (NSString *)segmentName;
- (NSString *)sectionName;

@end
