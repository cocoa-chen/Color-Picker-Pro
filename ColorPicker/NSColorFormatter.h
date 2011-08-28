//
//  NSColorFormatter.h
//  ColorPicker
//
//  Created by Oscar Del Ben on 8/25/11.
//  Copyright 2011 DibiStore. All rights reserved.
//

#import <AppKit/AppKit.h>

@interface NSColor (Formatter)

/* Returns rgb(255, 255, 255) */
- (NSString*)colorToRGBRepresentation;

/* returns #ff0000 */
- (NSString*)colorToHEXRepresentation;


- (NSString*)colorToHueRepresentation;

/* returns 30% */

- (NSString*)colorToSaturationRepresentation;

/* returns 50% */
- (NSString*)colorToBrightnessRepresentation;

@end
