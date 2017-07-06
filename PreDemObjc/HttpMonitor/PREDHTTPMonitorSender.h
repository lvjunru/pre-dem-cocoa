//
//  PREDHTTPMonitorSender.h
//  PreDemObjc
//
//  Created by WangSiyu on 28/03/2017.
//  Copyright © 2017 pre-engineering. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PREDHTTPMonitorModel.h"

@interface PREDHTTPMonitorSender : NSObject

@property (nonatomic, assign, getter=isEnabled) BOOL enable;

- (void)addModel:(PREDHTTPMonitorModel *)model;

@end
