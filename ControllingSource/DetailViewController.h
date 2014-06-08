//
//  DetailViewController.h
//  ControllingSource
//
//  Created by Randy Wills on 6/8/14.
//  Copyright (c) 2014 Randy Wills. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
