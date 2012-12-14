// ----------------------------------------------------------------------------
// Copyright (c) Microsoft Corporation. All rights reserved.
// ----------------------------------------------------------------------------
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// http://www.apache.org/licenses/LICENSE-2.0
//
// THIS CODE IS PROVIDED *AS IS* BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED,
// INCLUDING WITHOUT LIMITATION ANY IMPLIED WARRANTIES OR CONDITIONS OF TITLE,
// FITNESS FOR A PARTICULAR PURPOSE, MERCHANTABLITY OR NON-INFRINGEMENT.
//

#import <Foundation/Foundation.h>

@interface SeekbarTime : NSObject
{
@private
    NSTimeInterval currentSeekbarPosition;
    NSTimeInterval minSeekbarPosition;
    NSTimeInterval maxSeekbarPosition;
}

@property(nonatomic, assign) NSTimeInterval currentSeekbarPosition;
@property(nonatomic, assign) NSTimeInterval minSeekbarPosition;
@property(nonatomic, assign) NSTimeInterval maxSeekbarPosition;

@end
