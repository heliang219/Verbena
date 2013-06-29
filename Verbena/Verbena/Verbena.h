//
//  Verbena.h
//  Verbena
//
//  Created by Reda Lemeden on 29/6/13.
//  Copyright (c) 2013 kaishin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface Verbena : NSObject

+ (UIImage *)renderImageWithSize:(CGSize)size andDrawingBlock:(void (^)(void))block;

@end
