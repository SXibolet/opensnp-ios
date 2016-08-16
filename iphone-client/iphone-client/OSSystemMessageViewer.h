//
//  OSSystemMessageViewer.h
//  openSNP
//
//  Created by gdyer on 09/08/2016.
//  Copyright © 2016 openSNP. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>

@interface OSSystemMessageViewer : UIViewController <MFMailComposeViewControllerDelegate>
@property (weak, nonatomic) IBOutlet UITextView *message;
@property (strong) NSString *messageText;
@property (assign) BOOL isError;

@end
