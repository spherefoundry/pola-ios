//
// Created by Paweł on 19/10/15.
// Copyright (c) 2015 PJMS. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BPReport;


extern const int REPORT_STATE_ADD;
extern const int REPORT_STATE_IMAGE_ADD;
extern const int REPORT_STATE_FINSIHED;


@interface BPReportResult : NSObject

@property (nonatomic) int state;
@property (nonatomic, strong) BPReport *report;
@property (nonatomic) int imageDownloadedIndex;

- (instancetype)initWithState:(int)state report:(BPReport *)report imageDownloadedIndex:(int)imageDownloadedIndex;

+ (instancetype)resultWithState:(int)state report:(BPReport *)report imageDownloadedIndex:(int)imageDownloadedIndex;


@end