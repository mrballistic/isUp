//
//  MainViewController.h
//  isUp
//
//  Created by Todd Greco on 1/2/13.
//  Copyright (c) 2013 mrBallistic. All rights reserved.
//

#import "FlipsideViewController.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

@end
