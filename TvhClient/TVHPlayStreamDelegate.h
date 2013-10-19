//
//  TVHPlayStreamDelegate.h
//  TvhClient
//
//  Created by zipleen on 06/03/13.
//  Copyright 2013 Luis Fernandes
//
//  This Source Code Form is subject to the terms of the Mozilla Public
//  License, v. 2.0. If a copy of the MPL was not distributed with this
//  file, You can obtain one at http://mozilla.org/MPL/2.0/.
//

#import <Foundation/Foundation.h>

@protocol TVHPlayStreamDelegate <NSObject>
- (NSString*)streamURL;
- (NSString*)playlistStreamURL;
@end