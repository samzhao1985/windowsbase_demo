//
//  windowsbase_demoAppDelegate.h
//  windowsbase_demo
//
//  Created by Sam on 6/17/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface windowsbase_demoAppDelegate : NSObject <UIApplicationDelegate> {
    IBOutlet UITextField *text;
    IBOutlet UILabel *lable;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
- (IBAction) clickButton: (UIButton *)sender;
@end
