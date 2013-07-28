//
//  P2PPlayer4iOS.h
//  P2PPlayer4iOS
//
//  Created by Wayne W on 13-7-28.
//
//

#import <UIKit/UIKit.h>

@interface P2PPlayer4iOS : UIView

+ (BOOL)supportURL:(NSString*)url;

- (BOOL)playP2PUrl:(NSString*)p2pURL;

@end
